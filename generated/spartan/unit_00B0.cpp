#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B0[4096] = {
    1, 2, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65,
    0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 249, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004C0000;
    case 2u: goto L_004C0004;
    case 3u: goto L_004C0008;
    case 4u: goto L_004C001C;
    case 5u: goto L_004C003C;
    case 6u: goto L_004C0044;
    case 7u: goto L_004C004C;
    case 8u: goto L_004C0054;
    case 9u: goto L_004C0070;
    case 10u: goto L_004C0080;
    case 11u: goto L_004C00B0;
    case 12u: goto L_004C00D0;
    case 13u: goto L_004C00FC;
    case 14u: goto L_004C0108;
    case 15u: goto L_004C0120;
    case 16u: goto L_004C0160;
    case 17u: goto L_004C0190;
    case 18u: goto L_004C01A8;
    case 19u: goto L_004C01C0;
    case 20u: goto L_004C01D0;
    case 21u: goto L_004C01E8;
    case 22u: goto L_004C0230;
    case 23u: goto L_004C0254;
    case 24u: goto L_004C02C0;
    case 25u: goto L_004C02CC;
    case 26u: goto L_004C02E4;
    case 27u: goto L_004C0300;
    case 28u: goto L_004C0338;
    case 29u: goto L_004C0370;
    case 30u: goto L_004C03A0;
    case 31u: goto L_004C03B8;
    case 32u: goto L_004C03C8;
    case 33u: goto L_004C0410;
    case 34u: goto L_004C0428;
    case 35u: goto L_004C0480;
    case 36u: goto L_004C04B8;
    case 37u: goto L_004C04C4;
    case 38u: goto L_004C04D8;
    case 39u: goto L_004C04E4;
    case 40u: goto L_004C04FC;
    case 41u: goto L_004C0528;
    case 42u: goto L_004C055C;
    case 43u: goto L_004C057C;
    case 44u: goto L_004C058C;
    case 45u: goto L_004C05B0;
    case 46u: goto L_004C05C0;
    case 47u: goto L_004C05F0;
    case 48u: goto L_004C0610;
    case 49u: goto L_004C063C;
    case 50u: goto L_004C0648;
    case 51u: goto L_004C0660;
    case 52u: goto L_004C0668;
    case 53u: goto L_004C0698;
    case 54u: goto L_004C06C0;
    case 55u: goto L_004C06F0;
    case 56u: goto L_004C0708;
    case 57u: goto L_004C0720;
    case 58u: goto L_004C0730;
    case 59u: goto L_004C0748;
    case 60u: goto L_004C0750;
    case 61u: goto L_004C0780;
    case 62u: goto L_004C07B0;
    case 63u: goto L_004C07C0;
    case 64u: goto L_004C07F0;
    case 65u: goto L_004C07FC;
    case 66u: goto L_004C0804;
    case 67u: goto L_004C0818;
    case 68u: goto L_004C0830;
    case 69u: goto L_004C0860;
    case 70u: goto L_004C086C;
    case 71u: goto L_004C0874;
    case 72u: goto L_004C0888;
    case 73u: goto L_004C08A0;
    case 74u: goto L_004C08D0;
    case 75u: goto L_004C08DC;
    case 76u: goto L_004C08E4;
    case 77u: goto L_004C08F8;
    case 78u: goto L_004C0910;
    case 79u: goto L_004C093C;
    case 80u: goto L_004C0948;
    case 81u: goto L_004C0950;
    case 82u: goto L_004C0964;
    case 83u: goto L_004C0980;
    case 84u: goto L_004C09C8;
    case 85u: goto L_004C09D0;
    case 86u: goto L_004C09E8;
    case 87u: goto L_004C09F4;
    case 88u: goto L_004C0A08;
    case 89u: goto L_004C0A44;
    case 90u: goto L_004C0A74;
    case 91u: goto L_004C0A88;
    case 92u: goto L_004C0AC8;
    case 93u: goto L_004C0AF8;
    case 94u: goto L_004C0B10;
    case 95u: goto L_004C0B54;
    case 96u: goto L_004C0B7C;
    case 97u: goto L_004C0BA4;
    case 98u: goto L_004C0BB8;
    case 99u: goto L_004C0BEC;
    case 100u: goto L_004C0C10;
    case 101u: goto L_004C0C18;
    case 102u: goto L_004C0C30;
    case 103u: goto L_004C0C3C;
    case 104u: goto L_004C0C50;
    case 105u: goto L_004C0C8C;
    case 106u: goto L_004C0CBC;
    case 107u: goto L_004C0CD0;
    case 108u: goto L_004C0D0C;
    case 109u: goto L_004C0D34;
    case 110u: goto L_004C0D48;
    case 111u: goto L_004C0D58;
    case 112u: goto L_004C0D64;
    case 113u: goto L_004C0D78;
    case 114u: goto L_004C0D8C;
    case 115u: goto L_004C0DA8;
    case 116u: goto L_004C0DE0;
    case 117u: goto L_004C0DFC;
    case 118u: goto L_004C0E0C;
    case 119u: goto L_004C0E18;
    case 120u: goto L_004C0E20;
    case 121u: goto L_004C0E38;
    case 122u: goto L_004C0E40;
    case 123u: goto L_004C0E58;
    case 124u: goto L_004C0E68;
    case 125u: goto L_004C0E74;
    case 126u: goto L_004C0E7C;
    case 127u: goto L_004C0E90;
    case 128u: goto L_004C0E9C;
    case 129u: goto L_004C0EB4;
    case 130u: goto L_004C0EC4;
    case 131u: goto L_004C0ED0;
    case 132u: goto L_004C0EDC;
    case 133u: goto L_004C0EF0;
    case 134u: goto L_004C0F10;
    case 135u: goto L_004C0F40;
    case 136u: goto L_004C0F70;
    case 137u: goto L_004C0FFC;
    case 138u: goto L_004C1024;
    case 139u: goto L_004C103C;
    case 140u: goto L_004C1090;
    case 141u: goto L_004C10BC;
    case 142u: goto L_004C10CC;
    case 143u: goto L_004C10F0;
    case 144u: goto L_004C1104;
    case 145u: goto L_004C1120;
    case 146u: goto L_004C1130;
    case 147u: goto L_004C1140;
    case 148u: goto L_004C1158;
    case 149u: goto L_004C1164;
    case 150u: goto L_004C11CC;
    case 151u: goto L_004C11EC;
    case 152u: goto L_004C1250;
    case 153u: goto L_004C12C0;
    case 154u: goto L_004C12F4;
    case 155u: goto L_004C130C;
    case 156u: goto L_004C1338;
    case 157u: goto L_004C1340;
    case 158u: goto L_004C135C;
    case 159u: goto L_004C1380;
    case 160u: goto L_004C13E0;
    case 161u: goto L_004C1458;
    case 162u: goto L_004C16F0;
    case 163u: goto L_004C1720;
    case 164u: goto L_004C1870;
    case 165u: goto L_004C1878;
    case 166u: goto L_004C18A0;
    case 167u: goto L_004C19A0;
    case 168u: goto L_004C1A98;
    case 169u: goto L_004C1C88;
    case 170u: goto L_004C1DB0;
    case 171u: goto L_004C1E0C;
    case 172u: goto L_004C1E3C;
    case 173u: goto L_004C1EB0;
    case 174u: goto L_004C1EBC;
    case 175u: goto L_004C1F00;
    case 176u: goto L_004C1F5C;
    case 177u: goto L_004C1F64;
    case 178u: goto L_004C1F80;
    case 179u: goto L_004C1FF0;
    case 180u: goto L_004C2020;
    case 181u: goto L_004C20EC;
    case 182u: goto L_004C211C;
    case 183u: goto L_004C21C0;
    case 184u: goto L_004C21D8;
    case 185u: goto L_004C21EC;
    case 186u: goto L_004C221C;
    case 187u: goto L_004C22C0;
    case 188u: goto L_004C22DC;
    case 189u: goto L_004C22F0;
    case 190u: goto L_004C2320;
    case 191u: goto L_004C23C4;
    case 192u: goto L_004C23E0;
    case 193u: goto L_004C23F8;
    case 194u: goto L_004C2428;
    case 195u: goto L_004C24CC;
    case 196u: goto L_004C24E8;
    case 197u: goto L_004C2500;
    case 198u: goto L_004C2530;
    case 199u: goto L_004C25D4;
    case 200u: goto L_004C25F0;
    case 201u: goto L_004C2630;
    case 202u: goto L_004C2670;
    case 203u: goto L_004C268C;
    case 204u: goto L_004C26B4;
    case 205u: goto L_004C26C4;
    case 206u: goto L_004C26EC;
    case 207u: goto L_004C2730;
    case 208u: goto L_004C2774;
    case 209u: goto L_004C2798;
    case 210u: goto L_004C2820;
    case 211u: goto L_004C2848;
    case 212u: goto L_004C2900;
    case 213u: goto L_004C2920;
    case 214u: goto L_004C29A0;
    case 215u: goto L_004C29B8;
    case 216u: goto L_004C29C8;
    case 217u: goto L_004C2A08;
    case 218u: goto L_004C2A70;
    case 219u: goto L_004C2AB0;
    case 220u: goto L_004C2AE0;
    case 221u: goto L_004C2AF8;
    case 222u: goto L_004C2B10;
    case 223u: goto L_004C2B24;
    case 224u: goto L_004C2B3C;
    case 225u: goto L_004C2B58;
    case 226u: goto L_004C2B68;
    case 227u: goto L_004C2B80;
    case 228u: goto L_004C2BC0;
    case 229u: goto L_004C2C04;
    case 230u: goto L_004C2C1C;
    case 231u: goto L_004C2C40;
    case 232u: goto L_004C2C70;
    case 233u: goto L_004C2C90;
    case 234u: goto L_004C2CE4;
    case 235u: goto L_004C2D04;
    case 236u: goto L_004C2D84;
    case 237u: goto L_004C2DAC;
    case 238u: goto L_004C2DB8;
    case 239u: goto L_004C2DCC;
    case 240u: goto L_004C2DD8;
    case 241u: goto L_004C2DE4;
    case 242u: goto L_004C2E84;
    case 243u: goto L_004C2F68;
    case 244u: goto L_004C2F94;
    case 245u: goto L_004C2FD8;
    case 246u: goto L_004C2FE4;
    case 247u: goto L_004C2FF0;
    case 248u: goto L_004C3018;
    case 249u: goto L_004C3020;
    case 250u: goto L_004C3024;
    case 251u: goto L_004C3038;
    case 252u: goto L_004C3044;
    case 253u: goto L_004C3058;
    case 254u: goto L_004C308C;
    case 255u: goto L_004C30B8;
    case 256u: goto L_004C30CC;
    case 257u: goto L_004C30E0;
    case 258u: goto L_004C30EC;
    case 259u: goto L_004C3198;
    case 260u: goto L_004C31B8;
    case 261u: goto L_004C31C8;
    case 262u: goto L_004C3210;
    case 263u: goto L_004C3240;
    case 264u: goto L_004C3270;
    case 265u: goto L_004C3280;
    case 266u: goto L_004C32A8;
    case 267u: goto L_004C3300;
    case 268u: goto L_004C3320;
    case 269u: goto L_004C334C;
    case 270u: goto L_004C33B0;
    case 271u: goto L_004C33F8;
    case 272u: goto L_004C3404;
    case 273u: goto L_004C3420;
    case 274u: goto L_004C342C;
    case 275u: goto L_004C3448;
    case 276u: goto L_004C3454;
    case 277u: goto L_004C346C;
    case 278u: goto L_004C34A8;
    case 279u: goto L_004C34C8;
    case 280u: goto L_004C34D8;
    case 281u: goto L_004C34EC;
    case 282u: goto L_004C350C;
    case 283u: goto L_004C3524;
    case 284u: goto L_004C3540;
    case 285u: goto L_004C3550;
    case 286u: goto L_004C35BC;
    case 287u: goto L_004C35D0;
    case 288u: goto L_004C3610;
    case 289u: goto L_004C3620;
    case 290u: goto L_004C364C;
    case 291u: goto L_004C3680;
    case 292u: goto L_004C36B8;
    case 293u: goto L_004C36D0;
    case 294u: goto L_004C36F0;
    case 295u: goto L_004C3728;
    case 296u: goto L_004C3734;
    case 297u: goto L_004C374C;
    case 298u: goto L_004C3758;
    case 299u: goto L_004C37D0;
    case 300u: goto L_004C381C;
    case 301u: goto L_004C3828;
    case 302u: goto L_004C383C;
    case 303u: goto L_004C3848;
    case 304u: goto L_004C3860;
    case 305u: goto L_004C3884;
    case 306u: goto L_004C3890;
    case 307u: goto L_004C38B0;
    case 308u: goto L_004C38C0;
    case 309u: goto L_004C38D0;
    case 310u: goto L_004C38E0;
    case 311u: goto L_004C3964;
    case 312u: goto L_004C3984;
    case 313u: goto L_004C3994;
    case 314u: goto L_004C39C0;
    case 315u: goto L_004C39D0;
    case 316u: goto L_004C3A00;
    case 317u: goto L_004C3A20;
    case 318u: goto L_004C3A40;
    case 319u: goto L_004C3A58;
    case 320u: goto L_004C3A70;
    case 321u: goto L_004C3B10;
    case 322u: goto L_004C3B20;
    case 323u: goto L_004C3B50;
    case 324u: goto L_004C3B70;
    case 325u: goto L_004C3BAC;
    case 326u: goto L_004C3BC4;
    case 327u: goto L_004C3BF0;
    case 328u: goto L_004C3CB4;
    case 329u: goto L_004C3D68;
    case 330u: goto L_004C3DEC;
    case 331u: goto L_004C3E80;
    case 332u: goto L_004C3ECC;
    default: bad_entry(c, 0x004C0000u); return;
    }
L_004C0000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004C0058; } }
    goto L_004C0008;
L_004C0004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004C0008:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C001Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C001Cu) [[unlikely]] return; }
L_004C001C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C003Cu); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004C003Cu) [[unlikely]] return; }
L_004C003C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BFF84u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 271u, depth); } }
L_004C0044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C004Cu); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C004Cu) [[unlikely]] return; }
L_004C004C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BFFA4u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 273u, depth); } }
L_004C0054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004C0058:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C0070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004C0080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C00B0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C00B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C00B0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004C00B0u) [[unlikely]] return; }
L_004C00B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C00D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004C0104; } }
L_004C00FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { goto L_004C0140; } }
L_004C0104:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C0108:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0120u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004C0120u) [[unlikely]] return; }
L_004C0120:
    st32((c.r[19].w[0] + 16u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0108u | kUnwind; return; } goto L_004C0108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C00FCu | kUnwind; return; } goto L_004C00FC; } }
L_004C0140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C0160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004C01CC; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_004C0190:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C01AC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C01A8u); set32(c.r[5], c.r[5].w[0] + 128u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C01A8u) [[unlikely]] return; }
L_004C01A8:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_004C01AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C0208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C01C0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C01C0u) [[unlikely]] return; }
L_004C01C0:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004C020C; } }
L_004C01CC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C01D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C01E8u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004C01E8u) [[unlikely]] return; }
L_004C01E8:
    st32((c.r[19].w[0] + 16u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C01D0u | kUnwind; return; } goto L_004C01D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0190u | kUnwind; return; } goto L_004C0190; } }
L_004C0208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004C020C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C0230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004C0288; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004C0254:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004C0278; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_004C028C; } }
L_004C0278:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0254u | kUnwind; return; } goto L_004C0254; } }
L_004C0288:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_004C028C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004C02A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C02EC; } }
L_004C02A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C02C0u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004C02C0u) [[unlikely]] return; }
L_004C02C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C02D4; } }
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_004C02CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004C02EC; } }
L_004C02D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C02E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004C02E4u) [[unlikely]] return; }
L_004C02E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C02CCu | kUnwind; return; } goto L_004C02CC; } }
L_004C02EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C0300:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004C0458; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C0338:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_004C0440; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C03C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0370u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004C0370u) [[unlikely]] return; }
L_004C0370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C03A0u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004C03A0u) [[unlikely]] return; }
L_004C03A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C0430; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C03B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004C03B8u) [[unlikely]] return; }
L_004C03B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C0430; } }
L_004C03C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C03C8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004C03C8u) [[unlikely]] return; }
L_004C03C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[3].d[0] = c.r[3].d[0] | 52430ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C0418; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0410u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 221u, depth + 1u); else { c.pc = 0x003F65B0u; return; } if (c.pc != 0x004C0410u) [[unlikely]] return; }
L_004C0410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_004C0430; } }
L_004C0418:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0428u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 221u, depth + 1u); else { c.pc = 0x003F65B0u; return; } if (c.pc != 0x004C0428u) [[unlikely]] return; }
L_004C0428:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_004C0430:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_004C0440:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0338u | kUnwind; return; } goto L_004C0338; } }
    c.budget -= 1;
L_004C0458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004C0480:
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
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C04BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C04B8u); set32(c.r[5], c.r[5].w[0] + 1472u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C04B8u) [[unlikely]] return; }
L_004C04B8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004C04BC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004C0548; } }
L_004C04C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_004C04DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C04D8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C04D8u) [[unlikely]] return; }
L_004C04D8:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004C04DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004C0584; } }
L_004C04E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004C0594; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004C04FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 11;
L_004C0528:
    set32(c.r[6], c.r[6].w[0] + 20u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C04FCu | kUnwind; return; } goto L_004C04FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004C0598; } }
L_004C0548:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C055Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C055Cu) [[unlikely]] return; }
L_004C055C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1456u);
    set32(c.r[6], c.r[6].w[0] + 1472u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C057Cu); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004C057Cu) [[unlikely]] return; }
L_004C057C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C04C4u | kUnwind; return; } goto L_004C04C4; } }
L_004C0584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C058Cu); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C058Cu) [[unlikely]] return; }
L_004C058C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C04E4u | kUnwind; return; } goto L_004C04E4; } }
L_004C0594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004C0598:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C05B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004C05C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C05F0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C05F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C05F0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004C05F0u) [[unlikely]] return; }
L_004C05F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C0610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004C0644; } }
L_004C063C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { goto L_004C06A0; } }
L_004C0644:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C0648:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0660u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004C0660u) [[unlikely]] return; }
L_004C0660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C0688; } }
L_004C0668:
    st32((c.r[19].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0648u | kUnwind; return; } goto L_004C0648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C063Cu | kUnwind; return; } goto L_004C063C; } }
L_004C0688:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0698u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004C0698u) [[unlikely]] return; }
L_004C0698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0668u | kUnwind; return; } goto L_004C0668; } }
L_004C06A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C06C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004C072C; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_004C06F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C070C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0708u); set32(c.r[5], c.r[5].w[0] + 1472u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C0708u) [[unlikely]] return; }
L_004C0708:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_004C070C:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C0788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0720u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C0720u) [[unlikely]] return; }
L_004C0720:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C0788; } }
L_004C072C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C0730:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0748u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004C0748u) [[unlikely]] return; }
L_004C0748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C0770; } }
L_004C0750:
    st32((c.r[19].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0730u | kUnwind; return; } goto L_004C0730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C06F0u | kUnwind; return; } goto L_004C06F0; } }
L_004C0770:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0780u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004C0780u) [[unlikely]] return; }
L_004C0780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0750u | kUnwind; return; } goto L_004C0750; } }
L_004C0788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C07B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004C07C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C07F0u); set32(c.r[4], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004C07F0u) [[unlikely]] return; }
L_004C07F0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C07FCu); set32(c.r[4], c.r[17].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004C07FCu) [[unlikely]] return; }
L_004C07FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0804u); set32(c.r[4], c.r[17].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004C0804u) [[unlikely]] return; }
L_004C0804:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[5].w[0] - 23049u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0818u); set32(c.r[4], c.r[2].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x004C0818u) [[unlikely]] return; }
L_004C0818:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C0830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 515u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0860u); set32(c.r[4], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004C0860u) [[unlikely]] return; }
L_004C0860:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C086Cu); set32(c.r[4], c.r[17].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004C086Cu) [[unlikely]] return; }
L_004C086C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0874u); set32(c.r[4], c.r[17].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004C0874u) [[unlikely]] return; }
L_004C0874:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[5].w[0] - 23049u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0888u); set32(c.r[4], c.r[2].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x004C0888u) [[unlikely]] return; }
L_004C0888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C08A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 515u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C08D0u); set32(c.r[4], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004C08D0u) [[unlikely]] return; }
L_004C08D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C08DCu); set32(c.r[4], c.r[17].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004C08DCu) [[unlikely]] return; }
L_004C08DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C08E4u); set32(c.r[4], c.r[17].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004C08E4u) [[unlikely]] return; }
L_004C08E4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[5].w[0] - 23049u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C08F8u); set32(c.r[4], c.r[2].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x004C08F8u) [[unlikely]] return; }
L_004C08F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C0910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 520u), c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C093Cu); set32(c.r[4], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004C093Cu) [[unlikely]] return; }
L_004C093C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0948u); set32(c.r[4], c.r[17].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004C0948u) [[unlikely]] return; }
L_004C0948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0950u); set32(c.r[4], c.r[17].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004C0950u) [[unlikely]] return; }
L_004C0950:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[5].w[0] - 23049u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0964u); set32(c.r[4], c.r[2].w[0] + 258u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x004C0964u) [[unlikely]] return; }
L_004C0964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C0980:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 204u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[19].w[0] + 2u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C09C8u); st8((c.r[29].w[0] + 168u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x004C09C8u) [[unlikely]] return; }
L_004C09C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C09D0u); set32(c.r[4], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x004C09D0u) [[unlikely]] return; }
L_004C09D0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C09E8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C09E8u) [[unlikely]] return; }
L_004C09E8:
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C09F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x004C09F4u) [[unlikely]] return; }
L_004C09F4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0A08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0A08u) [[unlikely]] return; }
L_004C0A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C0D6C; } }
    set32(c.r[17], c.r[29].w[0] + 164u);
    set32(c.r[16], c.r[29].w[0] + 152u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C0A7C; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 188u);
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0A44u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0A44u) [[unlikely]] return; }
L_004C0A44:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_004C0A94; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0A74u); set32(c.r[5], c.r[2].w[0] + 188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0A74u) [[unlikely]] return; }
L_004C0A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_004C0A98; } }
L_004C0A7C:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0A88u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0A88u) [[unlikely]] return; }
L_004C0A88:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004C0A94:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004C0A98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[20], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[29].w[0] + 144u);  if (t) { goto L_004C0B00; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[18], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0AC8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0AC8u) [[unlikely]] return; }
L_004C0AC8:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[21].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_004C0B1C; } }
    set32(c.r[25], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0AF8u); set32(c.r[5], c.r[2].w[0] + 200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0AF8u) [[unlikely]] return; }
L_004C0AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 200u)));  if (t) { goto L_004C0B20; } }
L_004C0B00:
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0B10u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0B10u) [[unlikely]] return; }
L_004C0B10:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_004C0B1C:
    set32(c.r[18], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_004C0B20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_004C0D80; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_004C0D94; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004C0D94; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004C0B54:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 528u)));  if (t) { goto L_004C0BAC; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0B7Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0B7Cu) [[unlikely]] return; }
L_004C0B7C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004C0BC4; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0BA4u); set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0BA4u) [[unlikely]] return; }
L_004C0BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 536u), c.r[18].w[0]);  if (t) { goto L_004C0BC8; } }
L_004C0BAC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0BB8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0BB8u) [[unlikely]] return; }
L_004C0BB8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004C0BC4:
    st32((c.r[19].w[0] + 536u), c.r[18].w[0]);
    c.budget -= 1;
L_004C0BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 528u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[19].w[0] + 552u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 552u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0BECu); st32((c.r[2].w[0] - 17652u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x004C0BECu) [[unlikely]] return; }
L_004C0BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[5], c.r[19].w[0] + 258u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C10u); st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x004C0C10u) [[unlikely]] return; }
L_004C0C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C18u); set32(c.r[4], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x004C0C18u) [[unlikely]] return; }
L_004C0C18:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C30u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0C30u) [[unlikely]] return; }
L_004C0C30:
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x004C0C3Cu) [[unlikely]] return; }
L_004C0C3C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0C50u) [[unlikely]] return; }
L_004C0C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C0DB0; } }
    set32(c.r[16], c.r[29].w[0] + 132u);
    set32(c.r[18], c.r[29].w[0] + 120u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C0CC4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0C8Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0C8Cu) [[unlikely]] return; }
L_004C0C8C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_004C0CDC; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0CBCu); set32(c.r[5], c.r[2].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0CBCu) [[unlikely]] return; }
L_004C0CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0])));  if (t) { goto L_004C0CE0; } }
L_004C0CC4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0CD0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0CD0u) [[unlikely]] return; }
L_004C0CD0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004C0CDC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_004C0CE0:
    set32(c.r[20], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[19].w[0] + 540u)));  if (t) { goto L_004C0D3C; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0D0Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0D0Cu) [[unlikely]] return; }
L_004C0D0C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[17].d[0]; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004C0D54; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0D34u); set32(c.r[6], c.r[20].w[0] - c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0D34u) [[unlikely]] return; }
L_004C0D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 548u), c.r[20].w[0]);  if (t) { goto L_004C0D58; } }
L_004C0D3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0D48u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C0D48u) [[unlikely]] return; }
L_004C0D48:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004C0D54:
    st32((c.r[19].w[0] + 548u), c.r[20].w[0]);
    c.budget -= 1;
L_004C0D58:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0D64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x004C0D64u) [[unlikely]] return; }
L_004C0D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004C0DB8; } }
L_004C0D6C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0D78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x004C0D78u) [[unlikely]] return; }
L_004C0D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C0DB8; } }
L_004C0D80:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0D8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x004C0D8Cu) [[unlikely]] return; }
L_004C0D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C0DB8; } }
L_004C0D94:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0DA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C0DA8u) [[unlikely]] return; }
L_004C0DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0B54u | kUnwind; return; } goto L_004C0B54; } }
L_004C0DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 514u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0D58u | kUnwind; return; } goto L_004C0D58; } }
L_004C0DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004C0DE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0DFCu); set32(c.r[5], c.r[16].w[0] + 2u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x004C0DFCu) [[unlikely]] return; }
L_004C0DFC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 55u, depth + 1u); else { c.pc = 0x002406D0u; return; } if (c.pc != 0x004C0E0Cu) [[unlikely]] return; }
L_004C0E0C:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x004C0E18u) [[unlikely]] return; }
L_004C0E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E20u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 41u, depth + 1u); else { c.pc = 0x002404D0u; return; } if (c.pc != 0x004C0E20u) [[unlikely]] return; }
L_004C0E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C0EE4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 528u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 532u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E38u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x004C0E38u) [[unlikely]] return; }
L_004C0E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E40u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 44u, depth + 1u); else { c.pc = 0x00240510u; return; } if (c.pc != 0x004C0E40u) [[unlikely]] return; }
L_004C0E40:
    set32(c.r[2], ld32((c.r[16].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C0ED0; } }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E58u); set32(c.r[5], c.r[16].w[0] + 258u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x004C0E58u) [[unlikely]] return; }
L_004C0E58:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 55u, depth + 1u); else { c.pc = 0x002406D0u; return; } if (c.pc != 0x004C0E68u) [[unlikely]] return; }
L_004C0E68:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x004C0E74u) [[unlikely]] return; }
L_004C0E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E7Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 41u, depth + 1u); else { c.pc = 0x002404D0u; return; } if (c.pc != 0x004C0E7Cu) [[unlikely]] return; }
L_004C0E7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C0EA4; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x00240640u; return; } if (c.pc != 0x004C0E90u) [[unlikely]] return; }
L_004C0E90:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0E9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x00240640u; return; } if (c.pc != 0x004C0E9Cu) [[unlikely]] return; }
L_004C0E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C0EF4; } }
L_004C0EA4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0EB4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x004C0EB4u) [[unlikely]] return; }
L_004C0EB4:
    set32(c.r[5], ld32((c.r[16].w[0] + 540u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 544u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0EC4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x004C0EC4u) [[unlikely]] return; }
L_004C0EC4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0ED0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x00240640u; return; } if (c.pc != 0x004C0ED0u) [[unlikely]] return; }
L_004C0ED0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0EDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x00240640u; return; } if (c.pc != 0x004C0EDCu) [[unlikely]] return; }
L_004C0EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004C0EF4; } }
L_004C0EE4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C0EF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x00240640u; return; } if (c.pc != 0x004C0EF0u) [[unlikely]] return; }
L_004C0EF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C0EF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004C0F10:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 525u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C0F28; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 556u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_004C0F2C; } }
L_004C0F28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C0F2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C0F40:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 525u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C0F58; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 552u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_004C0F5C; } }
L_004C0F58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C0F5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C0F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 524u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C102C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 525u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C1078; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C104C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 532u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 536u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004C104C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 528u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 556u)));
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004C1060; } }
L_004C0FFC:
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[2].d[0] = c.r[8].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C0FFCu | kUnwind; return; } goto L_004C0FFC; } }
L_004C1024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 556u)));  if (t) { goto L_004C1064; } }
L_004C102C:
    set32(c.r[3], ld32((c.r[16].w[0] + 532u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 552u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C103Cu); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 116u, depth + 1u); else { c.pc = 0x004C0DE0u; return; } if (c.pc != 0x004C103Cu) [[unlikely]] return; }
L_004C103C:
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004C107C; } }
L_004C104C:
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004C107C; } }
L_004C1060:
    set32(c.r[3], ld32((c.r[16].w[0] + 556u)));
    c.budget -= 1;
L_004C1064:
    set32(c.r[2], ld32((c.r[16].w[0] + 532u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 532u), c.r[2].w[0]);
    c.budget -= 5;
L_004C1078:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004C107C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C1090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C10C4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 525u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C10D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C10BCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 183u, depth + 1u); else { c.pc = 0x00486790u; return; } if (c.pc != 0x004C10BCu) [[unlikely]] return; }
L_004C10BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004C10DC; } }
L_004C10C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C10CCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 183u, depth + 1u); else { c.pc = 0x00486790u; return; } if (c.pc != 0x004C10CCu) [[unlikely]] return; }
L_004C10CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 556u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C10BCu | kUnwind; return; } goto L_004C10BC; } }
L_004C10D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004C10DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C10F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C110C; } }
L_004C1104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004C1128; } }
L_004C110C:
    set32(c.r[2], ld32((c.r[4].w[0] + 556u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1120u); set32(c.r[4], c.r[4].w[0] + 3056u);  if (depth < kMaxDepth) unit_0018(c, 177u, depth + 1u); else { c.pc = 0x00262450u; return; } if (c.pc != 0x004C1120u) [[unlikely]] return; }
L_004C1120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1104u | kUnwind; return; } goto L_004C1104; } }
L_004C1128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004C1130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C1140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C116C; } }
L_004C1158:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C11C4; } }
L_004C1164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004C12AC; } }
L_004C116C:
    set32(c.r[5], ld32((c.r[16].w[0] + 528u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 552u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 552u)));
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 552u)));
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 520u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 552u)));
    st32((c.r[5].w[0] + 12u), c.r[6].w[0]);
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 532u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 544u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 552u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[3].w[0] - 17652u), c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1158u | kUnwind; return; } goto L_004C1158; } }
L_004C11C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C11CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 83u, depth + 1u); else { c.pc = 0x004C0980u; return; } if (c.pc != 0x004C11CCu) [[unlikely]] return; }
L_004C11CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C12A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C12A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C1280; } }
L_004C11EC:
    st8((c.r[16].w[0] + 524u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 16u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 532u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 528u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 532u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 556u)));
    set32(c.r[9], c.r[5].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[9].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004C1288; } }
L_004C1250:
    set32(c.r[5], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1250u | kUnwind; return; } goto L_004C1250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 556u)));  if (t) { goto L_004C128C; } }
L_004C1280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 514u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C11ECu | kUnwind; return; } goto L_004C11EC; } }
L_004C1288:
    set32(c.r[4], ld32((c.r[16].w[0] + 556u)));
    c.budget -= 1;
L_004C128C:
    set32(c.r[3], ld32((c.r[16].w[0] + 532u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 532u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 544u), 0u);
    c.budget -= 6;
L_004C12A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1164u | kUnwind; return; } goto L_004C1164; } }
L_004C12AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C12C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C135C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C12F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C12F4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C12F4u) [[unlikely]] return; }
L_004C12F4:
    st32((c.r[18].w[0] + 528u), 0u);
    c.budget -= 1;
L_004C12F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C1310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C130Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C130Cu) [[unlikely]] return; }
L_004C130C:
    st32((c.r[18].w[0] + 540u), 0u);
    c.budget -= 1;
L_004C1310:
    set32(c.r[16], ld32((c.r[18].w[0] + 556u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C1344; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C1340; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C1338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1338u);  if (depth < kMaxDepth) unit_0022(c, 58u, depth + 1u); else { c.pc = 0x00288C70u; return; } if (c.pc != 0x004C1338u) [[unlikely]] return; }
L_004C1338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1340u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004C1340u) [[unlikely]] return; }
L_004C1340:
    st32((c.r[18].w[0] + 556u), 0u);
    c.budget -= 1;
L_004C1344:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C135C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C135Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004C135Cu) [[unlikely]] return; }
L_004C135C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C1380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[11], ld32((c.r[4].w[0] + 12u)));
    c.f[5] = ld32((c.r[29].w[0] + 12u));
    c.r[10].d[0] = 0ull + 0ull;
    c.f[6] = ld32((c.r[29].w[0] + 28u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[7] = 0u;
    c.f[8] = c.f[7];
    c.f[9] = c.f[7];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[6], 0u - 1u);
    c.f[4] = c.r[2].w[0];
    c.f[3] = c.f[7];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x411D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 8913ull;
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 24;
L_004C13E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[10].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004C1880; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_004C1880; } }
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 288u)));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[13], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[13].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_004C1720; } }
    set32(c.r[2], c.r[10].w[0] + 8u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 288u)));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[9], c.r[2].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 50u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[11], c.r[11].w[0] - 1u);  if (t) { goto L_004C1730; } }
    c.budget -= 1;
L_004C1458:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004C1720; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[9].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C1838; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 18u)));
    c.f[10] = ld32((c.r[9].w[0] + 28u));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 16u)));
    c.f[11] = ld32((c.r[9].w[0] + 24u));
    c.f[14] = c.r[2].w[0];
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[10]);
    c.r[1].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.f[10] = fp::cvt_s_w(c.f[14]);
    c.f[14] = c.r[13].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[10] = fp::ee::div(c.fcr31, c.f[14], c.f[10]);
    c.f[10] = fp::ee::mul(c.fcr31, c.f[4], c.f[10]);
    c.f[14] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[10]);
    c.f[10] = fp::cvt_w_s(c.f[14]);
    set32(c.r[2], c.f[10]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[10] = c.r[2].w[0];
    c.f[11] = fp::cvt_s_w(c.f[10]);
    c.f[10] = fp::ee::sub(c.fcr31, c.f[14], c.f[11]);
    c.f[16] = fp::ee::mul(c.fcr31, c.f[2], c.f[11]);
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[9].w[0] + 28u), c.f[10]);  if (t) { goto L_004C1560; } }
    set32(c.r[14], ld32((c.r[4].w[0] + 408u)));
    c.r[13].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[12], ld32((c.r[7].w[0])));
    set32(c.r[14], c.r[14].w[0] + c.r[8].w[0]);
    c.f[15] = ld32((c.r[14].w[0]));
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.f[14] = ld32((c.r[14].w[0] + 4u));
    c.f[11] = ld32((c.r[14].w[0] + 8u));
    c.f[10] = ld32((c.r[12].w[0]));
    c.f[15] = fp::ee::mul(c.fcr31, c.f[15], c.f[16]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[15]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[7]);
    c.f[14] = fp::ee::mul(c.fcr31, c.f[14], c.f[16]);
    st32((c.r[12].w[0]), c.f[10]);
    c.f[10] = ld32((c.r[12].w[0] + 4u));
    c.f[8] = fp::ee::add(c.fcr31, c.f[8], c.f[14]);
    c.f[11] = fp::ee::mul(c.fcr31, c.f[11], c.f[16]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[8]);
    st32((c.r[12].w[0] + 4u), c.f[10]);
    c.f[10] = ld32((c.r[12].w[0] + 8u));
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[11]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[9]);
    st32((c.r[12].w[0] + 8u), c.f[10]);
    st32((c.r[9].w[0]), c.f[3]);
    st32((c.r[9].w[0] + 4u), c.f[3]);
    st32((c.r[9].w[0] + 8u), c.f[3]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 12u), c.f[6]);  if (t) { goto L_004C1590; } }
    c.budget -= 1;
L_004C1560:
    c.f[14] = ld32((c.r[28].w[0] - 29668u));
    c.f[10] = ld32((c.r[9].w[0]));
    c.f[11] = ld32((c.r[9].w[0] + 8u));
    c.f[15] = ld32((c.r[9].w[0] + 4u));
    c.f[14] = fp::ee::mul(c.fcr31, c.f[1], c.f[14]);
    c.f[10] = fp::ee::sub(c.fcr31, c.f[10], c.f[3]);
    c.f[14] = fp::ee::sub(c.fcr31, c.f[15], c.f[14]);
    st32((c.r[9].w[0]), c.f[10]);
    c.f[11] = fp::ee::sub(c.fcr31, c.f[11], c.f[3]);
    st32((c.r[9].w[0] + 4u), c.f[14]);
    st32((c.r[9].w[0] + 8u), c.f[11]);
    st32((c.r[9].w[0] + 12u), c.f[5]);
    c.budget -= 12;
L_004C1590:
    c.r[15].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[14], ld32((c.r[7].w[0])));
    c.r[13].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[12], ld32((c.r[3].w[0])));
    set32(c.r[15], c.r[15].w[0] << 4);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.f[10] = ld32((c.r[14].w[0]));
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    st32((c.r[12].w[0]), c.f[10]);
    c.f[10] = ld32((c.r[14].w[0] + 4u));
    st32((c.r[12].w[0] + 4u), c.f[10]);
    c.f[10] = ld32((c.r[14].w[0] + 8u));
    st32((c.r[12].w[0] + 8u), c.f[10]);
    c.r[13].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[12], ld32((c.r[7].w[0])));
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[13], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[13].w[0] + 12u)));
    set32(c.r[12], c.r[12].w[0] >> 16);
    c.r[12].d[0] = c.r[12].d[0] & 65535ull;
    c.r[12].d[0] = c.r[12].d[0] << 48;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = c.r[2].d[0] << 48;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);
    set32(c.r[2], c.r[12].w[0] << 16);
    c.r[2].d[0] = c.r[12].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.f[10] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[13].w[0] + 12u), c.f[10]);
    c.r[12].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[12].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[10]);
    set32(c.r[13], ld32((c.r[7].w[0])));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 6u));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 16u)));
    set32(c.r[13], c.r[13].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[12].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 45;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 3u);  if (t) { goto L_004C17A0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 18u)));
    set32(c.r[12], c.r[2].w[0] - c.r[12].w[0]);
    c.r[1].d[0] = c.r[12].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004C16F0; } }
    c.r[2].d[0] = ld8((c.r[9].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004C1670; } }
    c.f[10] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[10]);  if (t) { goto L_004C168C; } }
L_004C1670:
    set32(c.r[9], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.f[10] = c.r[9].w[0];
    c.f[10] = fp::cvt_s_w(c.f[10]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_004C168C:
    c.f[10] = fp::ee::div(c.fcr31, c.f[10], c.f[0]);
    c.r[9].d[0] = 0ull | 0ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 32768ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.f[11] = fp::ee::mul(c.fcr31, c.f[12], c.f[10]);
    c.f[10] = c.r[12].w[0];
    c.f[10] = fp::cvt_s_w(c.f[10]);
    c.f[10] = fp::ee::mul(c.fcr31, c.f[11], c.f[10]);
    set32(c.r[12], c.f[10]);
    c.r[9].d[0] = c.r[9].d[0] & c.r[12].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    c.f[11] = c.r[2].w[0];
    c.f[11] = fp::ee::add(c.fcr31, c.f[10], c.f[11]);
    c.f[11] = fp::cvt_w_s(c.f[11]);
    set32(c.r[2], c.f[11]);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 25;
L_004C16F0:
    set32(c.r[12], ld32((c.r[7].w[0])));
    c.r[9].d[0] = ld16((c.r[7].w[0] + 6u));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[12], c.r[12].w[0] + 328u);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[12].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + 328u);
    c.r[7].d[0] = ld8((c.r[9].w[0] + 3u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 12;
L_004C1720:
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C13E0u | kUnwind; return; } goto L_004C13E0; } }
    c.budget -= 1;
L_004C1730:
    c.f[11] = ld32((c.r[13].w[0]));
    c.f[10] = ld32((c.r[9].w[0]));
    c.f[10] = fp::ee::add(c.fcr31, c.f[11], c.f[10]);
    st32((c.r[13].w[0]), c.f[10]);
    c.f[11] = ld32((c.r[9].w[0] + 4u));
    c.f[10] = ld32((c.r[13].w[0] + 4u));
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[11]);
    st32((c.r[13].w[0] + 4u), c.f[10]);
    c.f[11] = ld32((c.r[9].w[0] + 8u));
    c.f[10] = ld32((c.r[13].w[0] + 8u));
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[11]);
    st32((c.r[13].w[0] + 8u), c.f[10]);
    c.r[14].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[13], ld32((c.r[7].w[0])));
    c.r[12].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[14], c.r[14].w[0] << 4);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[12].w[0] << 4);
    c.f[10] = ld32((c.r[13].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[12].w[0]);
    st32((c.r[2].w[0]), c.f[10]);
    c.f[10] = ld32((c.r[13].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[10]);
    c.f[10] = ld32((c.r[13].w[0] + 8u));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), c.f[10]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1458u | kUnwind; return; } goto L_004C1458; } }
    c.budget -= 1;
L_004C17A0:
    c.r[2].d[0] = ld8((c.r[9].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004C17B8; } }
    c.f[10] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[10] = fp::cvt_s_w(c.f[10]);  if (t) { goto L_004C17D4; } }
L_004C17B8:
    set32(c.r[9], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.f[10] = c.r[9].w[0];
    c.f[10] = fp::cvt_s_w(c.f[10]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[10], c.f[10]);
    c.budget -= 7;
L_004C17D4:
    c.f[10] = fp::ee::div(c.fcr31, c.f[10], c.f[13]);
    c.r[9].d[0] = 0ull | 0ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 32768ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.f[11] = fp::ee::mul(c.fcr31, c.f[12], c.f[10]);
    c.f[10] = c.r[12].w[0];
    c.f[10] = fp::cvt_s_w(c.f[10]);
    c.f[10] = fp::ee::mul(c.fcr31, c.f[10], c.f[11]);
    set32(c.r[12], c.f[10]);
    c.r[9].d[0] = c.r[9].d[0] & c.r[12].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    c.f[11] = c.r[2].w[0];
    c.f[11] = fp::ee::add(c.fcr31, c.f[10], c.f[11]);
    c.f[11] = fp::cvt_w_s(c.f[11]);
    set32(c.r[2], c.f[11]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C16F0u | kUnwind; return; } goto L_004C16F0; } }
L_004C1838:
    c.r[9].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[9].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1720u | kUnwind; return; } goto L_004C1720; } }
L_004C1870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004C1894; } }
L_004C1878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004C1894; } }
L_004C1880:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1878u | kUnwind; return; } goto L_004C1878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1870u | kUnwind; return; } goto L_004C1870; } }
L_004C1894:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C18A0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[7].w[0] << 3);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[7], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[23], c.r[22].w[0] << 4);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0] + 404u)));
    c.f[20] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[5], ld32((c.r[4].w[0] + 400u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[17], c.r[6].w[0] + c.r[23].w[0]);
    set32(c.r[16], c.r[6].w[0] + 128u);
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 288u)));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    set32(c.r[2], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[22].w[0] + 8u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 288u)));
    c.budget -= 42;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[21], c.r[2].w[0] + 4u);  if (t) { goto L_004C197C; } }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004C1960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C197C; } }
L_004C1960:
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004C1978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C197C; } }
L_004C1978:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004C197C:
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[29].w[0] + 254u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[29].w[0] + 252u);
    st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C19A0u); st8((c.r[29].w[0] + 253u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004C19A0u) [[unlikely]] return; }
L_004C19A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[30].d[0] = ld8((c.r[2].w[0] - 22976u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[3], c.r[3].w[0] + 328u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22975u));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22974u));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22973u));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 396u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    set32(c.r[5], c.r[5].w[0] + 260u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 253u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 254u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 255u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1A98u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004C1A98u) [[unlikely]] return; }
L_004C1A98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0; c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (t) { goto L_004C1AD0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C1AEC; } }
L_004C1AD0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004C1AEC:
    set32(c.r[3], c.r[22].w[0] << 5);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[6], c.r[6].w[0] + 328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.f[2] = 0u;
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 6u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.r[6].d[0] = ld16((c.r[18].w[0] + 6u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[7], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    set32(c.r[6], c.r[6].w[0] + 396u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[29].w[0] + 254u);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 252u));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 6u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 252u));
    set32(c.r[7], c.r[7].w[0] + 260u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 253u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 254u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 255u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[5].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    st16((c.r[5].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[5].w[0] + 56u), c.f[0]);
    st32((c.r[5].w[0] + 60u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 404u)));
    set32(c.r[5], c.r[3].w[0] + c.r[23].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 82;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_004C1C38; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C1C38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C1C5C; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_004C1C5C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C1C5C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C1C80; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_004C1C80; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C1C80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004C1C98; } }
L_004C1C88:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_004C1D78; } }
L_004C1C98:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 408u)));
    set32(c.r[4], c.r[4].w[0] + c.r[23].w[0]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.f[20]);
    c.r[4].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004C1D04; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004C1D20; } }
L_004C1D04:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004C1D20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 408u)));
    c.r[4].d[0] = c.r[4].d[0] | 55050ull;
    c.f[1] = c.r[4].w[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1C88u | kUnwind; return; } goto L_004C1C88; } }
L_004C1D78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004C1DB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[3].w[0] << 3);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 400u)));
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    c.f[21] = c.f[12];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = ld16((c.r[2].w[0] + 20u));
    c.budget -= 23;
L_004C1E0C:
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 3856u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1E3Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 43u, depth + 1u); else { c.pc = 0x003048C0u; return; } if (c.pc != 0x004C1E3Cu) [[unlikely]] return; }
L_004C1E3C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1E0Cu | kUnwind; return; } goto L_004C1E0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[20].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[20].w[0] + 368u), c.f[0]);
    st32((c.r[20].w[0] + 372u), c.f[2]);
    st32((c.r[20].w[0] + 376u), c.f[1]);
    st32((c.r[20].w[0] + 380u), c.f[20]);
    st32((c.r[20].w[0] + 384u), c.f[3]);
    st32((c.r[20].w[0] + 388u), c.f[4]);
    st32((c.r[20].w[0] + 392u), c.f[3]);
    c.budget -= 26;
L_004C1EB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1EBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 166u, depth + 1u); else { c.pc = 0x004C18A0u; return; } if (c.pc != 0x004C1EBCu) [[unlikely]] return; }
L_004C1EBC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1EB0u | kUnwind; return; } goto L_004C1EB0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004C1F00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 400u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 404u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 408u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 368u), 0u);
    st32((c.r[4].w[0] + 372u), 0u);
    st32((c.r[4].w[0] + 376u), 0u);
    st32((c.r[4].w[0] + 380u), c.f[0]);
    st32((c.r[4].w[0] + 384u), 0u);
    st32((c.r[4].w[0] + 388u), 0u);
    st32((c.r[4].w[0] + 392u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 400u)));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 20u));
    c.budget -= 23;
L_004C1F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1F64u); set32(c.r[4], ld32((c.r[19].w[0] + 352u)));  if (depth < kMaxDepth) unit_00B0(c, 265u, depth + 1u); else { c.pc = 0x004C3280u; return; } if (c.pc != 0x004C1F64u) [[unlikely]] return; }
L_004C1F64:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[7].w[0] << 4);
    c.budget -= 7;
L_004C1F80:
    c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004C1FC8; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004C1FC8; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 288u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1F80u | kUnwind; return; } goto L_004C1F80; } }
L_004C1FC8:
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 352u)));
    set32(c.r[4], c.r[4].w[0] + 3856u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C1FF0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 43u, depth + 1u); else { c.pc = 0x003048C0u; return; } if (c.pc != 0x004C1FF0u) [[unlikely]] return; }
L_004C1FF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C1F5Cu | kUnwind; return; } goto L_004C1F5C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004C2020:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.f[22] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.f[23] = ld32((c.r[29].w[0] + 140u));
    c.f[24] = ld32((c.r[29].w[0] + 156u));
    c.f[25] = ld32((c.r[29].w[0] + 172u));
    c.f[26] = ld32((c.r[29].w[0] + 188u));
    c.f[27] = ld32((c.r[29].w[0] + 204u));
    c.f[20] = ld32((c.r[29].w[0] + 220u));
    c.f[28] = ld32((c.r[29].w[0] + 236u));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[21] = ld32((c.r[29].w[0] + 252u));
    c.f[29] = ld32((c.r[29].w[0] + 268u));
    c.budget -= 31;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C25F0; } }
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C24F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004C23E8; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_004C22E4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004C21E0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004C20E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_004C25F4; } }
L_004C20E0:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C20ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004C20ECu) [[unlikely]] return; }
L_004C20EC:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 2560u)));
    c.f[4] = 0u;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 12;
L_004C211C:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 464u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st32((c.r[3].w[0] + 468u), 0u);
    st32((c.r[3].w[0] + 472u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 476u), c.f[29]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C211Cu | kUnwind; return; } goto L_004C211C; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 448u);
    set32(c.r[5], c.r[17].w[0] + 416u);
    set32(c.r[6], c.r[6].w[0] + 2432u);
    st32((c.r[3].w[0] + 464u), c.f[3]);
    st32((c.r[3].w[0] + 468u), c.f[2]);
    st32((c.r[3].w[0] + 472u), c.f[1]);
    st32((c.r[3].w[0] + 476u), c.f[0]);
    st32((c.r[17].w[0] + 608u), c.f[4]);
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 616u), c.f[4]);
    st32((c.r[17].w[0] + 620u), c.f[21]);
    st32((c.r[17].w[0] + 432u), c.f[3]);
    st32((c.r[17].w[0] + 436u), c.f[2]);
    st32((c.r[17].w[0] + 440u), c.f[1]);
    st32((c.r[17].w[0] + 444u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 432u));
    st32((c.r[17].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 436u));
    st32((c.r[17].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 440u));
    st32((c.r[17].w[0] + 424u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 444u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C21C0u); st32((c.r[17].w[0] + 428u), c.f[0]);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x004C21C0u) [[unlikely]] return; }
L_004C21C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C21D8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 170u, depth + 1u); else { c.pc = 0x004C1DB0u; return; } if (c.pc != 0x004C21D8u) [[unlikely]] return; }
L_004C21D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C25F0; } }
L_004C21E0:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C21ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004C21ECu) [[unlikely]] return; }
L_004C21EC:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 2548u)));
    c.f[4] = 0u;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 12;
L_004C221C:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 464u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st32((c.r[3].w[0] + 468u), 0u);
    st32((c.r[3].w[0] + 472u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 476u), c.f[28]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C221Cu | kUnwind; return; } goto L_004C221C; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 448u);
    set32(c.r[5], c.r[17].w[0] + 416u);
    set32(c.r[6], c.r[6].w[0] + 2432u);
    st32((c.r[3].w[0] + 464u), c.f[3]);
    st32((c.r[3].w[0] + 468u), c.f[2]);
    st32((c.r[3].w[0] + 472u), c.f[1]);
    st32((c.r[3].w[0] + 476u), c.f[0]);
    st32((c.r[17].w[0] + 608u), c.f[4]);
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 616u), c.f[4]);
    st32((c.r[17].w[0] + 620u), c.f[20]);
    st32((c.r[17].w[0] + 432u), c.f[3]);
    st32((c.r[17].w[0] + 436u), c.f[2]);
    st32((c.r[17].w[0] + 440u), c.f[1]);
    st32((c.r[17].w[0] + 444u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 432u));
    st32((c.r[17].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 436u));
    st32((c.r[17].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 440u));
    st32((c.r[17].w[0] + 424u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 444u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C22C0u); st32((c.r[17].w[0] + 428u), c.f[0]);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x004C22C0u) [[unlikely]] return; }
L_004C22C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C22DCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 170u, depth + 1u); else { c.pc = 0x004C1DB0u; return; } if (c.pc != 0x004C22DCu) [[unlikely]] return; }
L_004C22DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C25F0; } }
L_004C22E4:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C22F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004C22F0u) [[unlikely]] return; }
L_004C22F0:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 2536u)));
    c.f[4] = 0u;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 12;
L_004C2320:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 464u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st32((c.r[3].w[0] + 468u), 0u);
    st32((c.r[3].w[0] + 472u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 476u), c.f[27]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2320u | kUnwind; return; } goto L_004C2320; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 448u);
    set32(c.r[5], c.r[17].w[0] + 416u);
    set32(c.r[6], c.r[6].w[0] + 2432u);
    st32((c.r[3].w[0] + 464u), c.f[3]);
    st32((c.r[3].w[0] + 468u), c.f[2]);
    st32((c.r[3].w[0] + 472u), c.f[1]);
    st32((c.r[3].w[0] + 476u), c.f[0]);
    st32((c.r[17].w[0] + 608u), c.f[4]);
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 616u), c.f[4]);
    st32((c.r[17].w[0] + 620u), c.f[26]);
    st32((c.r[17].w[0] + 432u), c.f[3]);
    st32((c.r[17].w[0] + 436u), c.f[2]);
    st32((c.r[17].w[0] + 440u), c.f[1]);
    st32((c.r[17].w[0] + 444u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 432u));
    st32((c.r[17].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 436u));
    st32((c.r[17].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 440u));
    st32((c.r[17].w[0] + 424u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 444u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C23C4u); st32((c.r[17].w[0] + 428u), c.f[0]);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x004C23C4u) [[unlikely]] return; }
L_004C23C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C23E0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 170u, depth + 1u); else { c.pc = 0x004C1DB0u; return; } if (c.pc != 0x004C23E0u) [[unlikely]] return; }
L_004C23E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C25F0; } }
L_004C23E8:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C23F8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004C23F8u) [[unlikely]] return; }
L_004C23F8:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 2524u)));
    c.f[4] = 0u;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 12;
L_004C2428:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 464u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st32((c.r[3].w[0] + 468u), 0u);
    st32((c.r[3].w[0] + 472u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 476u), c.f[25]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2428u | kUnwind; return; } goto L_004C2428; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 448u);
    set32(c.r[5], c.r[17].w[0] + 416u);
    set32(c.r[6], c.r[6].w[0] + 2432u);
    st32((c.r[3].w[0] + 464u), c.f[3]);
    st32((c.r[3].w[0] + 468u), c.f[2]);
    st32((c.r[3].w[0] + 472u), c.f[1]);
    st32((c.r[3].w[0] + 476u), c.f[0]);
    st32((c.r[17].w[0] + 608u), c.f[4]);
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 616u), c.f[4]);
    st32((c.r[17].w[0] + 620u), c.f[24]);
    st32((c.r[17].w[0] + 432u), c.f[3]);
    st32((c.r[17].w[0] + 436u), c.f[2]);
    st32((c.r[17].w[0] + 440u), c.f[1]);
    st32((c.r[17].w[0] + 444u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 432u));
    st32((c.r[17].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 436u));
    st32((c.r[17].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 440u));
    st32((c.r[17].w[0] + 424u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 444u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C24CCu); st32((c.r[17].w[0] + 428u), c.f[0]);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x004C24CCu) [[unlikely]] return; }
L_004C24CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C24E8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 170u, depth + 1u); else { c.pc = 0x004C1DB0u; return; } if (c.pc != 0x004C24E8u) [[unlikely]] return; }
L_004C24E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C25F0; } }
L_004C24F0:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2500u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004C2500u) [[unlikely]] return; }
L_004C2500:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 2512u)));
    c.f[4] = 0u;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 12;
L_004C2530:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 464u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st32((c.r[3].w[0] + 468u), 0u);
    st32((c.r[3].w[0] + 472u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 476u), c.f[23]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2530u | kUnwind; return; } goto L_004C2530; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[17].w[0] + 448u);
    set32(c.r[5], c.r[17].w[0] + 416u);
    set32(c.r[6], c.r[6].w[0] + 2432u);
    st32((c.r[3].w[0] + 464u), c.f[3]);
    st32((c.r[3].w[0] + 468u), c.f[2]);
    st32((c.r[3].w[0] + 472u), c.f[1]);
    st32((c.r[3].w[0] + 476u), c.f[0]);
    st32((c.r[17].w[0] + 608u), c.f[4]);
    st32((c.r[17].w[0] + 612u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 616u), c.f[4]);
    st32((c.r[17].w[0] + 620u), c.f[22]);
    st32((c.r[17].w[0] + 432u), c.f[3]);
    st32((c.r[17].w[0] + 436u), c.f[2]);
    st32((c.r[17].w[0] + 440u), c.f[1]);
    st32((c.r[17].w[0] + 444u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 432u));
    st32((c.r[17].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 436u));
    st32((c.r[17].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 440u));
    st32((c.r[17].w[0] + 424u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 444u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C25D4u); st32((c.r[17].w[0] + 428u), c.f[0]);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x004C25D4u) [[unlikely]] return; }
L_004C25D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C25F0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 170u, depth + 1u); else { c.pc = 0x004C1DB0u; return; } if (c.pc != 0x004C25F0u) [[unlikely]] return; }
L_004C25F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004C25F4:
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004C2630:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[20].w[0] + 2432u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004C270C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C2670:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C268Cu); set32(c.r[5], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x004C268Cu) [[unlikely]] return; }
L_004C268C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C26F8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C26F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[16].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C26B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 182u, depth + 1u); else { c.pc = 0x00207A00u; return; } if (c.pc != 0x004C26B4u) [[unlikely]] return; }
L_004C26B4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 396u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C26F8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C26C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 3856u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C26ECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0041(c, 44u, depth + 1u); else { c.pc = 0x003048E0u; return; } if (c.pc != 0x004C26ECu) [[unlikely]] return; }
L_004C26EC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C26C4u | kUnwind; return; } goto L_004C26C4; } }
L_004C26F8:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2670u | kUnwind; return; } goto L_004C2670; } }
L_004C270C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004C2730:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004C28E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C2774:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.f[1] = 0u;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.f[12] = ld32((c.r[18].w[0] + 448u));
    c.budget -= 9;
L_004C2798:
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004C2810; } }
    set32(c.r[5], c.r[7].w[0] << 4);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[5].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 464u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[6].w[0] + 464u);  if (t) { goto L_004C27C4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C27C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C27E0; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C27E0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C27E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C27FC; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C27FC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C27FC:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C2810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2798u | kUnwind; return; } goto L_004C2798; } }
L_004C2810:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C28F0; } }
    c.budget -= 1;
L_004C2820:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004C28D0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = ld8((c.r[28].w[0] - 30944u));
    c.r[8].d[0] = ld8((c.r[28].w[0] - 30943u));
    c.r[7].d[0] = ld8((c.r[28].w[0] - 30942u));
    c.r[6].d[0] = ld8((c.r[28].w[0] - 30941u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0])));
    c.budget -= 8;
L_004C2848:
    set32(c.r[3], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 288u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2848u | kUnwind; return; } goto L_004C2848; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_004C28D0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 13;
L_004C28D0:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2774u | kUnwind; return; } goto L_004C2774; } }
    c.budget -= 1;
L_004C28E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C2970; } }
L_004C28F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2900u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00B0(c, 159u, depth + 1u); else { c.pc = 0x004C1380u; return; } if (c.pc != 0x004C2900u) [[unlikely]] return; }
L_004C2900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C2968; } }
    c.r[9].d[0] = ld8((c.r[28].w[0] - 30944u));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld8((c.r[28].w[0] - 30943u));
    c.r[7].d[0] = ld8((c.r[28].w[0] - 30942u));
    c.r[6].d[0] = ld8((c.r[28].w[0] - 30941u));
    c.budget -= 6;
L_004C2920:
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 288u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2920u | kUnwind; return; } goto L_004C2920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2820u | kUnwind; return; } goto L_004C2820; } }
    c.budget -= 1;
L_004C2968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2820u | kUnwind; return; } goto L_004C2820; } }
L_004C2970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004C29A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004C2A58; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_004C29B8:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 4;
L_004C29C8:
    set32(c.r[8], c.r[11].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[9], ld32((c.r[8].w[0] + 288u)));
    c.r[10].d[0] = ld16((c.r[9].w[0] + 6u));
    c.r[8].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.budget -= 11;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[9].w[0] + 12u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C29C8u | kUnwind; return; } goto L_004C29C8; } }
    c.r[14].d[0] = ld8((c.r[28].w[0] - 30944u));
    c.r[15].d[0] = 0ull + 0ull;
    c.r[13].d[0] = ld8((c.r[28].w[0] - 30943u));
    c.r[12].d[0] = ld8((c.r[28].w[0] - 30942u));
    c.r[11].d[0] = ld8((c.r[28].w[0] - 30941u));
    c.budget -= 5;
L_004C2A08:
    set32(c.r[8], c.r[15].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[9], ld32((c.r[8].w[0] + 288u)));
    set32(c.r[10], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[15].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[9].d[0] = ld16((c.r[9].w[0] + 6u));
    set32(c.r[10], c.r[10].w[0] + 328u);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 15;
    { const bool t = c.r[8].d[0] != 0ull; st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2A08u | kUnwind; return; } goto L_004C2A08; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C29B8u | kUnwind; return; } goto L_004C29B8; } }
L_004C2A58:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004C2AA0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004C2A70:
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 736u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2A70u | kUnwind; return; } goto L_004C2A70; } }
    c.budget -= 1;
L_004C2AA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_004C2AB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C2AE4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2AE0u); set32(c.r[5], c.r[5].w[0] + 11200u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C2AE0u) [[unlikely]] return; }
L_004C2AE0:
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 1;
L_004C2AE4:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C2AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2AF8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C2AF8u) [[unlikely]] return; }
L_004C2AF8:
    st32((c.r[18].w[0] + 20u), 0u);
    c.budget -= 1;
L_004C2AFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004C2B64; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
L_004C2B10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C2B28; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2B24u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C2B24u) [[unlikely]] return; }
L_004C2B24:
    st32((c.r[18].w[0] + 40u), 0u);
    c.budget -= 1;
L_004C2B28:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C2B40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2B3Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C2B3Cu) [[unlikely]] return; }
L_004C2B3C:
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 1;
L_004C2B40:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C2B9C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2B58u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C2B58u) [[unlikely]] return; }
L_004C2B58:
    st32((c.r[18].w[0] + 48u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004C2BA0; } }
L_004C2B64:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C2B68:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2B80u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 39u, depth + 1u); else { c.pc = 0x00304850u; return; } if (c.pc != 0x004C2B80u) [[unlikely]] return; }
L_004C2B80:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2B68u | kUnwind; return; } goto L_004C2B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2B10u | kUnwind; return; } goto L_004C2B10; } }
L_004C2B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004C2BA0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C2BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C2C1C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C2C04; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C2C04; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], c.r[5].w[0] + 11328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2C04u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x004C2C04u) [[unlikely]] return; }
L_004C2C04:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C2C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2C1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004C2C1Cu) [[unlikely]] return; }
L_004C2C1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C2C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C2C70; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C2C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2C70u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004C2C70u) [[unlikely]] return; }
L_004C2C70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C2C90:
    set32(c.r[29], c.r[29].w[0] - 608u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[21], c.r[28].w[0] - 30948u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_004C2D78; } }
L_004C2CE4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D04u); set32(c.r[5], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004C2D04u) [[unlikely]] return; }
L_004C2D04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C2D60; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[20].w[0] + 2572u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[20].w[0] + 2576u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[20].w[0] + 2580u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[20].w[0] + 2582u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[20].w[0] + 2584u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[20].w[0] + 2588u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[20].w[0] + 2592u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[20].w[0] + 2594u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 2596u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004C2D78; } }
L_004C2D60:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2CE4u | kUnwind; return; } goto L_004C2CE4; } }
    c.budget -= 1;
L_004C2D78:
    set32(c.r[4], c.r[20].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2D84u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 270u, depth + 1u); else { c.pc = 0x004C33B0u; return; } if (c.pc != 0x004C2D84u) [[unlikely]] return; }
L_004C2D84:
    st32((c.r[20].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_004C2DB0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2DACu); set32(c.r[5], c.r[5].w[0] + 11200u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C2DACu) [[unlikely]] return; }
L_004C2DAC:
    st32((c.r[20].w[0] + 16u), 0u);
    c.budget -= 1;
L_004C2DB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004C317C; } }
L_004C2DB8:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_004C2DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2DCCu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C2DCCu) [[unlikely]] return; }
L_004C2DCC:
    st32((c.r[20].w[0] + 20u), 0u);
    c.budget -= 1;
L_004C2DD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004C31C0; } }
L_004C2DD8:
    set32(c.r[3], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 60u);  if (t) { goto L_004C2E00; } }
L_004C2DE4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2DE4u | kUnwind; return; } goto L_004C2DE4; } }
L_004C2E00:
    set32(c.r[6], ld32((c.r[28].w[0] - 30996u)));
    set32(c.r[3], c.r[29].w[0] + 464u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30992u)));
    set32(c.r[2], 0u + 60u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30988u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 31008u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 31004u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 31000u)));
    st32((c.r[29].w[0] + 540u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 544u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 548u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 30972u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 30968u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30964u)));
    st32((c.r[29].w[0] + 528u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 532u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 536u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 564u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 568u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 572u), c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 30984u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 30980u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 30976u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30960u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 30956u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30952u)));
    st32((c.r[29].w[0] + 552u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 556u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 560u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 576u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 580u), c.r[5].w[0]);
    c.budget -= 33;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 584u), c.r[4].w[0]);  if (t) { goto L_004C2EA0; } }
L_004C2E84:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2E84u | kUnwind; return; } goto L_004C2E84; } }
L_004C2EA0:
    set32(c.r[2], c.r[20].w[0] + 52u);
    set32(c.r[3], c.r[20].w[0] + 216u);
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[20].w[0] + 380u);
    st32((c.r[29].w[0] + 468u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 472u), c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] + 544u);
    set32(c.r[2], c.r[20].w[0] + 708u);
    st32((c.r[29].w[0] + 476u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] + 872u);
    set32(c.r[2], c.r[20].w[0] + 1036u);
    st32((c.r[29].w[0] + 484u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 488u), c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] + 1200u);
    set32(c.r[2], c.r[20].w[0] + 1364u);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 492u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] + 1528u);
    set32(c.r[2], c.r[20].w[0] + 1692u);
    st32((c.r[29].w[0] + 500u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] + 1856u);
    set32(c.r[2], c.r[20].w[0] + 2020u);
    st32((c.r[29].w[0] + 508u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] + 2184u);
    set32(c.r[2], c.r[20].w[0] + 2348u);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 516u), c.r[3].w[0]);
    c.budget -= 34;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 520u), c.r[2].w[0]);  if (t) { goto L_004C2FC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4A740000u);
    set32(c.r[3], c.r[29].w[0] + 600u);
    c.r[2].d[0] = c.r[2].d[0] | 9216ull;
    set32(c.r[4], c.r[29].w[0] + 596u);
    c.f[20] = c.r[2].w[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4ABE0000u);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 48160ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_004C2FC0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004C2F68:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    set32(c.r[5], c.r[20].w[0] + 24u);
    set32(c.r[6], c.r[20].w[0] + 2572u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] + 448u), c.f[0]);
    set32(c.r[7], c.r[4].w[0] + 464u);
    st32((c.r[4].w[0] + 452u), c.f[21]);
    set32(c.r[8], c.r[4].w[0] + 608u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2F94u); st32((c.r[4].w[0] + 456u), c.f[20]);  if (depth < kMaxDepth) unit_00B0(c, 175u, depth + 1u); else { c.pc = 0x004C1F00u; return; } if (c.pc != 0x004C2F94u) [[unlikely]] return; }
L_004C2F94:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + 736u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2F68u | kUnwind; return; } goto L_004C2F68; } }
L_004C2FC0:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[29].w[0] + 528u);
    set32(c.r[21], c.r[29].w[0] + 464u);
    set32(c.r[23], c.r[29].w[0] + 192u);
    set32(c.r[30], c.r[29].w[0] + 200u);
    set32(c.r[22], c.r[29].w[0] + 196u);
    c.budget -= 6;
L_004C2FD8:
    set32(c.r[5], ld32((c.r[28].w[0] - 31012u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2FE4u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004C2FE4u) [[unlikely]] return; }
L_004C2FE4:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C2FF0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x004C2FF0u) [[unlikely]] return; }
L_004C2FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[29].w[0] + 204u);
    set32(c.r[3], c.r[3].w[0] - 28400u);
    set32(c.r[4], c.r[29].w[0] + 604u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[23].w[0]), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3018u); st8((c.r[30].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x004C3018u) [[unlikely]] return; }
L_004C3018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3020u); set32(c.r[4], c.r[29].w[0] + 604u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x004C3020u) [[unlikely]] return; }
L_004C3020:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_004C3024:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3038u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C3038u) [[unlikely]] return; }
L_004C3038:
    set32(c.r[4], c.r[29].w[0] + 604u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3044u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x004C3044u) [[unlikely]] return; }
L_004C3044:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3058u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C3058u) [[unlikely]] return; }
L_004C3058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C30E0; } }
    set32(c.r[2], c.r[29].w[0] + 184u);
    set32(c.r[5], ld32((c.r[22].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] + 164u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[21].w[0])));  if (t) { goto L_004C30C0; } }
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C308Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C308Cu) [[unlikely]] return; }
L_004C308C:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 164u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[22].w[0]), c.r[3].w[0]);  if (t) { goto L_004C30D8; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C30B8u); set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C30B8u) [[unlikely]] return; }
L_004C30B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C30D8; } }
L_004C30C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C30CCu); set32(c.r[6], 0u + 164u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x004C30CCu) [[unlikely]] return; }
L_004C30CC:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] + 164u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004C30D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C30E0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x004C30E0u) [[unlikely]] return; }
L_004C30E0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C30ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x004C30ECu) [[unlikely]] return; }
L_004C30EC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[3].d[0] = c.r[19].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2FD8u | kUnwind; return; } goto L_004C2FD8; } }
    set32(c.r[3], c.r[20].w[0] + 52u);
    set32(c.r[4], c.r[20].w[0] + 216u);
    st32((c.r[20].w[0] + 2512u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 2516u), c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] + 380u);
    st32((c.r[20].w[0] + 2520u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 544u);
    st32((c.r[20].w[0] + 2524u), c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] + 708u);
    st32((c.r[20].w[0] + 2528u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 872u);
    st32((c.r[20].w[0] + 2532u), c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] + 1036u);
    st32((c.r[20].w[0] + 2536u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 1200u);
    st32((c.r[20].w[0] + 2540u), c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] + 1364u);
    st32((c.r[20].w[0] + 2544u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 1528u);
    st32((c.r[20].w[0] + 2548u), c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] + 1692u);
    st32((c.r[20].w[0] + 2552u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 1856u);
    st32((c.r[20].w[0] + 2556u), c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] + 2020u);
    st32((c.r[20].w[0] + 2560u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 2184u);
    set32(c.r[3], c.r[20].w[0] + 2348u);
    st32((c.r[20].w[0] + 2564u), c.r[4].w[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 2568u), c.r[3].w[0]);  if (t) { goto L_004C31D0; } }
L_004C317C:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3198u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C3198u) [[unlikely]] return; }
L_004C3198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12816u);
    set32(c.r[6], c.r[6].w[0] + 11200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C31B8u); set32(c.r[7], 0u + 736u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004C31B8u) [[unlikely]] return; }
L_004C31B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2DB8u | kUnwind; return; } goto L_004C2DB8; } }
L_004C31C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C31C8u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C31C8u) [[unlikely]] return; }
L_004C31C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C2DD8u | kUnwind; return; } goto L_004C2DD8; } }
L_004C31D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_004C3210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 12912u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 11328u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3240u); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x004C3240u) [[unlikely]] return; }
L_004C3240:
    st32((c.r[16].w[0] + 456u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 452u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 448u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C3270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004C3280:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_004C3354; } }
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[1].d[0] = 0ll < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_004C3300; } }
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 2;
L_004C32A8:
    c.r[9].d[0] = c.r[12].d[0] & 65535ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 3));
    c.r[3].d[0] = c.r[9].d[0] & 7ull;
    set32(c.r[6], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] << (c.r[3].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C32EC; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_004C3300; } }
L_004C32EC:
    set32(c.r[3], c.r[12].w[0] + 1u);
    c.r[12].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C32A8u | kUnwind; return; } goto L_004C32A8; } }
L_004C3300:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004C3390; } }
L_004C3320:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C3398; } }
L_004C334C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C33A4; } }
L_004C3354:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3300u | kUnwind; return; } goto L_004C3300; } }
L_004C3390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3320u | kUnwind; return; } goto L_004C3320; } }
L_004C3398:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C334Cu | kUnwind; return; } goto L_004C334C; } }
L_004C33A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C33B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C35EC; } }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0])));  if (t) { goto L_004C33FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C33F8u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C33F8u) [[unlikely]] return; }
L_004C33F8:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_004C33FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004C349C; } }
L_004C3404:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 7u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_004C3424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3420u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C3420u) [[unlikely]] return; }
L_004C3420:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_004C3424:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004C34D0; } }
L_004C342C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] << 4);  if (t) { goto L_004C344C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3448u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C3448u) [[unlikely]] return; }
L_004C3448:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_004C344C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004C34E0; } }
L_004C3454:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004C3514; } }
L_004C346C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C346Cu | kUnwind; return; } goto L_004C346C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_004C3518; } }
L_004C349C:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C34A8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C34A8u) [[unlikely]] return; }
L_004C34A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C34C8u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004C34C8u) [[unlikely]] return; }
L_004C34C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3404u | kUnwind; return; } goto L_004C3404; } }
L_004C34D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C34D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C34D8u) [[unlikely]] return; }
L_004C34D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C342Cu | kUnwind; return; } goto L_004C342C; } }
L_004C34E0:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C34ECu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C34ECu) [[unlikely]] return; }
L_004C34EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C350Cu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004C350Cu) [[unlikely]] return; }
L_004C350C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3454u | kUnwind; return; } goto L_004C3454; } }
L_004C3514:
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004C3518:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004C35B8; } }
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004C3524:
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_004C35A8; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[29].w[0] + 76u);
    set32(c.r[9], c.r[29].w[0] + 78u);
    c.budget -= 4;
L_004C3540:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 4;
L_004C3550:
    c.r[6].d[0] = ld16((c.r[8].w[0] + 4u));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[15], c.r[15].w[0] + 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    c.r[3].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], c.r[5].w[0] + c.r[11].w[0]);
    c.r[5].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[11], c.r[11].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[7].w[0]);
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3550u | kUnwind; return; } goto L_004C3550; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[3].d[0] = c.r[14].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3540u | kUnwind; return; } goto L_004C3540; } }
L_004C35A8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004C35F0; } }
L_004C35B8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C35BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C35D0u); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0041(c, 58u, depth + 1u); else { c.pc = 0x00304A80u; return; } if (c.pc != 0x004C35D0u) [[unlikely]] return; }
L_004C35D0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C35BCu | kUnwind; return; } goto L_004C35BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3524u | kUnwind; return; } goto L_004C3524; } }
L_004C35EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004C35F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C3610:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[6].d[0] = c.r[6].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F62B0u | kUnwind; return; } [[clang::musttail]] return unit_007D(c, 207u, depth); }
L_004C3620:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C364Cu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x004C364Cu) [[unlikely]] return; }
L_004C364C:
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
L_004C3680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004C36D0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C36B8; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_004C36B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C36B8u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x004C36B8u) [[unlikely]] return; }
L_004C36B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C36D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C36D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004C36D0u) [[unlikely]] return; }
L_004C36D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C36F0:
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
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004C3730; } }
L_004C3728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C37B0; } }
L_004C3730:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C3734:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C374Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 327u, depth + 1u); else { c.pc = 0x004C3BF0u; return; } if (c.pc != 0x004C374Cu) [[unlikely]] return; }
L_004C374C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C3774; } }
    c.budget -= 1;
L_004C3758:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3734u | kUnwind; return; } goto L_004C3734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3728u | kUnwind; return; } goto L_004C3728; } }
L_004C3774:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3758u | kUnwind; return; } goto L_004C3758; } }
L_004C37B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004C37D0:
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
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C3820; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C381Cu); set32(c.r[5], c.r[5].w[0] + 14800u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C381Cu) [[unlikely]] return; }
L_004C381C:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_004C3820:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004C3950; } }
L_004C3828:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0])));  if (t) { goto L_004C3840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C383Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C383Cu) [[unlikely]] return; }
L_004C383C:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004C3840:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004C398C; } }
L_004C3848:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004C3948; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004C3860:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C3888; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3884u); set32(c.r[5], c.r[5].w[0] + 13952u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C3884u) [[unlikely]] return; }
L_004C3884:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004C3888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3890u); set32(c.r[4], 0u + 2416u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C3890u) [[unlikely]] return; }
L_004C3890:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13856u);
    set32(c.r[6], c.r[6].w[0] + 13952u);
    set32(c.r[7], 0u + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C38B0u); set32(c.r[8], 0u + 25u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004C38B0u) [[unlikely]] return; }
L_004C38B0:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004C38C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 9992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C38D0u); set32(c.r[5], 0u + 65u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004C38D0u) [[unlikely]] return; }
L_004C38D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C38E0u); set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004C38E0u) [[unlikely]] return; }
L_004C38E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 25ll ? 1ull : 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 10u));
    set32(c.r[17], c.r[17].w[0] + 96u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 10u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C38C0u | kUnwind; return; } goto L_004C38C0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[18], c.r[18].w[0] + 12u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3860u | kUnwind; return; } goto L_004C3860; } }
    c.budget -= 1;
L_004C3948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_004C399C; } }
L_004C3950:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3964u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C3964u) [[unlikely]] return; }
L_004C3964:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14784u);
    set32(c.r[6], c.r[6].w[0] + 14800u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3984u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004C3984u) [[unlikely]] return; }
L_004C3984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3828u | kUnwind; return; } goto L_004C3828; } }
L_004C398C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3994u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004C3994u) [[unlikely]] return; }
L_004C3994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3848u | kUnwind; return; } goto L_004C3848; } }
L_004C399C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004C39C0:
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004C39D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C3A00; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004C3A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3A00u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004C3A00u) [[unlikely]] return; }
L_004C3A00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004C3A20:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004C3A98; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    set32(c.r[14], c.r[14].w[0] + 3376u);
    c.budget -= 4;
L_004C3A40:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_004C3A58:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[10], c.r[3].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[10].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004C3AA0; } }
L_004C3A70:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3A58u | kUnwind; return; } goto L_004C3A58; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3A40u | kUnwind; return; } goto L_004C3A40; } }
    c.budget -= 1;
L_004C3A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C3B08; } }
L_004C3AA0:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[12], c.r[10].w[0] + 8u);
    set32(c.r[11], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[10], c.r[11].w[0] << 5);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[13], c.r[14].w[0] + c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[13].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[13].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[13].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[13].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[13].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0] + 1064u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3A70u | kUnwind; return; } goto L_004C3A70; } }
L_004C3B08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004C3B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_004C3B20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004C3B90; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C3B50:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C3B78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3B70u); set32(c.r[5], c.r[5].w[0] + 13952u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C3B70u) [[unlikely]] return; }
L_004C3B70:
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 2;
L_004C3B78:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C3B50u | kUnwind; return; } goto L_004C3B50; } }
    c.budget -= 1;
L_004C3B90:
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C3BB0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3BACu); set32(c.r[5], c.r[5].w[0] + 14800u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004C3BACu) [[unlikely]] return; }
L_004C3BAC:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_004C3BB0:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C3BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3BC4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004C3BC4u) [[unlikely]] return; }
L_004C3BC4:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 1;
L_004C3BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C3BF0:
    set32(c.r[29], c.r[29].w[0] - 432u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 408u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[29].w[0] + 404u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 384u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[28] = c.r[2].w[0];
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x411D0000u);
    c.r[3].d[0] = c.r[2].d[0] | 7864ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[26] = c.r[2].w[0];
    c.f[27] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[24] = c.r[2].w[0];
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[29] = 0u;
    c.f[25] = c.r[3].w[0];
    c.f[23] = c.r[2].w[0];
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 49;
L_004C3CB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[29]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00B1(c, 11u, depth); } }
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[21]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[29]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[2].w[0] + 40u), c.f[20]);  if (t) { [[clang::musttail]] return unit_00B1(c, 11u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[1].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[3].w[0] + 80u);  if (t) { goto L_004C3EF0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C3EE0; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[29]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004C3EE0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C3EE0; } }
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[2], c.r[29].w[0] + 412u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    set32(c.r[7], c.r[29].w[0] + 428u);
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3D68u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 104u, depth + 1u); else { c.pc = 0x00202720u; return; } if (c.pc != 0x004C3D68u) [[unlikely]] return; }
L_004C3D68:
    c.f[1] = ld32((c.r[29].w[0] + 428u));
    c.f[0] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004C3E00; } }
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.f[1] = ld32((c.r[29].w[0] + 428u));
    set32(c.r[2], c.r[29].w[0] + 312u);
    c.f[2] = ld32((c.r[22].w[0]));
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    set32(c.r[7], c.r[29].w[0] + 424u);
    st32((c.r[29].w[0] + 304u), c.f[0]);
    set32(c.r[4], c.r[3].w[0] + 432u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[28], c.f[1]);
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld8((c.r[8].w[0] + 33u));
    st8((c.r[29].w[0] + 424u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 34u));
    set32(c.r[2], c.r[29].w[0] + 425u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 35u));
    set32(c.r[2], c.r[29].w[0] + 426u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 36u));
    set32(c.r[2], c.r[29].w[0] + 427u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3DECu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00498B50u; return; } if (c.pc != 0x004C3DECu) [[unlikely]] return; }
L_004C3DEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004C3EE0; } }
L_004C3E00:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[12] = c.f[29];
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[7], c.r[29].w[0] + 272u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 412u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[2].w[0]), c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), c.f[1]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3E80u); st32((c.r[29].w[0] + 256u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 170u, depth + 1u); else { c.pc = 0x00203F80u; return; } if (c.pc != 0x004C3E80u) [[unlikely]] return; }
L_004C3E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C3EE0; } }
    set32(c.r[2], c.r[29].w[0] + 288u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[29].w[0] + 420u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    set32(c.r[10], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 33u));
    c.r[8].d[0] = ld8((c.r[10].w[0] + 34u));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 35u));
    set32(c.r[4], c.r[2].w[0] + 432u);
    c.r[2].d[0] = ld8((c.r[10].w[0] + 36u));
    st8((c.r[29].w[0] + 420u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 421u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[29].w[0] + 422u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C3ECCu); st8((c.r[29].w[0] + 423u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 53u, depth + 1u); else { c.pc = 0x00498B50u; return; } if (c.pc != 0x004C3ECCu) [[unlikely]] return; }
L_004C3ECC:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_004C3EE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 4;
L_004C3EF0:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C3F38; } }
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    set32(c.r[2], c.r[29].w[0] + 412u);
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { [[clang::musttail]] return unit_00B1(c, 2u, depth); } }
L_004C3F38:
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.f[1] = ld32((c.r[3].w[0] + 80u));
    c.f[4] = ld32((c.r[3].w[0] + 88u));
    c.f[3] = ld32((c.r[3].w[0] + 84u));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.f[2] = 0u;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[2].w[0]), c.f[3]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[2].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 412u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 80u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[28].w[0] - 29672u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[27], c.f[1]);
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.budget -= 50;
    [[clang::musttail]] return unit_00B1(c, 1u, depth);
}

}

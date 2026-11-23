#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0072[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 21, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38,
    0, 39, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 48, 49, 0, 0, 50, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122,
    0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0,
    0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0,
    236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0,
    0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0,
};

void unit_0072(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C8000;
    case 2u: goto L_003C8010;
    case 3u: goto L_003C801C;
    case 4u: goto L_003C8024;
    case 5u: goto L_003C8034;
    case 6u: goto L_003C8040;
    case 7u: goto L_003C8058;
    case 8u: goto L_003C8070;
    case 9u: goto L_003C8090;
    case 10u: goto L_003C8098;
    case 11u: goto L_003C80A8;
    case 12u: goto L_003C80B8;
    case 13u: goto L_003C80C4;
    case 14u: goto L_003C80DC;
    case 15u: goto L_003C8198;
    case 16u: goto L_003C81AC;
    case 17u: goto L_003C81C4;
    case 18u: goto L_003C81F8;
    case 19u: goto L_003C8210;
    case 20u: goto L_003C8240;
    case 21u: goto L_003C8244;
    case 22u: goto L_003C8248;
    case 23u: goto L_003C8254;
    case 24u: goto L_003C8268;
    case 25u: goto L_003C82F8;
    case 26u: goto L_003C83AC;
    case 27u: goto L_003C8420;
    case 28u: goto L_003C8430;
    case 29u: goto L_003C843C;
    case 30u: goto L_003C8464;
    case 31u: goto L_003C8494;
    case 32u: goto L_003C84A4;
    case 33u: goto L_003C84B4;
    case 34u: goto L_003C84C4;
    case 35u: goto L_003C84D0;
    case 36u: goto L_003C84E0;
    case 37u: goto L_003C84F0;
    case 38u: goto L_003C84FC;
    case 39u: goto L_003C8504;
    case 40u: goto L_003C8508;
    case 41u: goto L_003C8520;
    case 42u: goto L_003C8560;
    case 43u: goto L_003C85B8;
    case 44u: goto L_003C85C0;
    case 45u: goto L_003C8664;
    case 46u: goto L_003C8698;
    case 47u: goto L_003C86E0;
    case 48u: goto L_003C86E4;
    case 49u: goto L_003C86E8;
    case 50u: goto L_003C86F4;
    case 51u: goto L_003C8708;
    case 52u: goto L_003C8788;
    case 53u: goto L_003C8790;
    case 54u: goto L_003C8798;
    case 55u: goto L_003C87AC;
    case 56u: goto L_003C8834;
    case 57u: goto L_003C883C;
    case 58u: goto L_003C8894;
    case 59u: goto L_003C88A0;
    case 60u: goto L_003C88D4;
    case 61u: goto L_003C8914;
    case 62u: goto L_003C8918;
    case 63u: goto L_003C8930;
    case 64u: goto L_003C8938;
    case 65u: goto L_003C89C8;
    case 66u: goto L_003C8A44;
    case 67u: goto L_003C8A4C;
    case 68u: goto L_003C8A54;
    case 69u: goto L_003C8ADC;
    case 70u: goto L_003C8AE4;
    case 71u: goto L_003C8B00;
    case 72u: goto L_003C8B54;
    case 73u: goto L_003C8B5C;
    case 74u: goto L_003C8B80;
    case 75u: goto L_003C8B88;
    case 76u: goto L_003C8BAC;
    case 77u: goto L_003C8C00;
    case 78u: goto L_003C8C08;
    case 79u: goto L_003C8C38;
    case 80u: goto L_003C8D5C;
    case 81u: goto L_003C8E28;
    case 82u: goto L_003C8E78;
    case 83u: goto L_003C8EFC;
    case 84u: goto L_003C8F04;
    case 85u: goto L_003C8F5C;
    case 86u: goto L_003C8F6C;
    case 87u: goto L_003C8F7C;
    case 88u: goto L_003C8F88;
    case 89u: goto L_003C8FB0;
    case 90u: goto L_003C8FE0;
    case 91u: goto L_003C8FF0;
    case 92u: goto L_003C9000;
    case 93u: goto L_003C9010;
    case 94u: goto L_003C901C;
    case 95u: goto L_003C902C;
    case 96u: goto L_003C903C;
    case 97u: goto L_003C9048;
    case 98u: goto L_003C9068;
    case 99u: goto L_003C9078;
    case 100u: goto L_003C9084;
    case 101u: goto L_003C9124;
    case 102u: goto L_003C9134;
    case 103u: goto L_003C9148;
    case 104u: goto L_003C9174;
    case 105u: goto L_003C91E4;
    case 106u: goto L_003C9230;
    case 107u: goto L_003C9264;
    case 108u: goto L_003C9274;
    case 109u: goto L_003C9280;
    case 110u: goto L_003C92B0;
    case 111u: goto L_003C945C;
    case 112u: goto L_003C94E4;
    case 113u: goto L_003C94EC;
    case 114u: goto L_003C9564;
    case 115u: goto L_003C9644;
    case 116u: goto L_003C969C;
    case 117u: goto L_003C96B0;
    case 118u: goto L_003C96C0;
    case 119u: goto L_003C96D0;
    case 120u: goto L_003C96DC;
    case 121u: goto L_003C96EC;
    case 122u: goto L_003C96FC;
    case 123u: goto L_003C9708;
    case 124u: goto L_003C9718;
    case 125u: goto L_003C9728;
    case 126u: goto L_003C9738;
    case 127u: goto L_003C9744;
    case 128u: goto L_003C9780;
    case 129u: goto L_003C9830;
    case 130u: goto L_003C9850;
    case 131u: goto L_003C986C;
    case 132u: goto L_003C98A8;
    case 133u: goto L_003C9920;
    case 134u: goto L_003C9928;
    case 135u: goto L_003C9938;
    case 136u: goto L_003C9970;
    case 137u: goto L_003C99F0;
    case 138u: goto L_003C9A40;
    case 139u: goto L_003C9A7C;
    case 140u: goto L_003C9B00;
    case 141u: goto L_003C9B20;
    case 142u: goto L_003C9B70;
    case 143u: goto L_003C9B8C;
    case 144u: goto L_003C9BAC;
    case 145u: goto L_003C9BBC;
    case 146u: goto L_003C9BD8;
    case 147u: goto L_003C9C50;
    case 148u: goto L_003C9C5C;
    case 149u: goto L_003C9C70;
    case 150u: goto L_003C9CA8;
    case 151u: goto L_003C9CFC;
    case 152u: goto L_003C9D0C;
    case 153u: goto L_003C9D18;
    case 154u: goto L_003C9D2C;
    case 155u: goto L_003C9D3C;
    case 156u: goto L_003C9D98;
    case 157u: goto L_003C9DA4;
    case 158u: goto L_003C9DB8;
    case 159u: goto L_003C9DE0;
    case 160u: goto L_003C9DFC;
    case 161u: goto L_003C9E08;
    case 162u: goto L_003C9E18;
    case 163u: goto L_003C9E28;
    case 164u: goto L_003C9E34;
    case 165u: goto L_003C9E50;
    case 166u: goto L_003C9E6C;
    case 167u: goto L_003C9E88;
    case 168u: goto L_003C9FD0;
    case 169u: goto L_003C9FF0;
    case 170u: goto L_003CA064;
    case 171u: goto L_003CA080;
    case 172u: goto L_003CA0DC;
    case 173u: goto L_003CA100;
    case 174u: goto L_003CA11C;
    case 175u: goto L_003CA130;
    case 176u: goto L_003CA148;
    case 177u: goto L_003CA188;
    case 178u: goto L_003CA198;
    case 179u: goto L_003CA1A8;
    case 180u: goto L_003CA1B4;
    case 181u: goto L_003CA1C4;
    case 182u: goto L_003CA1EC;
    case 183u: goto L_003CA1F8;
    case 184u: goto L_003CA340;
    case 185u: goto L_003CA3E8;
    case 186u: goto L_003CA420;
    case 187u: goto L_003CA430;
    case 188u: goto L_003CA44C;
    case 189u: goto L_003CA494;
    case 190u: goto L_003CA4A4;
    case 191u: goto L_003CA4B4;
    case 192u: goto L_003CA4C0;
    case 193u: goto L_003CA4F0;
    case 194u: goto L_003CA620;
    case 195u: goto L_003CA698;
    case 196u: goto L_003CA728;
    case 197u: goto L_003CA76C;
    case 198u: goto L_003CA7C0;
    case 199u: goto L_003CA7D4;
    case 200u: goto L_003CA7E8;
    case 201u: goto L_003CA840;
    case 202u: goto L_003CA864;
    case 203u: goto L_003CA880;
    case 204u: goto L_003CA8E0;
    case 205u: goto L_003CA908;
    case 206u: goto L_003CA918;
    case 207u: goto L_003CA94C;
    case 208u: goto L_003CA9AC;
    case 209u: goto L_003CA9B8;
    case 210u: goto L_003CA9DC;
    case 211u: goto L_003CA9E8;
    case 212u: goto L_003CA9F8;
    case 213u: goto L_003CAA08;
    case 214u: goto L_003CAA14;
    case 215u: goto L_003CAA1C;
    case 216u: goto L_003CAA24;
    case 217u: goto L_003CAA50;
    case 218u: goto L_003CAA68;
    case 219u: goto L_003CAA9C;
    case 220u: goto L_003CAAFC;
    case 221u: goto L_003CAB08;
    case 222u: goto L_003CAB2C;
    case 223u: goto L_003CAB38;
    case 224u: goto L_003CAB48;
    case 225u: goto L_003CAB58;
    case 226u: goto L_003CAB64;
    case 227u: goto L_003CAB6C;
    case 228u: goto L_003CAB84;
    case 229u: goto L_003CABB8;
    case 230u: goto L_003CAC18;
    case 231u: goto L_003CAC24;
    case 232u: goto L_003CAC48;
    case 233u: goto L_003CAC54;
    case 234u: goto L_003CAC64;
    case 235u: goto L_003CAC74;
    case 236u: goto L_003CAC80;
    case 237u: goto L_003CAC88;
    case 238u: goto L_003CAC98;
    case 239u: goto L_003CACB0;
    case 240u: goto L_003CAD28;
    case 241u: goto L_003CAD34;
    case 242u: goto L_003CAD40;
    case 243u: goto L_003CADA0;
    case 244u: goto L_003CADA8;
    case 245u: goto L_003CADB4;
    case 246u: goto L_003CADBC;
    case 247u: goto L_003CADDC;
    case 248u: goto L_003CADEC;
    case 249u: goto L_003CADF8;
    case 250u: goto L_003CAE08;
    case 251u: goto L_003CAE18;
    case 252u: goto L_003CAE24;
    case 253u: goto L_003CAE34;
    case 254u: goto L_003CAE44;
    case 255u: goto L_003CAE50;
    case 256u: goto L_003CAE60;
    case 257u: goto L_003CAE70;
    case 258u: goto L_003CAE7C;
    case 259u: goto L_003CAE90;
    case 260u: goto L_003CAEB8;
    case 261u: goto L_003CAEC8;
    case 262u: goto L_003CAED4;
    case 263u: goto L_003CAEF0;
    case 264u: goto L_003CAF10;
    case 265u: goto L_003CAF20;
    case 266u: goto L_003CAF2C;
    case 267u: goto L_003CAF60;
    case 268u: goto L_003CAFE4;
    case 269u: goto L_003CAFF4;
    case 270u: goto L_003CB164;
    case 271u: goto L_003CB1DC;
    case 272u: goto L_003CB200;
    case 273u: goto L_003CB218;
    case 274u: goto L_003CB230;
    case 275u: goto L_003CB270;
    case 276u: goto L_003CB280;
    case 277u: goto L_003CB294;
    case 278u: goto L_003CB2A8;
    case 279u: goto L_003CB2E8;
    case 280u: goto L_003CB2F4;
    case 281u: goto L_003CB31C;
    case 282u: goto L_003CB328;
    case 283u: goto L_003CB354;
    case 284u: goto L_003CB358;
    case 285u: goto L_003CB3B4;
    case 286u: goto L_003CB3C0;
    case 287u: goto L_003CB3C8;
    case 288u: goto L_003CB3E0;
    case 289u: goto L_003CB3E8;
    case 290u: goto L_003CB428;
    case 291u: goto L_003CB438;
    case 292u: goto L_003CB444;
    case 293u: goto L_003CB454;
    case 294u: goto L_003CB464;
    case 295u: goto L_003CB470;
    case 296u: goto L_003CB480;
    case 297u: goto L_003CB490;
    case 298u: goto L_003CB4B8;
    case 299u: goto L_003CB600;
    case 300u: goto L_003CB6A8;
    case 301u: goto L_003CB6B8;
    case 302u: goto L_003CB6C8;
    case 303u: goto L_003CB6D4;
    case 304u: goto L_003CB710;
    case 305u: goto L_003CB7D8;
    case 306u: goto L_003CB800;
    case 307u: goto L_003CB870;
    case 308u: goto L_003CB88C;
    case 309u: goto L_003CB920;
    case 310u: goto L_003CB95C;
    case 311u: goto L_003CB970;
    case 312u: goto L_003CB99C;
    case 313u: goto L_003CBAE0;
    case 314u: goto L_003CBB20;
    case 315u: goto L_003CBB48;
    case 316u: goto L_003CBB64;
    case 317u: goto L_003CBBB0;
    case 318u: goto L_003CBBD4;
    case 319u: goto L_003CBBF8;
    case 320u: goto L_003CBC24;
    case 321u: goto L_003CBC38;
    case 322u: goto L_003CBC44;
    case 323u: goto L_003CBC4C;
    case 324u: goto L_003CBC9C;
    case 325u: goto L_003CBCD8;
    case 326u: goto L_003CBCF0;
    case 327u: goto L_003CBD2C;
    case 328u: goto L_003CBD94;
    case 329u: goto L_003CBDA0;
    case 330u: goto L_003CBDB4;
    case 331u: goto L_003CBDC0;
    case 332u: goto L_003CBDC8;
    case 333u: goto L_003CBDF8;
    case 334u: goto L_003CBE04;
    case 335u: goto L_003CBF60;
    case 336u: goto L_003CBFE8;
    case 337u: goto L_003CBFF4;
    default: bad_entry(c, 0x003C8000u); return;
    }
L_003C8000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8010u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C8010u) [[unlikely]] return; }
L_003C8010:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C801Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C801Cu) [[unlikely]] return; }
L_003C801C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7E00u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 325u, depth); } }
L_003C8024:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7E5Cu | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 328u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7E3Cu | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 326u, depth); } }
L_003C8034:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 17296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7738u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 292u, depth); } }
L_003C8040:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C80CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8058u);  if (depth < kMaxDepth) unit_0094(c, 35u, depth + 1u); else { c.pc = 0x00450680u; return; } if (c.pc != 0x003C8058u) [[unlikely]] return; }
L_003C8058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C80CC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));  if (t) { goto L_003C80A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C8070:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 784u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003C8090u) [[unlikely]] return; }
L_003C8090:
    set32(c.r[3], 0u + 200u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_003C8098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C8504; } }
L_003C80A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C80A8u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C80A8u) [[unlikely]] return; }
L_003C80A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C80B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C80B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C80B8u) [[unlikely]] return; }
L_003C80B8:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C80C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C80C4u) [[unlikely]] return; }
L_003C80C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8070u | kUnwind; return; } goto L_003C8070; } }
L_003C80CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));  if (t) { goto L_003C8418; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C80DC:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[13], 0u - 5u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[9], 0u - 9u);
    c.r[2].d[0] = 0ull & 1ull;
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[14], c.r[2].w[0] << 2);
    set32(c.r[11], c.r[2].w[0] << 4);
    set32(c.r[10], 0u - 17u);
    set32(c.r[7], 0u - 3u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], ld32((c.r[2].w[0] + 784u)));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 2049u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[6], 0u + 20u);
    c.r[15].d[0] = ld8((c.r[2].w[0] + 64u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[2].w[0] + 64u));
    c.r[9].d[0] = c.r[13].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 64u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8198u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 59u, depth + 1u); else { c.pc = 0x002D8B10u; return; } if (c.pc != 0x003C8198u) [[unlikely]] return; }
L_003C8198:
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x003C81ACu) [[unlikely]] return; }
L_003C81AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 109u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81C4u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x003C81C4u) [[unlikely]] return; }
L_003C81C4:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[6], 0u + 15u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81F8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 372u, depth + 1u); else { c.pc = 0x0028B930u; return; } if (c.pc != 0x003C81F8u) [[unlikely]] return; }
L_003C81F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8210u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 179u, depth + 1u); else { c.pc = 0x002D28C0u; return; } if (c.pc != 0x003C8210u) [[unlikely]] return; }
L_003C8210:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8444; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8484; } }
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C844C; } }
L_003C8240:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C8244:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003C8248:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C848C; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003C8254:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C849C; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 1;
L_003C8268:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[3].w[0] + 807u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 35;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));  if (t) { goto L_003C84AC; } }
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_003C82F8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[8], ld32((c.r[28].w[0] - 29096u)));  if (t) { goto L_003C835C; } }
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] - 2592u));
    st32((c.r[7].w[0] + 208u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[5].w[0] - 2588u));
    st32((c.r[7].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] - 2584u));
    st32((c.r[7].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 2580u));
    st32((c.r[7].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31736u));
    st32((c.r[6].w[0] + 464u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31740u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 496u), c.f[0]);  if (t) { goto L_003C839C; } }
L_003C835C:
    c.f[0] = ld32((c.r[8].w[0] + 448u));
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[6].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 452u));
    st32((c.r[6].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 456u));
    st32((c.r[6].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 460u));
    st32((c.r[6].w[0] + 220u), c.f[0]);
    st32((c.r[4].w[0] + 464u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 496u), c.r[3].w[0]);
    c.budget -= 16;
L_003C839C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));  if (t) { goto L_003C84D8; } }
    set32(c.r[11], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C83AC:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[8], 0u - 5u);
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[6], 0u - 9u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[9], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[4], 0u - 17u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[10].w[0] + 784u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 64u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 64u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 64u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[11].w[0] + 64u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[11].w[0] + 64u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[11].w[0] + 64u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8098u | kUnwind; return; } goto L_003C8098; } }
L_003C8418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8420u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C8420u) [[unlikely]] return; }
L_003C8420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8430u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C8430u) [[unlikely]] return; }
L_003C8430:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C843Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C843Cu) [[unlikely]] return; }
L_003C843C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C80DCu | kUnwind; return; } goto L_003C80DC; } }
L_003C8444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8248u | kUnwind; return; } goto L_003C8248; } }
L_003C844C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[16].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8240u | kUnwind; return; } goto L_003C8240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8464u); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003C8464u) [[unlikely]] return; }
L_003C8464:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8244u | kUnwind; return; } goto L_003C8244; } }
L_003C8484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8248u | kUnwind; return; } goto L_003C8248; } }
L_003C848C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8494u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x003C8494u) [[unlikely]] return; }
L_003C8494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8254u | kUnwind; return; } goto L_003C8254; } }
L_003C849C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84A4u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C84A4u) [[unlikely]] return; }
L_003C84A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 31u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8268u | kUnwind; return; } goto L_003C8268; } }
L_003C84AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84B4u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C84B4u) [[unlikely]] return; }
L_003C84B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C84C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C84C4u) [[unlikely]] return; }
L_003C84C4:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C84D0u) [[unlikely]] return; }
L_003C84D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C82F8u | kUnwind; return; } goto L_003C82F8; } }
L_003C84D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84E0u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C84E0u) [[unlikely]] return; }
L_003C84E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C84F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C84F0u) [[unlikely]] return; }
L_003C84F0:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C84FCu) [[unlikely]] return; }
L_003C84FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C83ACu | kUnwind; return; } goto L_003C83AC; } }
L_003C8504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003C8508:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003C8520:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C8E30; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C8E38; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003C8560:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C9288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 40u));
    c.f[21] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.r[4].d[0] = ld16((c.r[2].w[0] + 380u));
    c.f[20] = ld32((c.r[2].w[0] + 360u));
    set32(c.r[5], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C8C28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 17360u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_0072[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C85B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C8C28; } }
L_003C85C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31704u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.f[0]);  if (t) { goto L_003C8788; } }
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[28].w[0] - 31712u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C8788; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8E44; } }
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_003C862C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C8698; } }
L_003C862C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C8E4C; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C8654; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_003C8654:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003C8664:
    c.f[2] = ld32((c.r[2].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C8694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C8698; } }
L_003C8694:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C8698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C8E58; } }
    c.f[0] = ld32((c.r[28].w[0] - 31708u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C8788; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8F90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8FD0; } }
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8F98; } }
L_003C86E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C86E4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003C86E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C8FD8; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003C86F4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C8FE8; } }
    set32(c.r[2], 0u + 230u);
    c.budget -= 1;
L_003C8708:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    set32(c.r[3], 0u - 2u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u + 9u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 32;
L_003C8788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C8C28; } }
L_003C8790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));  if (t) { goto L_003C8C2C; } }
L_003C8798:
    st8((c.r[2].w[0] + 807u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));  if (t) { goto L_003C8FF8; } }
    set32(c.r[11], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C87AC:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[8], 0u - 5u);
    set32(c.r[10], c.r[2].w[0] << 2);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 9u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[4], 0u - 17u);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[2], 0u - 33u);
    set32(c.r[11], ld32((c.r[10].w[0] + 784u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 64u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 64u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 64u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[11].w[0] + 64u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[11].w[0] + 64u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[11].w[0] + 64u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[11].w[0] + 64u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[11].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003C9024; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C8834:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_003C883C:
    set32(c.r[2], ld32((c.r[4].w[0] + 536u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_003C8858; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 536u), 0u);  if (t) { goto L_003C8868; } }
L_003C8858:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C883Cu | kUnwind; return; } goto L_003C883C; } }
L_003C8868:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 67u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C9050; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C9050; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C8894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9060; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C88A0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 852u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C8930; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003C8930; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C88D4:
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 736u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8918; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 784u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8918; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C908C; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C908C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8914u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003C8914u) [[unlikely]] return; }
L_003C8914:
    c.budget -= 1;
L_003C8918:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C88D4u | kUnwind; return; } goto L_003C88D4; } }
    c.budget -= 1;
L_003C8930:
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003C8938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], 0u + 1u);
    c.f[21] = c.r[2].w[0];
    c.f[2] = ld32((c.r[28].w[0] - 31736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[2].w[0] - 2584u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], 0u + 230u);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[21], c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 380u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C8C28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C8C28; } }
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[4], 0u - 5u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003C8C28; } }
L_003C89C8:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 49u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003C89E0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003C89FC; } }
L_003C89E0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_003C89FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C870000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = c.r[2].d[0] | 64697ull;
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C9098; } }
L_003C8A44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C8C28; } }
L_003C8A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C8C28; } }
L_003C8A54:
    c.f[0] = ld32((c.r[2].w[0] + 108u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 50u));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003C8A7C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003C8A98; } }
L_003C8A7C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003C8A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C9208; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C870000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 64697ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
L_003C8ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 281u, depth + 1u); else { c.pc = 0x003C7540u; return; } if (c.pc != 0x003C8AE4u) [[unlikely]] return; }
L_003C8AE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.f[0]);  if (t) { goto L_003C8C28; } }
L_003C8B00:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003C8B18; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003C8B34; } }
L_003C8B18:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003C8B34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C9238; } }
L_003C8B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 281u, depth + 1u); else { c.pc = 0x003C7540u; return; } if (c.pc != 0x003C8B5Cu) [[unlikely]] return; }
L_003C8B5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[21] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.f[0]);  if (t) { goto L_003C8C28; } }
L_003C8B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 281u, depth + 1u); else { c.pc = 0x003C7540u; return; } if (c.pc != 0x003C8B88u) [[unlikely]] return; }
L_003C8B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[21] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.f[0]);  if (t) { goto L_003C8C28; } }
L_003C8BAC:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003C8BC4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003C8BE0; } }
L_003C8BC4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003C8BE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C924C; } }
L_003C8C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8C08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 281u, depth + 1u); else { c.pc = 0x003C7540u; return; } if (c.pc != 0x003C8C08u) [[unlikely]] return; }
L_003C8C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[21] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 8;
L_003C8C28:
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C8C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));  if (t) { goto L_003C925C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C8C38:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[5].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[5].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[5].w[0] + 220u), c.f[0]);
    st32((c.r[3].w[0] + 464u), c.r[4].w[0]);
    c.budget -= 19;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[3].w[0] + 496u), c.r[2].w[0]);  if (t) { goto L_003C8D64; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DB80000u);
    c.r[2].d[0] = c.r[2].d[0] | 20972ull;
    c.f[5] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = ld32((c.r[16].w[0] + 24u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.f[4] = ld32((c.r[8].w[0] + 32u));
    c.f[1] = ld32((c.r[8].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C8CD0; } }
    c.f[4] = c.f[2];
    c.f[3] = c.f[2];
    c.budget -= 2;
L_003C8CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], ld32((c.r[8].w[0] + 344u)));
    c.f[8] = ld32((c.r[2].w[0] - 20412u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41840000u);
    c.r[6].d[0] = c.r[5].d[0] | 15099ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[7], ld32((c.r[7].w[0] + 208u)));
    c.f[2] = ld32((c.r[8].w[0] + 40u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[8]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[21]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[8]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[8]);
    c.f[6] = ld32((c.r[7].w[0] + 36u));
    c.f[5] = ld32((c.r[8].w[0] + 108u));
    c.f[4] = ld32((c.r[8].w[0] + 36u));
    c.f[3] = c.r[6].w[0];
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[8].w[0] + 32u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[8]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[7]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D5Cu); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x003C8D5Cu) [[unlikely]] return; }
L_003C8D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C8E28; } }
L_003C8D64:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[16].w[0] + 40u));
    c.f[6] = 0u;
    set32(c.r[2], 0u + 6u);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[6], c.r[4].w[0] + 32u);
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[5] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003C8DE0; } }
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C8DBC; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[6] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);  if (t) { goto L_003C8DE0; } }
L_003C8DBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C8DE0; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.budget -= 2;
L_003C8DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[4] = ld32((c.r[2].w[0] - 20412u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E28u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x003C8E28u) [[unlikely]] return; }
L_003C8E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003C928C; } }
L_003C8E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8560u | kUnwind; return; } goto L_003C8560; } }
L_003C8E38:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8560u | kUnwind; return; } goto L_003C8560; } }
L_003C8E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8698u | kUnwind; return; } goto L_003C8698; } }
L_003C8E4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 17296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8664u | kUnwind; return; } goto L_003C8664; } }
L_003C8E58:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = ld32((c.r[28].w[0] - 31700u));  if (t) { goto L_003C8F54; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 1;
L_003C8E78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 360u), 0u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[17].w[0] + 364u), c.f[20]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    set32(c.r[2], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 32;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 32u)));  if (t) { goto L_003C8F64; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C8EFC:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 148u);
    c.budget -= 2;
L_003C8F04:
    set32(c.r[2], ld32((c.r[5].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 552u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003C8F28; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 784u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 960u), c.r[3].w[0]);  if (t) { goto L_003C8F30; } }
    c.budget -= 1;
L_003C8F28:
    set32(c.r[2], ld32((c.r[5].w[0] + 784u)));
    st32((c.r[2].w[0] + 960u), c.r[17].w[0]);
    c.budget -= 2;
L_003C8F30:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8F04u | kUnwind; return; } goto L_003C8F04; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8788u | kUnwind; return; } goto L_003C8788; } }
L_003C8F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F5Cu); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C8F5Cu) [[unlikely]] return; }
L_003C8F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 49u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8E78u | kUnwind; return; } goto L_003C8E78; } }
L_003C8F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F6Cu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C8F6Cu) [[unlikely]] return; }
L_003C8F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C8F7Cu) [[unlikely]] return; }
L_003C8F7C:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C8F88u) [[unlikely]] return; }
L_003C8F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8EFCu | kUnwind; return; } goto L_003C8EFC; } }
L_003C8F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C86E8u | kUnwind; return; } goto L_003C86E8; } }
L_003C8F98:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], c.r[16].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C86E0u | kUnwind; return; } goto L_003C86E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FB0u); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003C8FB0u) [[unlikely]] return; }
L_003C8FB0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C86E4u | kUnwind; return; } goto L_003C86E4; } }
L_003C8FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C86E8u | kUnwind; return; } goto L_003C86E8; } }
L_003C8FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FE0u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x003C8FE0u) [[unlikely]] return; }
L_003C8FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C86F4u | kUnwind; return; } goto L_003C86F4; } }
L_003C8FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FF0u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C8FF0u) [[unlikely]] return; }
L_003C8FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8708u | kUnwind; return; } goto L_003C8708; } }
L_003C8FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9000u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C9000u) [[unlikely]] return; }
L_003C9000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9010u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C9010u) [[unlikely]] return; }
L_003C9010:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C901Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C901Cu) [[unlikely]] return; }
L_003C901C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C87ACu | kUnwind; return; } goto L_003C87AC; } }
L_003C9024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C902Cu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C902Cu) [[unlikely]] return; }
L_003C902C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C903C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C903Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C903Cu) [[unlikely]] return; }
L_003C903C:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9048u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C9048u) [[unlikely]] return; }
L_003C9048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8834u | kUnwind; return; } goto L_003C8834; } }
L_003C9050:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8930u | kUnwind; return; } goto L_003C8930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8894u | kUnwind; return; } goto L_003C8894; } }
L_003C9060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9068u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C9068u) [[unlikely]] return; }
L_003C9068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9078u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C9078u) [[unlikely]] return; }
L_003C9078:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9084u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C9084u) [[unlikely]] return; }
L_003C9084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C88A0u | kUnwind; return; } goto L_003C88A0; } }
L_003C908C:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8918u | kUnwind; return; } goto L_003C8918; } }
L_003C9098:
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[12], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8A44u | kUnwind; return; } goto L_003C8A44; } }
    c.r[11].d[0] = ld16((c.r[12].w[0] + 544u));
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[7], 0u - 17u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[4], 0u - 2049u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[3], 0u + 67u);
    set32(c.r[6], 0u + 30u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[12].w[0] + 544u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[12].w[0] + 544u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[12].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[12].w[0] + 544u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[12].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 24;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C91EC; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C91EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C91EC; } }
    set32(c.r[6], 0u + 50u);
    c.budget -= 1;
L_003C9124:
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9134u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 59u, depth + 1u); else { c.pc = 0x002D8B10u; return; } if (c.pc != 0x003C9134u) [[unlikely]] return; }
L_003C9134:
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9148u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x003C9148u) [[unlikely]] return; }
L_003C9148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[2], 0u + 67u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C91FC; } }
L_003C9174:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C91B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C91CC; } }
L_003C91B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003C91CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C91E4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 366u, depth + 1u); else { c.pc = 0x0028B840u; return; } if (c.pc != 0x003C91E4u) [[unlikely]] return; }
L_003C91E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8A44u | kUnwind; return; } goto L_003C8A44; } }
L_003C91EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9124u | kUnwind; return; } goto L_003C9124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 50u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9124u | kUnwind; return; } goto L_003C9124; } }
L_003C91FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9174u | kUnwind; return; } goto L_003C9174; } }
L_003C9208:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 111u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    st8((c.r[2].w[0] + 807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9230u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x003C9230u) [[unlikely]] return; }
L_003C9230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8ADCu | kUnwind; return; } goto L_003C8ADC; } }
L_003C9238:
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 807u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8B54u | kUnwind; return; } goto L_003C8B54; } }
L_003C924C:
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 807u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8C00u | kUnwind; return; } goto L_003C8C00; } }
L_003C925C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9264u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C9264u) [[unlikely]] return; }
L_003C9264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9274u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C9274u) [[unlikely]] return; }
L_003C9274:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9280u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C9280u) [[unlikely]] return; }
L_003C9280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8C38u | kUnwind; return; } goto L_003C8C38; } }
L_003C9288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C928C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C92B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[15], 0u - 9u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[13], 0u - 17u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[21].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[24], c.r[21].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[11], 0u - 33u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[21].w[0] << 5);
    set32(c.r[9], 0u - 2049u);
    set32(c.r[10], c.r[21].w[0] << 11);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 148u);
    set32(c.r[7], c.r[7].w[0] - 7376u);
    set32(c.r[22], 0u - 2u);
    set32(c.r[3], 0u - 3u);
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], c.r[21].w[0] << 1);
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 68u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[22].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[21].d[0];
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 72u), 0u);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[23].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[19].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[20].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 80;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_003C93F8; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_003C93F8:
    st8((c.r[18].w[0] + 56u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[8].d[0] = ld8((c.r[17].w[0] + 524u));
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 129u);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 524u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 526u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 56u)));  if (t) { goto L_003C96B8; } }
    set32(c.r[12], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C945C:
    c.r[2].d[0] = c.r[19].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[9], 0u - 5u);
    set32(c.r[11], c.r[2].w[0] << 2);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], 0u - 9u);
    set32(c.r[6], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] << 5);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[5], 0u - 17u);
    set32(c.r[2], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[3], 0u - 33u);
    set32(c.r[2], ld32((c.r[2].w[0] + 784u)));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 64u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 64u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 64u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 64u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C96E4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C94E4:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 148u);
    c.budget -= 2;
L_003C94EC:
    set32(c.r[2], ld32((c.r[5].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 552u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003C9510; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 784u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 960u), c.r[3].w[0]);  if (t) { goto L_003C9518; } }
    c.budget -= 1;
L_003C9510:
    set32(c.r[2], ld32((c.r[5].w[0] + 784u)));
    st32((c.r[2].w[0] + 960u), c.r[17].w[0]);
    c.budget -= 2;
L_003C9518:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C94ECu | kUnwind; return; } goto L_003C94EC; } }
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0] + 16u), c.f[3]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C9710; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 1;
L_003C9564:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u - 2u);
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[3] = c.r[2].w[0];
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], 0u - 5u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], 0u + 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    st8((c.r[17].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 52u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    st32((c.r[18].w[0] + 48u), 0u);
    st8((c.r[17].w[0] + 807u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 44u));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 55;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 56u)));  if (t) { goto L_003C9720; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C9644:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[7], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 112u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[7].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[7].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[7].w[0] + 220u), c.f[0]);
    st32((c.r[3].w[0] + 464u), c.r[6].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C969Cu); st32((c.r[3].w[0] + 496u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A0(c, 200u, depth + 1u); else { c.pc = 0x00482BC0u; return; } if (c.pc != 0x003C969Cu) [[unlikely]] return; }
L_003C969C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C96B0; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96B0u); set32(c.r[4], c.r[18].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x003C96B0u) [[unlikely]] return; }
L_003C96B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C974C; } }
L_003C96B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96C0u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C96C0u) [[unlikely]] return; }
L_003C96C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C96D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C96D0u) [[unlikely]] return; }
L_003C96D0:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C96DCu) [[unlikely]] return; }
L_003C96DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C945Cu | kUnwind; return; } goto L_003C945C; } }
L_003C96E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96ECu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C96ECu) [[unlikely]] return; }
L_003C96EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C96FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C96FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C96FCu) [[unlikely]] return; }
L_003C96FC:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9708u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C9708u) [[unlikely]] return; }
L_003C9708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C94E4u | kUnwind; return; } goto L_003C94E4; } }
L_003C9710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9718u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C9718u) [[unlikely]] return; }
L_003C9718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9564u | kUnwind; return; } goto L_003C9564; } }
L_003C9720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9728u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C9728u) [[unlikely]] return; }
L_003C9728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9738u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C9738u) [[unlikely]] return; }
L_003C9738:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9744u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C9744u) [[unlikely]] return; }
L_003C9744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9644u | kUnwind; return; } goto L_003C9644; } }
L_003C974C:
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
L_003C9780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C9830; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 7344u);
    set32(c.r[12], 0u - 33u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[13], c.r[2].w[0] << 5);
    set32(c.r[15], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], c.r[2].w[0] << 7);
    set32(c.r[10], 0u - 65u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[8], 0u - 129u);
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[14].d[0] = ld8((c.r[15].w[0] + 526u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[15].w[0] + 526u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[13], ld32((c.r[16].w[0] + 4u)));
    c.r[12].d[0] = ld8((c.r[13].w[0] + 523u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[13].w[0] + 523u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[13].w[0] + 523u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[13].w[0] + 523u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[16].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9830u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C9830u) [[unlikely]] return; }
L_003C9830:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C986Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C986Cu) [[unlikely]] return; }
L_003C986C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(230ll);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C9940; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C9930; } }
    set32(c.r[3], 0u + 230u);
    c.budget -= 1;
L_003C98A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_003C9920:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003C9948; } }
L_003C9928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003C9958; } }
L_003C9930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9938u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C9938u) [[unlikely]] return; }
L_003C9938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C98A8u | kUnwind; return; } goto L_003C98A8; } }
L_003C9940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9920u | kUnwind; return; } goto L_003C9920; } }
L_003C9948:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 356u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9928u | kUnwind; return; } goto L_003C9928; } }
L_003C9958:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C9970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[0] = c.r[5].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], 0u - 5u);
    set32(c.r[10], ld32((c.r[4].w[0] + 4u)));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[10].w[0] + 48u), 0u);
    st32((c.r[10].w[0] + 52u), 0u);
    st32((c.r[10].w[0] + 56u), 0u);
    st32((c.r[10].w[0] + 60u), c.f[1]);
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 32;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 20u), c.f[1]);  if (t) { goto L_003C9A38; } }
L_003C99F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 526u));
    set32(c.r[6], c.r[3].w[0] + 526u);
    c.r[3].d[0] = c.r[5].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C9B08; } }
    c.r[3].d[0] = c.r[5].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C9B08; } }
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003C9B0C; } }
L_003C9A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A40u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C9A40u) [[unlikely]] return; }
L_003C9A40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(230ll);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C99F0u | kUnwind; return; } goto L_003C99F0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C9AF8; } }
    set32(c.r[3], 0u + 230u);
    c.budget -= 1;
L_003C9A7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C99F0u | kUnwind; return; } goto L_003C99F0; } }
L_003C9AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B00u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C9B00u) [[unlikely]] return; }
L_003C9B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9A7Cu | kUnwind; return; } goto L_003C9A7C; } }
L_003C9B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C9B0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C9B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C9C80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], 0u + 200u);
    set32(c.r[7], 0u + 49u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 762u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B70u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x003C9B70u) [[unlikely]] return; }
L_003C9B70:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[2].w[0] + 808u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x003C9B8Cu) [[unlikely]] return; }
L_003C9B8C:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C9DC0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9CF4; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C9BAC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C9BF0; } }
L_003C9BBC:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 784u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C9D20; } }
L_003C9BD8:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9BBCu | kUnwind; return; } goto L_003C9BBC; } }
L_003C9BF0:
    set32(c.r[10], ld32((c.r[17].w[0] + 848u)));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[9], ld32((c.r[10].w[0] + 28u)));
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
    set32(c.r[2], ld32((c.r[10].w[0] + 28u)));
    set32(c.r[16], c.r[2].w[0] + 544u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003C9C50u) [[unlikely]] return; }
L_003C9C50:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003C9C5Cu) [[unlikely]] return; }
L_003C9C5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C9C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C70u); set32(c.r[5], ld32((c.r[16].w[0] + 120u)));  if (depth < kMaxDepth) unit_0070(c, 160u, depth + 1u); else { c.pc = 0x003C2090u; return; } if (c.pc != 0x003C9C70u) [[unlikely]] return; }
L_003C9C70:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9DC0; } }
L_003C9C80:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 200u);
    set32(c.r[7], 0u + 48u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CA8u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x003C9CA8u) [[unlikely]] return; }
L_003C9CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], 0u - 2049u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22814u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[3].w[0] + 29166u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_003C9CD8; } }
    set32(c.r[16], 0u + 110u);
    c.budget -= 1;
L_003C9CD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9B70u | kUnwind; return; } goto L_003C9B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9B70u | kUnwind; return; } goto L_003C9B70; } }
L_003C9CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CFCu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C9CFCu) [[unlikely]] return; }
L_003C9CFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C9D0Cu) [[unlikely]] return; }
L_003C9D0C:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C9D18u) [[unlikely]] return; }
L_003C9D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9BACu | kUnwind; return; } goto L_003C9BAC; } }
L_003C9D20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D2Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003C9D2Cu) [[unlikely]] return; }
L_003C9D2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D3Cu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003C9D3Cu) [[unlikely]] return; }
L_003C9D3C:
    set32(c.r[9], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
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
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[16], c.r[2].w[0] + 544u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003C9D98u) [[unlikely]] return; }
L_003C9D98:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9DA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003C9DA4u) [[unlikely]] return; }
L_003C9DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9BD8u | kUnwind; return; } goto L_003C9BD8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9DB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 160u, depth + 1u); else { c.pc = 0x003C2090u; return; } if (c.pc != 0x003C9DB8u) [[unlikely]] return; }
L_003C9DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9BD8u | kUnwind; return; } goto L_003C9BD8; } }
L_003C9DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C9DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C9E10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C9DFC:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E08u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 253u, depth + 1u); else { c.pc = 0x003D3BF0u; return; } if (c.pc != 0x003C9E08u) [[unlikely]] return; }
L_003C9E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C9E3C; } }
L_003C9E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E18u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C9E18u) [[unlikely]] return; }
L_003C9E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C9E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C9E28u) [[unlikely]] return; }
L_003C9E28:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C9E34u) [[unlikely]] return; }
L_003C9E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9DFCu | kUnwind; return; } goto L_003C9DFC; } }
L_003C9E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 59u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E6Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x003C9E6Cu) [[unlikely]] return; }
L_003C9E6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6640u);
    set32(c.r[4], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 7;
L_003C9E88:
    st32((c.r[4].w[0]), 0u);
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[7], c.r[16].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st8((c.r[7].w[0] + 912u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 752u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[7], c.r[16].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[6], c.r[5].w[0] + 2u);
    st8((c.r[7].w[0] + 912u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    st32((c.r[3].w[0] + 756u), c.r[2].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[8], c.r[16].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    set32(c.r[6], c.r[5].w[0] + 3u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    st8((c.r[8].w[0] + 912u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st32((c.r[3].w[0] + 760u), c.r[2].w[0]);
    set32(c.r[7], c.r[16].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    set32(c.r[6], c.r[5].w[0] + 4u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st8((c.r[7].w[0] + 912u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], c.r[16].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 764u), c.r[2].w[0]);
    set32(c.r[6], c.r[5].w[0] + 5u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    st32((c.r[4].w[0] + 68u), 0u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st32((c.r[4].w[0] + 72u), 0u);
    set32(c.r[9], c.r[16].w[0] + c.r[6].w[0]);
    st8((c.r[10].w[0] + 912u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[5].w[0] + 6u);
    st32((c.r[3].w[0] + 768u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[8], c.r[16].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[6], c.r[5].w[0] + 7u);
    st8((c.r[9].w[0] + 912u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    st32((c.r[3].w[0] + 772u), c.r[2].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st32((c.r[4].w[0] + 96u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].d[0] = c.r[5].d[0] << 56;
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[7], c.r[16].w[0] + c.r[6].w[0]);
    st8((c.r[8].w[0] + 912u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    st32((c.r[3].w[0] + 776u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].sd[0] < 40ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st8((c.r[7].w[0] + 912u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 128u);
    st32((c.r[3].w[0] + 780u), c.r[2].w[0]);
    c.budget -= 78;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9E88u | kUnwind; return; } goto L_003C9E88; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9FD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C9FD0u) [[unlikely]] return; }
L_003C9FD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 7312u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C9FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003CA064; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 6640u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003CA04C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003CA04C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003CA04C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003CA04C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003CA064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA064u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003CA064u) [[unlikely]] return; }
L_003CA064:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA080:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[17], c.r[3].w[0] + 544u);
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA0E4; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA0E4; } }
L_003CA0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003CA3F4; } }
L_003CA0E4:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 85u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA1D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 84u)));  if (t) { goto L_003CA190; } }
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_003CA100:
    set32(c.r[16], ld32((c.r[28].w[0] - 29096u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 784u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA11Cu); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CA11Cu) [[unlikely]] return; }
L_003CA11C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003CA160; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CA130:
    set32(c.r[4], ld32((c.r[17].w[0] + 784u)));
    set32(c.r[3], 0u + 6u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003CA1BC; } }
    c.budget -= 1;
L_003CA148:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA130u | kUnwind; return; } goto L_003CA130; } }
    c.budget -= 1;
L_003CA160:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 743u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA188; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 848u)));
    set32(c.r[3], 0u + 6u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003CA188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA188u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CA188u) [[unlikely]] return; }
L_003CA188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 85u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA0DCu | kUnwind; return; } goto L_003CA0DC; } }
L_003CA190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA198u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CA198u) [[unlikely]] return; }
L_003CA198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CA1A8u) [[unlikely]] return; }
L_003CA1A8:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CA1B4u) [[unlikely]] return; }
L_003CA1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA100u | kUnwind; return; } goto L_003CA100; } }
L_003CA1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CA1C4u) [[unlikely]] return; }
L_003CA1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA148u | kUnwind; return; } goto L_003CA148; } }
    c.budget -= 1;
L_003CA1D0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8u));
    set32(c.r[3], 0u + 165u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA3F0; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003CA1ECu) [[unlikely]] return; }
L_003CA1EC:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003CA1F8u) [[unlikely]] return; }
L_003CA1F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CA3F0; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 120u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 27648u);
    set32(c.r[21], 0u - 5u);
    set32(c.r[22], c.r[3].w[0] << 2);
    set32(c.r[25], 0u - 9u);
    set32(c.r[19], c.r[3].w[0] << 3);
    set32(c.r[14], 0u - 17u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[12], 0u - 33u);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[13], c.r[3].w[0] << 5);
    c.r[20].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[11], c.r[3].w[0] << 11);
    set32(c.r[10], 0u - 2049u);
    set32(c.r[9], 0u + 165u);
    set32(c.r[8], c.r[8].w[0] - 7760u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[6], 0u - 2u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[30], 0u - 3u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[21].d[0];
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[20].d[0] = c.r[20].d[0] | c.r[22].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[20].d[0] = ld16((c.r[18].w[0]));
    c.r[20].d[0] = c.r[20].d[0] & c.r[25].d[0];
    c.r[19].d[0] = c.r[20].d[0] | c.r[19].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[18].w[0]));
    c.r[14].d[0] = c.r[19].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[18].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[13].d[0] = c.r[14].d[0] | c.r[13].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[18].w[0]));
    c.r[10].d[0] = c.r[13].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[18].w[0] + 12u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 736u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[12].d[0];
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 524u));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[24].d[0];
    st8((c.r[17].w[0] + 524u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 526u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[30].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], 0u + 235u);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 380u));
    c.budget -= 75;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA3B8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA3E0; } }
    set32(c.r[3], 0u + 235u);
    c.budget -= 1;
L_003CA340:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_003CA3B8:
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = 0ull & 1ull;
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 526u));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA0DCu | kUnwind; return; } goto L_003CA0DC; } }
L_003CA3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA3E8u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003CA3E8u) [[unlikely]] return; }
L_003CA3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 235u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA340u | kUnwind; return; } goto L_003CA340; } }
L_003CA3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003CA3F4:
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
L_003CA420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CA430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CA49C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_003CA44C:
    set32(c.r[3], 0u + 38u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], ld32((c.r[28].w[0] - 29096u)));  if (t) { goto L_003CA4C8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CA484; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 816u), c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003CA484:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 531u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
L_003CA494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CA4D4; } }
L_003CA49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA4A4u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CA4A4u) [[unlikely]] return; }
L_003CA4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA4B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA4B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CA4B4u) [[unlikely]] return; }
L_003CA4B4:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA4C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CA4C0u) [[unlikely]] return; }
L_003CA4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA44Cu | kUnwind; return; } goto L_003CA44C; } }
L_003CA4C8:
    st32((c.r[5].w[0] + 844u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 7u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA494u | kUnwind; return; } goto L_003CA494; } }
L_003CA4D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CA4F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_003CA810; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA810; } }
    c.r[4].d[0] = ld16((c.r[6].w[0] + 380u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[6].w[0] + 344u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 57;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CA810; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 51u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003CA580; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003CA59C; } }
L_003CA580:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003CA59C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 50u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    c.f[2] = ld32((c.r[6].w[0] + 360u));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003CA5C4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003CA5E0; } }
L_003CA5C4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003CA5E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CA810; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA810; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 1416u)));
    c.f[20] = ld32((c.r[19].w[0] + 1448u));
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003CA7F8; } }
L_003CA620:
    set32(c.r[4], ld32((c.r[19].w[0] + 1400u)));
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 1408u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 1448u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[20], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA810; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CA800; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003CA688; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA688; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA688:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003CA800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003CA800; } }
L_003CA698:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[3], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA7E8; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA7E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA7E8; } }
    set32(c.r[3], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA7E8; } }
    set32(c.r[3], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA7E8; } }
    set32(c.r[3], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA7E8; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA7E8; } }
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA7E8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 552u));
    set32(c.r[3], 0u + 62u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CA7E8; } }
    c.f[3] = ld32((c.r[17].w[0] + 112u));
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA728u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x003CA728u) [[unlikely]] return; }
L_003CA728:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.f[2] = c.f[0] & fp::kAbs;
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA7E8; } }
    set32(c.r[6], c.r[4].w[0] + 32u);
    set32(c.r[5], 0u + 109u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA76Cu); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x003CA76Cu) [[unlikely]] return; }
L_003CA76C:
    c.r[10].d[0] = ld16((c.r[17].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[17].w[0] + 544u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[17].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0] + 544u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA7C0u); st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 369u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x003CA7C0u) [[unlikely]] return; }
L_003CA7C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 20u);
    set32(c.r[17], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA7D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 59u, depth + 1u); else { c.pc = 0x002D8B10u; return; } if (c.pc != 0x003CA7D4u) [[unlikely]] return; }
L_003CA7D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA7E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x003CA7E8u) [[unlikely]] return; }
L_003CA7E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA620u | kUnwind; return; } goto L_003CA620; } }
L_003CA7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003CA814; } }
L_003CA800:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA7E8u | kUnwind; return; } goto L_003CA7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA698u | kUnwind; return; } goto L_003CA698; } }
L_003CA810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003CA814:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CA840:
    c.r[9].d[0] = ld8((c.r[5].w[0] + 529u));
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull & 1ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], 0u + 6u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; st8((c.r[5].w[0] + 529u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_003CA86C; } }
L_003CA864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA874; } }
L_003CA86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 964u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA864u | kUnwind; return; } goto L_003CA864; } }
L_003CA874:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CA880:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 28u)));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 808u));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003CAF34; } }
    c.r[5].d[0] = ld8((c.r[19].w[0] + 220u));
    set32(c.r[3], 0u + 68u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CADC4; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003CADC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003CADC4; } }
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_003CA8E0:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CAF34; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 17440u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_0072[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CA908:
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 66u)));  if (t) { goto L_003CADD4; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003CA918:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 784u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CA9E8; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 65u));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CA9E8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA94Cu); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003CA94Cu) [[unlikely]] return; }
L_003CA94C:
    set32(c.r[9], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
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
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 66u)));
    set32(c.r[21], c.r[2].w[0] + 544u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9ACu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003CA9ACu) [[unlikely]] return; }
L_003CA9AC:
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9B8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003CA9B8u) [[unlikely]] return; }
L_003CA9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CA9DC; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 120u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9DCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0071(c, 39u, depth + 1u); else { c.pc = 0x003C4680u; return; } if (c.pc != 0x003CA9DCu) [[unlikely]] return; }
L_003CA9DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9E8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CA9E8u) [[unlikely]] return; }
L_003CA9E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9F8u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x002E7C10u; return; } if (c.pc != 0x003CA9F8u) [[unlikely]] return; }
L_003CA9F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA08u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x003CAA08u) [[unlikely]] return; }
L_003CAA08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA14u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 227u, depth + 1u); else { c.pc = 0x002E7C00u; return; } if (c.pc != 0x003CAA14u) [[unlikely]] return; }
L_003CAA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003CAF38; } }
L_003CAA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF34; } }
L_003CAA24:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], ld32((c.r[8].w[0] + 840u)));  if (t) { goto L_003CAF34; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 17408u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003C8000u < 16384u) { entry = entries_0072[(t - 0x003C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CAA50:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003CAF34; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 66u)));  if (t) { goto L_003CAE00; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003CAA68:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 784u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CAB38; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 65u));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CAB38; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAA9Cu); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003CAA9Cu) [[unlikely]] return; }
L_003CAA9C:
    set32(c.r[9], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
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
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 66u)));
    set32(c.r[21], c.r[2].w[0] + 544u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAAFCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003CAAFCu) [[unlikely]] return; }
L_003CAAFC:
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB08u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003CAB08u) [[unlikely]] return; }
L_003CAB08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAB2C; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 120u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB2Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 39u, depth + 1u); else { c.pc = 0x003C4680u; return; } if (c.pc != 0x003CAB2Cu) [[unlikely]] return; }
L_003CAB2C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB38u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CAB38u) [[unlikely]] return; }
L_003CAB38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB48u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x002E7C10u; return; } if (c.pc != 0x003CAB48u) [[unlikely]] return; }
L_003CAB48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB58u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x003CAB58u) [[unlikely]] return; }
L_003CAB58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB64u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 227u, depth + 1u); else { c.pc = 0x002E7C00u; return; } if (c.pc != 0x003CAB64u) [[unlikely]] return; }
L_003CAB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CADBC; } }
L_003CAB6C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003CAF34; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 66u)));  if (t) { goto L_003CAE2C; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003CAB84:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 784u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CAC54; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 65u));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CAC54; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CABB8u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x003CABB8u) [[unlikely]] return; }
L_003CABB8:
    set32(c.r[9], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
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
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 66u)));
    set32(c.r[21], c.r[2].w[0] + 544u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC18u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003CAC18u) [[unlikely]] return; }
L_003CAC18:
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC24u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003CAC24u) [[unlikely]] return; }
L_003CAC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAC48; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 120u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 39u, depth + 1u); else { c.pc = 0x003C4680u; return; } if (c.pc != 0x003CAC48u) [[unlikely]] return; }
L_003CAC48:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC54u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CAC54u) [[unlikely]] return; }
L_003CAC54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC64u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 228u, depth + 1u); else { c.pc = 0x002E7C10u; return; } if (c.pc != 0x003CAC64u) [[unlikely]] return; }
L_003CAC64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC74u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x003CAC74u) [[unlikely]] return; }
L_003CAC74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC80u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 227u, depth + 1u); else { c.pc = 0x002E7C00u; return; } if (c.pc != 0x003CAC80u) [[unlikely]] return; }
L_003CAC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CADBC; } }
L_003CAC88:
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAE58; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003CAC98:
    st32((c.r[18].w[0] + 36u), c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 530u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003CAD58; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003CACB0:
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAD40; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 752u)));
    set32(c.r[3], 0u + 68u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CACE8; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CACE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003CACE8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003CAD40; } }
    set32(c.r[20], ld32((c.r[19].w[0] + 784u)));
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CAE84; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CAE84; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CAE84; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CAE84; } }
L_003CAD28:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAD34u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CAD34u) [[unlikely]] return; }
L_003CAD34:
    st32((c.r[20].w[0] + 100u), 0u);
    st8((c.r[20].w[0] + 104u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 3;
L_003CAD40:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 530u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CACB0u | kUnwind; return; } goto L_003CACB0; } }
    c.budget -= 1;
L_003CAD58:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 743u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAF34; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 848u)));
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CAEE0; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CAEE0; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CAEE0; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CAEE0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CADA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CADA8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CADA8u) [[unlikely]] return; }
L_003CADA8:
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_003CADBC; } }
L_003CADB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF34; } }
L_003CADBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAF34; } }
L_003CADC4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAA24u | kUnwind; return; } goto L_003CAA24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA8E0u | kUnwind; return; } goto L_003CA8E0; } }
L_003CADD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CADDCu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CADDCu) [[unlikely]] return; }
L_003CADDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CADEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CADECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CADECu) [[unlikely]] return; }
L_003CADEC:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CADF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CADF8u) [[unlikely]] return; }
L_003CADF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA918u | kUnwind; return; } goto L_003CA918; } }
L_003CAE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE08u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CAE08u) [[unlikely]] return; }
L_003CAE08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CAE18u) [[unlikely]] return; }
L_003CAE18:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CAE24u) [[unlikely]] return; }
L_003CAE24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAA68u | kUnwind; return; } goto L_003CAA68; } }
L_003CAE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE34u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CAE34u) [[unlikely]] return; }
L_003CAE34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAE44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CAE44u) [[unlikely]] return; }
L_003CAE44:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CAE50u) [[unlikely]] return; }
L_003CAE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAB84u | kUnwind; return; } goto L_003CAB84; } }
L_003CAE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE60u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CAE60u) [[unlikely]] return; }
L_003CAE60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAE70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CAE70u) [[unlikely]] return; }
L_003CAE70:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CAE7Cu) [[unlikely]] return; }
L_003CAE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAC98u | kUnwind; return; } goto L_003CAC98; } }
L_003CAE84:
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAEB0; } }
L_003CAE90:
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAD40u | kUnwind; return; } goto L_003CAD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAD28u | kUnwind; return; } goto L_003CAD28; } }
    c.budget -= 1;
L_003CAEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAEB8u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CAEB8u) [[unlikely]] return; }
L_003CAEB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAEC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CAEC8u) [[unlikely]] return; }
L_003CAEC8:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAED4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CAED4u) [[unlikely]] return; }
L_003CAED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAE90u | kUnwind; return; } goto L_003CAE90; } }
    c.budget -= 1;
L_003CAEE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAF08; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003CAEF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CAF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CADA0u | kUnwind; return; } goto L_003CADA0; } }
L_003CAF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAF10u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CAF10u) [[unlikely]] return; }
L_003CAF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAF20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CAF20u) [[unlikely]] return; }
L_003CAF20:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAF2Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CAF2Cu) [[unlikely]] return; }
L_003CAF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAEF0u | kUnwind; return; } goto L_003CAEF0; } }
L_003CAF34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003CAF38:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CAF60:
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
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 105u)));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] <= 0; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CB418; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[20].w[0] + 96u));
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 96u), c.f[1]);  if (t) { goto L_003CB418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 105u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    st8((c.r[20].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAFE4u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 105u)));  if (depth < kMaxDepth) unit_0088(c, 23u, depth + 1u); else { c.pc = 0x004200C0u; return; } if (c.pc != 0x003CAFE4u) [[unlikely]] return; }
L_003CAFE4:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[20].w[0] + 112u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
L_003CAFF4:
    st32((c.r[5].w[0]), 0u);
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[8], c.r[20].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 8u), 0u);
    st8((c.r[8].w[0] + 912u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0] + 752u), c.r[3].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    st32((c.r[5].w[0] + 16u), 0u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[5].w[0] + 20u), 0u);
    set32(c.r[8], c.r[20].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 24u), 0u);
    set32(c.r[7], c.r[6].w[0] + 2u);
    st8((c.r[8].w[0] + 912u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    st32((c.r[4].w[0] + 756u), c.r[3].w[0]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[5].w[0] + 32u), 0u);
    set32(c.r[9], c.r[20].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 36u), 0u);
    set32(c.r[7], c.r[6].w[0] + 3u);
    st32((c.r[5].w[0] + 40u), 0u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    st8((c.r[9].w[0] + 912u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[4].w[0] + 760u), c.r[3].w[0]);
    set32(c.r[8], c.r[20].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 48u), 0u);
    set32(c.r[7], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0] + 52u), 0u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    st32((c.r[5].w[0] + 56u), 0u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st8((c.r[8].w[0] + 912u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], c.r[20].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 764u), c.r[3].w[0]);
    set32(c.r[7], c.r[6].w[0] + 5u);
    st32((c.r[5].w[0] + 64u), 0u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    st32((c.r[5].w[0] + 68u), 0u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[5].w[0] + 72u), 0u);
    set32(c.r[10], c.r[20].w[0] + c.r[7].w[0]);
    st8((c.r[11].w[0] + 912u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[6].w[0] + 6u);
    st32((c.r[4].w[0] + 768u), c.r[3].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    st32((c.r[5].w[0] + 80u), 0u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[5].w[0] + 84u), 0u);
    set32(c.r[9], c.r[20].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 88u), 0u);
    set32(c.r[7], c.r[6].w[0] + 7u);
    st8((c.r[10].w[0] + 912u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    st32((c.r[4].w[0] + 772u), c.r[3].w[0]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[5].w[0] + 96u), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 100u), 0u);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    st32((c.r[5].w[0] + 104u), 0u);
    set32(c.r[8], c.r[20].w[0] + c.r[7].w[0]);
    st8((c.r[9].w[0] + 912u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st32((c.r[4].w[0] + 776u), c.r[3].w[0]);
    c.r[7].d[0] = c.r[6].sd[0] < 40ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 112u), 0u);
    st32((c.r[5].w[0] + 116u), 0u);
    st32((c.r[5].w[0] + 120u), 0u);
    st8((c.r[8].w[0] + 912u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 128u);
    st32((c.r[4].w[0] + 780u), c.r[3].w[0]);
    c.budget -= 78;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CAFF4u | kUnwind; return; } goto L_003CAFF4; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 105u)));
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CB1AC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CB418; } }
    set32(c.r[4], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003CB164:
    st32((c.r[6].w[0] + 112u), 0u);
    set32(c.r[4], c.r[20].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0] + 116u), 0u);
    set32(c.r[3], c.r[7].w[0] + 1u);
    st32((c.r[6].w[0] + 120u), 0u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    st8((c.r[4].w[0] + 912u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[5].w[0] + 752u), 0u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB164u | kUnwind; return; } goto L_003CB164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB418; } }
L_003CB1AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], 0u + 67u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CB1D0; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CB1D0; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CB1D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB420; } }
L_003CB1DC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 29096u)));  if (t) { goto L_003CB1F4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CB2F4; } }
L_003CB1F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003CB44C; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003CB200:
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003CB248; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CB218:
    set32(c.r[4], ld32((c.r[18].w[0] + 784u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CB478; } }
    c.budget -= 1;
L_003CB230:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 530u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB218u | kUnwind; return; } goto L_003CB218; } }
    c.budget -= 1;
L_003CB248:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 743u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB270; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 848u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CB270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB270u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CB270u) [[unlikely]] return; }
L_003CB270:
    set32(c.r[4], ld32((c.r[17].w[0] + 848u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB280u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_0072(c, 141u, depth + 1u); else { c.pc = 0x003C9B20u; return; } if (c.pc != 0x003CB280u) [[unlikely]] return; }
L_003CB280:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003CB2C0; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CB294:
    set32(c.r[4], ld32((c.r[16].w[0] + 784u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CB488; } }
L_003CB2A8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB294u | kUnwind; return; } goto L_003CB294; } }
    c.budget -= 1;
L_003CB2C0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 743u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB2E8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 848u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CB2E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CB2E8u) [[unlikely]] return; }
L_003CB2E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2F4u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 227u, depth + 1u); else { c.pc = 0x002E7C00u; return; } if (c.pc != 0x003CB2F4u) [[unlikely]] return; }
L_003CB2F4:
    set32(c.r[16], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], 0u + 68u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CB498; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CB498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003CB498; } }
L_003CB31C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB328u); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x003CB328u) [[unlikely]] return; }
L_003CB328:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[2], 0u + 68u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003CB4A8; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CB354; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 67u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB354u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 214u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x003CB354u) [[unlikely]] return; }
L_003CB354:
    set32(c.r[9], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_003CB358:
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
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
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 66u)));
    set32(c.r[17], c.r[2].w[0] + 544u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB3B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003CB3B4u) [[unlikely]] return; }
L_003CB3B4:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB3C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003CB3C0u) [[unlikely]] return; }
L_003CB3C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CB4C0; } }
L_003CB3C8:
    set32(c.r[3], 0u + 20u);
    st8((c.r[20].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 28u)));  if (t) { goto L_003CB6B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003CB3E0:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003CB3E8:
    set32(c.r[3], ld32((c.r[5].w[0] + 536u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_003CB408; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 536u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 564u), 0u);  if (t) { goto L_003CB418; } }
L_003CB408:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB3E8u | kUnwind; return; } goto L_003CB3E8; } }
L_003CB418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003CB6DC; } }
L_003CB420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB428u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CB428u) [[unlikely]] return; }
L_003CB428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB438u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CB438u) [[unlikely]] return; }
L_003CB438:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB444u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CB444u) [[unlikely]] return; }
L_003CB444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB1DCu | kUnwind; return; } goto L_003CB1DC; } }
L_003CB44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB454u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CB454u) [[unlikely]] return; }
L_003CB454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB464; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB464u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CB464u) [[unlikely]] return; }
L_003CB464:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB470u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CB470u) [[unlikely]] return; }
L_003CB470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB200u | kUnwind; return; } goto L_003CB200; } }
L_003CB478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB480u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CB480u) [[unlikely]] return; }
L_003CB480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB230u | kUnwind; return; } goto L_003CB230; } }
L_003CB488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB490u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CB490u) [[unlikely]] return; }
L_003CB490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB2A8u | kUnwind; return; } goto L_003CB2A8; } }
L_003CB498:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB354u | kUnwind; return; } goto L_003CB354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB31Cu | kUnwind; return; } goto L_003CB31C; } }
L_003CB4A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB4B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 214u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x003CB4B8u) [[unlikely]] return; }
L_003CB4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[20].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB358u | kUnwind; return; } goto L_003CB358; } }
L_003CB4C0:
    set32(c.r[17], ld32((c.r[17].w[0] + 120u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 27648u);
    set32(c.r[24], 0u - 5u);
    set32(c.r[25], c.r[3].w[0] << 2);
    set32(c.r[15], 0u - 9u);
    set32(c.r[19], c.r[3].w[0] << 3);
    set32(c.r[12], 0u - 17u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[10], 0u - 33u);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[11], c.r[3].w[0] << 5);
    c.r[21].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[9], c.r[3].w[0] << 11);
    set32(c.r[8], 0u - 2049u);
    set32(c.r[7], 0u + 165u);
    set32(c.r[6], c.r[6].w[0] - 7760u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[4], 0u - 2u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[22], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[21].d[0] = c.r[21].d[0] & c.r[24].d[0];
    c.r[21].d[0] = c.r[21].d[0] | c.r[25].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.r[21].d[0] = ld16((c.r[18].w[0]));
    c.r[15].d[0] = c.r[21].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[19].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[18].w[0]));
    c.r[12].d[0] = c.r[15].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld16((c.r[18].w[0]));
    c.r[12].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[18].w[0]));
    c.r[8].d[0] = c.r[11].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[18].w[0] + 12u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 736u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 524u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[14].d[0];
    st8((c.r[17].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 526u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[22].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[30].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], 0u + 235u);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 380u));
    c.budget -= 75;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CB678; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CB6A0; } }
    set32(c.r[3], 0u + 235u);
    c.budget -= 1;
L_003CB600:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_003CB678:
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = 0ull & 1ull;
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 526u));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB3C8u | kUnwind; return; } goto L_003CB3C8; } }
L_003CB6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB6A8u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003CB6A8u) [[unlikely]] return; }
L_003CB6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 235u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB600u | kUnwind; return; } goto L_003CB600; } }
L_003CB6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB6B8u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003CB6B8u) [[unlikely]] return; }
L_003CB6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB6C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003CB6C8u) [[unlikely]] return; }
L_003CB6C8:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB6D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003CB6D4u) [[unlikely]] return; }
L_003CB6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB3E0u | kUnwind; return; } goto L_003CB3E0; } }
L_003CB6DC:
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
L_003CB710:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CB738; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB740; } }
L_003CB738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_003CB740:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003CB760; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003CB770; } }
L_003CB760:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
L_003CB770:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB78C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[4];  if (t) { goto L_003CB7A0; } }
L_003CB78C:
    c.f[0] = c.f[4] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CB7A0; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_003CB7A0:
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CB7EC; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CB7D4; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_003CB7D8; } }
L_003CB7D4:
    st32((c.r[6].w[0]), c.f[2]);
    c.budget -= 1;
L_003CB7D8:
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_003CB7F4; } }
L_003CB7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB7D8u | kUnwind; return; } goto L_003CB7D8; } }
L_003CB7F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CB800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CBA90; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CBAB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CBAA4; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CB860; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_003CB860:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003CB870:
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB88Cu); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x003CB88Cu) [[unlikely]] return; }
L_003CB88C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.f[2] = c.r[3].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[3] = c.r[2].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[4].w[0] + 104u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 807u));
    c.f[1] = 0u;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[2], 0u + 2u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 32;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[12] = c.f[0] ^ fp::kSign;  if (t) { goto L_003CB91C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);  if (t) { goto L_003CB920; } }
L_003CB91C:
    c.f[20] = c.f[12];
    c.budget -= 1;
L_003CB920:
    c.f[0] = ld32((c.r[28].w[0] - 31716u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_003CB94C; } }
L_003CB938:
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CB94C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_003CB94C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB95Cu); set32(c.r[6], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0072(c, 304u, depth + 1u); else { c.pc = 0x003CB710u; return; } if (c.pc != 0x003CB95Cu) [[unlikely]] return; }
L_003CB95C:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 84u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB970u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_0072(c, 304u, depth + 1u); else { c.pc = 0x003CB710u; return; } if (c.pc != 0x003CB970u) [[unlikely]] return; }
L_003CB970:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CBABC; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1578u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CB998; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_003CB998:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_003CB99C:
    c.r[7].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], 0u + 1u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[7].w[0] << 4);
    st8((c.r[5].w[0] + 912u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 112u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    st32((c.r[3].w[0] + 116u), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.f[4] = c.r[5].w[0];
    set32(c.r[5], c.r[7].w[0] - 1u);
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    set32(c.r[11], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[10], c.r[6].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 120u), c.f[0]);
    st8((c.r[11].w[0] + 912u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = c.r[5].w[0];
    st32((c.r[10].w[0] + 112u), 0u);
    st32((c.r[10].w[0] + 116u), 0u);
    set32(c.r[5], c.r[7].w[0] - 2u);
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] - 3u);
    set32(c.r[9], c.r[6].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[8], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    st32((c.r[10].w[0] + 120u), c.f[0]);
    st8((c.r[9].w[0] + 912u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[2] = c.r[6].w[0];
    st32((c.r[8].w[0] + 112u), 0u);
    st32((c.r[8].w[0] + 116u), 0u);
    set32(c.r[6], c.r[5].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[5].d[0] = c.r[5].d[0] | 39322ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[8].w[0] + 120u), c.f[0]);
    st8((c.r[7].w[0] + 912u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 112u), 0u);
    st32((c.r[6].w[0] + 116u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 61;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 120u), c.f[0]);  if (t) { goto L_003CBAC4; } }
L_003CBA90:
    c.f[12] = ld32((c.r[16].w[0] + 76u));
    c.f[20] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB920u | kUnwind; return; } goto L_003CB920; } }
L_003CBAA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 17296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB870u | kUnwind; return; } goto L_003CB870; } }
L_003CBAB0:
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB920u | kUnwind; return; } goto L_003CB920; } }
L_003CBABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB99Cu | kUnwind; return; } goto L_003CB99C; } }
L_003CBAC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CBAE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 106u, depth); } }
L_003CBB20:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003CBB64; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CBB64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB48u); set32(c.r[4], c.r[2].w[0] + 3520u);  if (depth < kMaxDepth) unit_0053(c, 81u, depth + 1u); else { c.pc = 0x0034D430u; return; } if (c.pc != 0x003CBB48u) [[unlikely]] return; }
L_003CBB48:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003CBB64:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 64u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 964u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 109u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 68u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_0073(c, 108u, depth); } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0073(c, 108u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 108u, depth); } }
L_003CBBB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 109u, depth); } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 529u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0073(c, 109u, depth); } }
L_003CBBD4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 109u, depth); } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 529u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0073(c, 109u, depth); } }
L_003CBBF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 165u);
    set32(c.r[17], c.r[4].w[0] + 544u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0073(c, 101u, depth); } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 110u, depth); } }
L_003CBC24:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 66u)));
    set32(c.r[18], c.r[2].w[0] + 544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003CBC38u) [[unlikely]] return; }
L_003CBC38:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003CBC44u) [[unlikely]] return; }
L_003CBC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 111u, depth); } }
L_003CBC4C:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[7], 0u - 5u);
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[5], 0u - 9u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0073(c, 101u, depth); } }
L_003CBC9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 67u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CBCC0; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003CBCC0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CBCC0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 118u, depth); } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 114u, depth); } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003CBCD8:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 101u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = ld8((c.r[16].w[0] + 64u));  if (t) { [[clang::musttail]] return unit_0073(c, 119u, depth); } }
L_003CBCF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 155u);
    set32(c.r[5], c.r[4].w[0] + 544u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0073(c, 128u, depth); } }
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 101u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 66u)));  if (t) { [[clang::musttail]] return unit_0073(c, 124u, depth); } }
    set32(c.r[8], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003CBD2C:
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[9], 0u + 1u);
    set32(c.r[6], 0u - 5u);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u - 17u);
    set32(c.r[8], c.r[17].w[0] + c.r[8].w[0]);
    st8((c.r[8].w[0] + 736u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[17], c.r[2].w[0] + 544u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003CBD94u) [[unlikely]] return; }
L_003CBD94:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDA0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003CBDA0u) [[unlikely]] return; }
L_003CBDA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CBDB4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 168u, depth + 1u); else { c.pc = 0x003C24D0u; return; } if (c.pc != 0x003CBDB4u) [[unlikely]] return; }
L_003CBDB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDC0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CBDC0u) [[unlikely]] return; }
L_003CBDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (t) { [[clang::musttail]] return unit_0073(c, 102u, depth); } }
L_003CBDC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + 544u);  if (t) { [[clang::musttail]] return unit_0073(c, 6u, depth); } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    set32(c.r[2], 0u + 67u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CBFDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003CBDF8u) [[unlikely]] return; }
L_003CBDF8:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBE04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003CBE04u) [[unlikely]] return; }
L_003CBE04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 5u, depth); } }
    set32(c.r[17], ld32((c.r[17].w[0] + 120u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 27648u);
    set32(c.r[22], 0u - 5u);
    set32(c.r[24], c.r[3].w[0] << 2);
    set32(c.r[19], 0u - 9u);
    set32(c.r[20], c.r[3].w[0] << 3);
    set32(c.r[14], 0u - 17u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[12], 0u - 33u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[13], c.r[3].w[0] << 5);
    c.r[21].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[11], c.r[3].w[0] << 11);
    set32(c.r[10], 0u - 2049u);
    set32(c.r[9], 0u + 160u);
    set32(c.r[8], c.r[8].w[0] - 7696u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 2u);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[23], 0u - 65u);
    c.r[21].d[0] = c.r[21].d[0] & c.r[22].d[0];
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[21].d[0] = c.r[21].d[0] | c.r[24].d[0];
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[24], 0u + 230u);
    c.r[21].d[0] = ld16((c.r[2].w[0]));
    c.r[19].d[0] = c.r[21].d[0] & c.r[19].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[20].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[2].w[0]));
    c.r[14].d[0] = c.r[19].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[2].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[13].d[0] = c.r[14].d[0] | c.r[13].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[2].w[0]));
    c.r[10].d[0] = c.r[13].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 736u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[12].d[0];
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.r[7].d[0] = c.r[7].d[0] & c.r[22].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    st8((c.r[17].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[25].d[0];
    st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[30].d[0];
    st8((c.r[17].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 380u));
    c.budget -= 80;
    { const bool t = c.r[2].d[0] == c.r[24].d[0];  if (t) { [[clang::musttail]] return unit_0073(c, 5u, depth); } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 130u, depth); } }
    set32(c.r[2], 0u + 230u);
    c.budget -= 1;
L_003CBF60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 372u), c.f[0]);  if (t) { [[clang::musttail]] return unit_0073(c, 5u, depth); } }
L_003CBFDC:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 66u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBFE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x003CBFE8u) [[unlikely]] return; }
L_003CBFE8:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBFF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x003CBFF4u) [[unlikely]] return; }
L_003CBFF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 5u, depth); } }
    set32(c.r[17], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0073(c, 1u, depth);
}

}

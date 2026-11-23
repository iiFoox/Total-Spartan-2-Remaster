#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0098[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 78, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    98, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 128, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 184,
    0, 185, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 222,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 270, 0, 271, 272, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 289, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0098(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00460000;
    case 2u: goto L_0046000C;
    case 3u: goto L_00460018;
    case 4u: goto L_004600CC;
    case 5u: goto L_00460114;
    case 6u: goto L_00460120;
    case 7u: goto L_0046012C;
    case 8u: goto L_00460184;
    case 9u: goto L_00460198;
    case 10u: goto L_004601A0;
    case 11u: goto L_004601B8;
    case 12u: goto L_004601C4;
    case 13u: goto L_004601D4;
    case 14u: goto L_00460210;
    case 15u: goto L_00460218;
    case 16u: goto L_00460258;
    case 17u: goto L_0046026C;
    case 18u: goto L_00460290;
    case 19u: goto L_004602A0;
    case 20u: goto L_004602C0;
    case 21u: goto L_004602D0;
    case 22u: goto L_004602EC;
    case 23u: goto L_00460308;
    case 24u: goto L_0046031C;
    case 25u: goto L_00460350;
    case 26u: goto L_00460388;
    case 27u: goto L_004603A0;
    case 28u: goto L_004603B8;
    case 29u: goto L_004603FC;
    case 30u: goto L_0046041C;
    case 31u: goto L_00460440;
    case 32u: goto L_00460460;
    case 33u: goto L_0046048C;
    case 34u: goto L_004604A8;
    case 35u: goto L_004604C0;
    case 36u: goto L_004604E0;
    case 37u: goto L_004604FC;
    case 38u: goto L_00460510;
    case 39u: goto L_00460530;
    case 40u: goto L_0046062C;
    case 41u: goto L_00460648;
    case 42u: goto L_00460654;
    case 43u: goto L_004606B0;
    case 44u: goto L_004606C0;
    case 45u: goto L_00460714;
    case 46u: goto L_00460730;
    case 47u: goto L_00460740;
    case 48u: goto L_00460750;
    case 49u: goto L_00460760;
    case 50u: goto L_00460770;
    case 51u: goto L_00460780;
    case 52u: goto L_00460790;
    case 53u: goto L_00460804;
    case 54u: goto L_00460820;
    case 55u: goto L_00460830;
    case 56u: goto L_00460840;
    case 57u: goto L_00460860;
    case 58u: goto L_004608B8;
    case 59u: goto L_004608C4;
    case 60u: goto L_004608E0;
    case 61u: goto L_00460910;
    case 62u: goto L_00460950;
    case 63u: goto L_00460968;
    case 64u: goto L_004609EC;
    case 65u: goto L_00460A00;
    case 66u: goto L_00460A38;
    case 67u: goto L_00460A80;
    case 68u: goto L_00460AB4;
    case 69u: goto L_00460AC8;
    case 70u: goto L_00460B10;
    case 71u: goto L_00460B44;
    case 72u: goto L_00460C18;
    case 73u: goto L_00460C38;
    case 74u: goto L_00460C74;
    case 75u: goto L_00460C84;
    case 76u: goto L_00460CB0;
    case 77u: goto L_00460D78;
    case 78u: goto L_00460D84;
    case 79u: goto L_00460D88;
    case 80u: goto L_00460D90;
    case 81u: goto L_00460DFC;
    case 82u: goto L_00460E08;
    case 83u: goto L_00460E38;
    case 84u: goto L_00460E4C;
    case 85u: goto L_00460E60;
    case 86u: goto L_00460E84;
    case 87u: goto L_00460E8C;
    case 88u: goto L_00460EC0;
    case 89u: goto L_00460EF4;
    case 90u: goto L_00460EFC;
    case 91u: goto L_00460F10;
    case 92u: goto L_00460F84;
    case 93u: goto L_00460F8C;
    case 94u: goto L_00460F94;
    case 95u: goto L_00460FD0;
    case 96u: goto L_00460FD8;
    case 97u: goto L_00460FF8;
    case 98u: goto L_00461000;
    case 99u: goto L_00461004;
    case 100u: goto L_00461018;
    case 101u: goto L_00461024;
    case 102u: goto L_00461074;
    case 103u: goto L_0046107C;
    case 104u: goto L_00461084;
    case 105u: goto L_004610B4;
    case 106u: goto L_0046110C;
    case 107u: goto L_00461130;
    case 108u: goto L_00461158;
    case 109u: goto L_004611CC;
    case 110u: goto L_004611E4;
    case 111u: goto L_0046126C;
    case 112u: goto L_00461290;
    case 113u: goto L_0046137C;
    case 114u: goto L_00461384;
    case 115u: goto L_00461390;
    case 116u: goto L_004613CC;
    case 117u: goto L_004613D8;
    case 118u: goto L_00461480;
    case 119u: goto L_00461498;
    case 120u: goto L_00461558;
    case 121u: goto L_00461574;
    case 122u: goto L_004615A4;
    case 123u: goto L_004615B0;
    case 124u: goto L_004615C8;
    case 125u: goto L_004615DC;
    case 126u: goto L_00461610;
    case 127u: goto L_00461658;
    case 128u: goto L_0046165C;
    case 129u: goto L_00461670;
    case 130u: goto L_0046170C;
    case 131u: goto L_0046171C;
    case 132u: goto L_0046172C;
    case 133u: goto L_00461750;
    case 134u: goto L_004617FC;
    case 135u: goto L_00461804;
    case 136u: goto L_004618D0;
    case 137u: goto L_00461954;
    case 138u: goto L_00461964;
    case 139u: goto L_00461980;
    case 140u: goto L_004619B0;
    case 141u: goto L_004619B8;
    case 142u: goto L_004619C8;
    case 143u: goto L_00461A2C;
    case 144u: goto L_00461A60;
    case 145u: goto L_00461A74;
    case 146u: goto L_00461AD0;
    case 147u: goto L_00461AD8;
    case 148u: goto L_00461AEC;
    case 149u: goto L_00461B50;
    case 150u: goto L_00461BB0;
    case 151u: goto L_00461BB8;
    case 152u: goto L_00461BD8;
    case 153u: goto L_00461BF4;
    case 154u: goto L_00461C40;
    case 155u: goto L_00461C78;
    case 156u: goto L_00461D24;
    case 157u: goto L_00461D34;
    case 158u: goto L_00461D50;
    case 159u: goto L_00461DFC;
    case 160u: goto L_00461E08;
    case 161u: goto L_00461E0C;
    case 162u: goto L_00461E5C;
    case 163u: goto L_00461E90;
    case 164u: goto L_00461EA0;
    case 165u: goto L_00461F04;
    case 166u: goto L_00461F10;
    case 167u: goto L_00461F38;
    case 168u: goto L_00461F4C;
    case 169u: goto L_00461F60;
    case 170u: goto L_00461FB0;
    case 171u: goto L_00462018;
    case 172u: goto L_00462034;
    case 173u: goto L_00462050;
    case 174u: goto L_004620F8;
    case 175u: goto L_00462120;
    case 176u: goto L_00462150;
    case 177u: goto L_00462160;
    case 178u: goto L_00462244;
    case 179u: goto L_004622CC;
    case 180u: goto L_004622D4;
    case 181u: goto L_00462308;
    case 182u: goto L_00462368;
    case 183u: goto L_00462378;
    case 184u: goto L_0046237C;
    case 185u: goto L_00462384;
    case 186u: goto L_00462388;
    case 187u: goto L_004623A0;
    case 188u: goto L_00462414;
    case 189u: goto L_00462478;
    case 190u: goto L_004624CC;
    case 191u: goto L_00462524;
    case 192u: goto L_00462534;
    case 193u: goto L_00462558;
    case 194u: goto L_00462580;
    case 195u: goto L_0046266C;
    case 196u: goto L_004626C4;
    case 197u: goto L_004626D0;
    case 198u: goto L_004626F0;
    case 199u: goto L_0046274C;
    case 200u: goto L_00462824;
    case 201u: goto L_0046284C;
    case 202u: goto L_00462900;
    case 203u: goto L_00462910;
    case 204u: goto L_00462930;
    case 205u: goto L_004629D4;
    case 206u: goto L_004629EC;
    case 207u: goto L_004629F8;
    case 208u: goto L_00462A08;
    case 209u: goto L_00462A40;
    case 210u: goto L_00462A54;
    case 211u: goto L_00462A58;
    case 212u: goto L_00462A8C;
    case 213u: goto L_00462B04;
    case 214u: goto L_00462B68;
    case 215u: goto L_00462BD0;
    case 216u: goto L_00462BDC;
    case 217u: goto L_00462C00;
    case 218u: goto L_00462C54;
    case 219u: goto L_00462C60;
    case 220u: goto L_00462D6C;
    case 221u: goto L_00462D78;
    case 222u: goto L_00462D7C;
    case 223u: goto L_00462D88;
    case 224u: goto L_00462DCC;
    case 225u: goto L_00462DF8;
    case 226u: goto L_00462E60;
    case 227u: goto L_00462E74;
    case 228u: goto L_00462F14;
    case 229u: goto L_00462F20;
    case 230u: goto L_00462F4C;
    case 231u: goto L_00462F50;
    case 232u: goto L_00462F78;
    case 233u: goto L_00462FB0;
    case 234u: goto L_00462FF0;
    case 235u: goto L_0046303C;
    case 236u: goto L_00463074;
    case 237u: goto L_004630A8;
    case 238u: goto L_004630F4;
    case 239u: goto L_00463100;
    case 240u: goto L_0046312C;
    case 241u: goto L_00463134;
    case 242u: goto L_0046313C;
    case 243u: goto L_00463150;
    case 244u: goto L_004631AC;
    case 245u: goto L_004631B4;
    case 246u: goto L_004631BC;
    case 247u: goto L_004631E0;
    case 248u: goto L_004631EC;
    case 249u: goto L_00463254;
    case 250u: goto L_00463260;
    case 251u: goto L_00463324;
    case 252u: goto L_0046332C;
    case 253u: goto L_004633B0;
    case 254u: goto L_004633FC;
    case 255u: goto L_0046342C;
    case 256u: goto L_0046343C;
    case 257u: goto L_00463478;
    case 258u: goto L_00463488;
    case 259u: goto L_004634B0;
    case 260u: goto L_004634EC;
    case 261u: goto L_004634FC;
    case 262u: goto L_00463544;
    case 263u: goto L_00463598;
    case 264u: goto L_004635A4;
    case 265u: goto L_004636BC;
    case 266u: goto L_00463740;
    case 267u: goto L_00463774;
    case 268u: goto L_004637D4;
    case 269u: goto L_004637E4;
    case 270u: goto L_004637E8;
    case 271u: goto L_004637F0;
    case 272u: goto L_004637F4;
    case 273u: goto L_0046380C;
    case 274u: goto L_00463884;
    case 275u: goto L_004638E8;
    case 276u: goto L_0046398C;
    case 277u: goto L_0046399C;
    case 278u: goto L_004639C0;
    case 279u: goto L_00463A00;
    case 280u: goto L_00463B10;
    case 281u: goto L_00463B30;
    case 282u: goto L_00463B8C;
    case 283u: goto L_00463C68;
    case 284u: goto L_00463CEC;
    case 285u: goto L_00463D0C;
    case 286u: goto L_00463D30;
    case 287u: goto L_00463DE8;
    case 288u: goto L_00463DF4;
    case 289u: goto L_00463DF8;
    case 290u: goto L_00463E04;
    case 291u: goto L_00463E58;
    case 292u: goto L_00463E74;
    case 293u: goto L_00463F28;
    case 294u: goto L_00463F34;
    case 295u: goto L_00463F8C;
    case 296u: goto L_00463FA8;
    case 297u: goto L_00463FBC;
    case 298u: goto L_00463FC8;
    case 299u: goto L_00463FE0;
    default: bad_entry(c, 0x00460000u); return;
    }
L_00460000:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_004601D4; } }
L_0046000C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00460040; } }
    goto L_0046001C;
L_00460018:
    c.budget -= 1;
L_0046001C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5804u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00460040; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_004601D4; } }
L_00460040:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 88u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 88u), c.f[1]);  if (t) { goto L_004601D4; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 172u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 92u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00460084; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 93u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
L_00460084:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00460274; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 380u));
    c.f[1] = ld32((c.r[6].w[0] + 360u));
    set32(c.r[4], ld32((c.r[6].w[0] + 344u)));
    c.f[0] = ld32((c.r[6].w[0] + 364u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 88u), c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004601D4; } }
L_004600CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00460100; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5804u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00460100; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_004601D4; } }
L_00460100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460114u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 27u, depth + 1u); else { c.pc = 0x0034C580u; return; } if (c.pc != 0x00460114u) [[unlikely]] return; }
L_00460114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460120u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 73u, depth + 1u); else { c.pc = 0x003BD410u; return; } if (c.pc != 0x00460120u) [[unlikely]] return; }
L_00460120:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_004601D4; } }
L_0046012C:
    c.f[2] = ld32((c.r[17].w[0] + 168u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046015C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004601D4; } }
L_0046015C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 104u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004601A8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00460184u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00460184u) [[unlikely]] return; }
L_00460184:
    st32((c.r[17].w[0] + 164u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460198u); st32((c.r[17].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00460198u) [[unlikely]] return; }
L_00460198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004601A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004601A0u) [[unlikely]] return; }
L_004601A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004601BC; } }
L_004601A8:
    st32((c.r[17].w[0] + 164u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004601B8u); st32((c.r[17].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004601B8u) [[unlikely]] return; }
L_004601B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004601BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004601C4u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004601C4u) [[unlikely]] return; }
L_004601C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004601D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004601D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004601D4u) [[unlikely]] return; }
L_004601D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045FE04u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 250u, depth); } }
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004602AC; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004602AC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00460210u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00460210u) [[unlikely]] return; }
L_00460210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004602B0; } }
L_00460218:
    c.f[2] = ld32((c.r[8].w[0] + 36u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[8].w[0] + 40u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[8].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[6].w[0] - 11828u), c.f[0]);
    st32((c.r[5].w[0] - 11824u), c.f[2]);
    st32((c.r[4].w[0] - 11820u), c.f[1]);
    set32(c.r[4], ld32((c.r[8].w[0] + 52u)));
    st32((c.r[3].w[0] - 11784u), c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 11772u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045FEC8u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 256u, depth); } }
L_00460258:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] - 3744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046026Cu); set32(c.r[5], c.r[5].w[0] - 11840u);  if (depth < kMaxDepth) unit_006F(c, 107u, depth + 1u); else { c.pc = 0x003BDA60u; return; } if (c.pc != 0x0046026Cu) [[unlikely]] return; }
L_0046026C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 160u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045FFF8u | kUnwind; return; } [[clang::musttail]] return unit_0097(c, 265u, depth); } }
L_00460274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5804u)));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460290u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x00460290u) [[unlikely]] return; }
L_00460290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004602A0u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0034C5A0u; return; } if (c.pc != 0x004602A0u) [[unlikely]] return; }
L_004602A0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004601D4u | kUnwind; return; } goto L_004601D4; } }
L_004602AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004602B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004602C0:
    st32((c.r[4].w[0] + 164u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 160u), 0u);  c.pc = t; return; }
L_004602D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004602ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004602ECu) [[unlikely]] return; }
L_004602EC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00460320; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460308u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00460308u) [[unlikely]] return; }
L_00460308:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046031Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046031Cu) [[unlikely]] return; }
L_0046031C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00460320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00460334; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00460334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00460350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00460380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00460444; } }
L_00460380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460388u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00460388u) [[unlikely]] return; }
L_00460388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00460440; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004603A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004603A0u) [[unlikely]] return; }
L_004603A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004603B8u); set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 80u, depth + 1u); else { c.pc = 0x002A1280u; return; } if (c.pc != 0x004603B8u) [[unlikely]] return; }
L_004603B8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004603D4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 116u));
    c.r[2].d[0] = c.r[2].d[0] ^ 11ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004603E0; } }
L_004603D4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 116u));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_004603E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00460404; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 124u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004603FCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004603FCu) [[unlikely]] return; }
L_004603FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00460440; } }
L_00460404:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 116u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0046041C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046041Cu); set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 81u, depth + 1u); else { c.pc = 0x002A1290u; return; } if (c.pc != 0x0046041Cu) [[unlikely]] return; }
L_0046041C:
    st32((c.r[18].w[0] + 160u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[18].w[0] + 176u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[2].w[0] - 10224u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 168u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460440u); st32((c.r[18].w[0] + 164u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x00460440u) [[unlikely]] return; }
L_00460440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00460444:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00460460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004604C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_004604B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046048Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 172u, depth + 1u); else { c.pc = 0x0027DA80u; return; } if (c.pc != 0x0046048Cu) [[unlikely]] return; }
L_0046048C:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_004604C8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004604C8; } }
    st32((c.r[17].w[0] + 160u), 0u);
    c.budget -= 1;
L_004604A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004604CC; } }
L_004604B0:
    set32(c.r[6], ld32((c.r[17].w[0] + 128u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004604C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 178u, depth + 1u); else { c.pc = 0x0027DB60u; return; } if (c.pc != 0x004604C0u) [[unlikely]] return; }
L_004604C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004604A8u | kUnwind; return; } goto L_004604A8; } }
L_004604C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004604CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004604E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 172u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00460504; } }
L_004604FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00460518; } }
L_00460504:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460510u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00460510u) [[unlikely]] return; }
L_00460510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 172u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004604FCu | kUnwind; return; } goto L_004604FC; } }
L_00460518:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00460530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[5].w[0] + 44u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    st32((c.r[29].w[0] + 12u), c.f[23]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[11].d[0] = ld8((c.r[5].w[0] + 32u));
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 40u)));
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = ld32((c.r[5].w[0] + 36u));
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[8]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 52u)));
    set32(c.r[3], 0u + 2u);
    st128((c.r[16].w[0] + 80u) & ~15u, c.r[7]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[9], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[4].w[0] + 100u), c.f[20]);
    set32(c.r[7], ld32((c.r[5].w[0] + 64u)));
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 108u), c.f[1]);
    set32(c.r[6], ld32((c.r[5].w[0] + 68u)));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st8((c.r[4].w[0] + 116u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 120u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[7].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 72u)));
    st32((c.r[4].w[0] + 132u), c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 80u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 84u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 76u)));
    st8((c.r[4].w[0] + 136u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 140u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 144u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 148u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 160u), 0u);
    st32((c.r[4].w[0] + 164u), 0u);
    c.budget -= 51;
    { const bool t = c.r[11].d[0] != 0ull; st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00460634; } }
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 12;
L_0046062C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00460690; } }
L_00460634:
    c.f[23] = ld32((c.r[5].w[0] + 16u));
    c.f[22] = ld32((c.r[5].w[0] + 20u));
    c.f[21] = ld32((c.r[5].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460648u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00460648u) [[unlikely]] return; }
L_00460648:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460654u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00460654u) [[unlikely]] return; }
L_00460654:
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046062Cu | kUnwind; return; } goto L_0046062C; } }
L_00460690:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004606B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004606C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00460714; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 14320u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004606FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004606FC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00460714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00460714u) [[unlikely]] return; }
L_00460714:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00460730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00460740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00460750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00460760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00460770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00460780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00460790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00460804; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004607EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004607EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004607EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004607EC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00460804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460804u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00460804u) [[unlikely]] return; }
L_00460804:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00460820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 64u);  c.pc = t; return; }
L_00460830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 100u));  c.pc = t; return; }
L_00460840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00460860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004608C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] + 14944u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    st8((c.r[4].w[0] + 807u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004608B8u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 52u, depth + 1u); else { c.pc = 0x00450A60u; return; } if (c.pc != 0x004608B8u) [[unlikely]] return; }
L_004608B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004608C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x0029B4A0u; return; } if (c.pc != 0x004608C4u) [[unlikely]] return; }
L_004608C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004608E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 74u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 380u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00460918; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00460918; } }
L_00460910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004609F4; } }
L_00460918:
    c.r[7].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460950u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0027(c, 108u, depth + 1u); else { c.pc = 0x0029E1C0u; return; } if (c.pc != 0x00460950u) [[unlikely]] return; }
L_00460950:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004609E4; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_00460968:
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
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460910u | kUnwind; return; } goto L_00460910; } }
L_004609E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004609ECu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004609ECu) [[unlikely]] return; }
L_004609EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460968u | kUnwind; return; } goto L_00460968; } }
L_004609F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00460A00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1440u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00460C40; } }
L_00460A38:
    set32(c.r[2], ld32((c.r[3].w[0] + 1424u)));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00460A90; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 524u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460A90; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460A90; } }
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460A80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 106u, depth + 1u); else { c.pc = 0x0029E170u; return; } if (c.pc != 0x00460A80u) [[unlikely]] return; }
L_00460A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00460C40; } }
L_00460A90:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 1440u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460A38u | kUnwind; return; } goto L_00460A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00460C40; } }
L_00460AB4:
    set32(c.r[5], ld32((c.r[2].w[0] + 1440u)));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00460B10; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 1424u)));
    c.budget -= 1;
L_00460AC8:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00460C50; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 524u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460C50; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460C50; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_00460C50; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00460B10:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00460C7C; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], 0u + 73u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00460B30; } }
    set32(c.r[17], 0u + 74u);
    c.budget -= 1;
L_00460B30:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460C6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.budget -= 1;
L_00460B44:
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
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
    c.budget -= 31;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 24u), c.r[18].w[0]);  if (t) { goto L_00460BC8; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 6u));
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_00460BC8:
    c.r[9].d[0] = ld8((c.r[19].w[0] + 58u));
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[19].w[0] + 58u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[19].w[0] + 58u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 58u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 58u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460C18u); st8((c.r[19].w[0] + 58u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0027(c, 115u, depth + 1u); else { c.pc = 0x0029E330u; return; } if (c.pc != 0x00460C18u) [[unlikely]] return; }
L_00460C18:
    st8((c.r[19].w[0] + 59u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[19].w[0] + 58u));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00460C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00460C8C; } }
L_00460C40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460B10u | kUnwind; return; } goto L_00460B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460AB4u | kUnwind; return; } goto L_00460AB4; } }
L_00460C50:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460AC8u | kUnwind; return; } goto L_00460AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460B10u | kUnwind; return; } goto L_00460B10; } }
L_00460C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460C74u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00460C74u) [[unlikely]] return; }
L_00460C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460B44u | kUnwind; return; } goto L_00460B44; } }
L_00460C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460C84u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0029E200u; return; } if (c.pc != 0x00460C84u) [[unlikely]] return; }
L_00460C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460C38u | kUnwind; return; } goto L_00460C38; } }
L_00460C8C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00460CB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00460D98; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00460D0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_00460D10; } }
L_00460D0C:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_00460D10:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00460DA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_00460E1C; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00460D50; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_00460D50:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00460D68; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_00460D68:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00460D78:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460D84u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x00460D84u) [[unlikely]] return; }
L_00460D84:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00460D88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00460E28; } }
L_00460D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00460EA4; } }
L_00460D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00460EA4; } }
L_00460DA0:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_00460E10; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00460DD4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_00460DD4:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00460DEC; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_00460DEC:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00460DFC:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460E08u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x00460E08u) [[unlikely]] return; }
L_00460E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460D88u | kUnwind; return; } goto L_00460D88; } }
L_00460E10:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 20976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460DFCu | kUnwind; return; } goto L_00460DFC; } }
L_00460E1C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 20976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460D78u | kUnwind; return; } goto L_00460D78; } }
L_00460E28:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460E38u); set32(c.r[6], c.r[29].w[0] + 127u);  if (depth < kMaxDepth) unit_001F(c, 347u, depth + 1u); else { c.pc = 0x0027F080u; return; } if (c.pc != 0x00460E38u) [[unlikely]] return; }
L_00460E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460D90u | kUnwind; return; } goto L_00460D90; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460E4Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0029E150u; return; } if (c.pc != 0x00460E4Cu) [[unlikely]] return; }
L_00460E4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460E60u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0036(c, 70u, depth + 1u); else { c.pc = 0x002D8FD0u; return; } if (c.pc != 0x00460E60u) [[unlikely]] return; }
L_00460E60:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00460E94; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00460E84; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 57u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00460E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460E8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00460A00u; return; } if (c.pc != 0x00460E8Cu) [[unlikely]] return; }
L_00460E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460D90u | kUnwind; return; } goto L_00460D90; } }
L_00460E94:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460E84u | kUnwind; return; } goto L_00460E84; } }
L_00460EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00460EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004610BC; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004610BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_004610BC; } }
L_00460EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460EFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 6u, depth + 1u); else { c.pc = 0x0029C0F0u; return; } if (c.pc != 0x00460EFCu) [[unlikely]] return; }
L_00460EFC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461104; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 1;
L_00460F10:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 57;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00461114; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 50u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[4].w[0] + 360u));  if (t) { goto L_00460F40; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00460F5C; } }
L_00460F40:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00460F5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00461114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460F84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 113u, depth + 1u); else { c.pc = 0x0029E2D0u; return; } if (c.pc != 0x00460F84u) [[unlikely]] return; }
L_00460F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460F8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 13u, depth + 1u); else { c.pc = 0x0029C480u; return; } if (c.pc != 0x00460F8Cu) [[unlikely]] return; }
L_00460F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004610B4; } }
L_00460F94:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 57;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00461114; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00460FD0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00460FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460FD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 139u, depth + 1u); else { c.pc = 0x0029EA00u; return; } if (c.pc != 0x00460FD0u) [[unlikely]] return; }
L_00460FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460FD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 76u, depth + 1u); else { c.pc = 0x00460CB0u; return; } if (c.pc != 0x00460FD8u) [[unlikely]] return; }
L_00460FD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00461114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460FF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 111u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x00460FF8u) [[unlikely]] return; }
L_00460FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004610B4; } }
L_00461000:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 1;
L_00461004:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 57;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00461114; } }
L_00461018:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 51u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = ld32((c.r[7].w[0] + 360u));  if (t) { goto L_00461030; } }
L_00461024:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0046104C; } }
L_00461030:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0046104C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00461074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461074u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0029E200u; return; } if (c.pc != 0x00461074u) [[unlikely]] return; }
L_00461074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046107Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 76u, depth + 1u); else { c.pc = 0x00460CB0u; return; } if (c.pc != 0x0046107Cu) [[unlikely]] return; }
L_0046107C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004610B4; } }
L_00461084:
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_004610B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00461118; } }
L_004610BC:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 380u));
    set32(c.r[6], ld32((c.r[7].w[0] + 344u)));
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[5].d[0] = c.r[3].d[0] >> 60;
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_00461114; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21040u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00460000u < 16384u) { entry = entries_0098[(t - 0x00460000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00461104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046110Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 139u, depth + 1u); else { c.pc = 0x0029EA00u; return; } if (c.pc != 0x0046110Cu) [[unlikely]] return; }
L_0046110C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00460F10u | kUnwind; return; } goto L_00460F10; } }
L_00461114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00461118:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00461130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 45u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461158u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0029B5C0u; return; } if (c.pc != 0x00461158u) [[unlikely]] return; }
L_00461158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], 0u - 3u);
    set32(c.r[2], c.r[2].w[0] + 14944u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], 0u - 5u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 736u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004611CCu); set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 51u, depth + 1u); else { c.pc = 0x00450A50u; return; } if (c.pc != 0x004611CCu) [[unlikely]] return; }
L_004611CC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004611E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004611E4u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004611E4u) [[unlikely]] return; }
L_004611E4:
    set32(c.r[2], 0u + 74u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
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
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046126Cu); st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00460A00u; return; } if (c.pc != 0x0046126Cu) [[unlikely]] return; }
L_0046126C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00461290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004613D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] + 14976u);
    set32(c.r[9], 0u - 9u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[10], c.r[2].w[0] << 3);
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 65u);
    set32(c.r[5], 0u - 33u);
    set32(c.r[4], 0u - 129u);
    st8((c.r[11].w[0] + 807u), static_cast<std::uint8_t>(0u));
    set32(c.r[12], ld32((c.r[16].w[0] + 4u)));
    c.r[11].d[0] = ld8((c.r[12].w[0] + 1496u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[12].w[0] + 1496u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 811u));
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 1496u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 1496u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1496u));
    c.r[6].d[0] = c.r[6].d[0] << 57;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[6], c.r[6].w[0] << 5);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 1496u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1496u));
    c.r[5].d[0] = c.r[5].d[0] << 58;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], c.r[5].w[0] << 7);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 1496u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 48;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_004613E0; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_004613E8; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0046137C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004613F4; } }
L_00461384:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461390u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 52u, depth + 1u); else { c.pc = 0x00450A60u; return; } if (c.pc != 0x00461390u) [[unlikely]] return; }
L_00461390:
    set32(c.r[2], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004613CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27425u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004613CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[2].w[0] - 20408u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004613CCu); st32((c.r[2].w[0] - 20404u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004613CCu) [[unlikely]] return; }
L_004613CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004613D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0027(c, 151u, depth + 1u); else { c.pc = 0x0029EF30u; return; } if (c.pc != 0x004613D8u) [[unlikely]] return; }
L_004613D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00461468; } }
L_004613E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046137Cu | kUnwind; return; } goto L_0046137C; } }
L_004613E8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046137Cu | kUnwind; return; } goto L_0046137C; } }
L_004613F4:
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[2], 0u + 7u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 1496u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[7].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461384u | kUnwind; return; } goto L_00461384; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u - 129u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 523u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 523u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461384u | kUnwind; return; } goto L_00461384; } }
L_00461468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00461480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461498u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0098(c, 173u, depth + 1u); else { c.pc = 0x00462050u; return; } if (c.pc != 0x00461498u) [[unlikely]] return; }
L_00461498:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 70u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004615E4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00461734; } }
    set32(c.r[10], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[12], c.r[2].w[0] << 3);
    set32(c.r[11], 0u - 9u);
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 1496u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[11].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    st8((c.r[10].w[0] + 1496u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[17].w[0] + 24u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 1496u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[11].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    st8((c.r[10].w[0] + 1496u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[17].w[0] + 24u)));
    c.r[9].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 37;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00461560; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461558u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x00461558u) [[unlikely]] return; }
L_00461558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00461578; } }
L_00461560:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461574u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 372u, depth + 1u); else { c.pc = 0x0028B930u; return; } if (c.pc != 0x00461574u) [[unlikely]] return; }
L_00461574:
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00461578:
    set32(c.r[3], 0u + 52u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004615B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00461734; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 142u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004615A4u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x004615A4u) [[unlikely]] return; }
L_004615A4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004615B0u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_00B6(c, 26u, depth + 1u); else { c.pc = 0x004D83F0u; return; } if (c.pc != 0x004615B0u) [[unlikely]] return; }
L_004615B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00461738; } }
L_004615B8:
    set32(c.r[5], c.r[6].w[0] + 32u);
    set32(c.r[4], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004615C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004615C8u) [[unlikely]] return; }
L_004615C8:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004615DCu); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0047B600u; return; } if (c.pc != 0x004615DCu) [[unlikely]] return; }
L_004615DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004615B0u | kUnwind; return; } goto L_004615B0; } }
L_004615E4:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461610u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0034(c, 32u, depth + 1u); else { c.pc = 0x002D0640u; return; } if (c.pc != 0x00461610u) [[unlikely]] return; }
L_00461610:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00461724; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00461704; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461658; } }
    set32(c.r[5], c.r[4].w[0] + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461658u); set32(c.r[4], 0u + 66u);  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x00461658u) [[unlikely]] return; }
L_00461658:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0046165C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461714; } }
    set32(c.r[3], 0u + 71u);
    c.budget -= 1;
L_00461670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(448ll);
    set32(c.r[3], 0u - 961u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 37;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004615B0u | kUnwind; return; } goto L_004615B0; } }
L_00461704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046170Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0076(c, 255u, depth + 1u); else { c.pc = 0x003DBB00u; return; } if (c.pc != 0x0046170Cu) [[unlikely]] return; }
L_0046170C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046165Cu | kUnwind; return; } goto L_0046165C; } }
L_00461714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046171Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0046171Cu) [[unlikely]] return; }
L_0046171C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 71u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461670u | kUnwind; return; } goto L_00461670; } }
L_00461724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046172Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0029E200u; return; } if (c.pc != 0x0046172Cu) [[unlikely]] return; }
L_0046172C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004615B0u | kUnwind; return; } goto L_004615B0; } }
L_00461734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00461738:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00461750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461888; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 69u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461888; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 70u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461888; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 26u);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00461878; } }
    set32(c.r[3], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004617B4; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004617B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00461880; } }
L_004617B4:
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046195C; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_004617FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00461804:
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
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_00461880; } }
L_00461878:
    st32((c.r[6].w[0] + 360u), 0u);
    st32((c.r[6].w[0] + 356u), 0u);
    c.budget -= 2;
L_00461880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00461970; } }
L_00461888:
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046194C; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_004618D0:
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
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0046196C; } }
L_0046194C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461954u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00461954u) [[unlikely]] return; }
L_00461954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004618D0u | kUnwind; return; } goto L_004618D0; } }
L_0046195C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461964u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00461964u) [[unlikely]] return; }
L_00461964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004617FCu | kUnwind; return; } goto L_004617FC; } }
L_0046196C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00461970:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00461980:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00461C80; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00461C88; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004619B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00461C94; } }
L_004619B8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461CB0; } }
L_004619C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 344u)));
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 380u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_00461A2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 27425u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461A2C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 64u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 64u));
    c.r[3].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461A2C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461A2Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x00461A2Cu) [[unlikely]] return; }
L_00461A2C:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046203C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21088u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00460000u < 16384u) { entry = entries_0098[(t - 0x00460000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00461A60:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461D1C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00461A74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[4].w[0] + 360u));  if (t) { goto L_00461A8C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00461AA8; } }
L_00461A8C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00461AA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046203C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461AD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 113u, depth + 1u); else { c.pc = 0x0029E2D0u; return; } if (c.pc != 0x00461AD0u) [[unlikely]] return; }
L_00461AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00461C78; } }
L_00461AD8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00461D2C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00461AEC:
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00461D3C; } }
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 27425u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046203C; } }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00461B34; } }
    st32((c.r[17].w[0] + 60u), c.f[1]);
    c.budget -= 1;
L_00461B34:
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[4].w[0] - 20408u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 20404u), c.f[0]);  if (t) { goto L_00461C78; } }
L_00461B50:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 51u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[4].w[0] + 360u));  if (t) { goto L_00461B6C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00461B88; } }
L_00461B6C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00461B88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046203C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461BB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0029E200u; return; } if (c.pc != 0x00461BB0u) [[unlikely]] return; }
L_00461BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00461C78; } }
L_00461BB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046203C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461BD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 118u, depth + 1u); else { c.pc = 0x00461480u; return; } if (c.pc != 0x00461BD8u) [[unlikely]] return; }
L_00461BD8:
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], 0u - 961u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(512ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00461C78; } }
L_00461BF4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00461C14; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 552u));
    set32(c.r[3], 0u + 69u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00461C14; } }
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_00461C14:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00461F58; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[5].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046203C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C40u);  if (depth < kMaxDepth) unit_0034(c, 5u, depth + 1u); else { c.pc = 0x002D0070u; return; } if (c.pc != 0x00461C40u) [[unlikely]] return; }
L_00461C40:
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[5], 0u - 961u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(512ll);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_00461C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00462040; } }
L_00461C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004619B0u | kUnwind; return; } goto L_004619B0; } }
L_00461C88:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004619B0u | kUnwind; return; } goto L_004619B0; } }
L_00461C94:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 58u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004619B8u | kUnwind; return; } goto L_004619B8; } }
L_00461CB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[5] = ld32((c.r[4].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[6] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 56u), c.f[5]);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 52u), c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004619C8u | kUnwind; return; } goto L_004619C8; } }
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004619C8u | kUnwind; return; } goto L_004619C8; } }
L_00461D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461D24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 139u, depth + 1u); else { c.pc = 0x0029EA00u; return; } if (c.pc != 0x00461D24u) [[unlikely]] return; }
L_00461D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461A74u | kUnwind; return; } goto L_00461A74; } }
L_00461D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461D34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 139u, depth + 1u); else { c.pc = 0x0029EA00u; return; } if (c.pc != 0x00461D34u) [[unlikely]] return; }
L_00461D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461AECu | kUnwind; return; } goto L_00461AEC; } }
L_00461D3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27425u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00461E64; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00461D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00461F44; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00461D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_00461D94; } }
L_00461D90:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_00461D94:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00461EA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_00461F24; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00461DD4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_00461DD4:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00461DEC; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_00461DEC:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00461DFC:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461E08u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x00461E08u) [[unlikely]] return; }
L_00461E08:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00461E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40100000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[5] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.f[4] = ld32((c.r[2].w[0] + 52u));
    c.f[6] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00461F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461E5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 118u, depth + 1u); else { c.pc = 0x00461480u; return; } if (c.pc != 0x00461E5Cu) [[unlikely]] return; }
L_00461E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461C78u | kUnwind; return; } goto L_00461C78; } }
L_00461E64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] - 20408u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 3744u);
    st32((c.r[2].w[0] - 20404u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 60u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461E90u); st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x00461E90u) [[unlikely]] return; }
L_00461E90:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 64u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461EA0u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x00461EA0u) [[unlikely]] return; }
L_00461EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461D50u | kUnwind; return; } goto L_00461D50; } }
L_00461EA8:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_00461F18; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00461EDC; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_00461EDC:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00461EF4; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_00461EF4:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00461F04:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461F10u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x00461F10u) [[unlikely]] return; }
L_00461F10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461E0Cu | kUnwind; return; } goto L_00461E0C; } }
L_00461F18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 20976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461F04u | kUnwind; return; } goto L_00461F04; } }
L_00461F24:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 20976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461DFCu | kUnwind; return; } goto L_00461DFC; } }
L_00461F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461F38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 111u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x00461F38u) [[unlikely]] return; }
L_00461F38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461C78u | kUnwind; return; } goto L_00461C78; } }
L_00461F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461F4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 111u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x00461F4Cu) [[unlikely]] return; }
L_00461F4C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461C78u | kUnwind; return; } goto L_00461C78; } }
L_00461F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461F60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0029E200u; return; } if (c.pc != 0x00461F60u) [[unlikely]] return; }
L_00461F60:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u - 5u);
    st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046202C; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_00461FB0:
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
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.budget -= 26;
L_00462018:
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461C78u | kUnwind; return; } goto L_00461C78; } }
L_0046202C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462034u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00462034u) [[unlikely]] return; }
L_00462034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461FB0u | kUnwind; return; } goto L_00461FB0; } }
L_0046203C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00462040:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00462050:
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u + 16u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 1496u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 1496u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 12;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004620D0; } }
    set32(c.r[3], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004620D0; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[3].d[0] = c.r[6].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004620D8; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00462108; } }
    c.r[3].d[0] = c.r[6].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00462108; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00462108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 56u);  if (t) { goto L_004620DC; } }
L_004620D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 70u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00462110; } }
L_004620D8:
    set32(c.r[3], 0u + 56u);
    c.budget -= 1;
L_004620DC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00462100; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00462100; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004620F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00462110; } }
L_00462100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 70u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004620F8u | kUnwind; return; } goto L_004620F8; } }
L_00462108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 70u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004620F8u | kUnwind; return; } goto L_004620F8; } }
L_00462110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00462120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], 0u + 46u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462150u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 157u, depth + 1u); else { c.pc = 0x0029F0B0u; return; } if (c.pc != 0x00462150u) [[unlikely]] return; }
L_00462150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27425u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004624D4; } }
L_00462160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 14976u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 24u), c.r[16].w[0]);  if (t) { goto L_0046217C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_0046217C:
    c.r[11].d[0] = ld8((c.r[18].w[0] + 58u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 2u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], 0u - 9u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], 0u - 5u);
    c.r[5].d[0] = c.r[11].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    st8((c.r[18].w[0] + 58u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 58u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    st8((c.r[18].w[0] + 58u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 69u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 48;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00462244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462244u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00462244u) [[unlikely]] return; }
L_00462244:
    set32(c.r[2], 0u + 70u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
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
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004622CCu); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 51u, depth + 1u); else { c.pc = 0x00450A50u; return; } if (c.pc != 0x004622CCu) [[unlikely]] return; }
L_004622CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004622D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 173u, depth + 1u); else { c.pc = 0x00462050u; return; } if (c.pc != 0x004622D4u) [[unlikely]] return; }
L_004622D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004624C4; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004624C4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004624F8; } }
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
L_00462308:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00462350; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00462350; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004624F8; } }
L_00462350:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462308u | kUnwind; return; } goto L_00462308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 260u)));  if (t) { goto L_004624FC; } }
L_00462368:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00462518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046237C; } }
L_00462378:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 1;
L_0046237C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046253C; } }
L_00462384:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 1;
L_00462388:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 8u);  if (t) { goto L_004623F8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_004623A0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004623E8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004623E8; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004623F8; } }
L_004623E8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004623A0u | kUnwind; return; } goto L_004623A0; } }
L_004623F8:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_00462414:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00462480; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 8u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00462560; } }
L_00462478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[17].w[0]);  if (t) { goto L_004624B4; } }
L_00462480:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_00462498; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00462498:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462414u | kUnwind; return; } goto L_00462414; } }
    breakpoint(c, 0x004624A8u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0]), c.r[17].w[0]);
    c.budget -= 3;
L_004624B4:
    set32(c.r[2], 0u + 2u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004624C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004624CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 115u, depth + 1u); else { c.pc = 0x0029E330u; return; } if (c.pc != 0x004624CCu) [[unlikely]] return; }
L_004624CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00462568; } }
L_004624D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E230000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 60u), c.r[4].w[0]);
    st8((c.r[2].w[0] - 20408u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 20404u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462160u | kUnwind; return; } goto L_00462160; } }
L_004624F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 1;
L_004624FC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462378u | kUnwind; return; } goto L_00462378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 148u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462368u | kUnwind; return; } goto L_00462368; } }
L_00462518:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462524u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00462524u) [[unlikely]] return; }
L_00462524:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00462534u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00462534u) [[unlikely]] return; }
L_00462534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046237Cu | kUnwind; return; } goto L_0046237C; } }
L_0046253C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462384u | kUnwind; return; } goto L_00462384; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462558u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x00462558u) [[unlikely]] return; }
L_00462558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462388u | kUnwind; return; } goto L_00462388; } }
L_00462560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462478u | kUnwind; return; } goto L_00462478; } }
L_00462568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00462580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004626D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], c.r[2].w[0] + 15008u);
    set32(c.r[9], c.r[3].w[0] << 3);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[8], c.r[3].w[0] << 6);
    set32(c.r[2], 0u - 9u);
    set32(c.r[3], 0u - 17u);
    set32(c.r[7], 0u - 65u);
    set32(c.r[6], 0u - 33u);
    set32(c.r[5], 0u - 129u);
    st8((c.r[10].w[0] + 807u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 1496u));
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[9].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 1496u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 1496u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 1496u));
    c.r[7].d[0] = c.r[7].d[0] << 57;
    c.r[7].d[0] = c.r[7].d[0] >> 63;
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[7], c.r[7].w[0] << 5);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 1496u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1496u));
    c.r[6].d[0] = c.r[6].d[0] << 58;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[6], c.r[6].w[0] << 7);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 1496u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046266Cu); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 52u, depth + 1u); else { c.pc = 0x00450A60u; return; } if (c.pc != 0x0046266Cu) [[unlikely]] return; }
L_0046266C:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], c.r[16].w[0] + 108u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 531u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[6].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004626C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27425u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004626C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[2].w[0] - 20408u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004626C4u); st32((c.r[2].w[0] - 20404u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004626C4u) [[unlikely]] return; }
L_004626C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004626D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x0029B4A0u; return; } if (c.pc != 0x004626D0u) [[unlikely]] return; }
L_004626D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004626F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 72u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00462834; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00462828; } }
    set32(c.r[3], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00462738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00462900; } }
L_00462738:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00462908; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_0046274C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[10], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[8], 0u - 5u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 961u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(512ll);
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[12], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[10], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[10], c.r[10].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[10].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[10].d[0] = ld16((c.r[17].w[0]));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[17].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 55;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 356u), 0u);  if (t) { goto L_00462900; } }
    goto L_00462828;
L_00462824:
    st32((c.r[3].w[0] + 356u), 0u);
    c.budget -= 1;
L_00462828:
    st32((c.r[16].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_00462900; } }
L_00462834:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046284C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046284Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0046284Cu) [[unlikely]] return; }
L_0046284C:
    set32(c.r[2], 0u + 26u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[7], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
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
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462900u); st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0027(c, 108u, depth + 1u); else { c.pc = 0x0029E1C0u; return; } if (c.pc != 0x00462900u) [[unlikely]] return; }
L_00462900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00462918; } }
L_00462908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462910u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00462910u) [[unlikely]] return; }
L_00462910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046274Cu | kUnwind; return; } goto L_0046274C; } }
L_00462918:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00462930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[11], c.r[2].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[10], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], 0u - 3u);
    set32(c.r[13], ld32((c.r[4].w[0] + 4u)));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[12].d[0] = ld8((c.r[13].w[0] + 1496u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[13].w[0] + 1496u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[5].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[5].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[5].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 36;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 544u);  if (t) { goto L_004629DC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004629D4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x004629D4u) [[unlikely]] return; }
L_004629D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  if (t) { goto L_004629F0; } }
L_004629DC:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004629ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 372u, depth + 1u); else { c.pc = 0x0028B930u; return; } if (c.pc != 0x004629ECu) [[unlikely]] return; }
L_004629EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 1;
L_004629F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004629F8u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x004629F8u) [[unlikely]] return; }
L_004629F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462A08u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x00462A08u) [[unlikely]] return; }
L_00462A08:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00462BB0; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00462A54; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00462A54; } }
    set32(c.r[4], 0u + 65u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462A40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x00462A40u) [[unlikely]] return; }
L_00462A40:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] + 20192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462A54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0047B600u; return; } if (c.pc != 0x00462A54u) [[unlikely]] return; }
L_00462A54:
    set32(c.r[4], ld32((c.r[16].w[0] + 1360u)));
    c.budget -= 1;
L_00462A58:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00462BEC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00462BEC; } }
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00462AE8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    c.budget -= 3;
L_00462A8C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00462AD4; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_00462AD4; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00462AE8; } }
L_00462AD4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462A8Cu | kUnwind; return; } goto L_00462A8C; } }
    c.budget -= 1;
L_00462AE8:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_00462B04:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00462B70; } }
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00462BE4; } }
L_00462B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00462BA4; } }
L_00462B70:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00462B88; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00462B88:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462B04u | kUnwind; return; } goto L_00462B04; } }
    breakpoint(c, 0x00462B98u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_00462BA4:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00462BF0; } }
L_00462BB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462A54u | kUnwind; return; } goto L_00462A54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 142u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462BD0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x00462BD0u) [[unlikely]] return; }
L_00462BD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462BDCu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_00B6(c, 26u, depth + 1u); else { c.pc = 0x004D83F0u; return; } if (c.pc != 0x00462BDCu) [[unlikely]] return; }
L_00462BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 1360u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462A58u | kUnwind; return; } goto L_00462A58; } }
L_00462BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462B68u | kUnwind; return; } goto L_00462B68; } }
L_00462BEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00462BF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00462C00:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 200u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.f[21] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462C54u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00462C54u) [[unlikely]] return; }
L_00462C54:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462C60u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00462C60u) [[unlikely]] return; }
L_00462C60:
    c.f[5] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[4], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[2] = c.f[0] ^ fp::kSign;
    c.f[3] = c.r[2].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 192u), c.f[4]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[5] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 184u), c.f[4]);
    st32((c.r[29].w[0] + 180u), c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 38;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00462D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_00462D04; } }
L_00462D00:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_00462D04:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00462EB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_00462F34; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00462D44; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_00462D44:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00462D5C; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_00462D5C:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00462D6C:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462D78u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x00462D78u) [[unlikely]] return; }
L_00462D78:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00462D7C:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462D88u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0026(c, 142u, depth + 1u); else { c.pc = 0x0029A710u; return; } if (c.pc != 0x00462D88u) [[unlikely]] return; }
L_00462D88:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[3] = ld32((c.r[29].w[0] + 112u));
    c.r[20].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.r[18].d[0] = ld16((c.r[2].w[0] + 1440u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[20] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00462F98; } }
L_00462DCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 1424u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00462F98; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462DF8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 106u, depth + 1u); else { c.pc = 0x0029E170u; return; } if (c.pc != 0x00462DF8u) [[unlikely]] return; }
L_00462DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00462F80; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00462F80; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00462F80; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 52u));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00462F80; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462E60u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_001F(c, 326u, depth + 1u); else { c.pc = 0x0027E8D0u; return; } if (c.pc != 0x00462E60u) [[unlikely]] return; }
L_00462E60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00462F80; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462E74u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0029E150u; return; } if (c.pc != 0x00462E74u) [[unlikely]] return; }
L_00462E74:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00462F40; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00462FA0; } }
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00462FA0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00462FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00462F44; } }
L_00462EB8:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_00462F28; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00462EEC; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_00462EEC:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00462F04; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_00462F04:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00462F14:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462F20u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x00462F20u) [[unlikely]] return; }
L_00462F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462D7Cu | kUnwind; return; } goto L_00462D7C; } }
L_00462F28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 20976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462F14u | kUnwind; return; } goto L_00462F14; } }
L_00462F34:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 20976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462D6Cu | kUnwind; return; } goto L_00462D6C; } }
L_00462F40:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00462F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462F4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 204u, depth + 1u); else { c.pc = 0x00462930u; return; } if (c.pc != 0x00462F4Cu) [[unlikely]] return; }
L_00462F4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00462F50:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00462FB8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00462F78; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 57u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00462F78:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00462F80:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462DCCu | kUnwind; return; } goto L_00462DCC; } }
    c.budget -= 1;
L_00462F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00462FC8; } }
L_00462FA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462FB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 70u, depth + 1u); else { c.pc = 0x002D8FD0u; return; } if (c.pc != 0x00462FB0u) [[unlikely]] return; }
L_00462FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462F50u | kUnwind; return; } goto L_00462F50; } }
L_00462FB8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00462F78u | kUnwind; return; } goto L_00462F78; } }
L_00462FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00462FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 344u)));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 380u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_00463404; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00463404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_00463404; } }
L_0046303C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 27425u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00463074; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 112u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 112u));
    c.r[3].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00463074; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463074u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x00463074u) [[unlikely]] return; }
L_00463074:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[5].d[0] = c.r[3].d[0] >> 60;
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00463490; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21136u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00460000u < 16384u) { entry = entries_0098[(t - 0x00460000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004630A8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00463108; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00463108; } }
    c.r[3].d[0] = c.r[5].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00463108; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004630F4u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x004630F4u) [[unlikely]] return; }
L_004630F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463100u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0027(c, 121u, depth + 1u); else { c.pc = 0x0029E440u; return; } if (c.pc != 0x00463100u) [[unlikely]] return; }
L_00463100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004633FC; } }
L_00463108:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 212u)));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00463490; } }
    c.f[12] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046312Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 121u, depth + 1u); else { c.pc = 0x0029E440u; return; } if (c.pc != 0x0046312Cu) [[unlikely]] return; }
L_0046312C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004633FC; } }
L_00463134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046313Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 6u, depth + 1u); else { c.pc = 0x0029C0F0u; return; } if (c.pc != 0x0046313Cu) [[unlikely]] return; }
L_0046313C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00463424; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00463150:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[4].w[0] + 360u));  if (t) { goto L_00463168; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00463184; } }
L_00463168:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00463184:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00463490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004631ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 113u, depth + 1u); else { c.pc = 0x0029E2D0u; return; } if (c.pc != 0x004631ACu) [[unlikely]] return; }
L_004631AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004631B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 13u, depth + 1u); else { c.pc = 0x0029C480u; return; } if (c.pc != 0x004631B4u) [[unlikely]] return; }
L_004631B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004633FC; } }
L_004631BC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004631E0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004631E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004631E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 139u, depth + 1u); else { c.pc = 0x0029EA00u; return; } if (c.pc != 0x004631E0u) [[unlikely]] return; }
L_004631E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004631ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 217u, depth + 1u); else { c.pc = 0x00462C00u; return; } if (c.pc != 0x004631ECu) [[unlikely]] return; }
L_004631EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00463434; } }
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 27425u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00463490; } }
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00463238; } }
    st32((c.r[17].w[0] + 108u), c.f[1]);
    c.budget -= 1;
L_00463238:
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[4].w[0] - 20408u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 20404u), c.f[0]);  if (t) { goto L_004633FC; } }
L_00463254:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463260u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 217u, depth + 1u); else { c.pc = 0x00462C00u; return; } if (c.pc != 0x00463260u) [[unlikely]] return; }
L_00463260:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 51u));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.f[2] = ld32((c.r[3].w[0] + 360u));  if (t) { goto L_0046327C; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00463298; } }
L_0046327C:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00463298:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00463490; } }
    c.r[8].d[0] = ld8((c.r[3].w[0] + 1496u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 65u);
    set32(c.r[7], c.r[2].w[0] << 6);
    set32(c.r[5], 0u - 33u);
    set32(c.r[2], 0u - 129u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 1496u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1496u));
    c.r[6].d[0] = c.r[6].d[0] << 57;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[6], c.r[6].w[0] << 5);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 1496u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1496u));
    c.r[5].d[0] = c.r[5].d[0] << 58;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], c.r[5].w[0] << 7);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463324u); st8((c.r[3].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0029E200u; return; } if (c.pc != 0x00463324u) [[unlikely]] return; }
L_00463324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004633FC; } }
L_0046332C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 51u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[4] = ld32((c.r[4].w[0] + 360u));  if (t) { goto L_00463348; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00463364; } }
L_00463348:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_00463364:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00463490; } }
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004633FC; } }
L_004633B0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 59u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 59u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00463490; } }
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_004633FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00463494; } }
L_00463404:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463074u | kUnwind; return; } goto L_00463074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046303Cu | kUnwind; return; } goto L_0046303C; } }
L_00463424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046342Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 139u, depth + 1u); else { c.pc = 0x0029EA00u; return; } if (c.pc != 0x0046342Cu) [[unlikely]] return; }
L_0046342C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463150u | kUnwind; return; } goto L_00463150; } }
L_00463434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046343Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 111u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x0046343Cu) [[unlikely]] return; }
L_0046343C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 27425u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00463490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] - 20408u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 3744u);
    st32((c.r[2].w[0] - 20404u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 60u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463478u); st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x00463478u) [[unlikely]] return; }
L_00463478:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 112u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463488u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x00463488u) [[unlikely]] return; }
L_00463488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004633FCu | kUnwind; return; } goto L_004633FC; } }
L_00463490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00463494:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004634B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[6], 0u + 44u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004634ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0029B5C0u; return; } if (c.pc != 0x004634ECu) [[unlikely]] return; }
L_004634EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27425u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046393C; } }
L_004634FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u - 3u);
    set32(c.r[2], c.r[2].w[0] + 15008u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 736u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 525u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463544u); set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 51u, depth + 1u); else { c.pc = 0x00450A50u; return; } if (c.pc != 0x00463544u) [[unlikely]] return; }
L_00463544:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1496u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.f[21] = 0u;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 531u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046358C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[3].w[0] + 4u));  if (t) { goto L_00463590; } }
L_0046358C:
    c.f[22] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 1;
L_00463590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463598u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00463598u) [[unlikely]] return; }
L_00463598:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004635A4u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004635A4u) [[unlikely]] return; }
L_004635A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.r[6].d[0] = 0ull & 1ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], 0u - 5u);
    c.f[3] = 0u;
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[2], 0u - 3u);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[22]);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[11], 0u - 17u);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[22]);
    set32(c.r[12], c.r[6].w[0] << 4);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    set32(c.r[10], 0u - 2u);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[8], 0u - 9u);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[9], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[21], c.f[1]);
    st32((c.r[16].w[0] + 688u), c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 692u), c.f[1]);
    st32((c.r[16].w[0] + 696u), c.f[0]);
    st32((c.r[16].w[0] + 700u), c.f[20]);
    c.r[13].d[0] = ld8((c.r[16].w[0] + 724u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[3].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 724u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[2].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[17].w[0] + 58u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[13].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[17].w[0] + 58u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    c.r[5].d[0] = c.r[10].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 58u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 58u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 58u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 68;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004636BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004636BCu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004636BCu) [[unlikely]] return; }
L_004636BC:
    set32(c.r[2], 0u + 72u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
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
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463740u); st32((c.r[16].w[0] + 372u), c.f[0]);  if (depth < kMaxDepth) unit_0027(c, 115u, depth + 1u); else { c.pc = 0x0029E330u; return; } if (c.pc != 0x00463740u) [[unlikely]] return; }
L_00463740:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00463934; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00463934; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00463960; } }
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
L_00463774:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004637BC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004637BC; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00463960; } }
L_004637BC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463774u | kUnwind; return; } goto L_00463774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 260u)));  if (t) { goto L_00463964; } }
L_004637D4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00463980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004637E8; } }
L_004637E4:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 1;
L_004637E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004639A4; } }
L_004637F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 208u)));
    c.budget -= 1;
L_004637F4:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + 8u);  if (t) { goto L_00463868; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_0046380C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00463854; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00463854; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00463868; } }
L_00463854:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046380Cu | kUnwind; return; } goto L_0046380C; } }
    c.budget -= 1;
L_00463868:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_00463884:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004638F0; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 8u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004639C8; } }
L_004638E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[16].w[0]);  if (t) { goto L_00463924; } }
L_004638F0:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_00463908; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00463908:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463884u | kUnwind; return; } goto L_00463884; } }
    breakpoint(c, 0x00463918u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0]), c.r[16].w[0]);
    c.budget -= 3;
L_00463924:
    set32(c.r[2], 0u + 2u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00463934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004639D0; } }
L_0046393C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E230000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[17].w[0] + 108u), c.r[4].w[0]);
    st8((c.r[2].w[0] - 20408u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 20404u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004634FCu | kUnwind; return; } goto L_004634FC; } }
L_00463960:
    set32(c.r[3], ld32((c.r[18].w[0] + 260u)));
    c.budget -= 1;
L_00463964:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004637E4u | kUnwind; return; } goto L_004637E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 148u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004637D4u | kUnwind; return; } goto L_004637D4; } }
L_00463980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046398Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0046398Cu) [[unlikely]] return; }
L_0046398C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046399Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046399Cu) [[unlikely]] return; }
L_0046399C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004637E8u | kUnwind; return; } goto L_004637E8; } }
L_004639A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004637F0u | kUnwind; return; } goto L_004637F0; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004639C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x004639C0u) [[unlikely]] return; }
L_004639C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004637F4u | kUnwind; return; } goto L_004637F4; } }
L_004639C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004638E8u | kUnwind; return; } goto L_004638E8; } }
L_004639D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00463A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00463B10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].d[0] = 0ull & 1ull;
    set32(c.r[2], c.r[2].w[0] + 15040u);
    set32(c.r[7], 0u - 17u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 65u);
    set32(c.r[15], c.r[9].w[0] << 6);
    set32(c.r[13], 0u - 33u);
    set32(c.r[2], 0u - 129u);
    set32(c.r[12], 0u - 2u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[10], c.r[9].w[0] << 7);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0] + 807u), static_cast<std::uint8_t>(0u));
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[14].w[0] + 525u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[14].w[0] + 525u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[14].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[14].d[0] = c.r[14].d[0] & c.r[3].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[15].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[14].d[0] = c.r[14].d[0] << 57;
    c.r[14].d[0] = c.r[14].d[0] >> 63;
    c.r[14].d[0] = c.r[14].d[0] & 1ull;
    set32(c.r[14], c.r[14].w[0] << 5);
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[15].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[13].d[0] = c.r[13].d[0] << 58;
    c.r[13].d[0] = c.r[13].d[0] >> 63;
    c.r[13].d[0] = c.r[13].d[0] & 1ull;
    set32(c.r[14], c.r[13].w[0] << 7);
    c.r[13].d[0] = c.r[15].d[0] & c.r[2].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[13], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[13].w[0] + 1496u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[13].w[0] + 1496u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 524u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[12].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    st8((c.r[7].w[0] + 524u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 523u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st8((c.r[7].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 523u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463B10u); st8((c.r[7].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 179u, depth + 1u); else { c.pc = 0x0029B4A0u; return; } if (c.pc != 0x00463B10u) [[unlikely]] return; }
L_00463B10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00463B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 278u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00463CF4; } }
    set32(c.r[3], 0u + 277u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00463C50; } }
    set32(c.r[3], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00463B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00463CFC; } }
L_00463B78:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00463D04; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_00463B8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[9], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[7], 0u - 5u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[5], 0u - 3u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 961u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(512ll);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[11], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[9].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[9].d[0] = ld16((c.r[17].w[0]));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 49;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00463CFC; } }
L_00463C50:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00463C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463C68u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00463C68u) [[unlikely]] return; }
L_00463C68:
    set32(c.r[2], 0u + 278u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
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
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463CECu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0020(c, 40u, depth + 1u); else { c.pc = 0x00280530u; return; } if (c.pc != 0x00463CECu) [[unlikely]] return; }
L_00463CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00463CFC; } }
L_00463CF4:
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_00463CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00463D14; } }
L_00463D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463D0Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x00463D0Cu) [[unlikely]] return; }
L_00463D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463B8Cu | kUnwind; return; } goto L_00463B8C; } }
L_00463D14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00463D30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00463D7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_00463D80; } }
L_00463D7C:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_00463D80:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00463ECC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_00463F48; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00463DC0; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_00463DC0:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00463DD8; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_00463DD8:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00463DE8:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463DF4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x00463DF4u) [[unlikely]] return; }
L_00463DF4:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00463DF8:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463E04u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0026(c, 142u, depth + 1u); else { c.pc = 0x0029A710u; return; } if (c.pc != 0x00463E04u) [[unlikely]] return; }
L_00463E04:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00463E2C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 58u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00463E2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00463E44; } }
L_00463E2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1440u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00463E44; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1424u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00463E44:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0099(c, 7u, depth); } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463E58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 106u, depth + 1u); else { c.pc = 0x0029E170u; return; } if (c.pc != 0x00463E58u) [[unlikely]] return; }
L_00463E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0099(c, 7u, depth); } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00463F54; } }
L_00463E74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00463F7C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 736u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00463EA8; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00463F7C; } }
L_00463EA8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[3], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00463F7C; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00463F7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { [[clang::musttail]] return unit_0099(c, 8u, depth); } }
L_00463ECC:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_00463F3C; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00463F00; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_00463F00:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00463F18; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_00463F18:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00463F28:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F34u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x00463F34u) [[unlikely]] return; }
L_00463F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463DF8u | kUnwind; return; } goto L_00463DF8; } }
L_00463F3C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 20976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463F28u | kUnwind; return; } goto L_00463F28; } }
L_00463F48:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 20976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463DE8u | kUnwind; return; } goto L_00463DE8; } }
L_00463F54:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 64u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463E74u | kUnwind; return; } goto L_00463E74; } }
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463E74u | kUnwind; return; } goto L_00463E74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0099(c, 7u, depth); } }
L_00463F7C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 52u));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00463F94; } }
L_00463F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0099(c, 7u, depth); } }
L_00463F94:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FA8u); set32(c.r[6], c.r[29].w[0] + 127u);  if (depth < kMaxDepth) unit_001F(c, 347u, depth + 1u); else { c.pc = 0x0027F080u; return; } if (c.pc != 0x00463FA8u) [[unlikely]] return; }
L_00463FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0099(c, 7u, depth); } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0029E150u; return; } if (c.pc != 0x00463FBCu) [[unlikely]] return; }
L_00463FBC:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 358u, depth + 1u); else { c.pc = 0x0027F4A0u; return; } if (c.pc != 0x00463FC8u) [[unlikely]] return; }
L_00463FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0099(c, 2u, depth); } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 70u, depth + 1u); else { c.pc = 0x002D8FD0u; return; } if (c.pc != 0x00463FE0u) [[unlikely]] return; }
L_00463FE0:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0099(c, 6u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0099(c, 7u, depth); } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 57u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0099(c, 1u, depth);
}

}

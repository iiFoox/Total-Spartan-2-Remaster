#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BB[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 117, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0,
    0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0,
    0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004EC000;
    case 2u: goto L_004EC01C;
    case 3u: goto L_004EC058;
    case 4u: goto L_004EC088;
    case 5u: goto L_004EC094;
    case 6u: goto L_004EC0B0;
    case 7u: goto L_004EC0BC;
    case 8u: goto L_004EC0D8;
    case 9u: goto L_004EC0E4;
    case 10u: goto L_004EC0FC;
    case 11u: goto L_004EC138;
    case 12u: goto L_004EC158;
    case 13u: goto L_004EC16C;
    case 14u: goto L_004EC18C;
    case 15u: goto L_004EC19C;
    case 16u: goto L_004EC1B8;
    case 17u: goto L_004EC1D0;
    case 18u: goto L_004EC1E4;
    case 19u: goto L_004EC1E8;
    case 20u: goto L_004EC248;
    case 21u: goto L_004EC2BC;
    case 22u: goto L_004EC310;
    case 23u: goto L_004EC34C;
    case 24u: goto L_004EC360;
    case 25u: goto L_004EC3F0;
    case 26u: goto L_004EC428;
    case 27u: goto L_004EC448;
    case 28u: goto L_004EC458;
    case 29u: goto L_004EC464;
    case 30u: goto L_004EC4F0;
    case 31u: goto L_004EC520;
    case 32u: goto L_004EC578;
    case 33u: goto L_004EC588;
    case 34u: goto L_004EC5B8;
    case 35u: goto L_004EC618;
    case 36u: goto L_004EC650;
    case 37u: goto L_004EC688;
    case 38u: goto L_004EC694;
    case 39u: goto L_004EC6A8;
    case 40u: goto L_004EC6B4;
    case 41u: goto L_004EC6CC;
    case 42u: goto L_004EC71C;
    case 43u: goto L_004EC73C;
    case 44u: goto L_004EC74C;
    case 45u: goto L_004EC770;
    case 46u: goto L_004EC780;
    case 47u: goto L_004EC7B0;
    case 48u: goto L_004EC7D0;
    case 49u: goto L_004EC7F0;
    case 50u: goto L_004EC81C;
    case 51u: goto L_004EC828;
    case 52u: goto L_004EC840;
    case 53u: goto L_004EC880;
    case 54u: goto L_004EC8B0;
    case 55u: goto L_004EC8C8;
    case 56u: goto L_004EC8E0;
    case 57u: goto L_004EC8F0;
    case 58u: goto L_004EC908;
    case 59u: goto L_004EC950;
    case 60u: goto L_004EC990;
    case 61u: goto L_004EC99C;
    case 62u: goto L_004EC9B0;
    case 63u: goto L_004ECA34;
    case 64u: goto L_004ECA60;
    case 65u: goto L_004ECA84;
    case 66u: goto L_004ECAA4;
    case 67u: goto L_004ECAB4;
    case 68u: goto L_004ECAF0;
    case 69u: goto L_004ECB00;
    case 70u: goto L_004ECB38;
    case 71u: goto L_004ECB44;
    case 72u: goto L_004ECB58;
    case 73u: goto L_004ECB64;
    case 74u: goto L_004ECB7C;
    case 75u: goto L_004ECBD4;
    case 76u: goto L_004ECBF4;
    case 77u: goto L_004ECC04;
    case 78u: goto L_004ECC20;
    case 79u: goto L_004ECC30;
    case 80u: goto L_004ECC60;
    case 81u: goto L_004ECC80;
    case 82u: goto L_004ECCAC;
    case 83u: goto L_004ECCB8;
    case 84u: goto L_004ECCD0;
    case 85u: goto L_004ECCD8;
    case 86u: goto L_004ECD04;
    case 87u: goto L_004ECD30;
    case 88u: goto L_004ECD60;
    case 89u: goto L_004ECD78;
    case 90u: goto L_004ECD90;
    case 91u: goto L_004ECDA0;
    case 92u: goto L_004ECDB8;
    case 93u: goto L_004ECDC0;
    case 94u: goto L_004ECDEC;
    case 95u: goto L_004ECE20;
    case 96u: goto L_004ECE30;
    case 97u: goto L_004ECE40;
    case 98u: goto L_004ECE50;
    case 99u: goto L_004ECE64;
    case 100u: goto L_004ECE6C;
    case 101u: goto L_004ECE84;
    case 102u: goto L_004ECEA0;
    case 103u: goto L_004ECEB4;
    case 104u: goto L_004ECEBC;
    case 105u: goto L_004ECED4;
    case 106u: goto L_004ECEF0;
    case 107u: goto L_004ECF34;
    case 108u: goto L_004ECF40;
    case 109u: goto L_004ECF48;
    case 110u: goto L_004ECF60;
    case 111u: goto L_004ECF80;
    case 112u: goto L_004ECFD0;
    case 113u: goto L_004ED024;
    case 114u: goto L_004ED040;
    case 115u: goto L_004ED0B0;
    case 116u: goto L_004ED0E0;
    case 117u: goto L_004ED0E4;
    case 118u: goto L_004ED100;
    case 119u: goto L_004ED118;
    case 120u: goto L_004ED12C;
    case 121u: goto L_004ED168;
    case 122u: goto L_004ED200;
    case 123u: goto L_004ED23C;
    case 124u: goto L_004ED270;
    case 125u: goto L_004ED2B8;
    case 126u: goto L_004ED2BC;
    case 127u: goto L_004ED2FC;
    case 128u: goto L_004ED314;
    case 129u: goto L_004ED32C;
    case 130u: goto L_004ED360;
    case 131u: goto L_004ED398;
    case 132u: goto L_004ED3C8;
    case 133u: goto L_004ED418;
    case 134u: goto L_004ED468;
    case 135u: goto L_004ED5C0;
    case 136u: goto L_004ED5D0;
    case 137u: goto L_004ED5F4;
    case 138u: goto L_004ED60C;
    case 139u: goto L_004ED620;
    case 140u: goto L_004ED628;
    case 141u: goto L_004ED780;
    case 142u: goto L_004ED7D0;
    case 143u: goto L_004ED808;
    case 144u: goto L_004ED814;
    case 145u: goto L_004ED82C;
    case 146u: goto L_004ED838;
    case 147u: goto L_004ED874;
    case 148u: goto L_004ED8A0;
    case 149u: goto L_004ED8D8;
    case 150u: goto L_004ED8E4;
    case 151u: goto L_004ED8F8;
    case 152u: goto L_004ED904;
    case 153u: goto L_004ED91C;
    case 154u: goto L_004ED96C;
    case 155u: goto L_004ED98C;
    case 156u: goto L_004ED99C;
    case 157u: goto L_004ED9C0;
    case 158u: goto L_004ED9D0;
    case 159u: goto L_004EDA00;
    case 160u: goto L_004EDA20;
    case 161u: goto L_004EDA9C;
    case 162u: goto L_004EDAC0;
    case 163u: goto L_004EDB10;
    case 164u: goto L_004EDBD0;
    case 165u: goto L_004EDCD0;
    case 166u: goto L_004EDE90;
    case 167u: goto L_004EDF0C;
    case 168u: goto L_004EDF20;
    case 169u: goto L_004EDF60;
    case 170u: goto L_004EDF98;
    case 171u: goto L_004EDFA8;
    case 172u: goto L_004EDFC0;
    case 173u: goto L_004EDFD4;
    case 174u: goto L_004EE030;
    case 175u: goto L_004EE068;
    case 176u: goto L_004EE078;
    case 177u: goto L_004EE090;
    case 178u: goto L_004EE0A4;
    case 179u: goto L_004EE0EC;
    case 180u: goto L_004EE104;
    case 181u: goto L_004EE130;
    case 182u: goto L_004EE17C;
    case 183u: goto L_004EE1E8;
    case 184u: goto L_004EE238;
    case 185u: goto L_004EE240;
    case 186u: goto L_004EE2B8;
    case 187u: goto L_004EE308;
    case 188u: goto L_004EE338;
    case 189u: goto L_004EE480;
    case 190u: goto L_004EE4B8;
    case 191u: goto L_004EE510;
    case 192u: goto L_004EE560;
    case 193u: goto L_004EE598;
    case 194u: goto L_004EE5DC;
    case 195u: goto L_004EE640;
    case 196u: goto L_004EE650;
    case 197u: goto L_004EE694;
    case 198u: goto L_004EE740;
    case 199u: goto L_004EE830;
    case 200u: goto L_004EE848;
    case 201u: goto L_004EE8B0;
    case 202u: goto L_004EE8E8;
    case 203u: goto L_004EE950;
    case 204u: goto L_004EE98C;
    case 205u: goto L_004EE9B4;
    case 206u: goto L_004EE9F0;
    case 207u: goto L_004EEA18;
    case 208u: goto L_004EEA70;
    case 209u: goto L_004EEAB0;
    case 210u: goto L_004EEB04;
    case 211u: goto L_004EEB30;
    case 212u: goto L_004EEB58;
    case 213u: goto L_004EEB70;
    case 214u: goto L_004EEB88;
    case 215u: goto L_004EEB94;
    case 216u: goto L_004EEBB0;
    case 217u: goto L_004EEBDC;
    case 218u: goto L_004EEBF0;
    case 219u: goto L_004EEC0C;
    case 220u: goto L_004EEC30;
    case 221u: goto L_004EEC60;
    case 222u: goto L_004EEC80;
    case 223u: goto L_004EECC4;
    case 224u: goto L_004EECE4;
    case 225u: goto L_004EED94;
    case 226u: goto L_004EEDA0;
    case 227u: goto L_004EEDC4;
    case 228u: goto L_004EEDD0;
    case 229u: goto L_004EEDE8;
    case 230u: goto L_004EEDF4;
    case 231u: goto L_004EEE08;
    case 232u: goto L_004EEE14;
    case 233u: goto L_004EEE28;
    case 234u: goto L_004EEE40;
    case 235u: goto L_004EEE54;
    case 236u: goto L_004EEE70;
    case 237u: goto L_004EEE90;
    case 238u: goto L_004EEEA0;
    case 239u: goto L_004EEEB0;
    case 240u: goto L_004EEEC8;
    case 241u: goto L_004EEF20;
    case 242u: goto L_004EEF50;
    case 243u: goto L_004EEF70;
    case 244u: goto L_004EEF80;
    case 245u: goto L_004EF464;
    case 246u: goto L_004EF4A4;
    case 247u: goto L_004EF4C0;
    case 248u: goto L_004EF570;
    case 249u: goto L_004EF5D0;
    case 250u: goto L_004EF5FC;
    case 251u: goto L_004EF610;
    case 252u: goto L_004EF624;
    case 253u: goto L_004EF63C;
    case 254u: goto L_004EF6A0;
    case 255u: goto L_004EF7C0;
    case 256u: goto L_004EF8A0;
    case 257u: goto L_004EF8F0;
    case 258u: goto L_004EF920;
    case 259u: goto L_004EF940;
    case 260u: goto L_004EFA60;
    case 261u: goto L_004EFB40;
    case 262u: goto L_004EFB90;
    case 263u: goto L_004EFBDC;
    case 264u: goto L_004EFC50;
    case 265u: goto L_004EFC60;
    case 266u: goto L_004EFC98;
    case 267u: goto L_004EFCA4;
    case 268u: goto L_004EFCC0;
    case 269u: goto L_004EFCC8;
    case 270u: goto L_004EFD70;
    case 271u: goto L_004EFD84;
    case 272u: goto L_004EFDD8;
    case 273u: goto L_004EFE20;
    case 274u: goto L_004EFE48;
    case 275u: goto L_004EFE60;
    case 276u: goto L_004EFE6C;
    case 277u: goto L_004EFE88;
    case 278u: goto L_004EFEB8;
    case 279u: goto L_004EFEE0;
    case 280u: goto L_004EFF10;
    case 281u: goto L_004EFF30;
    case 282u: goto L_004EFF78;
    case 283u: goto L_004EFF98;
    default: bad_entry(c, 0x004EC000u); return;
    }
L_004EC000:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004EC024; } }
L_004EC01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_004EC2E4; } }
L_004EC024:
    c.r[22].d[0] = ld16((c.r[6].w[0] + 20u));
    set32(c.r[2], c.r[29].w[0] + 173u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[29].w[0] + 174u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + 175u);
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC058u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004EC058u) [[unlikely]] return; }
L_004EC058:
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 4u), 0u);
    st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_004EC08C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC088u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004EC088u) [[unlikely]] return; }
L_004EC088:
    st32((c.r[21].w[0] + 16u), 0u);
    c.budget -= 1;
L_004EC08C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004EC12C; } }
L_004EC094:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] << 4);  if (t) { goto L_004EC0B4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC0B0u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004EC0B0u) [[unlikely]] return; }
L_004EC0B0:
    st32((c.r[21].w[0] + 24u), 0u);
    c.budget -= 1;
L_004EC0B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004EC160; } }
L_004EC0BC:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 7u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_004EC0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC0D8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EC0D8u) [[unlikely]] return; }
L_004EC0D8:
    st32((c.r[21].w[0] + 20u), 0u);
    c.budget -= 1;
L_004EC0DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004EC194; } }
L_004EC0E4:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004EC1A4; } }
L_004EC0FC:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC0FCu | kUnwind; return; } goto L_004EC0FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_004EC1A8; } }
L_004EC12C:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC138u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004EC138u) [[unlikely]] return; }
L_004EC138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC158u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004EC158u) [[unlikely]] return; }
L_004EC158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC094u | kUnwind; return; } goto L_004EC094; } }
L_004EC160:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC16Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004EC16Cu) [[unlikely]] return; }
L_004EC16C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC18Cu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004EC18Cu) [[unlikely]] return; }
L_004EC18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC0BCu | kUnwind; return; } goto L_004EC0BC; } }
L_004EC194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC19Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004EC19Cu) [[unlikely]] return; }
L_004EC19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC0E4u | kUnwind; return; } goto L_004EC0E4; } }
L_004EC1A4:
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004EC1A8:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004EC1C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_004EC1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC01Cu | kUnwind; return; } goto L_004EC01C; } }
L_004EC1C0:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[29].w[0] + 164u);
    set32(c.r[30], c.r[29].w[0] + 166u);
    c.budget -= 4;
L_004EC1D0:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC1E4u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0041(c, 58u, depth + 1u); else { c.pc = 0x00304A80u; return; } if (c.pc != 0x004EC1E4u) [[unlikely]] return; }
L_004EC1E4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EC1E8:
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004EC2C8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004EC2C8; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].d[0] = ld16((c.r[30].w[0]));
    set32(c.r[7], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 4u));
    st32((c.r[29].w[0] + 160u), c.r[6].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[23].w[0]));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EC2A0; } }
    c.budget -= 1;
L_004EC248:
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 172u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 260u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 173u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 174u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 175u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC1E8u | kUnwind; return; } goto L_004EC1E8; } }
L_004EC2A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC2BCu); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 43u, depth + 1u); else { c.pc = 0x003048C0u; return; } if (c.pc != 0x004EC2BCu) [[unlikely]] return; }
L_004EC2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC248u | kUnwind; return; } goto L_004EC248; } }
    c.budget -= 1;
L_004EC2C8:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC1D0u | kUnwind; return; } goto L_004EC1D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC1B8u | kUnwind; return; } goto L_004EC1B8; } }
L_004EC2E4:
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
L_004EC310:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC34Cu); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004EC34Cu) [[unlikely]] return; }
L_004EC34C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004EC3C8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_004EC360:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_004EC3B4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_004EC3C8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004EC3C8; } }
L_004EC3B4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC360u | kUnwind; return; } goto L_004EC360; } }
    c.budget -= 1;
L_004EC3C8:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004EC3F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004EC430; } }
L_004EC428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004EC4F8; } }
L_004EC430:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC448u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 209u, depth + 1u); else { c.pc = 0x003F62E0u; return; } if (c.pc != 0x004EC448u) [[unlikely]] return; }
L_004EC448:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC458u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004EC458u) [[unlikely]] return; }
L_004EC458:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004EC490; } }
L_004EC464:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC428u | kUnwind; return; } goto L_004EC428; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_004EC4F8; } }
L_004EC490:
    set32(c.r[3], ld32((c.r[19].w[0] + 348u)));
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[2].w[0] << 6);
    st32((c.r[17].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 18u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    set32(c.r[4], c.r[2].w[0] + 528u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC4F0u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004EC4F0u) [[unlikely]] return; }
L_004EC4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC464u | kUnwind; return; } goto L_004EC464; } }
L_004EC4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004EC520:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004EC5A0; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[29].w[0] + 180u);
    set32(c.r[22], c.r[29].w[0] + 184u);
    set32(c.r[23], c.r[29].w[0] + 164u);
    set32(c.r[30], c.r[29].w[0] + 168u);
    c.budget -= 5;
L_004EC578:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_004EC5A8; } }
L_004EC588:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC578u | kUnwind; return; } goto L_004EC578; } }
    c.budget -= 1;
L_004EC5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EC620; } }
L_004EC5A8:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC5B8u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004EC5B8u) [[unlikely]] return; }
L_004EC5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC588u | kUnwind; return; } goto L_004EC588; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[6], 0u + 17u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 160u);
    set32(c.r[3], ld32((c.r[3].w[0] + 348u)));
    set32(c.r[10], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + 528u);
    set32(c.r[2], c.r[3].w[0] + c.r[10].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[21].w[0]), c.f[1]);
    st32((c.r[23].w[0]), 0u);
    st32((c.r[22].w[0]), c.f[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC618u); st32((c.r[30].w[0]), 0u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004EC618u) [[unlikely]] return; }
L_004EC618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC588u | kUnwind; return; } goto L_004EC588; } }
L_004EC620:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004EC650:
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
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EC68C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC688u); set32(c.r[5], c.r[5].w[0] - 14464u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004EC688u) [[unlikely]] return; }
L_004EC688:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004EC68C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004EC710; } }
L_004EC694:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_004EC6AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC6A8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EC6A8u) [[unlikely]] return; }
L_004EC6A8:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004EC6AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004EC744; } }
L_004EC6B4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004EC754; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004EC6CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC6CCu | kUnwind; return; } goto L_004EC6CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004EC758; } }
L_004EC710:
    set32(c.r[2], c.r[17].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC71Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004EC71Cu) [[unlikely]] return; }
L_004EC71C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14480u);
    set32(c.r[6], c.r[6].w[0] - 14464u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC73Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004EC73Cu) [[unlikely]] return; }
L_004EC73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC694u | kUnwind; return; } goto L_004EC694; } }
L_004EC744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC74Cu); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004EC74Cu) [[unlikely]] return; }
L_004EC74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC6B4u | kUnwind; return; } goto L_004EC6B4; } }
L_004EC754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004EC758:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004EC770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004EC780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EC7B0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004EC7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC7B0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004EC7B0u) [[unlikely]] return; }
L_004EC7B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004EC7D0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F79F0u | kUnwind; return; } [[clang::musttail]] return unit_007D(c, 406u, depth); }
L_004EC7F0:
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
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004EC824; } }
L_004EC81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { goto L_004EC860; } }
L_004EC824:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EC828:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC840u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004EC840u) [[unlikely]] return; }
L_004EC840:
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC828u | kUnwind; return; } goto L_004EC828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC81Cu | kUnwind; return; } goto L_004EC81C; } }
L_004EC860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004EC880:
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
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004EC8EC; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_004EC8B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EC8CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC8C8u); set32(c.r[5], c.r[5].w[0] - 14464u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004EC8C8u) [[unlikely]] return; }
L_004EC8C8:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_004EC8CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EC928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC8E0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EC8E0u) [[unlikely]] return; }
L_004EC8E0:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004EC92C; } }
L_004EC8EC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EC8F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC908u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004EC908u) [[unlikely]] return; }
L_004EC908:
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC8F0u | kUnwind; return; } goto L_004EC8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC8B0u | kUnwind; return; } goto L_004EC8B0; } }
L_004EC928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004EC92C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004EC950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC990u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004EC990u) [[unlikely]] return; }
L_004EC990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ECA24; } }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004EC99C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004ECA18; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_004EC9B0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_004ECA04; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_004ECA18; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004ECA18; } }
L_004ECA04:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC9B0u | kUnwind; return; } goto L_004EC9B0; } }
    c.budget -= 1;
L_004ECA18:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_004ECA3C; } }
L_004ECA24:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECA34u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004ECA34u) [[unlikely]] return; }
L_004ECA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC99Cu | kUnwind; return; } goto L_004EC99C; } }
L_004ECA3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004ECA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ECA8C; } }
L_004ECA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004ECADC; } }
L_004ECA8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECAA4u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 216u, depth + 1u); else { c.pc = 0x003F6460u; return; } if (c.pc != 0x004ECAA4u) [[unlikely]] return; }
L_004ECAA4:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECAB4u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004ECAB4u) [[unlikely]] return; }
L_004ECAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECA84u | kUnwind; return; } goto L_004ECA84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
L_004ECADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004ECAF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004ECB00:
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
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ECB3C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECB38u); set32(c.r[5], c.r[5].w[0] - 13264u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004ECB38u) [[unlikely]] return; }
L_004ECB38:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004ECB3C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004ECBC0; } }
L_004ECB44:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_004ECB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECB58u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004ECB58u) [[unlikely]] return; }
L_004ECB58:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004ECB5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004ECBFC; } }
L_004ECB64:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004ECC0C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004ECB7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECB7Cu | kUnwind; return; } goto L_004ECB7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004ECC10; } }
L_004ECBC0:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECBD4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004ECBD4u) [[unlikely]] return; }
L_004ECBD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 13280u);
    set32(c.r[6], c.r[6].w[0] - 13264u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECBF4u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004ECBF4u) [[unlikely]] return; }
L_004ECBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECB44u | kUnwind; return; } goto L_004ECB44; } }
L_004ECBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECC04u); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004ECC04u) [[unlikely]] return; }
L_004ECC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECB64u | kUnwind; return; } goto L_004ECB64; } }
L_004ECC0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004ECC10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004ECC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004ECC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004ECC60; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004ECC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECC60u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004ECC60u) [[unlikely]] return; }
L_004ECC60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ECC80:
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
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004ECCB4; } }
L_004ECCAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { goto L_004ECD10; } }
L_004ECCB4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004ECCB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECCD0u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004ECCD0u) [[unlikely]] return; }
L_004ECCD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ECCF8; } }
L_004ECCD8:
    st32((c.r[19].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECCB8u | kUnwind; return; } goto L_004ECCB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECCACu | kUnwind; return; } goto L_004ECCAC; } }
L_004ECCF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECD04u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004ECD04u) [[unlikely]] return; }
L_004ECD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECCD8u | kUnwind; return; } goto L_004ECCD8; } }
    c.budget -= 1;
L_004ECD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004ECD30:
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
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004ECD9C; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_004ECD60:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ECD7C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECD78u); set32(c.r[5], c.r[5].w[0] - 13264u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004ECD78u) [[unlikely]] return; }
L_004ECD78:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_004ECD7C:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ECDF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECD90u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004ECD90u) [[unlikely]] return; }
L_004ECD90:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ECDF8; } }
L_004ECD9C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004ECDA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECDB8u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004ECDB8u) [[unlikely]] return; }
L_004ECDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ECDE0; } }
L_004ECDC0:
    st32((c.r[19].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECDA0u | kUnwind; return; } goto L_004ECDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECD60u | kUnwind; return; } goto L_004ECD60; } }
L_004ECDE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECDECu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004ECDECu) [[unlikely]] return; }
L_004ECDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECDC0u | kUnwind; return; } goto L_004ECDC0; } }
    c.budget -= 1;
L_004ECDF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004ECE20:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 24608u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AD50u | kUnwind; return; } [[clang::musttail]] return unit_0052(c, 134u, depth); }
L_004ECE30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 24608u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AD90u | kUnwind; return; } [[clang::musttail]] return unit_0052(c, 135u, depth); }
L_004ECE40:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 24608u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AD50u | kUnwind; return; } [[clang::musttail]] return unit_0052(c, 134u, depth); }
L_004ECE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECE64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004ECE64u) [[unlikely]] return; }
L_004ECE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ECE74; } }
L_004ECE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004ECE8C; } }
L_004ECE74:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECE84u); set32(c.r[4], c.r[4].w[0] + 24608u);  if (depth < kMaxDepth) unit_0052(c, 135u, depth + 1u); else { c.pc = 0x0034AD90u; return; } if (c.pc != 0x004ECE84u) [[unlikely]] return; }
L_004ECE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECE6Cu | kUnwind; return; } goto L_004ECE6C; } }
L_004ECE8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ECEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECEB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004ECEB4u) [[unlikely]] return; }
L_004ECEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ECEC4; } }
L_004ECEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004ECEDC; } }
L_004ECEC4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECED4u); set32(c.r[4], c.r[4].w[0] + 24608u);  if (depth < kMaxDepth) unit_0052(c, 134u, depth + 1u); else { c.pc = 0x0034AD50u; return; } if (c.pc != 0x004ECED4u) [[unlikely]] return; }
L_004ECED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECEBCu | kUnwind; return; } goto L_004ECEBC; } }
L_004ECEDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ECEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 59u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ECF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004ECF14; } }
L_004ECF10:
    set32(c.r[7], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_004ECF14:
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 80u)));
    c.f[13] = ld32((c.r[16].w[0] + 52u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24576u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECF34u); set32(c.r[6], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0052(c, 153u, depth + 1u); else { c.pc = 0x0034B470u; return; } if (c.pc != 0x004ECF34u) [[unlikely]] return; }
L_004ECF34:
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECF40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004ECF40u) [[unlikely]] return; }
L_004ECF40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ECF50; } }
L_004ECF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004ECF68; } }
L_004ECF50:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECF60u); set32(c.r[4], c.r[4].w[0] + 24608u);  if (depth < kMaxDepth) unit_0052(c, 135u, depth + 1u); else { c.pc = 0x0034AD90u; return; } if (c.pc != 0x004ECF60u) [[unlikely]] return; }
L_004ECF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECF48u | kUnwind; return; } goto L_004ECF48; } }
L_004ECF68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ECF80:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 24u));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 25u));
    c.r[8].d[0] = ld8((c.r[5].w[0] + 26u));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 27u));
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);
    st32((c.r[4].w[0] + 48u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 48u)));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 58u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 59u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[6]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004ECFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004ED024; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 20624u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004ED00C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004ED00C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004ED024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED024u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004ED024u) [[unlikely]] return; }
L_004ED024:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ED040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 20624u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004ED0B0:
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
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004ED0EC; } }
L_004ED0E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004ED0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_004ED1D4; } }
L_004ED0EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u + 4512u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_004ED100:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4372u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED118u); set32(c.r[17], c.r[2].w[0] + 4372u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004ED118u) [[unlikely]] return; }
L_004ED118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ED140; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED12Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004ED12Cu) [[unlikely]] return; }
L_004ED12C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED100u | kUnwind; return; } goto L_004ED100; } }
    c.budget -= 1;
L_004ED140:
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED0E0u | kUnwind; return; } goto L_004ED0E0; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], 0u + 4512u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_004ED168:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004ED1BC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED0E0u | kUnwind; return; } goto L_004ED0E0; } }
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
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED0E0u | kUnwind; return; } goto L_004ED0E0; } }
L_004ED1BC:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED168u | kUnwind; return; } goto L_004ED168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED0E4u | kUnwind; return; } goto L_004ED0E4; } }
L_004ED1D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004ED200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ED228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004ED25C; } }
L_004ED228:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED23Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00BB(c, 160u, depth + 1u); else { c.pc = 0x004EDA20u; return; } if (c.pc != 0x004ED23Cu) [[unlikely]] return; }
L_004ED23C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4360u)));
    c.budget -= 8;
L_004ED25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ED270:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] != 0ull; c.f[23] = c.f[12];  if (t) { goto L_004ED348; } }
L_004ED2B8:
    c.f[2] = ld32((c.r[20].w[0] + 4356u));
    c.budget -= 1;
L_004ED2BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004ED788; } }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004ED788; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[23]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 4356u), c.f[0]);  if (t) { goto L_004ED788; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004ED2FC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4372u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED314u); set32(c.r[17], c.r[2].w[0] + 4372u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004ED314u) [[unlikely]] return; }
L_004ED314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ED340; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED32Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004ED32Cu) [[unlikely]] return; }
L_004ED32C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED2FCu | kUnwind; return; } goto L_004ED2FC; } }
    c.budget -= 1;
L_004ED340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004ED78C; } }
L_004ED348:
    set32(c.r[2], ld32((c.r[20].w[0] + 4368u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED360u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004ED360u) [[unlikely]] return; }
L_004ED360:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 4352u));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[28].w[0] - 30856u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 208u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED2B8u | kUnwind; return; } goto L_004ED2B8; } }
    st32((c.r[29].w[0] + 192u), 0u);
    set32(c.r[16], c.r[29].w[0] + 260u);
    set32(c.r[21], c.r[29].w[0] + 264u);
    set32(c.r[30], c.r[29].w[0] + 268u);
    c.budget -= 4;
L_004ED398:
    set32(c.r[2], c.r[28].w[0] - 30856u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_004ED6A0; } }
    c.budget -= 1;
L_004ED3C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4508u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_004ED6EC; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004ED3F8; } }
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 3;
L_004ED3F8:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004ED410; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1572u));
    c.budget -= 1;
L_004ED410:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 2;
L_004ED418:
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_004ED6F8; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004ED448; } }
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 3;
L_004ED448:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004ED460; } }
    c.r[7].d[0] = ld8((c.r[6].w[0] + 1572u));
    c.budget -= 1;
L_004ED460:
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 2;
L_004ED468:
    set32(c.r[4], ld32((c.r[2].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[23], 0u + 4u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[3].w[0] << 6);
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.f[0] = c.r[2].w[0];
    c.f[11] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.f[6] = ld32((c.r[2].w[0] + 24u));
    c.f[10] = ld32((c.r[17].w[0] + 16u));
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    c.f[9] = ld32((c.r[17].w[0] + 24u));
    c.f[8] = ld32((c.r[2].w[0] + 40u));
    c.f[5] = ld32((c.r[2].w[0] + 56u));
    c.facc = fp::ee::mul(c.fcr31, c.f[11], c.f[6]);
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[7]);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[8]);
    c.f[4] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.facc = fp::ee::mul(c.fcr31, c.f[11], c.f[2]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[11], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[4]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[16].w[0]), c.f[5]);
    st32((c.r[21].w[0]), c.f[6]);
    st32((c.r[29].w[0] + 256u), c.f[14]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4508u)));
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    c.f[11] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[6] = ld32((c.r[21].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[8] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.f[9] = ld32((c.r[3].w[0] + 8u));
    c.f[10] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = ld32((c.r[3].w[0] + 20u));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[5] = ld32((c.r[3].w[0] + 36u));
    c.facc = fp::ee::mul(c.fcr31, c.f[13], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[9]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[10]);
    c.facc = fp::ee::mul(c.fcr31, c.f[13], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[4]);
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[5]);
    c.f[7] = ld32((c.r[3].w[0] + 56u));
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[2].w[0]), c.f[1]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[8]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[13], c.f[2]);
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[22] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[14]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[6]);
    c.budget -= 85;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[29].w[0] + 240u), c.f[1]);  if (t) { goto L_004ED700; } }
    c.budget -= 1;
L_004ED5C0:
    c.r[1].d[0] = 0ll < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004ED688; } }
    c.budget -= 1;
L_004ED5D0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_004ED610; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 4352u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ED600; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED5F4u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_007D(c, 59u, depth + 1u); else { c.pc = 0x003F4540u; return; } if (c.pc != 0x004ED5F4u) [[unlikely]] return; }
L_004ED5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ED610; } }
    c.budget -= 1;
L_004ED600:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED60Cu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_007D(c, 57u, depth + 1u); else { c.pc = 0x003F4510u; return; } if (c.pc != 0x004ED60Cu) [[unlikely]] return; }
L_004ED60C:
    c.budget -= 1;
L_004ED610:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED620u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004ED620u) [[unlikely]] return; }
L_004ED620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ED730; } }
L_004ED628:
    set32(c.r[2], c.r[19].w[0] << 4);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0]));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED5D0u | kUnwind; return; } goto L_004ED5D0; } }
    c.budget -= 1;
L_004ED688:
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED3C8u | kUnwind; return; } goto L_004ED3C8; } }
    c.budget -= 1;
L_004ED6A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 4352u));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 30856u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED398u | kUnwind; return; } goto L_004ED398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[20].w[0] + 4356u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED2BCu | kUnwind; return; } goto L_004ED2BC; } }
L_004ED6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED418u | kUnwind; return; } goto L_004ED418; } }
    c.budget -= 1;
L_004ED6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED468u | kUnwind; return; } goto L_004ED468; } }
L_004ED700:
    set32(c.r[23], c.r[23].w[0] - 1u);
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED5C0u | kUnwind; return; } goto L_004ED5C0; } }
    c.budget -= 1;
L_004ED730:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[5] = ld32((c.r[21].w[0]));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED780u); st32((c.r[2].w[0]), c.f[4]);  if (depth < kMaxDepth) unit_007D(c, 214u, depth + 1u); else { c.pc = 0x003F6430u; return; } if (c.pc != 0x004ED780u) [[unlikely]] return; }
L_004ED780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED628u | kUnwind; return; } goto L_004ED628; } }
L_004ED788:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004ED78C:
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
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004ED7D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
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
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004ED810; } }
L_004ED808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ED880; } }
L_004ED810:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004ED814:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED82Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 124u, depth + 1u); else { c.pc = 0x004ED270u; return; } if (c.pc != 0x004ED82Cu) [[unlikely]] return; }
L_004ED82C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ED854; } }
    c.budget -= 1;
L_004ED838:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED814u | kUnwind; return; } goto L_004ED814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED808u | kUnwind; return; } goto L_004ED808; } }
L_004ED854:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4360u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED874u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 115u, depth + 1u); else { c.pc = 0x004ED0B0u; return; } if (c.pc != 0x004ED874u) [[unlikely]] return; }
L_004ED874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED838u | kUnwind; return; } goto L_004ED838; } }
    c.budget -= 1;
L_004ED880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004ED8A0:
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
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ED8DC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED8D8u); set32(c.r[5], c.r[5].w[0] - 9776u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004ED8D8u) [[unlikely]] return; }
L_004ED8D8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004ED8DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004ED95C; } }
L_004ED8E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_004ED8FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED8F8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004ED8F8u) [[unlikely]] return; }
L_004ED8F8:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004ED8FC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004ED994; } }
L_004ED904:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004ED9A4; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004ED91C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4360u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4512u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED91Cu | kUnwind; return; } goto L_004ED91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004ED9A8; } }
L_004ED95C:
    set32(c.r[2], 0u + 4512u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED96Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004ED96Cu) [[unlikely]] return; }
L_004ED96C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 9792u);
    set32(c.r[6], c.r[6].w[0] - 9776u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED98Cu); set32(c.r[7], 0u + 4512u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004ED98Cu) [[unlikely]] return; }
L_004ED98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED8E4u | kUnwind; return; } goto L_004ED8E4; } }
L_004ED994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED99Cu); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004ED99Cu) [[unlikely]] return; }
L_004ED99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED904u | kUnwind; return; } goto L_004ED904; } }
L_004ED9A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004ED9A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004ED9C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004ED9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EDA00; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004EDA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA00u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004EDA00u) [[unlikely]] return; }
L_004EDA00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004EDA20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[10], c.r[28].w[0] - 30856u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[25].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 4352u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 4356u), c.f[12]);
    st32((c.r[4].w[0] + 4508u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 4368u), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4352u));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004EDF08; } }
    set32(c.r[11], ld32((c.r[6].w[0] + 348u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 68u);
    set32(c.r[8], c.r[29].w[0] + 72u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] - 1u);
    set32(c.r[6], ld32((c.r[6].w[0] + 344u)));
    c.budget -= 11;
L_004EDA9C:
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[12].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; c.r[24].d[0] = 0ull + 0ull;  if (t) { goto L_004EDEE0; } }
    c.budget -= 1;
L_004EDAC0:
    set32(c.r[3], ld32((c.r[12].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[14], ld32((c.r[12].w[0])));  if (t) { goto L_004EDF38; } }
    c.r[14].d[0] = c.r[14].d[0] & 255ull;
    c.r[14].d[0] = c.r[14].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.r[1].d[0] = c.r[14].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[14].d[0] & 255ull;  if (t) { goto L_004EDAF0; } }
    set32(c.r[14], c.r[6].w[0] + c.r[14].w[0]);
    c.r[17].d[0] = ld8((c.r[14].w[0] + 1572u));
    c.budget -= 3;
L_004EDAF0:
    set32(c.r[14], ld32((c.r[6].w[0] + 4u)));
    c.r[15].d[0] = c.r[17].d[0] & 255ull;
    c.r[14].d[0] = c.r[15].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_004EDB08; } }
    c.r[17].d[0] = ld8((c.r[6].w[0] + 1572u));
    c.budget -= 1;
L_004EDB08:
    c.r[14].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 2;
L_004EDB10:
    c.r[14].d[0] = c.r[14].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    set32(c.r[14], c.r[14].w[0] << 6);
    set32(c.r[14], c.r[11].w[0] + c.r[14].w[0]);
    c.f[11] = ld32((c.r[12].w[0] + 20u));
    c.f[6] = ld32((c.r[14].w[0] + 16u));
    c.f[10] = ld32((c.r[12].w[0] + 16u));
    c.f[7] = ld32((c.r[14].w[0]));
    c.f[9] = ld32((c.r[12].w[0] + 24u));
    c.f[8] = ld32((c.r[14].w[0] + 32u));
    c.f[2] = ld32((c.r[14].w[0] + 20u));
    c.facc = fp::ee::mul(c.fcr31, c.f[11], c.f[6]);
    c.f[4] = ld32((c.r[14].w[0] + 4u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[7]);
    c.f[5] = ld32((c.r[14].w[0] + 36u));
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[8]);
    c.f[3] = ld32((c.r[14].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[11], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[4]);
    c.f[1] = ld32((c.r[14].w[0] + 52u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[5]);
    c.f[5] = ld32((c.r[14].w[0] + 8u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = ld32((c.r[14].w[0] + 24u));
    c.f[6] = ld32((c.r[14].w[0] + 40u));
    c.f[1] = ld32((c.r[14].w[0] + 56u));
    c.facc = fp::ee::mul(c.fcr31, c.f[11], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[5]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[6]);
    c.budget -= 32;
    { const bool t = c.r[6].d[0] == 0ull; c.f[5] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_004EDF40; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[15].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004EDBB0; } }
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[15].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_004EDBB0:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[14].d[0] = c.r[15].d[0] & 255ull;
    c.r[3].d[0] = c.r[14].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EDBC8; } }
    c.r[15].d[0] = ld8((c.r[6].w[0] + 1572u));
    c.budget -= 1;
L_004EDBC8:
    c.r[3].d[0] = c.r[15].d[0] & 255ull;
    c.budget -= 2;
L_004EDBD0:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[15].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    c.f[15] = ld32((c.r[12].w[0] + 52u));
    c.f[9] = ld32((c.r[3].w[0] + 24u));
    c.f[14] = ld32((c.r[12].w[0] + 48u));
    c.f[10] = ld32((c.r[3].w[0] + 8u));
    c.f[12] = ld32((c.r[12].w[0] + 56u));
    c.f[11] = ld32((c.r[3].w[0] + 40u));
    c.f[8] = ld32((c.r[3].w[0] + 56u));
    c.facc = fp::ee::mul(c.fcr31, c.f[15], c.f[9]);
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[10]);
    c.f[6] = ld32((c.r[3].w[0] + 4u));
    c.f[9] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[11]);
    c.f[8] = fp::ee::add(c.fcr31, c.f[8], c.f[9]);
    c.facc = fp::ee::mul(c.fcr31, c.f[15], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[6]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[8], c.f[5]);
    c.f[7] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[8] = ld32((c.r[3].w[0]));
    st32((c.r[8].w[0]), c.f[6]);
    c.f[9] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[7]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[13]);
    c.f[7] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[9].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[15], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[8]);
    c.f[6] = ld32((c.r[3].w[0] + 48u));
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[9]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[13]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[7]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[3]);
    c.f[14] = fp::ee::mul(c.fcr31, c.f[6], c.f[13]);
    c.budget -= 42;
    { const bool t = c.r[24].d[0] == 0ull; st32((c.r[29].w[0] + 64u), c.f[6]);  if (t) { goto L_004EDC88; } }
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[14]);
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.budget -= 4;
L_004EDC88:
    c.r[1].d[0] = 0ll < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_004EDED0; } }
    c.r[1].d[0] = c.r[15].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[15].w[0] - 8u);  if (t) { goto L_004EDE80; } }
    c.r[1].d[0] = c.r[15].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004EDCC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[15].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004EDCC8; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004EDCC8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004EDE80; } }
L_004EDCD0:
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[8] = fp::ee::add(c.fcr31, c.f[3], c.f[14]);
    set32(c.r[14], c.r[14].w[0] + 8u);
    c.r[17].d[0] = c.r[14].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[6] = fp::ee::add(c.fcr31, c.f[8], c.f[14]);
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[4]);
    st32((c.r[18].w[0] + 8u), c.f[5]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[7] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 4368u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[5] = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0]), c.f[8]);
    st32((c.r[18].w[0] + 4u), c.f[7]);
    st32((c.r[18].w[0] + 8u), c.f[4]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[9] = fp::ee::add(c.fcr31, c.f[6], c.f[14]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[9], c.f[14]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 4368u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[12] = fp::ee::add(c.fcr31, c.f[7], c.f[14]);
    c.f[8] = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0]), c.f[6]);
    st32((c.r[18].w[0] + 4u), c.f[5]);
    st32((c.r[18].w[0] + 8u), c.f[3]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[8], c.f[1]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 4368u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0]), c.f[9]);
    st32((c.r[18].w[0] + 4u), c.f[8]);
    st32((c.r[18].w[0] + 8u), c.f[4]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[11] = fp::ee::add(c.fcr31, c.f[12], c.f[14]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 4368u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[10] = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0]), c.f[7]);
    st32((c.r[18].w[0] + 4u), c.f[6]);
    st32((c.r[18].w[0] + 8u), c.f[3]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[8] = fp::ee::add(c.fcr31, c.f[11], c.f[14]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[10], c.f[1]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 4368u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[6] = fp::ee::add(c.fcr31, c.f[9], c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[8], c.f[14]);
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0]), c.f[12]);
    st32((c.r[18].w[0] + 4u), c.f[5]);
    st32((c.r[18].w[0] + 8u), c.f[4]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    c.f[4] = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[2]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 4368u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0]), c.f[11]);
    st32((c.r[18].w[0] + 4u), c.f[10]);
    st32((c.r[18].w[0] + 8u), c.f[9]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 4368u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    set32(c.r[18], c.r[18].w[0] << 4);
    set32(c.r[18], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0]), c.f[8]);
    st32((c.r[18].w[0] + 4u), c.f[7]);
    st32((c.r[18].w[0] + 8u), c.f[6]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4368u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 107;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[16].w[0] + 4368u), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EDCD0u | kUnwind; return; } goto L_004EDCD0; } }
    c.budget -= 1;
L_004EDE80:
    c.r[1].d[0] = c.r[14].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004EDED0; } }
    c.budget -= 1;
L_004EDE90:
    set32(c.r[17], ld32((c.r[16].w[0] + 4368u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[3].d[0] = c.r[14].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] << 4);
    set32(c.r[17], c.r[16].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    st32((c.r[17].w[0] + 8u), c.f[5]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 4368u)));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[14]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 4368u), c.r[17].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EDE90u | kUnwind; return; } goto L_004EDE90; } }
L_004EDED0:
    set32(c.r[12], c.r[12].w[0] + 32u);
    set32(c.r[3], ld32((c.r[12].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; set32(c.r[24], c.r[24].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EDAC0u | kUnwind; return; } goto L_004EDAC0; } }
L_004EDEE0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4352u));
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[12], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[12], ld32((c.r[12].w[0])));
    set32(c.r[12], ld32((c.r[12].w[0] + 8u)));
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[12].w[0])));
    c.budget -= 10;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[25], c.r[25].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EDA9Cu | kUnwind; return; } goto L_004EDA9C; } }
L_004EDF08:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EDF0C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDF20u); set32(c.r[5], c.r[2].w[0] + 4372u);  if (depth < kMaxDepth) unit_007D(c, 408u, depth + 1u); else { c.pc = 0x003F7A50u; return; } if (c.pc != 0x004EDF20u) [[unlikely]] return; }
L_004EDF20:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EDF0Cu | kUnwind; return; } goto L_004EDF0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EDF48; } }
L_004EDF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EDB10u | kUnwind; return; } goto L_004EDB10; } }
L_004EDF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EDBD0u | kUnwind; return; } goto L_004EDBD0; } }
L_004EDF48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004EDF60:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004EE000; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EDF98:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_004EDFA8:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4372u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDFC0u); set32(c.r[16], c.r[2].w[0] + 4372u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004EDFC0u) [[unlikely]] return; }
L_004EDFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004EDFE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDFD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004EDFD4u) [[unlikely]] return; }
L_004EDFD4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EDFA8u | kUnwind; return; } goto L_004EDFA8; } }
    c.budget -= 1;
L_004EDFE8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EDF98u | kUnwind; return; } goto L_004EDF98; } }
    c.budget -= 1;
L_004EE000:
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
L_004EE030:
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
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004EE0D0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EE068:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_004EE078:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4372u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE090u); set32(c.r[16], c.r[2].w[0] + 4372u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004EE090u) [[unlikely]] return; }
L_004EE090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004EE0B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE0A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004EE0A4u) [[unlikely]] return; }
L_004EE0A4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE078u | kUnwind; return; } goto L_004EE078; } }
    c.budget -= 1;
L_004EE0B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE068u | kUnwind; return; } goto L_004EE068; } }
    c.budget -= 1;
L_004EE0D0:
    st32((c.r[20].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EE0F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE0ECu); set32(c.r[5], c.r[5].w[0] - 9776u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004EE0ECu) [[unlikely]] return; }
L_004EE0EC:
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_004EE0F0:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EE108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE104u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EE104u) [[unlikely]] return; }
L_004EE104:
    st32((c.r[20].w[0] + 12u), 0u);
    c.budget -= 1;
L_004EE108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004EE130:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    c.r[16].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE17Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004EE17Cu) [[unlikely]] return; }
L_004EE17C:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 8u), c.f[1]);  if (t) { goto L_004EE1B0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_004EE1CC; } }
L_004EE1B0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_004EE1CC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 396u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE1E8u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004EE1E8u) [[unlikely]] return; }
L_004EE1E8:
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
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
    set32(c.r[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EE448; } }
L_004EE238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE240u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004EE240u) [[unlikely]] return; }
L_004EE240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
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
    set32(c.r[5], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[5].w[0] + 60u);
    set32(c.r[4], c.r[17].w[0] + 12u);
    st32((c.r[20].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[20].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE2B8u); c.r[5].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004EE2B8u) [[unlikely]] return; }
L_004EE2B8:
    c.f[5] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[5], 0u + 20u);
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[6], 0u + 40u);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[20].w[0] + 16u), c.f[5]);
    st32((c.r[20].w[0] + 20u), c.f[4]);
    st32((c.r[20].w[0] + 24u), c.f[3]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE308u); st32((c.r[2].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004EE308u) [[unlikely]] return; }
L_004EE308:
    set32(c.r[4], c.r[2].w[0] << 16);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[5].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    c.r[19].d[0] = ld8((c.r[28].w[0] - 30848u));
    c.r[18].d[0] = ld8((c.r[28].w[0] - 30847u));
    c.r[17].d[0] = ld8((c.r[28].w[0] - 30846u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE338u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004EE338u) [[unlikely]] return; }
L_004EE338:
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    c.r[5].d[0] = ld8((c.r[28].w[0] - 30841u));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[8], c.f[2]);
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.f[2]);
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 68;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_004EE458; } }
L_004EE448:
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE238u | kUnwind; return; } goto L_004EE238; } }
L_004EE458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004EE480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004EE4CC; } }
L_004EE4B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[9].w[0]);  if (t) { goto L_004EE540; } }
L_004EE4CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.f[3] = ld32((c.r[6].w[0]));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 16u);
    st32((c.r[2].w[0]), c.f[3]);
    set32(c.r[4], c.r[2].w[0] + 64u);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE510u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_00BB(c, 181u, depth + 1u); else { c.pc = 0x004EE130u; return; } if (c.pc != 0x004EE510u) [[unlikely]] return; }
L_004EE510:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[8], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE4B8u | kUnwind; return; } goto L_004EE4B8; } }
L_004EE540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004EE560:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.r[5].d[0] = ld16((c.r[7].w[0] + 20u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE598u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004EE598u) [[unlikely]] return; }
L_004EE598:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[16].w[0] >> 16);
    set32(c.r[7], c.r[2].w[0] << 5);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE5DCu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004EE5DCu) [[unlikely]] return; }
L_004EE5DC:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], c.r[3].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 40u), 0u);
    st32((c.r[18].w[0] + 44u), c.f[20]);
    st32((c.r[18].w[0] + 48u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004EE640:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C120u | kUnwind; return; } [[clang::musttail]] return unit_0083(c, 10u, depth); }
L_004EE650:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004EE968; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EE694:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[19], c.r[4].w[0] + 64u);
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004EE998; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_004EE998; } }
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = ld16((c.r[5].w[0] + 6u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 23;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_004EE998; } }
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 8u), c.f[0]);  if (t) { goto L_004EE970; } }
L_004EE740:
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    set32(c.r[6], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[1]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[4].d[0] = c.r[3].d[0] | 26214ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x411D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 7864ull;
    c.f[2] = c.r[3].w[0];
    c.r[5].d[0] = ld16((c.r[5].w[0] + 6u));
    c.f[4] = c.r[4].w[0];
    set32(c.r[3], c.r[6].w[0] + 396u);
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 29668u));
    c.f[5] = ld32((c.r[19].w[0] + 16u));
    c.f[3] = ld32((c.r[19].w[0] + 20u));
    c.f[6] = ld32((c.r[19].w[0] + 24u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[5], c.f[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[6], c.f[4]);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 44;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_004EE998; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EE998; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[6].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004EE980; } }
L_004EE830:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_004EE998; } }
L_004EE848:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[20], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[4].w[0] + 64u);  if (t) { goto L_004EE8C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[6].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004EE9A8; } }
    c.budget -= 1;
L_004EE8B0:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 6;
L_004EE8C8:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 6u));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004EE950; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 4;
L_004EE8E8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004EE940; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004EE950; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004EE950; } }
    c.budget -= 1;
L_004EE940:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE8E8u | kUnwind; return; } goto L_004EE8E8; } }
L_004EE950:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE694u | kUnwind; return; } goto L_004EE694; } }
    c.budget -= 1;
L_004EE968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EE9C0; } }
L_004EE970:
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE740u | kUnwind; return; } goto L_004EE740; } }
L_004EE980:
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE98Cu); set32(c.r[4], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004EE98Cu) [[unlikely]] return; }
L_004EE98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE830u | kUnwind; return; } goto L_004EE830; } }
    c.budget -= 1;
L_004EE998:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE950u | kUnwind; return; } goto L_004EE950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE848u | kUnwind; return; } goto L_004EE848; } }
L_004EE9A8:
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE9B4u); set32(c.r[4], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004EE9B4u) [[unlikely]] return; }
L_004EE9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE8B0u | kUnwind; return; } goto L_004EE8B0; } }
    c.budget -= 1;
L_004EE9C0:
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
L_004EE9F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004EEAA0; } }
L_004EEA18:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 64u);  if (t) { goto L_004EEA88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[6].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004EEAF8; } }
    c.budget -= 1;
L_004EEA70:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 6;
L_004EEA88:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[18].w[0] + 6u));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEA18u | kUnwind; return; } goto L_004EEA18; } }
L_004EEAA0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004EEB10; } }
L_004EEAB0:
    c.r[4].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEAB0u | kUnwind; return; } goto L_004EEAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EEB10; } }
L_004EEAF8:
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB04u); set32(c.r[4], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004EEB04u) [[unlikely]] return; }
L_004EEB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEA70u | kUnwind; return; } goto L_004EEA70; } }
    c.budget -= 1;
L_004EEB10:
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004EEB30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EEB5C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB58u); set32(c.r[5], c.r[5].w[0] - 5200u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004EEB58u) [[unlikely]] return; }
L_004EEB58:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004EEB5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EEB74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB70u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EEB70u) [[unlikely]] return; }
L_004EEB70:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004EEB74:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EEB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB88u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EEB88u) [[unlikely]] return; }
L_004EEB88:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_004EEB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB94u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0082(c, 390u, depth + 1u); else { c.pc = 0x0040BFC0u; return; } if (c.pc != 0x004EEB94u) [[unlikely]] return; }
L_004EEB94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004EEBB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004EEBF0; } }
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004EEBF8; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004EEBDC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004EEBF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEBF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004EEBF0u) [[unlikely]] return; }
L_004EEBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004EEC14; } }
L_004EEBF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], c.r[5].w[0] - 5072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEC0Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x004EEC0Cu) [[unlikely]] return; }
L_004EEC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEBDCu | kUnwind; return; } goto L_004EEBDC; } }
L_004EEC14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004EEC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EEC60; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004EEC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEC60u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004EEC60u) [[unlikely]] return; }
L_004EEC60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004EEC80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 15696u);  if (t) { goto L_004EED58; } }
L_004EECC4:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EECE4u); set32(c.r[5], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004EECE4u) [[unlikely]] return; }
L_004EECE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EED40; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004EED58; } }
L_004EED40:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EECC4u | kUnwind; return; } goto L_004EECC4; } }
    c.budget -= 1;
L_004EED58:
    set32(c.r[18], c.r[29].w[0] + 124u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[2], c.r[2].w[0] - 15696u);
    st32((c.r[18].w[0]), 0u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 64u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EED94u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 14u, depth + 1u); else { c.pc = 0x0040C1A0u; return; } if (c.pc != 0x004EED94u) [[unlikely]] return; }
L_004EED94:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEDA0u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0082(c, 357u, depth + 1u); else { c.pc = 0x0040BA70u; return; } if (c.pc != 0x004EEDA0u) [[unlikely]] return; }
L_004EEDA0:
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 72u)));  if (t) { goto L_004EEDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEDC4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EEDC4u) [[unlikely]] return; }
L_004EEDC4:
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 1;
L_004EEDC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004EEE4C; } }
L_004EEDD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[17].w[0] + 4u));  if (t) { goto L_004EEDEC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEDE8u); set32(c.r[5], c.r[5].w[0] - 5200u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004EEDE8u) [[unlikely]] return; }
L_004EEDE8:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_004EEDEC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004EEE5C; } }
L_004EEDF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[17].w[0] + 4u));  if (t) { goto L_004EEE0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE08u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EEE08u) [[unlikely]] return; }
L_004EEE08:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_004EEE0C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004EEE98; } }
L_004EEE14:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004EEEA8; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_004EEE28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EEEFC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EEE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE40u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EEE40u) [[unlikely]] return; }
L_004EEE40:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_004EEF00; } }
L_004EEE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE54u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004EEE54u) [[unlikely]] return; }
L_004EEE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEDD0u | kUnwind; return; } goto L_004EEDD0; } }
L_004EEE5C:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE70u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004EEE70u) [[unlikely]] return; }
L_004EEE70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4320u);
    set32(c.r[6], c.r[6].w[0] - 5200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE90u); set32(c.r[7], 0u + 96u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004EEE90u) [[unlikely]] return; }
L_004EEE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEDF4u | kUnwind; return; } goto L_004EEDF4; } }
L_004EEE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEEA0u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004EEEA0u) [[unlikely]] return; }
L_004EEEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEE14u | kUnwind; return; } goto L_004EEE14; } }
L_004EEEA8:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004EEEB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[7], c.r[17].w[0] + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEEC8u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 192u, depth + 1u); else { c.pc = 0x004EE560u; return; } if (c.pc != 0x004EEEC8u) [[unlikely]] return; }
L_004EEEC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + 96u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEEB0u | kUnwind; return; } goto L_004EEEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEE28u | kUnwind; return; } goto L_004EEE28; } }
L_004EEEFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004EEF00:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004EEF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 4240u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5072u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEF50u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x004EEF50u) [[unlikely]] return; }
L_004EEF50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004EEF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004EEF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[4] = ld32((c.r[4].w[0] + 40u));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[12]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[12]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[5]);
    st32((c.r[4].w[0] + 36u), c.f[3]);
    c.budget -= 29;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 40u), c.f[4]);  if (t) { goto L_004EF47C; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[7].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004EF47C; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; c.r[6].d[0] = ld8((c.r[7].w[0] + 49u));  if (t) { goto L_004EF024; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004EF040; } }
L_004EF024:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004EF040:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_004EF054; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004EF070; } }
L_004EF054:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004EF070:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[8].d[0] = ld8((c.r[7].w[0] + 50u));
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 6u));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  if (t) { goto L_004EF1A0; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 51u));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004EF0C8; } }
    c.f[1] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004EF0E4; } }
L_004EF0C8:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004EF0E4:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_004EF0F8; } }
    c.f[1] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004EF114; } }
L_004EF0F8:
    set32(c.r[5], c.r[8].w[0] >> 1);
    c.r[4].d[0] = c.r[8].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004EF114:
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_004EF13C; } }
    c.f[1] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004EF158; } }
L_004EF13C:
    set32(c.r[5], c.r[9].w[0] >> 1);
    c.r[4].d[0] = c.r[9].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004EF158:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[6], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[2] = c.r[4].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[2]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004EF278; } }
L_004EF1A0:
    set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[6].d[0] = ld8((c.r[7].w[0] + 51u));  if (t) { goto L_004EF1BC; } }
    c.f[1] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004EF1D8; } }
L_004EF1BC:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004EF1D8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_004EF1EC; } }
    c.f[1] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004EF208; } }
L_004EF1EC:
    set32(c.r[5], c.r[6].w[0] >> 1);
    c.r[4].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004EF208:
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[4], c.r[9].w[0] - c.r[8].w[0]);
    c.r[8].d[0] = 0ull | 0ull;
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[2]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 28;
L_004EF278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = 0ull | 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[4].d[0] = ld16((c.r[7].w[0] + 52u));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 54u));
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.f[3] = ld32((c.r[7].w[0] + 12u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[2]);
    c.budget -= 29;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_004EF470; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004EF304; } }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004EF320; } }
L_004EF304:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004EF320:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 49u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004EF338; } }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004EF354; } }
L_004EF338:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004EF354:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[4] = c.r[2].w[0];
    c.f[2] = ld32((c.r[7].w[0] + 44u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.budget -= 11;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);  if (t) { goto L_004EF38C; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004EF3A8; } }
L_004EF38C:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004EF3A8:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[6], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[2]);
    c.budget -= 18;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004EF3FC; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004EF418; } }
L_004EF3FC:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004EF418:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.budget -= 19;
L_004EF464:
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004EF4A8; } }
L_004EF470:
    set32(c.r[2], c.r[5].w[0] << 16);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EF464u | kUnwind; return; } goto L_004EF464; } }
L_004EF47C:
    set32(c.r[2], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[5], 0u - 1u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF4A4u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004EF4A4u) [[unlikely]] return; }
L_004EF4A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EF4A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004EF4C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[10].d[0] = ld16((c.r[8].w[0] + 2u));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[8].w[0] + 20u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[4] = ld32((c.r[8].w[0] + 8u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[1] = ld32((c.r[7].w[0]));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[5] = ld32((c.r[28].w[0] - 29672u));
    c.r[5].d[0] = ld16((c.r[8].w[0] + 4u));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 24u));
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[4].w[0] + 56u), c.f[5]);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[4].w[0] + 40u), c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[8].w[0] + 28u));
    c.f[0] = ld32((c.r[8].w[0] + 32u));
    st32((c.r[4].w[0] + 4u), c.f[3]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    st32((c.r[4].w[0] + 12u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF570u); set32(c.r[4], c.r[9].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004EF570u) [[unlikely]] return; }
L_004EF570:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.f[2] = ld32((c.r[17].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 2u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 76u);
    set32(c.r[2], 0u + 4u);
    c.r[7].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] << 16);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0]), c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 396u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004EF5EC; } }
L_004EF5D0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EF5D0u | kUnwind; return; } goto L_004EF5D0; } }
L_004EF5EC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF5FCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004EF5FCu) [[unlikely]] return; }
L_004EF5FC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 13u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 17u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF610u); st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004EF610u) [[unlikely]] return; }
L_004EF610:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 14u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF624u); st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004EF624u) [[unlikely]] return; }
L_004EF624:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 15u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 19u));
    set32(c.r[17], c.r[29].w[0] + 79u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF63Cu); st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004EF63Cu) [[unlikely]] return; }
L_004EF63C:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 76u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 77u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 79u));
    st8((c.r[18].w[0] + 51u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.r[7].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[8], c.r[8].w[0] + 328u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004EF6A0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 232u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 228u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[3].w[0] + 29458u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 29456u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = ld8((c.r[9].w[0] + 29471u));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 29472u));
    st32((c.r[23].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 29464u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 29460u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 29474u));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 29473u));
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[10].d[0] = ld8((c.r[3].w[0] + 29469u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[11].d[0] = ld8((c.r[4].w[0] + 29468u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[29].w[0] + 209u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 29475u));
    st8((c.r[29].w[0] + 210u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[29].w[0] + 205u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 29476u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 29470u));
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[29].w[0] + 211u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 29484u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 29480u));
    st32((c.r[29].w[0] + 212u), c.f[2]);
    st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[3].w[0] + 29488u));
    st8((c.r[29].w[0] + 216u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[29].w[0] + 220u), c.f[1]);
    set32(c.r[3], c.r[28].w[0] - 28248u);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 72;
L_004EF7C0:
    c.r[3].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EF8B8; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004EF8B8; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[23].w[0])));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 188u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_004EF848; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 14;
L_004EF848:
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[9], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF8A0u); set32(c.r[8], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00BB(c, 247u, depth + 1u); else { c.pc = 0x004EF4C0u; return; } if (c.pc != 0x004EF8A0u) [[unlikely]] return; }
L_004EF8A0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EF7C0u | kUnwind; return; } goto L_004EF7C0; } }
L_004EF8B8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004EF8F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EF920; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004EF920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF920u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004EF920u) [[unlikely]] return; }
L_004EF920:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004EF940:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 232u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 228u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[3].w[0] + 29394u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 29392u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = ld8((c.r[9].w[0] + 29407u));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 29408u));
    st32((c.r[23].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 29400u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 29396u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 29410u));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 29409u));
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[10].d[0] = ld8((c.r[3].w[0] + 29405u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[11].d[0] = ld8((c.r[4].w[0] + 29404u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[29].w[0] + 209u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 29411u));
    st8((c.r[29].w[0] + 210u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[29].w[0] + 205u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 29412u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 29406u));
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[29].w[0] + 211u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 29420u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 29416u));
    st32((c.r[29].w[0] + 212u), c.f[2]);
    st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[3].w[0] + 29424u));
    st8((c.r[29].w[0] + 216u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[29].w[0] + 220u), c.f[1]);
    set32(c.r[3], c.r[28].w[0] - 28256u);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 72;
L_004EFA60:
    c.r[3].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EFB58; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004EFB58; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[23].w[0])));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 188u);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_004EFAE8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 14;
L_004EFAE8:
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[9], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFB40u); set32(c.r[8], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00BB(c, 247u, depth + 1u); else { c.pc = 0x004EF4C0u; return; } if (c.pc != 0x004EFB40u) [[unlikely]] return; }
L_004EFB40:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EFA60u | kUnwind; return; } goto L_004EFA60; } }
L_004EFB58:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004EFB90:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004EFC40; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 3;
L_004EFBDC:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_004EFC30; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] == c.r[3].d[0];  if (t) { goto L_004EFC40; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_004EFC40; } }
L_004EFC30:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EFBDCu | kUnwind; return; } goto L_004EFBDC; } }
L_004EFC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004EFC50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C120u | kUnwind; return; } [[clang::musttail]] return unit_0083(c, 10u, depth); }
L_004EFC60:
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
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004EFCA0; } }
L_004EFC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EFD50; } }
L_004EFCA0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EFCA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFCC0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 244u, depth + 1u); else { c.pc = 0x004EEF80u; return; } if (c.pc != 0x004EFCC0u) [[unlikely]] return; }
L_004EFCC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004EFCE4; } }
L_004EFCC8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EFCA4u | kUnwind; return; } goto L_004EFCA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EFC98u | kUnwind; return; } goto L_004EFC98; } }
L_004EFCE4:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EFCC8u | kUnwind; return; } goto L_004EFCC8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EFCC8u | kUnwind; return; } goto L_004EFCC8; } }
L_004EFD50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004EFD70:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004EFDC8; } }
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_004EFD84:
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EFD84u | kUnwind; return; } goto L_004EFD84; } }
L_004EFDC8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004EFE18; } }
L_004EFDD8:
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[9].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[9].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EFDD8u | kUnwind; return; } goto L_004EFDD8; } }
    c.budget -= 1;
L_004EFE18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_004EFE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EFE4C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFE48u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004EFE48u) [[unlikely]] return; }
L_004EFE48:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004EFE4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004EFE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFE60u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EFE60u) [[unlikely]] return; }
L_004EFE60:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004EFE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFE6Cu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0082(c, 390u, depth + 1u); else { c.pc = 0x0040BFC0u; return; } if (c.pc != 0x004EFE6Cu) [[unlikely]] return; }
L_004EFE6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28252u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EFE9C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EFE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFE88u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EFE88u) [[unlikely]] return; }
L_004EFE88:
    set32(c.r[3], ld32((c.r[28].w[0] - 28500u)));
    st32((c.r[28].w[0] - 28252u), 0u);
    st32((c.r[28].w[0] - 28256u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 28500u), c.r[3].w[0]);
    c.budget -= 5;
L_004EFE9C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28244u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EFECC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EFEB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFEB8u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004EFEB8u) [[unlikely]] return; }
L_004EFEB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 28500u)));
    st32((c.r[28].w[0] - 28244u), 0u);
    st32((c.r[28].w[0] - 28248u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 28500u), c.r[3].w[0]);
    c.budget -= 5;
L_004EFECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004EFEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EFF10; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004EFF10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFF10u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004EFF10u) [[unlikely]] return; }
L_004EFF10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004EFF30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[21], c.r[21].w[0] - 15600u);
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_004EFF78:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFF98u); set32(c.r[5], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004EFF98u) [[unlikely]] return; }
L_004EFF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EFFF4; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[20].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[20].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[20].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[20].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[20].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[20].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_00BC(c, 3u, depth); } }
L_004EFFF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    [[clang::musttail]] return unit_00BC(c, 1u, depth);
}

}

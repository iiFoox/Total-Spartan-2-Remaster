#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0070[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0,
    21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179,
    0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 211, 0, 212, 0, 0,
    0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0,
    0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 237, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0,
    0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260,
    0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0070(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C0000;
    case 2u: goto L_003C0008;
    case 3u: goto L_003C0024;
    case 4u: goto L_003C003C;
    case 5u: goto L_003C0044;
    case 6u: goto L_003C0080;
    case 7u: goto L_003C0090;
    case 8u: goto L_003C00B0;
    case 9u: goto L_003C00C0;
    case 10u: goto L_003C00D0;
    case 11u: goto L_003C00E0;
    case 12u: goto L_003C00F0;
    case 13u: goto L_003C0100;
    case 14u: goto L_003C0110;
    case 15u: goto L_003C0120;
    case 16u: goto L_003C0130;
    case 17u: goto L_003C0140;
    case 18u: goto L_003C0150;
    case 19u: goto L_003C0160;
    case 20u: goto L_003C0170;
    case 21u: goto L_003C0180;
    case 22u: goto L_003C0190;
    case 23u: goto L_003C01A0;
    case 24u: goto L_003C01B0;
    case 25u: goto L_003C01C0;
    case 26u: goto L_003C01D0;
    case 27u: goto L_003C01E0;
    case 28u: goto L_003C01F0;
    case 29u: goto L_003C0200;
    case 30u: goto L_003C0210;
    case 31u: goto L_003C0220;
    case 32u: goto L_003C0230;
    case 33u: goto L_003C0240;
    case 34u: goto L_003C0250;
    case 35u: goto L_003C0260;
    case 36u: goto L_003C0270;
    case 37u: goto L_003C0280;
    case 38u: goto L_003C0290;
    case 39u: goto L_003C02A0;
    case 40u: goto L_003C0318;
    case 41u: goto L_003C0324;
    case 42u: goto L_003C0340;
    case 43u: goto L_003C0350;
    case 44u: goto L_003C0374;
    case 45u: goto L_003C03C0;
    case 46u: goto L_003C0404;
    case 47u: goto L_003C044C;
    case 48u: goto L_003C04CC;
    case 49u: goto L_003C04DC;
    case 50u: goto L_003C04E8;
    case 51u: goto L_003C0560;
    case 52u: goto L_003C05A8;
    case 53u: goto L_003C05C0;
    case 54u: goto L_003C05D0;
    case 55u: goto L_003C05E8;
    case 56u: goto L_003C0608;
    case 57u: goto L_003C0620;
    case 58u: goto L_003C06C8;
    case 59u: goto L_003C06D4;
    case 60u: goto L_003C0708;
    case 61u: goto L_003C0748;
    case 62u: goto L_003C0774;
    case 63u: goto L_003C078C;
    case 64u: goto L_003C079C;
    case 65u: goto L_003C07AC;
    case 66u: goto L_003C07B8;
    case 67u: goto L_003C07F0;
    case 68u: goto L_003C0844;
    case 69u: goto L_003C08C8;
    case 70u: goto L_003C08E0;
    case 71u: goto L_003C0908;
    case 72u: goto L_003C09B4;
    case 73u: goto L_003C09DC;
    case 74u: goto L_003C09EC;
    case 75u: goto L_003C0AE4;
    case 76u: goto L_003C0B18;
    case 77u: goto L_003C0B64;
    case 78u: goto L_003C0B6C;
    case 79u: goto L_003C0BC0;
    case 80u: goto L_003C0BF4;
    case 81u: goto L_003C0C1C;
    case 82u: goto L_003C0C28;
    case 83u: goto L_003C0CEC;
    case 84u: goto L_003C0D04;
    case 85u: goto L_003C0D1C;
    case 86u: goto L_003C0D68;
    case 87u: goto L_003C0D80;
    case 88u: goto L_003C0F14;
    case 89u: goto L_003C0FF0;
    case 90u: goto L_003C1000;
    case 91u: goto L_003C1040;
    case 92u: goto L_003C10E0;
    case 93u: goto L_003C1100;
    case 94u: goto L_003C1110;
    case 95u: goto L_003C1148;
    case 96u: goto L_003C11A4;
    case 97u: goto L_003C11CC;
    case 98u: goto L_003C11DC;
    case 99u: goto L_003C11E8;
    case 100u: goto L_003C1230;
    case 101u: goto L_003C12D0;
    case 102u: goto L_003C12DC;
    case 103u: goto L_003C1308;
    case 104u: goto L_003C130C;
    case 105u: goto L_003C1314;
    case 106u: goto L_003C1324;
    case 107u: goto L_003C13D4;
    case 108u: goto L_003C13FC;
    case 109u: goto L_003C140C;
    case 110u: goto L_003C141C;
    case 111u: goto L_003C1428;
    case 112u: goto L_003C1450;
    case 113u: goto L_003C1474;
    case 114u: goto L_003C14F8;
    case 115u: goto L_003C1510;
    case 116u: goto L_003C16B8;
    case 117u: goto L_003C1758;
    case 118u: goto L_003C1764;
    case 119u: goto L_003C1790;
    case 120u: goto L_003C17A4;
    case 121u: goto L_003C17A8;
    case 122u: goto L_003C17B0;
    case 123u: goto L_003C17D4;
    case 124u: goto L_003C17E0;
    case 125u: goto L_003C17F4;
    case 126u: goto L_003C1830;
    case 127u: goto L_003C1878;
    case 128u: goto L_003C18A4;
    case 129u: goto L_003C18B4;
    case 130u: goto L_003C18D4;
    case 131u: goto L_003C18E4;
    case 132u: goto L_003C18F0;
    case 133u: goto L_003C1900;
    case 134u: goto L_003C1910;
    case 135u: goto L_003C191C;
    case 136u: goto L_003C1970;
    case 137u: goto L_003C19A8;
    case 138u: goto L_003C1A58;
    case 139u: goto L_003C1A68;
    case 140u: goto L_003C1A78;
    case 141u: goto L_003C1A84;
    case 142u: goto L_003C1AA0;
    case 143u: goto L_003C1AC8;
    case 144u: goto L_003C1B7C;
    case 145u: goto L_003C1BA0;
    case 146u: goto L_003C1D50;
    case 147u: goto L_003C1E08;
    case 148u: goto L_003C1E50;
    case 149u: goto L_003C1E60;
    case 150u: goto L_003C1E70;
    case 151u: goto L_003C1E7C;
    case 152u: goto L_003C1ED0;
    case 153u: goto L_003C1F58;
    case 154u: goto L_003C1F64;
    case 155u: goto L_003C1F80;
    case 156u: goto L_003C1FB4;
    case 157u: goto L_003C202C;
    case 158u: goto L_003C203C;
    case 159u: goto L_003C2060;
    case 160u: goto L_003C2090;
    case 161u: goto L_003C221C;
    case 162u: goto L_003C22E0;
    case 163u: goto L_003C2320;
    case 164u: goto L_003C23BC;
    case 165u: goto L_003C23D0;
    case 166u: goto L_003C23F8;
    case 167u: goto L_003C24AC;
    case 168u: goto L_003C24D0;
    case 169u: goto L_003C2688;
    case 170u: goto L_003C2694;
    case 171u: goto L_003C26AC;
    case 172u: goto L_003C26D4;
    case 173u: goto L_003C2738;
    case 174u: goto L_003C2740;
    case 175u: goto L_003C2780;
    case 176u: goto L_003C27B8;
    case 177u: goto L_003C27CC;
    case 178u: goto L_003C27EC;
    case 179u: goto L_003C27FC;
    case 180u: goto L_003C280C;
    case 181u: goto L_003C2818;
    case 182u: goto L_003C2828;
    case 183u: goto L_003C2838;
    case 184u: goto L_003C2844;
    case 185u: goto L_003C2890;
    case 186u: goto L_003C2950;
    case 187u: goto L_003C2968;
    case 188u: goto L_003C298C;
    case 189u: goto L_003C29AC;
    case 190u: goto L_003C2A10;
    case 191u: goto L_003C2A1C;
    case 192u: goto L_003C2A40;
    case 193u: goto L_003C2A68;
    case 194u: goto L_003C2B1C;
    case 195u: goto L_003C2B40;
    case 196u: goto L_003C2B70;
    case 197u: goto L_003C2D70;
    case 198u: goto L_003C2DE8;
    case 199u: goto L_003C2DF8;
    case 200u: goto L_003C2E08;
    case 201u: goto L_003C2E18;
    case 202u: goto L_003C2E50;
    case 203u: goto L_003C2ED8;
    case 204u: goto L_003C2F20;
    case 205u: goto L_003C2FE4;
    case 206u: goto L_003C2FF4;
    case 207u: goto L_003C307C;
    case 208u: goto L_003C30A4;
    case 209u: goto L_003C3158;
    case 210u: goto L_003C3168;
    case 211u: goto L_003C316C;
    case 212u: goto L_003C3174;
    case 213u: goto L_003C3184;
    case 214u: goto L_003C3194;
    case 215u: goto L_003C31A0;
    case 216u: goto L_003C31B0;
    case 217u: goto L_003C31C0;
    case 218u: goto L_003C31CC;
    case 219u: goto L_003C31DC;
    case 220u: goto L_003C31EC;
    case 221u: goto L_003C31F8;
    case 222u: goto L_003C3208;
    case 223u: goto L_003C3218;
    case 224u: goto L_003C3224;
    case 225u: goto L_003C3238;
    case 226u: goto L_003C3250;
    case 227u: goto L_003C3268;
    case 228u: goto L_003C32A8;
    case 229u: goto L_003C32B8;
    case 230u: goto L_003C32C8;
    case 231u: goto L_003C32D4;
    case 232u: goto L_003C32E4;
    case 233u: goto L_003C3310;
    case 234u: goto L_003C3320;
    case 235u: goto L_003C3350;
    case 236u: goto L_003C3408;
    case 237u: goto L_003C3414;
    case 238u: goto L_003C3418;
    case 239u: goto L_003C344C;
    case 240u: goto L_003C34F0;
    case 241u: goto L_003C3500;
    case 242u: goto L_003C3510;
    case 243u: goto L_003C351C;
    case 244u: goto L_003C3584;
    case 245u: goto L_003C3590;
    case 246u: goto L_003C35D0;
    case 247u: goto L_003C37B0;
    case 248u: goto L_003C37D0;
    case 249u: goto L_003C3858;
    case 250u: goto L_003C38E0;
    case 251u: goto L_003C38F4;
    case 252u: goto L_003C3904;
    case 253u: goto L_003C3914;
    case 254u: goto L_003C3920;
    case 255u: goto L_003C3930;
    case 256u: goto L_003C3940;
    case 257u: goto L_003C3950;
    case 258u: goto L_003C395C;
    case 259u: goto L_003C396C;
    case 260u: goto L_003C397C;
    case 261u: goto L_003C3988;
    case 262u: goto L_003C399C;
    case 263u: goto L_003C39B4;
    case 264u: goto L_003C3A34;
    case 265u: goto L_003C3A70;
    case 266u: goto L_003C3B10;
    case 267u: goto L_003C3B1C;
    case 268u: goto L_003C3B30;
    case 269u: goto L_003C3B54;
    case 270u: goto L_003C3B6C;
    case 271u: goto L_003C3B98;
    case 272u: goto L_003C3C58;
    case 273u: goto L_003C3C80;
    case 274u: goto L_003C3C90;
    case 275u: goto L_003C3E40;
    case 276u: goto L_003C3E58;
    case 277u: goto L_003C3E80;
    case 278u: goto L_003C3F10;
    case 279u: goto L_003C3F20;
    case 280u: goto L_003C3F60;
    default: bad_entry(c, 0x003C0000u); return;
    }
L_003C0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0008u); set32(c.r[4], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_00B4(c, 169u, depth + 1u); else { c.pc = 0x004D3440u; return; } if (c.pc != 0x003C0008u) [[unlikely]] return; }
L_003C0008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    st8((c.r[16].w[0] + 480u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0024u); st32((c.r[16].w[0] + 180u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0075(c, 94u, depth + 1u); else { c.pc = 0x003D5C40u; return; } if (c.pc != 0x003C0024u) [[unlikely]] return; }
L_003C0024:
    c.f[13] = ld32((c.r[28].w[0] - 31744u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C10000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
L_003C003C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0044u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0075(c, 93u, depth + 1u); else { c.pc = 0x003D5BC0u; return; } if (c.pc != 0x003C0044u) [[unlikely]] return; }
L_003C0044:
    st32((c.r[16].w[0] + 336u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = ld32((c.r[16].w[0] + 252u));
    c.f[1] = ld32((c.r[16].w[0] + 248u));
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 300u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C0080:
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_003C0090:
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_003C00B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C00C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C00D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_003C00E0:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C00F0:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0100:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_003C0120:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0130:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C0150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C0160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C0170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C0180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_003C0190:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C01A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C01B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C01C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C01D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C01E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C01F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C0290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003C02A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C0324; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7792u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 523u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 523u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 108u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0318u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x003C0318u) [[unlikely]] return; }
L_003C0318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C0324u) [[unlikely]] return; }
L_003C0324:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C0340:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 356u), 0u);  c.pc = t; return; }
L_003C0350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C04C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C0374:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 784u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C04F0; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C03B0; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_003C03B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003C03C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[6] = ld32((c.r[2].w[0] + 48u));
    c.f[7] = ld32((c.r[2].w[0] + 52u));
    c.f[8] = ld32((c.r[2].w[0] + 56u));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 32u);  if (t) { goto L_003C04FC; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C03F4; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_003C03F4:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003C0404:
    c.f[5] = ld32((c.r[2].w[0] + 56u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[3] = ld32((c.r[2].w[0] + 52u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[8], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[7], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[4]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C044Cu); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x003C044Cu) [[unlikely]] return; }
L_003C044C:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0544; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 24u), c.f[1]);  if (t) { goto L_003C0508; } }
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.f[2] = c.r[4].w[0];
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 108u), c.f[0]);  if (t) { goto L_003C0544; } }
L_003C04C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04CCu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C04CCu) [[unlikely]] return; }
L_003C04CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C04DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C04DCu) [[unlikely]] return; }
L_003C04DC:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C04E8u) [[unlikely]] return; }
L_003C04E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0374u | kUnwind; return; } goto L_003C0374; } }
L_003C04F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 17296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C03C0u | kUnwind; return; } goto L_003C03C0; } }
L_003C04FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 17296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0404u | kUnwind; return; } goto L_003C0404; } }
L_003C0508:
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[7].w[0] + 108u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 15;
L_003C0544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C0560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C05A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], c.r[2].w[0] - 7760u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C05A8u); st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C05A8u) [[unlikely]] return; }
L_003C05A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C05C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 356u), 0u);  c.pc = t; return; }
L_003C05D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C05F0; } }
L_003C05E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003C0610; } }
L_003C05F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3870000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0608u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x003C0608u) [[unlikely]] return; }
L_003C0608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C05E8u | kUnwind; return; } goto L_003C05E8; } }
L_003C0610:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C0620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003C0774; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7728u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[7], 0u - 129u);
    set32(c.r[12], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[8], c.r[2].w[0] << 7);
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], 0u - 1u);
    c.r[11].d[0] = ld8((c.r[12].w[0] + 523u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[12].w[0] + 523u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[12].w[0] + 523u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[12].w[0] + 523u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[19].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[19].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 33;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C077C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C06C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0794; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C06D4:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 852u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C0760; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 530u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C0760; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C0708:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 736u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0748; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 784u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0748; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C07C0; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C07C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0748u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003C0748u) [[unlikely]] return; }
L_003C0748:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 530u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0708u | kUnwind; return; } goto L_003C0708; } }
    c.budget -= 1;
L_003C0760:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0774u); st8((c.r[2].w[0] + 808u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C0774u) [[unlikely]] return; }
L_003C0774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003C07D0; } }
L_003C077C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[19].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C078Cu); set32(c.r[4], c.r[2].w[0] + 356u);  if (depth < kMaxDepth) unit_00BB(c, 22u, depth + 1u); else { c.pc = 0x004EC310u; return; } if (c.pc != 0x003C078Cu) [[unlikely]] return; }
L_003C078C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C06C8u | kUnwind; return; } goto L_003C06C8; } }
L_003C0794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C079Cu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C079Cu) [[unlikely]] return; }
L_003C079C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C07AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C07ACu) [[unlikely]] return; }
L_003C07AC:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C07B8u) [[unlikely]] return; }
L_003C07B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C06D4u | kUnwind; return; } goto L_003C06D4; } }
L_003C07C0:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0748u | kUnwind; return; } goto L_003C0748; } }
    c.budget -= 1;
L_003C07D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C07F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u - 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 3u);
    c.r[8].d[0] = ld16((c.r[4].w[0]));
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
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C08C0; } }
    set32(c.r[3], 0u + 230u);
    c.budget -= 1;
L_003C0844:
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
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_003C08D0; } }
L_003C08C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08C8u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C08C8u) [[unlikely]] return; }
L_003C08C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0844u | kUnwind; return; } goto L_003C0844; } }
L_003C08D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C08E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C09E8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31688u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0B74; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003C0908:
    c.r[4].d[0] = ld16((c.r[7].w[0] + 380u));
    set32(c.r[3], ld32((c.r[7].w[0] + 344u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 50u));
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003C0938; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003C0954; } }
L_003C0938:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003C0954:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 51u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] < 0; c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003C0978; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003C0994; } }
L_003C0978:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003C0994:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    c.f[2] = ld32((c.r[7].w[0] + 360u));
    set32(c.r[4], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003C0CBC; } }
L_003C09B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003C09E8; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C09E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C09DCu); set32(c.r[4], c.r[2].w[0] + 356u);  if (depth < kMaxDepth) unit_00BB(c, 22u, depth + 1u); else { c.pc = 0x004EC310u; return; } if (c.pc != 0x003C09DCu) [[unlikely]] return; }
L_003C09DC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003C09E8:
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 1;
L_003C09EC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C0D2C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C0A44; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C0A38; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C0A38; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C0A38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003C0A44; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C0A44:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003C0D70; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C0D70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 348u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 344u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C0A98; } }
L_003C0A78:
    set32(c.r[3], ld32((c.r[6].w[0] + 344u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1577u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0A94; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_003C0A94:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_003C0A98:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[4].w[0] + 56u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AE4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 48u, depth + 1u); else { c.pc = 0x004EC7D0u; return; } if (c.pc != 0x003C0AE4u) [[unlikely]] return; }
L_003C0AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0D48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 348u)));  if (t) { goto L_003C0D40; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0B14; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_003C0B14:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_003C0B18:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[4].w[0] + 56u));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0B64u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 48u, depth + 1u); else { c.pc = 0x004EC7D0u; return; } if (c.pc != 0x003C0B64u) [[unlikely]] return; }
L_003C0B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0D48; } }
L_003C0B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003C0D74; } }
L_003C0B74:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.f[2] = ld32((c.r[28].w[0] - 31684u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0]), c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = ld32((c.r[3].w[0] + 44u));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 76u), c.f[4]);  if (t) { goto L_003C0C30; } }
L_003C0BC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[2] = ld32((c.r[28].w[0] - 31680u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C0C60; } }
L_003C0BF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = c.f[3] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C0C90; } }
L_003C0C1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C28u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x003C0C28u) [[unlikely]] return; }
L_003C0C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0908u | kUnwind; return; } goto L_003C0908; } }
L_003C0C30:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0BC0u | kUnwind; return; } goto L_003C0BC0; } }
L_003C0C60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[2].w[0] - 20412u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0BF4u | kUnwind; return; } goto L_003C0BF4; } }
L_003C0C90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] - 20412u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 64u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0C1Cu | kUnwind; return; } goto L_003C0C1C; } }
L_003C0CBC:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C09B4u | kUnwind; return; } goto L_003C09B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0D24; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1588u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0CE8; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_003C0CE8:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_003C0CEC:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D04u); set32(c.r[4], c.r[2].w[0] + 356u);  if (depth < kMaxDepth) unit_00BB(c, 25u, depth + 1u); else { c.pc = 0x004EC3F0u; return; } if (c.pc != 0x003C0D04u) [[unlikely]] return; }
L_003C0D04:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D1Cu); set32(c.r[5], 0u + 117u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003C0D1Cu) [[unlikely]] return; }
L_003C0D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C09ECu | kUnwind; return; } goto L_003C09EC; } }
L_003C0D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0CECu | kUnwind; return; } goto L_003C0CEC; } }
L_003C0D2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0B6Cu | kUnwind; return; } goto L_003C0B6C; } }
L_003C0D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0B18u | kUnwind; return; } goto L_003C0B18; } }
L_003C0D48:
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 11680u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D68u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 183u, depth + 1u); else { c.pc = 0x00466BA0u; return; } if (c.pc != 0x003C0D68u) [[unlikely]] return; }
L_003C0D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0B6Cu | kUnwind; return; } goto L_003C0B6C; } }
L_003C0D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C0D74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C0D80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[25], 0u - 9u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[14], 0u - 17u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], 0u - 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[12], 0u - 33u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[10], 0u - 2049u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], 0u + 163u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[21], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] << 3);
    set32(c.r[13], c.r[2].w[0] << 5);
    set32(c.r[11], c.r[2].w[0] << 11);
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] - 7728u);
    set32(c.r[7], 0u - 2u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[22], 0u - 65u);
    set32(c.r[23], 0u + 50u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[21].d[0];
    set32(c.r[3], 0u - 3u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[19].d[0] = c.r[19].d[0] & c.r[25].d[0];
    c.r[18].d[0] = c.r[19].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld16((c.r[4].w[0]));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[24].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[20].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & c.r[20].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[24].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[22].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 380u));
    c.budget -= 96;
    { const bool t = c.r[2].d[0] == c.r[23].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C0F8C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0FF8; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 1;
L_003C0F14:
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
    c.budget -= 30;
L_003C0F8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[7], 0u - 65u);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[17].w[0] + 29u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 129u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 119u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0FF0u); st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003C0FF0u) [[unlikely]] return; }
L_003C0FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C1008; } }
L_003C0FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1000u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C1000u) [[unlikely]] return; }
L_003C1000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 50u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0F14u | kUnwind; return; } goto L_003C0F14; } }
L_003C1008:
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
L_003C1040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C10E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[10], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7696u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[8], 0u - 5u);
    set32(c.r[13], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], 0u - 33u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[12].d[0] = ld8((c.r[13].w[0] + 523u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[13].w[0] + 523u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[16].w[0]));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[16].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10E0u); st8((c.r[2].w[0] + 808u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C10E0u) [[unlikely]] return; }
L_003C10E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1100:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 356u), 0u);  c.pc = t; return; }
L_003C1110:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.f[21] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + 32u);  if (t) { goto L_003C11C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C1148:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[5] = ld32((c.r[4].w[0] + 452u));
    c.f[7] = ld32((c.r[4].w[0] + 448u));
    c.f[3] = ld32((c.r[4].w[0] + 456u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C11F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 48u), c.f[6]);
    st32((c.r[3].w[0] + 52u), c.f[4]);
    st32((c.r[3].w[0] + 56u), c.f[3]);
    st32((c.r[3].w[0] + 60u), c.f[21]);
    c.budget -= 5;
L_003C11A4:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C1208; } }
L_003C11C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C11CCu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C11CCu) [[unlikely]] return; }
L_003C11CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C11DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C11DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C11DCu) [[unlikely]] return; }
L_003C11DC:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C11E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C11E8u) [[unlikely]] return; }
L_003C11E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1148u | kUnwind; return; } goto L_003C1148; } }
L_003C11F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 48u), c.f[2]);
    st32((c.r[3].w[0] + 52u), c.f[2]);
    st32((c.r[3].w[0] + 56u), c.f[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 60u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C11A4u | kUnwind; return; } goto L_003C11A4; } }
L_003C1208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C1230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003C13D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7664u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[6], 0u - 5u);
    set32(c.r[11], ld32((c.r[17].w[0] + 4u)));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u + 68u);
    c.r[10].d[0] = ld8((c.r[11].w[0] + 523u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 523u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[17].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st8((c.r[4].w[0] + 808u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C13DC; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C13DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C13DC; } }
L_003C12D0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C12DCu); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x003C12DCu) [[unlikely]] return; }
L_003C12DC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[2], 0u + 68u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C13EC; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C1308; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 67u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1308u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 214u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x003C1308u) [[unlikely]] return; }
L_003C1308:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003C130C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1314u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x003C1314u) [[unlikely]] return; }
L_003C1314:
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));  if (t) { goto L_003C1404; } }
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_003C1324:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], ld32((c.r[28].w[0] - 29096u)));  if (t) { goto L_003C1388; } }
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[2].w[0] - 2592u));
    st32((c.r[6].w[0] + 208u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[4].w[0] - 2588u));
    st32((c.r[6].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 2584u));
    st32((c.r[6].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 2580u));
    st32((c.r[6].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31736u));
    st32((c.r[5].w[0] + 464u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31740u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 496u), c.f[0]);  if (t) { goto L_003C13C8; } }
L_003C1388:
    c.f[0] = ld32((c.r[7].w[0] + 448u));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[5].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 452u));
    st32((c.r[5].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 456u));
    st32((c.r[5].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 460u));
    st32((c.r[5].w[0] + 220u), c.f[0]);
    st32((c.r[3].w[0] + 464u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 16;
L_003C13C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C13D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C13D4u) [[unlikely]] return; }
L_003C13D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C1430; } }
L_003C13DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1308u | kUnwind; return; } goto L_003C1308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C12D0u | kUnwind; return; } goto L_003C12D0; } }
L_003C13EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C13FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 214u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x003C13FCu) [[unlikely]] return; }
L_003C13FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C130Cu | kUnwind; return; } goto L_003C130C; } }
L_003C1404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C140Cu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C140Cu) [[unlikely]] return; }
L_003C140C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C141C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C141Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C141Cu) [[unlikely]] return; }
L_003C141C:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1428u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C1428u) [[unlikely]] return; }
L_003C1428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1324u | kUnwind; return; } goto L_003C1324; } }
L_003C1430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C14F0; } }
    set32(c.r[3], 0u + 230u);
    c.budget -= 1;
L_003C1474:
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
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_003C1500; } }
L_003C14F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C14F8u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C14F8u) [[unlikely]] return; }
L_003C14F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1474u | kUnwind; return; } goto L_003C1474; } }
L_003C1500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1510:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[3].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[24], 0u - 9u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[25], c.r[2].w[0] << 3);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[13], 0u - 17u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[11], 0u - 33u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[12], c.r[2].w[0] << 5);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[22], 0u - 2049u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[10], c.r[2].w[0] << 11);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[23], 0u + 159u);
    set32(c.r[9], c.r[9].w[0] - 7664u);
    set32(c.r[8], 0u - 2u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[30], 0u - 3u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u - 65u);
    c.r[19].d[0] = c.r[19].d[0] & c.r[24].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[19].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[11].d[0] & c.r[22].d[0];
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[20].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & c.r[20].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & c.r[30].d[0];
    c.r[7].d[0] = c.r[9].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[15].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[5].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 105;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C1870; } }
    set32(c.r[2], 0u + 140u);
    c.budget -= 1;
L_003C16B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    set32(c.r[3], 0u - 2u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u + 68u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 35;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C1880; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C1880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003C1880; } }
L_003C1758:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1764u); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x003C1764u) [[unlikely]] return; }
L_003C1764:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C1890; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C17A4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 39u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1790u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 214u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x003C1790u) [[unlikely]] return; }
L_003C1790:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 108u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C17A4u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x003C17A4u) [[unlikely]] return; }
L_003C17A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C17A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C17B0u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x003C17B0u) [[unlikely]] return; }
L_003C17B0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], 0u + 67u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003C18BC; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C18BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C18BC; } }
L_003C17D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));  if (t) { goto L_003C18CC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C17E0:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 744u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_003C17F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[28].w[0] - 31736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[2].w[0] - 2584u));
    c.f[0] = 0u;
    c.f[20] = ld32((c.r[17].w[0] + 32u));
    c.f[21] = ld32((c.r[17].w[0] + 36u));
    c.f[22] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.f[23] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);  if (t) { goto L_003C18F8; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C1830:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0] + 208u), c.f[20]);
    st32((c.r[6].w[0] + 212u), c.f[21]);
    st32((c.r[6].w[0] + 216u), c.f[23]);
    st32((c.r[6].w[0] + 220u), c.f[22]);
    st32((c.r[4].w[0] + 464u), c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 496u), c.r[3].w[0]);  if (t) { goto L_003C1924; } }
L_003C1870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1878u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C1878u) [[unlikely]] return; }
L_003C1878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 140u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C16B8u | kUnwind; return; } goto L_003C16B8; } }
L_003C1880:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C17A4u | kUnwind; return; } goto L_003C17A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1758u | kUnwind; return; } goto L_003C1758; } }
L_003C1890:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 107u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C18A4u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x003C18A4u) [[unlikely]] return; }
L_003C18A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C18B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 214u, depth + 1u); else { c.pc = 0x0027DE10u; return; } if (c.pc != 0x003C18B4u) [[unlikely]] return; }
L_003C18B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C17A8u | kUnwind; return; } goto L_003C17A8; } }
L_003C18BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C17F4u | kUnwind; return; } goto L_003C17F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C17D4u | kUnwind; return; } goto L_003C17D4; } }
L_003C18CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C18D4u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C18D4u) [[unlikely]] return; }
L_003C18D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C18E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C18E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C18E4u) [[unlikely]] return; }
L_003C18E4:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C18F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C18F0u) [[unlikely]] return; }
L_003C18F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C17E0u | kUnwind; return; } goto L_003C17E0; } }
L_003C18F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1900u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C1900u) [[unlikely]] return; }
L_003C1900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1910u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C1910u) [[unlikely]] return; }
L_003C1910:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C191Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C191Cu) [[unlikely]] return; }
L_003C191C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1830u | kUnwind; return; } goto L_003C1830; } }
L_003C1924:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003C1970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C1A58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 7632u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));  if (t) { goto L_003C1A60; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_003C19A8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], ld32((c.r[28].w[0] - 29096u)));  if (t) { goto L_003C1A0C; } }
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[2].w[0] - 2592u));
    st32((c.r[6].w[0] + 208u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[4].w[0] - 2588u));
    st32((c.r[6].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 2584u));
    st32((c.r[6].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 2580u));
    st32((c.r[6].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31736u));
    st32((c.r[5].w[0] + 464u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31740u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 496u), c.f[0]);  if (t) { goto L_003C1A4C; } }
L_003C1A0C:
    c.f[0] = ld32((c.r[7].w[0] + 448u));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[5].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 452u));
    st32((c.r[5].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 456u));
    st32((c.r[5].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 460u));
    st32((c.r[5].w[0] + 220u), c.f[0]);
    st32((c.r[3].w[0] + 464u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 16;
L_003C1A4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C1A58u) [[unlikely]] return; }
L_003C1A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C1A8C; } }
L_003C1A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A68u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C1A68u) [[unlikely]] return; }
L_003C1A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C1A78u) [[unlikely]] return; }
L_003C1A78:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C1A84u) [[unlikely]] return; }
L_003C1A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C19A8u | kUnwind; return; } goto L_003C19A8; } }
L_003C1A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C1B74; } }
    set32(c.r[3], 0u + 230u);
    c.budget -= 1;
L_003C1AC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 3u);
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
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003C1B84; } }
L_003C1B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1B7Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C1B7Cu) [[unlikely]] return; }
L_003C1B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1AC8u | kUnwind; return; } goto L_003C1AC8; } }
L_003C1B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1BA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[3].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[24], 0u - 9u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[25], c.r[2].w[0] << 3);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[13], 0u - 17u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[11], 0u - 33u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[12], c.r[2].w[0] << 5);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[22], 0u - 2049u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[10], c.r[2].w[0] << 11);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[23], 0u + 158u);
    set32(c.r[9], c.r[9].w[0] - 7632u);
    set32(c.r[8], 0u - 2u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[30], 0u - 3u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u - 65u);
    c.r[19].d[0] = c.r[19].d[0] & c.r[24].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[19].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[11].d[0] & c.r[22].d[0];
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[20].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & c.r[20].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & c.r[30].d[0];
    c.r[7].d[0] = c.r[9].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[15].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 380u));
    set32(c.r[2], 0u + 230u);
    c.budget -= 103;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C1DC8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C1E48; } }
    set32(c.r[2], 0u + 230u);
    c.budget -= 1;
L_003C1D50:
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
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_003C1DC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.f[3] = c.r[2].w[0];
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    c.f[2] = ld32((c.r[28].w[0] - 31736u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = ld32((c.r[2].w[0] - 2584u));
    c.f[0] = 0u;
    c.f[20] = ld32((c.r[17].w[0] + 32u));
    c.f[21] = ld32((c.r[17].w[0] + 36u));
    c.f[22] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.f[23] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);  if (t) { goto L_003C1E58; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C1E08:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0] + 208u), c.f[20]);
    st32((c.r[6].w[0] + 212u), c.f[21]);
    st32((c.r[6].w[0] + 216u), c.f[23]);
    st32((c.r[6].w[0] + 220u), c.f[22]);
    st32((c.r[4].w[0] + 464u), c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 496u), c.r[3].w[0]);  if (t) { goto L_003C1E84; } }
L_003C1E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E50u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C1E50u) [[unlikely]] return; }
L_003C1E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1D50u | kUnwind; return; } goto L_003C1D50; } }
L_003C1E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E60u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C1E60u) [[unlikely]] return; }
L_003C1E60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1E70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C1E70u) [[unlikely]] return; }
L_003C1E70:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C1E7Cu) [[unlikely]] return; }
L_003C1E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1E08u | kUnwind; return; } goto L_003C1E08; } }
L_003C1E84:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003C1ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C1F64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7600u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[6], 0u - 5u);
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u + 2u);
    c.r[10].d[0] = ld8((c.r[11].w[0] + 523u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 523u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[16].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[2].w[0] + 808u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1F58u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x003C1F58u) [[unlikely]] return; }
L_003C1F58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1F64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C1F64u) [[unlikely]] return; }
L_003C1F64:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 182u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C2044; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C2034; } }
    set32(c.r[3], 0u + 230u);
    c.budget -= 1;
L_003C1FB4:
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
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_003C202C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003C2050; } }
L_003C2034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C203Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C203Cu) [[unlikely]] return; }
L_003C203C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1FB4u | kUnwind; return; } goto L_003C1FB4; } }
L_003C2044:
    st32((c.r[16].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C202Cu | kUnwind; return; } goto L_003C202C; } }
L_003C2050:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C2060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 56u), 0u);
    st32((c.r[3].w[0] + 60u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C2090:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[15], 0u - 17u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[13], 0u - 33u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[11], 0u - 2049u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[10], 0u + 157u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[9].w[0] - 7600u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[22], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] << 3);
    set32(c.r[14], c.r[2].w[0] << 5);
    set32(c.r[12], c.r[2].w[0] << 11);
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[8], 0u - 2u);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], 0u - 3u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[30], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 65u);
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[18].d[0] & c.r[15].d[0];
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
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[25].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[21].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[22].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & c.r[21].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[22].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[25].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[30].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[23].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 380u));
    set32(c.r[2], 0u + 182u);
    c.budget -= 94;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C2294; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C22D8; } }
    set32(c.r[2], 0u + 182u);
    c.budget -= 1;
L_003C221C:
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
    c.budget -= 30;
L_003C2294:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[17].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0] + 28u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C22E8; } }
L_003C22D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C22E0u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C22E0u) [[unlikely]] return; }
L_003C22E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 182u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C221Cu | kUnwind; return; } goto L_003C221C; } }
L_003C22E8:
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
L_003C2320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C23BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[10], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7568u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[8], 0u - 5u);
    set32(c.r[12], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[12].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    st8((c.r[12].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[2].w[0] + 808u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C23BCu); st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C23BCu) [[unlikely]] return; }
L_003C23BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C23D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C24A4; } }
    set32(c.r[3], 0u + 230u);
    c.budget -= 1;
L_003C23F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 3u);
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
    set32(c.r[7], c.r[7].w[0] + 5u);
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
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003C24B4; } }
L_003C24A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C24ACu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C24ACu) [[unlikely]] return; }
L_003C24AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C23F8u | kUnwind; return; } goto L_003C23F8; } }
L_003C24B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C24D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[25], 0u - 9u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[14], 0u - 17u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[3].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[12], 0u - 33u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[13], c.r[3].w[0] << 5);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[10], 0u - 2049u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[11], c.r[3].w[0] << 11);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[22], 0u + 156u);
    set32(c.r[9], c.r[9].w[0] - 7568u);
    set32(c.r[8], 0u - 2u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[23], 0u - 3u);
    set32(c.r[7], c.r[3].w[0] << 1);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[30], 0u - 129u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 204u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 65u);
    c.r[19].d[0] = c.r[19].d[0] & c.r[25].d[0];
    c.r[18].d[0] = c.r[19].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld16((c.r[4].w[0]));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[22].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[24].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[20].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & c.r[20].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & c.r[23].d[0];
    c.r[7].d[0] = c.r[9].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 526u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[20].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[24].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[30].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 110;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2688u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003C2688u) [[unlikely]] return; }
L_003C2688:
    set32(c.r[18], c.r[2].w[0] + 122u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2694u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C2694u) [[unlikely]] return; }
L_003C2694:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C26ACu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C26ACu) [[unlikely]] return; }
L_003C26AC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[21], c.f[22]);  if (t) { goto L_003C27E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003C26D4:
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].d[0] = 0ull & 1ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[2], 0u - 2u);
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C27F4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C2738:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_003C2740:
    set32(c.r[2], ld32((c.r[4].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003C2758; } }
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_003C2774; } }
L_003C2758:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[1].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2740u | kUnwind; return; } goto L_003C2740; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2774:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003C2820; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C2780:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 336u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 340u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 344u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 348u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27B8u); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x003C27B8u) [[unlikely]] return; }
L_003C27B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 118u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x003C27CCu) [[unlikely]] return; }
L_003C27CC:
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.f[20]);  if (t) { goto L_003C284C; } }
L_003C27E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27ECu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C27ECu) [[unlikely]] return; }
L_003C27EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C26D4u | kUnwind; return; } goto L_003C26D4; } }
L_003C27F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C27FCu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C27FCu) [[unlikely]] return; }
L_003C27FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C280C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C280Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C280Cu) [[unlikely]] return; }
L_003C280C:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2818u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C2818u) [[unlikely]] return; }
L_003C2818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2738u | kUnwind; return; } goto L_003C2738; } }
L_003C2820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2828u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C2828u) [[unlikely]] return; }
L_003C2828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2838u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C2838u) [[unlikely]] return; }
L_003C2838:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2844u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C2844u) [[unlikely]] return; }
L_003C2844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2780u | kUnwind; return; } goto L_003C2780; } }
L_003C284C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003C2890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_003C2A1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[10], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7536u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[6], 0u - 129u);
    set32(c.r[13], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[9], c.r[2].w[0] << 7);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[7], 0u - 5u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[12].d[0] = ld8((c.r[13].w[0] + 523u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[13].w[0] + 523u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[13].w[0] + 523u));
    c.r[6].d[0] = c.r[10].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    st8((c.r[13].w[0] + 523u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st8((c.r[2].w[0] + 808u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2950u); st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C2950u) [[unlikely]] return; }
L_003C2950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2968u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C2968u) [[unlikely]] return; }
L_003C2968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], 0u + 2u);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C298Cu); c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003C298Cu) [[unlikely]] return; }
L_003C298C:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[18], c.r[2].w[0] + 122u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C29AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C29ACu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C29ACu) [[unlikely]] return; }
L_003C29AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].d[0] = 0ull & 1ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[2], 0u - 2u);
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2A10u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x003C2A10u) [[unlikely]] return; }
L_003C2A10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2A1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C2A1Cu) [[unlikely]] return; }
L_003C2A1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C2A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C2B14; } }
    set32(c.r[3], 0u + 235u);
    c.budget -= 1;
L_003C2A68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 3u);
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
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003C2B24; } }
L_003C2B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2B1Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C2B1Cu) [[unlikely]] return; }
L_003C2B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 235u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2A68u | kUnwind; return; } goto L_003C2A68; } }
L_003C2B24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C2B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 56u), 0u);
    st32((c.r[3].w[0] + 60u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C2B70:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[3].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[25], c.r[2].w[0] << 3);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[13], c.r[2].w[0] << 5);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[12], c.r[2].w[0] << 11);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[9], c.r[2].w[0] << 1);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[24], 0u - 9u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[22], 0u - 17u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[23], 0u - 33u);
    set32(c.r[30], 0u - 2049u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] - 7536u);
    set32(c.r[10], 0u - 2u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.r[2].d[0] = c.r[19].d[0] & c.r[24].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[22].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[30].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], 0u + 155u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[11].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[15].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[11].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[15].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[5].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 106;
    { const bool t = c.r[7].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 380u)));  if (t) { goto L_003C2D28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 4;
L_003C2D28:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 125ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C2E10; } }
    c.r[2].d[0] = c.r[2].sd[0] < 122ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C2E10; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 344u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    set32(c.r[3], ld32((c.r[4].w[0] + 488u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003C2E00; } }
    set32(c.r[2], 0u + 119u);
    c.budget -= 1;
L_003C2D70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 360u), c.f[20]);
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
    set32(c.r[2], c.r[2].w[0] + 15u);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_003C2DE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2DF8u); st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x003C2DF8u) [[unlikely]] return; }
L_003C2DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C2EE0; } }
L_003C2E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2E08u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C2E08u) [[unlikely]] return; }
L_003C2E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 119u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2D70u | kUnwind; return; } goto L_003C2D70; } }
L_003C2E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2E18u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C2E18u) [[unlikely]] return; }
L_003C2E18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[0]);  if (t) { goto L_003C2ED0; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[20]);
    c.budget -= 1;
L_003C2E50:
    set32(c.r[2], 0u + 119u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 364u), c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.f[2] = c.r[4].w[0];
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
    set32(c.r[2], c.r[2].w[0] + 5u);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2DE8u | kUnwind; return; } goto L_003C2DE8; } }
L_003C2ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2ED8u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C2ED8u) [[unlikely]] return; }
L_003C2ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[21], c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2E50u | kUnwind; return; } goto L_003C2E50; } }
L_003C2EE0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003C2F20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003C3174; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[11], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7504u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[9], 0u - 129u);
    set32(c.r[13], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[7], 0u - 5u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], 0u - 3u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = ld8((c.r[13].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st8((c.r[13].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[11], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[11].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[11].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st8((c.r[2].w[0] + 808u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2FE4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x003C2FE4u) [[unlikely]] return; }
L_003C2FE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 21u)));  if (t) { goto L_003C317C; } }
    set32(c.r[11], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C2FF4:
    c.r[2].d[0] = c.r[16].d[0] << 56;
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
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 21u)));  if (t) { goto L_003C31A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C307C:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 720u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 21u)));  if (t) { goto L_003C31D4; } }
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_003C30A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], ld32((c.r[28].w[0] - 29096u)));  if (t) { goto L_003C3108; } }
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[2].w[0] - 2592u));
    st32((c.r[6].w[0] + 208u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[4].w[0] - 2588u));
    st32((c.r[6].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 2584u));
    st32((c.r[6].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 2580u));
    st32((c.r[6].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31736u));
    st32((c.r[5].w[0] + 464u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31740u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 496u), c.f[0]);  if (t) { goto L_003C3148; } }
L_003C3108:
    c.f[0] = ld32((c.r[7].w[0] + 448u));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[5].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 452u));
    st32((c.r[5].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 456u));
    st32((c.r[5].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 460u));
    st32((c.r[5].w[0] + 220u), c.f[0]);
    st32((c.r[3].w[0] + 464u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 16;
L_003C3148:
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C3200; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C3158:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C322C; } }
L_003C3168:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003C316C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C3174u) [[unlikely]] return; }
L_003C3174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003C32F0; } }
L_003C317C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3184u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C3184u) [[unlikely]] return; }
L_003C3184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C3194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C3194u) [[unlikely]] return; }
L_003C3194:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C31A0u) [[unlikely]] return; }
L_003C31A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2FF4u | kUnwind; return; } goto L_003C2FF4; } }
L_003C31A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31B0u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C31B0u) [[unlikely]] return; }
L_003C31B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C31C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C31C0u) [[unlikely]] return; }
L_003C31C0:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C31CCu) [[unlikely]] return; }
L_003C31CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C307Cu | kUnwind; return; } goto L_003C307C; } }
L_003C31D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31DCu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C31DCu) [[unlikely]] return; }
L_003C31DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C31EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C31ECu) [[unlikely]] return; }
L_003C31EC:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C31F8u) [[unlikely]] return; }
L_003C31F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C30A4u | kUnwind; return; } goto L_003C30A4; } }
L_003C3200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3208u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C3208u) [[unlikely]] return; }
L_003C3208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C3218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3218u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C3218u) [[unlikely]] return; }
L_003C3218:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3224u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C3224u) [[unlikely]] return; }
L_003C3224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3158u | kUnwind; return; } goto L_003C3158; } }
L_003C322C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C32B0; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C3238:
    st32((c.r[18].w[0] + 36u), 0u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 530u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C3280; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C3250:
    set32(c.r[4], ld32((c.r[16].w[0] + 784u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C32DC; } }
    c.budget -= 1;
L_003C3268:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 530u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3250u | kUnwind; return; } goto L_003C3250; } }
    c.budget -= 1;
L_003C3280:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 743u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3168u | kUnwind; return; } goto L_003C3168; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 848u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3168u | kUnwind; return; } goto L_003C3168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003C32A8u) [[unlikely]] return; }
L_003C32A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C316Cu | kUnwind; return; } goto L_003C316C; } }
L_003C32B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32B8u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C32B8u) [[unlikely]] return; }
L_003C32B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C32C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C32C8u) [[unlikely]] return; }
L_003C32C8:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C32D4u) [[unlikely]] return; }
L_003C32D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3238u | kUnwind; return; } goto L_003C3238; } }
L_003C32DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 199u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003C32E4u) [[unlikely]] return; }
L_003C32E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3268u | kUnwind; return; } goto L_003C3268; } }
    c.budget -= 1;
L_003C32F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C3310:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 356u), 0u);  c.pc = t; return; }
L_003C3320:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C35BC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C34F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C3350:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C35BC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 380u));
    set32(c.r[5], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 57;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C3398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[5].w[0] + 60u));  if (t) { goto L_003C339C; } }
L_003C3398:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_003C339C:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C3524; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] + 14976u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_003C35A4; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003C33E0; } }
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_003C33E0:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C33F8; } }
    c.r[7].d[0] = ld8((c.r[6].w[0] + 1572u));
    c.budget -= 1;
L_003C33F8:
    set32(c.r[3], ld32((c.r[2].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_003C3408:
    set32(c.r[4], c.r[2].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3414u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x003C3414u) [[unlikely]] return; }
L_003C3414:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003C3418:
    set32(c.r[4], ld32((c.r[5].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C35B0; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1578u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C343C; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_003C343C:
    set32(c.r[3], ld32((c.r[5].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_003C344C:
    c.f[5] = ld32((c.r[3].w[0] + 52u));
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.f[7] = ld32((c.r[3].w[0] + 48u));
    c.f[6] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[4] = 0u;
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[7]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[3] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C35BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C34F0u); st32((c.r[29].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x003C34F0u) [[unlikely]] return; }
L_003C34F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003C35C0; } }
L_003C34F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3500u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C3500u) [[unlikely]] return; }
L_003C3500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C3510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3510u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C3510u) [[unlikely]] return; }
L_003C3510:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C351Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C351Cu) [[unlikely]] return; }
L_003C351C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3350u | kUnwind; return; } goto L_003C3350; } }
L_003C3524:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 1536u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] + 14976u);
    set32(c.r[5], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_003C3598; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003C355C; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_003C355C:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C3574; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1572u));
    c.budget -= 1;
L_003C3574:
    set32(c.r[3], ld32((c.r[2].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_003C3584:
    set32(c.r[4], c.r[2].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3590u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x003C3590u) [[unlikely]] return; }
L_003C3590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3418u | kUnwind; return; } goto L_003C3418; } }
L_003C3598:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 17296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3584u | kUnwind; return; } goto L_003C3584; } }
L_003C35A4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 17296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3408u | kUnwind; return; } goto L_003C3408; } }
L_003C35B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C344Cu | kUnwind; return; } goto L_003C344C; } }
L_003C35BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C35C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C35D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[25], 0u - 9u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[14], 0u - 17u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[12], 0u - 33u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], 0u - 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[22], 0u - 2049u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[23], 0u + 153u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[10], c.r[10].w[0] - 7504u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[21], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] << 3);
    set32(c.r[13], c.r[2].w[0] << 5);
    set32(c.r[11], c.r[2].w[0] << 11);
    set32(c.r[9], 0u - 2u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 65u);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[19].d[0] = c.r[19].d[0] & c.r[25].d[0];
    c.r[18].d[0] = c.r[19].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[12].d[0] & c.r[22].d[0];
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[24].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[20].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[4].w[0]));
    c.r[10].d[0] = c.r[10].d[0] & c.r[20].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[10], 0u - 3u);
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[30].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[9].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[24].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[5].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[10].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[20].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[8].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[8].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[8].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 360u));
    set32(c.r[3], 0u - 129u);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[5].w[0] + 48u), 0u);
    st32((c.r[5].w[0] + 52u), 0u);
    st32((c.r[5].w[0] + 56u), 0u);
    st32((c.r[5].w[0] + 60u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.budget -= 116;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003C3990; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C38FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C37B0:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003C3990; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C3928; } }
    set32(c.r[2], 0u + 196u);
    c.budget -= 1;
L_003C37D0:
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
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 21u)));  if (t) { goto L_003C3938; } }
    set32(c.r[11], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C3858:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[8], 0u - 5u);
    set32(c.r[10], c.r[2].w[0] << 2);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 9u);
    set32(c.r[5], c.r[2].w[0] << 4);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[4], 0u - 17u);
    set32(c.r[2], 0u - 33u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
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
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 21u)));  if (t) { goto L_003C3964; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_003C38E0:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 720u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 728u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_003C38F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C3A3C; } }
L_003C38FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3904u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C3904u) [[unlikely]] return; }
L_003C3904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C3914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3914u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C3914u) [[unlikely]] return; }
L_003C3914:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3920u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C3920u) [[unlikely]] return; }
L_003C3920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C37B0u | kUnwind; return; } goto L_003C37B0; } }
L_003C3928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3930u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C3930u) [[unlikely]] return; }
L_003C3930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 196u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C37D0u | kUnwind; return; } goto L_003C37D0; } }
L_003C3938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3940u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C3940u) [[unlikely]] return; }
L_003C3940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C3950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3950u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C3950u) [[unlikely]] return; }
L_003C3950:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C395Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C395Cu) [[unlikely]] return; }
L_003C395C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3858u | kUnwind; return; } goto L_003C3858; } }
L_003C3964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C396Cu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003C396Cu) [[unlikely]] return; }
L_003C396C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C397C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C397Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x003C397Cu) [[unlikely]] return; }
L_003C397C:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3988u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x003C3988u) [[unlikely]] return; }
L_003C3988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C38E0u | kUnwind; return; } goto L_003C38E0; } }
L_003C3990:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C399Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003C399Cu) [[unlikely]] return; }
L_003C399C:
    set32(c.r[3], c.r[2].w[0] + 197u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_003C3A2C; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_003C39B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
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
    set32(c.r[2], c.r[2].w[0] + 5u);
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C38F4u | kUnwind; return; } goto L_003C38F4; } }
L_003C3A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3A34u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C3A34u) [[unlikely]] return; }
L_003C3A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C39B4u | kUnwind; return; } goto L_003C39B4; } }
L_003C3A3C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003C3A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C3B1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7472u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[7], 0u - 5u);
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], 0u - 3u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = ld8((c.r[11].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[11].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[2].w[0] + 808u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B10u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x003C3B10u) [[unlikely]] return; }
L_003C3B10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x003C3B1Cu) [[unlikely]] return; }
L_003C3B1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C3B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B54u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C3B54u) [[unlikely]] return; }
L_003C3B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B6Cu); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C3B6Cu) [[unlikely]] return; }
L_003C3B6C:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);  if (t) { goto L_003C3C50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003C3B98:
    set32(c.r[4], 0u + 127u);
    c.f[0] = c.r[3].w[0];
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    set32(c.r[7], 0u - 2u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[9].d[0] = c.r[3].d[0] | 52429ull;
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[9].w[0];
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
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 46;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003C3C60; } }
L_003C3C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3C58u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C3C58u) [[unlikely]] return; }
L_003C3C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3B98u | kUnwind; return; } goto L_003C3B98; } }
L_003C3C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C3C80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3C90:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[25], 0u - 9u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[14], 0u - 17u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[12], 0u - 33u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[10], 0u - 2049u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[9], 0u + 152u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[8], c.r[8].w[0] - 7472u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[21], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] << 3);
    set32(c.r[13], c.r[2].w[0] << 5);
    set32(c.r[11], c.r[2].w[0] << 11);
    set32(c.r[22], 0u - 3u);
    set32(c.r[30], 0u - 65u);
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[19].d[0] = c.r[19].d[0] & c.r[25].d[0];
    c.r[18].d[0] = c.r[19].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld16((c.r[4].w[0]));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[24].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[20].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & c.r[20].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & c.r[22].d[0];
    c.r[3].d[0] = c.r[8].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[24].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[30].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 523u));
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 380u));
    set32(c.r[2], 0u + 127u);
    c.budget -= 106;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C3F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E40u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C3E40u) [[unlikely]] return; }
L_003C3E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E58u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003C3E58u) [[unlikely]] return; }
L_003C3E58:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);  if (t) { goto L_003C3F18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003C3E80:
    set32(c.r[3], 0u + 127u);
    c.f[0] = c.r[2].w[0];
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[2], 0u - 2u);
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[4].w[0];
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
L_003C3F04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F10u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x003C3F10u) [[unlikely]] return; }
L_003C3F10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C3F28; } }
L_003C3F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F20u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x003C3F20u) [[unlikely]] return; }
L_003C3F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3E80u | kUnwind; return; } goto L_003C3E80; } }
L_003C3F28:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003C3F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_0071(c, 10u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], 0u - 65u);
    set32(c.r[2], c.r[2].w[0] - 7440u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[6], 0u - 5u);
    set32(c.r[10], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = ld8((c.r[10].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[10].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 32;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 24u)));  if (t) { [[clang::musttail]] return unit_0071(c, 11u, depth); } }
    [[clang::musttail]] return unit_0071(c, 1u, depth);
}

}

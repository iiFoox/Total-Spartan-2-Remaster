#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 85, 86,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 104, 105, 0, 0, 0, 106,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 109, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 130, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 136, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 160, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 170, 171, 0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 182, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 191, 192, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B4000;
    case 2u: goto L_002B4020;
    case 3u: goto L_002B402C;
    case 4u: goto L_002B40B8;
    case 5u: goto L_002B40CC;
    case 6u: goto L_002B40D4;
    case 7u: goto L_002B4110;
    case 8u: goto L_002B4118;
    case 9u: goto L_002B4148;
    case 10u: goto L_002B4150;
    case 11u: goto L_002B416C;
    case 12u: goto L_002B41A4;
    case 13u: goto L_002B41D0;
    case 14u: goto L_002B41D4;
    case 15u: goto L_002B41F0;
    case 16u: goto L_002B4200;
    case 17u: goto L_002B42C0;
    case 18u: goto L_002B42F0;
    case 19u: goto L_002B4364;
    case 20u: goto L_002B4380;
    case 21u: goto L_002B4558;
    case 22u: goto L_002B4584;
    case 23u: goto L_002B4590;
    case 24u: goto L_002B45B4;
    case 25u: goto L_002B45E0;
    case 26u: goto L_002B4648;
    case 27u: goto L_002B467C;
    case 28u: goto L_002B4694;
    case 29u: goto L_002B46CC;
    case 30u: goto L_002B46D8;
    case 31u: goto L_002B4708;
    case 32u: goto L_002B4710;
    case 33u: goto L_002B4740;
    case 34u: goto L_002B4748;
    case 35u: goto L_002B4780;
    case 36u: goto L_002B47D0;
    case 37u: goto L_002B47F0;
    case 38u: goto L_002B4810;
    case 39u: goto L_002B4820;
    case 40u: goto L_002B4920;
    case 41u: goto L_002B4968;
    case 42u: goto L_002B49C4;
    case 43u: goto L_002B49D0;
    case 44u: goto L_002B49D4;
    case 45u: goto L_002B4A24;
    case 46u: goto L_002B4A2C;
    case 47u: goto L_002B4A5C;
    case 48u: goto L_002B4B40;
    case 49u: goto L_002B4BC0;
    case 50u: goto L_002B4C64;
    case 51u: goto L_002B4C8C;
    case 52u: goto L_002B4D0C;
    case 53u: goto L_002B4D48;
    case 54u: goto L_002B4DC8;
    case 55u: goto L_002B4E24;
    case 56u: goto L_002B4E3C;
    case 57u: goto L_002B4E70;
    case 58u: goto L_002B4EA4;
    case 59u: goto L_002B4EC0;
    case 60u: goto L_002B4EF4;
    case 61u: goto L_002B4F60;
    case 62u: goto L_002B4F80;
    case 63u: goto L_002B4F90;
    case 64u: goto L_002B50D8;
    case 65u: goto L_002B50EC;
    case 66u: goto L_002B5164;
    case 67u: goto L_002B5170;
    case 68u: goto L_002B51C0;
    case 69u: goto L_002B5200;
    case 70u: goto L_002B524C;
    case 71u: goto L_002B5258;
    case 72u: goto L_002B52C0;
    case 73u: goto L_002B52D0;
    case 74u: goto L_002B536C;
    case 75u: goto L_002B5378;
    case 76u: goto L_002B5428;
    case 77u: goto L_002B5434;
    case 78u: goto L_002B54A0;
    case 79u: goto L_002B54B0;
    case 80u: goto L_002B554C;
    case 81u: goto L_002B5558;
    case 82u: goto L_002B5650;
    case 83u: goto L_002B565C;
    case 84u: goto L_002B56F4;
    case 85u: goto L_002B56F8;
    case 86u: goto L_002B56FC;
    case 87u: goto L_002B5704;
    case 88u: goto L_002B572C;
    case 89u: goto L_002B5760;
    case 90u: goto L_002B5774;
    case 91u: goto L_002B5784;
    case 92u: goto L_002B57B0;
    case 93u: goto L_002B5800;
    case 94u: goto L_002B5844;
    case 95u: goto L_002B5870;
    case 96u: goto L_002B5890;
    case 97u: goto L_002B5898;
    case 98u: goto L_002B58AC;
    case 99u: goto L_002B58CC;
    case 100u: goto L_002B591C;
    case 101u: goto L_002B593C;
    case 102u: goto L_002B598C;
    case 103u: goto L_002B59E4;
    case 104u: goto L_002B59E8;
    case 105u: goto L_002B59EC;
    case 106u: goto L_002B59FC;
    case 107u: goto L_002B5A04;
    case 108u: goto L_002B5AAC;
    case 109u: goto L_002B5AB0;
    case 110u: goto L_002B5AB4;
    case 111u: goto L_002B5AC8;
    case 112u: goto L_002B5ADC;
    case 113u: goto L_002B5AEC;
    case 114u: goto L_002B5AFC;
    case 115u: goto L_002B5B98;
    case 116u: goto L_002B5BA4;
    case 117u: goto L_002B5C00;
    case 118u: goto L_002B5C20;
    case 119u: goto L_002B5C84;
    case 120u: goto L_002B5CA4;
    case 121u: goto L_002B5CE4;
    case 122u: goto L_002B5CF8;
    case 123u: goto L_002B5D20;
    case 124u: goto L_002B5D6C;
    case 125u: goto L_002B5DA0;
    case 126u: goto L_002B5DAC;
    case 127u: goto L_002B5DE8;
    case 128u: goto L_002B5E28;
    case 129u: goto L_002B5E80;
    case 130u: goto L_002B5E84;
    case 131u: goto L_002B5E88;
    case 132u: goto L_002B5E98;
    case 133u: goto L_002B5EB0;
    case 134u: goto L_002B5EE0;
    case 135u: goto L_002B5F1C;
    case 136u: goto L_002B5F20;
    case 137u: goto L_002B5F24;
    case 138u: goto L_002B5F34;
    case 139u: goto L_002B5F5C;
    case 140u: goto L_002B5FA4;
    case 141u: goto L_002B5FD8;
    case 142u: goto L_002B6030;
    case 143u: goto L_002B6034;
    case 144u: goto L_002B6038;
    case 145u: goto L_002B6048;
    case 146u: goto L_002B6058;
    case 147u: goto L_002B6064;
    case 148u: goto L_002B60A4;
    case 149u: goto L_002B60EC;
    case 150u: goto L_002B611C;
    case 151u: goto L_002B6144;
    case 152u: goto L_002B6190;
    case 153u: goto L_002B622C;
    case 154u: goto L_002B6238;
    case 155u: goto L_002B62AC;
    case 156u: goto L_002B62D0;
    case 157u: goto L_002B6310;
    case 158u: goto L_002B631C;
    case 159u: goto L_002B63B0;
    case 160u: goto L_002B63B4;
    case 161u: goto L_002B63B8;
    case 162u: goto L_002B63CC;
    case 163u: goto L_002B63E0;
    case 164u: goto L_002B63F0;
    case 165u: goto L_002B6418;
    case 166u: goto L_002B6474;
    case 167u: goto L_002B6480;
    case 168u: goto L_002B64BC;
    case 169u: goto L_002B6528;
    case 170u: goto L_002B652C;
    case 171u: goto L_002B6530;
    case 172u: goto L_002B6538;
    case 173u: goto L_002B653C;
    case 174u: goto L_002B65C8;
    case 175u: goto L_002B65FC;
    case 176u: goto L_002B6610;
    case 177u: goto L_002B6620;
    case 178u: goto L_002B6644;
    case 179u: goto L_002B6684;
    case 180u: goto L_002B6690;
    case 181u: goto L_002B6724;
    case 182u: goto L_002B6728;
    case 183u: goto L_002B672C;
    case 184u: goto L_002B6734;
    case 185u: goto L_002B675C;
    case 186u: goto L_002B6790;
    case 187u: goto L_002B67A4;
    case 188u: goto L_002B67B4;
    case 189u: goto L_002B6800;
    case 190u: goto L_002B685C;
    case 191u: goto L_002B6860;
    case 192u: goto L_002B6864;
    case 193u: goto L_002B6878;
    case 194u: goto L_002B688C;
    case 195u: goto L_002B689C;
    case 196u: goto L_002B68C4;
    case 197u: goto L_002B690C;
    case 198u: goto L_002B6970;
    case 199u: goto L_002B6990;
    case 200u: goto L_002B69A4;
    case 201u: goto L_002B6A50;
    case 202u: goto L_002B6A78;
    case 203u: goto L_002B6A8C;
    case 204u: goto L_002B6B50;
    case 205u: goto L_002B6B70;
    case 206u: goto L_002B6B90;
    case 207u: goto L_002B6BA0;
    case 208u: goto L_002B6BC0;
    case 209u: goto L_002B6CE0;
    case 210u: goto L_002B6D34;
    case 211u: goto L_002B6D9C;
    case 212u: goto L_002B6E54;
    case 213u: goto L_002B6E58;
    case 214u: goto L_002B6EA4;
    case 215u: goto L_002B6EBC;
    case 216u: goto L_002B6ED0;
    case 217u: goto L_002B6F10;
    case 218u: goto L_002B6F1C;
    case 219u: goto L_002B6F3C;
    case 220u: goto L_002B6F6C;
    case 221u: goto L_002B6FA8;
    case 222u: goto L_002B6FD4;
    case 223u: goto L_002B701C;
    case 224u: goto L_002B7078;
    case 225u: goto L_002B70C8;
    case 226u: goto L_002B70D0;
    case 227u: goto L_002B710C;
    case 228u: goto L_002B7188;
    case 229u: goto L_002B7190;
    case 230u: goto L_002B71CC;
    case 231u: goto L_002B71D4;
    case 232u: goto L_002B7208;
    case 233u: goto L_002B7220;
    case 234u: goto L_002B7248;
    case 235u: goto L_002B7264;
    case 236u: goto L_002B7274;
    case 237u: goto L_002B7294;
    case 238u: goto L_002B72AC;
    case 239u: goto L_002B72C0;
    case 240u: goto L_002B731C;
    case 241u: goto L_002B7330;
    case 242u: goto L_002B7348;
    case 243u: goto L_002B735C;
    case 244u: goto L_002B73DC;
    case 245u: goto L_002B740C;
    case 246u: goto L_002B7420;
    case 247u: goto L_002B747C;
    case 248u: goto L_002B74F8;
    case 249u: goto L_002B7520;
    case 250u: goto L_002B7598;
    case 251u: goto L_002B75EC;
    case 252u: goto L_002B7608;
    case 253u: goto L_002B7638;
    case 254u: goto L_002B7690;
    case 255u: goto L_002B76B8;
    case 256u: goto L_002B76D0;
    case 257u: goto L_002B7700;
    case 258u: goto L_002B7710;
    case 259u: goto L_002B772C;
    case 260u: goto L_002B773C;
    case 261u: goto L_002B7778;
    case 262u: goto L_002B7790;
    case 263u: goto L_002B77C0;
    case 264u: goto L_002B77F0;
    case 265u: goto L_002B7930;
    case 266u: goto L_002B79A4;
    case 267u: goto L_002B79C0;
    case 268u: goto L_002B79E0;
    case 269u: goto L_002B79F4;
    case 270u: goto L_002B7AA0;
    case 271u: goto L_002B7B14;
    case 272u: goto L_002B7B34;
    case 273u: goto L_002B7B90;
    case 274u: goto L_002B7BCC;
    case 275u: goto L_002B7C1C;
    case 276u: goto L_002B7C2C;
    case 277u: goto L_002B7C88;
    case 278u: goto L_002B7CA0;
    case 279u: goto L_002B7CB8;
    case 280u: goto L_002B7CEC;
    case 281u: goto L_002B7D34;
    case 282u: goto L_002B7D60;
    case 283u: goto L_002B7D8C;
    case 284u: goto L_002B7DC0;
    case 285u: goto L_002B7DC4;
    case 286u: goto L_002B7E38;
    case 287u: goto L_002B7E44;
    case 288u: goto L_002B7E8C;
    case 289u: goto L_002B7EA8;
    case 290u: goto L_002B7ED0;
    case 291u: goto L_002B7EE8;
    case 292u: goto L_002B7F1C;
    case 293u: goto L_002B7F34;
    case 294u: goto L_002B7F64;
    case 295u: goto L_002B7F6C;
    case 296u: goto L_002B7F9C;
    case 297u: goto L_002B7FE0;
    default: bad_entry(c, 0x002B4000u); return;
    }
L_002B4000:
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B41D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4020u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4020u) [[unlikely]] return; }
L_002B4020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4180; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 1;
L_002B402C:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 104u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B4044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 323u);  if (t) { goto L_002B4048; } }
L_002B4044:
    set32(c.r[5], 0u + 324u);
    c.budget -= 1;
L_002B4048:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 96u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = ld8((c.r[7].w[0] + 144u));  if (t) { goto L_002B4088; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B4074; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B4098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4098; } }
L_002B4074:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B4080; } }
    set32(c.r[5], 0u + 325u);
    c.budget -= 1;
L_002B4080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4098; } }
L_002B4088:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B4098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 326u);  if (t) { goto L_002B4098; } }
L_002B4098:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002B40A4; } }
    set32(c.r[7], c.r[7].w[0] + 32u);
    c.budget -= 1;
L_002B40A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B40B8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 312u, depth + 1u); else { c.pc = 0x0028B090u; return; } if (c.pc != 0x002B40B8u) [[unlikely]] return; }
L_002B40B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[17].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B41D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B40CCu); set32(c.r[4], ld32((c.r[17].w[0] + 116u)));  if (depth < kMaxDepth) unit_00A9(c, 219u, depth + 1u); else { c.pc = 0x004A6990u; return; } if (c.pc != 0x002B40CCu) [[unlikely]] return; }
L_002B40CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4148; } }
L_002B40D4:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B41D0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B41B4; } }
L_002B4110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B4118u) [[unlikely]] return; }
L_002B4118:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B41D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B41D0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4148u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B4148u) [[unlikely]] return; }
L_002B4148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B41D0; } }
L_002B4150:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3F88u | kUnwind; return; } [[clang::musttail]] return unit_002C(c, 252u, depth); } }
L_002B416C:
    set32(c.r[3], 0u + 211u);
    st8((c.r[5].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3FF8u | kUnwind; return; } [[clang::musttail]] return unit_002C(c, 255u, depth); } }
L_002B4180:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41A4u); set32(c.r[4], c.r[3].w[0] + 680u);  if (depth < kMaxDepth) unit_0054(c, 48u, depth + 1u); else { c.pc = 0x00350D30u; return; } if (c.pc != 0x002B41A4u) [[unlikely]] return; }
L_002B41A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B41D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 116u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B402Cu | kUnwind; return; } goto L_002B402C; } }
L_002B41B4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4110u | kUnwind; return; } goto L_002B4110; } }
L_002B41D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B41D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B41F0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_002D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B4200:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 40u)));
    set32(c.r[3], 0u + 14u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 46u));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 41u)));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 48u));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 42u)));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 50u));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 43u)));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 52u));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 44u)));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 54u));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 45u)));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 56u));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 24u));
    c.budget -= 28;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002B427C; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002B4284; } }
L_002B427C:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B4284:
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[5], 0u - 33u);
    set32(c.r[3], 0u + 211u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 530u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 530u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    st8((c.r[5].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B42C0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 25u));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002B42F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B4364; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 20720u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B434C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B434C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B434C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B434C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B4364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4364u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B4364u) [[unlikely]] return; }
L_002B4364:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B4380:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[7].d[0] | 13107ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[15], 0u - 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 12u), 0u);
    c.f[1] = c.r[19].w[0];
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.f[6] = ld32((c.r[5].w[0]));
    c.r[18].d[0] = ld8((c.r[4].w[0] + 18u));
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = c.r[20].w[0];
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[13], 0u - 3u);
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[12], c.r[12].w[0] - 27952u);
    set32(c.r[11], 0u + 13u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    set32(c.r[9], 0u - 5u);
    c.r[18].d[0] = c.r[18].d[0] & c.r[15].d[0];
    set32(c.r[8], c.r[8].w[0] - 16688u);
    c.r[21].d[0] = c.r[18].d[0] | c.r[24].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.r[18].d[0] = c.r[7].d[0] | 39322ull;
    c.r[19].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[25], 0u + 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 20720u);
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[5].d[0] = c.r[19].d[0] & c.r[13].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    st32((c.r[4].w[0]), c.r[12].w[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 25u));
    set32(c.r[11], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    set32(c.r[12], c.r[11].w[0] >> 4);
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[12], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[12].w[0] << 2);
    c.r[9].d[0] = c.r[13].d[0] & c.r[9].d[0];
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[11], c.r[11].w[0] << 8);
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    set32(c.r[8], c.f[0]);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], c.r[8].w[0] >> 4);
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[25].w[0]));
    set32(c.r[8], c.r[9].w[0] << 3);
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[25].w[0]));
    set32(c.r[8], c.r[8].w[0] << 5);
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.f[12]);
    st32((c.r[4].w[0] + 64u), c.f[6]);
    st32((c.r[4].w[0] + 68u), c.f[5]);
    st32((c.r[4].w[0] + 72u), c.f[4]);
    st32((c.r[4].w[0] + 76u), c.f[3]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    c.f[12] = c.r[18].w[0];
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29752u)));
    st32((c.r[29].w[0] + 112u), c.f[6]);
    st32((c.r[29].w[0] + 120u), c.f[4]);
    st32((c.r[29].w[0] + 124u), c.f[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    c.budget -= 118;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4558u); set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);  if (depth < kMaxDepth) unit_004F(c, 100u, depth + 1u); else { c.pc = 0x0033E370u; return; } if (c.pc != 0x002B4558u) [[unlikely]] return; }
L_002B4558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4598; } }
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[17].w[0] + 80u), c.f[3]);
    st32((c.r[17].w[0] + 84u), c.f[2]);
    st32((c.r[17].w[0] + 88u), c.f[1]);
    st32((c.r[17].w[0] + 92u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 9;
L_002B4584:
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4590u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4590u) [[unlikely]] return; }
L_002B4590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B45BC; } }
L_002B4598:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B45B4u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0038(c, 434u, depth + 1u); else { c.pc = 0x002E3140u; return; } if (c.pc != 0x002B45B4u) [[unlikely]] return; }
L_002B45B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4584u | kUnwind; return; } goto L_002B4584; } }
L_002B45BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002B45E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 73u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B4634; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4624; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B4624:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B476C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B4634:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4648u) [[unlikely]] return; }
L_002B4648:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B467Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B467Cu) [[unlikely]] return; }
L_002B467C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.f[12] = c.f[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4694u); set32(c.r[4], c.r[2].w[0] + 680u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x002B4694u) [[unlikely]] return; }
L_002B4694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B476C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B476C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B46CC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B46CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 178u, depth + 1u); else { c.pc = 0x0027DB60u; return; } if (c.pc != 0x002B46CCu) [[unlikely]] return; }
L_002B46CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B46D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 169u, depth + 1u); else { c.pc = 0x0027DA10u; return; } if (c.pc != 0x002B46D8u) [[unlikely]] return; }
L_002B46D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4740; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B4750; } }
L_002B4708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4710u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B4710u) [[unlikely]] return; }
L_002B4710:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B4740; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002B4740; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4740u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B4740u) [[unlikely]] return; }
L_002B4740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4748u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_001F(c, 172u, depth + 1u); else { c.pc = 0x0027DA80u; return; } if (c.pc != 0x002B4748u) [[unlikely]] return; }
L_002B4748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B4770; } }
L_002B4750:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4708u | kUnwind; return; } goto L_002B4708; } }
L_002B476C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B4770:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B4780:
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B4798; } }
    set32(c.r[3], 0u + 211u);
    st8((c.r[5].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002B4798:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B47C0; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B47C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002B47D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B47F0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B47F0u) [[unlikely]] return; }
L_002B47F0:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B4810:
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B4820:
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
    set32(c.r[9], 0u + 14u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 20384u);
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
L_002B4920:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[29].w[0] + 108u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[7].w[0] + 544u));
    c.r[4].d[0] = c.r[5].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] + 544u);  if (t) { goto L_002B4A64; } }
    c.r[4].d[0] = c.r[5].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B4A64; } }
L_002B4968:
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[4] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[3], 0u - 5u);
    c.f[2] = ld32((c.r[17].w[0] + 88u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.f[1] = ld32((c.r[6].w[0] + 32u));
    c.f[5] = ld32((c.r[6].w[0] + 36u));
    c.f[3] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[6].w[0] + 688u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[6].w[0] + 692u), c.f[4]);
    st32((c.r[6].w[0] + 696u), c.f[2]);
    st32((c.r[6].w[0] + 700u), c.f[6]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 724u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 76u));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4B20; } }
L_002B49C4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 76u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4C6C; } }
L_002B49D0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    c.budget -= 1;
L_002B49D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4DD0; } }
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B4DD0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 97u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4EE4; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B4EFC; } }
L_002B4A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4A2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B4A2Cu) [[unlikely]] return; }
L_002B4A2C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4F68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B4F68; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4A5Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B4A5Cu) [[unlikely]] return; }
L_002B4A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B4F6C; } }
L_002B4A64:
    set32(c.r[6], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002B4ACC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002B4AB0; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002B4AA8; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002B4AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 98u));  if (t) { goto L_002B4AF0; } }
L_002B4AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 11u);  if (t) { goto L_002B4B00; } }
L_002B4AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 12u);  if (t) { goto L_002B4B00; } }
L_002B4AB0:
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1496u));
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], 0u + 27u);  if (t) { goto L_002B4B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_002B4B00; } }
L_002B4ACC:
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1496u));
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B4AE4; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002B4AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 27u);  if (t) { goto L_002B4B00; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 98u));
    c.budget -= 1;
L_002B4AF0:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[16].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
L_002B4B00:
    c.r[4].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002B4B14; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002B4B14:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4968u | kUnwind; return; } goto L_002B4968; } }
L_002B4B20:
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.f[3] = ld32((c.r[18].w[0] + 688u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 696u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B40u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002B4B40u) [[unlikely]] return; }
L_002B4B40:
    st32((c.r[18].w[0] + 712u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[4] = ld32((c.r[18].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[3] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.f[1] = 0u;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 716u), c.f[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BC0u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 169u, depth + 1u); else { c.pc = 0x002BA680u; return; } if (c.pc != 0x002B4BC0u) [[unlikely]] return; }
L_002B4BC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E320000u);
    c.r[3].d[0] = c.r[3].d[0] | 47298ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B49C4u | kUnwind; return; } goto L_002B49C4; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = ld16((c.r[7].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B4F18; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4F18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002B4C1C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B4F68; } }
L_002B4C1C:
    c.f[5] = ld32((c.r[7].w[0] + 40u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[4] = ld32((c.r[17].w[0] + 88u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[7].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[7].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[12] = 0u;
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[4]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C64u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 42u, depth + 1u); else { c.pc = 0x0028C860u; return; } if (c.pc != 0x002B4C64u) [[unlikely]] return; }
L_002B4C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4A5Cu | kUnwind; return; } goto L_002B4A5C; } }
L_002B4C6C:
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.f[3] = ld32((c.r[18].w[0] + 688u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 696u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C8Cu); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002B4C8Cu) [[unlikely]] return; }
L_002B4C8C:
    st32((c.r[18].w[0] + 712u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[4] = ld32((c.r[18].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[3] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.f[1] = 0u;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 716u), c.f[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D0Cu); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 169u, depth + 1u); else { c.pc = 0x002BA680u; return; } if (c.pc != 0x002B4D0Cu) [[unlikely]] return; }
L_002B4D0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 64053ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B49D0u | kUnwind; return; } goto L_002B49D0; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.f[3] = ld32((c.r[18].w[0] + 688u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 696u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D48u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002B4D48u) [[unlikely]] return; }
L_002B4D48:
    st32((c.r[18].w[0] + 712u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[4] = ld32((c.r[18].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[3] = c.r[2].w[0];
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.f[1] = 0u;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 716u), c.f[12]);
    c.f[13] = ld32((c.r[28].w[0] - 29656u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4DC8u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_0021(c, 4u, depth + 1u); else { c.pc = 0x002840C0u; return; } if (c.pc != 0x002B4DC8u) [[unlikely]] return; }
L_002B4DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B49D4u | kUnwind; return; } goto L_002B49D4; } }
L_002B4DD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B4EC0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B4E78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B4E44; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B4E2C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B4E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B4EB0; } }
L_002B4E14:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E24u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 159u, depth + 1u); else { c.pc = 0x0028D940u; return; } if (c.pc != 0x002B4E24u) [[unlikely]] return; }
L_002B4E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));  if (t) { goto L_002B4EC4; } }
L_002B4E2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E3Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 156u, depth + 1u); else { c.pc = 0x0028D8E0u; return; } if (c.pc != 0x002B4E3Cu) [[unlikely]] return; }
L_002B4E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4EC0; } }
L_002B4E44:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[5].w[0] + 1484u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E70u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x002B4E70u) [[unlikely]] return; }
L_002B4E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4EC0; } }
L_002B4E78:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[5].w[0] + 1484u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4EA4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 147u, depth + 1u); else { c.pc = 0x0028D7C0u; return; } if (c.pc != 0x002B4EA4u) [[unlikely]] return; }
L_002B4EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B4EC0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_002B4EB0:
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4EC0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 186u, depth + 1u); else { c.pc = 0x0028DD40u; return; } if (c.pc != 0x002B4EC0u) [[unlikely]] return; }
L_002B4EC0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    c.budget -= 1;
L_002B4EC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B4F68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4A5Cu | kUnwind; return; } goto L_002B4A5C; } }
L_002B4EE4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4EF4u); st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B4EF4u) [[unlikely]] return; }
L_002B4EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4A5Cu | kUnwind; return; } goto L_002B4A5C; } }
L_002B4EFC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4A24u | kUnwind; return; } goto L_002B4A24; } }
L_002B4F18:
    c.f[5] = ld32((c.r[7].w[0] + 40u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[4] = ld32((c.r[17].w[0] + 88u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[7].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[7].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[12] = 0u;
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[4]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F60u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 42u, depth + 1u); else { c.pc = 0x0028C860u; return; } if (c.pc != 0x002B4F60u) [[unlikely]] return; }
L_002B4F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4A5Cu | kUnwind; return; } goto L_002B4A5C; } }
L_002B4F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B4F6C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002B4F80:
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 98u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002B4F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[12], c.r[7].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[7].d[0] = c.r[7].d[0] | 15360ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = c.r[7].w[0];
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 2u);
    c.r[25].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[15], 0u - 3u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[14], c.r[14].w[0] - 27952u);
    set32(c.r[13], 0u + 12u);
    set32(c.r[11], 0u - 5u);
    set32(c.r[10], c.r[10].w[0] - 16688u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], c.r[9].w[0] - 20048u);
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[25].d[0] = c.r[25].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[25].d[0] = c.r[25].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.f[1] = 0u;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[15].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[14].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st32((c.r[4].w[0] + 64u), c.f[12]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 98u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 81;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 88u), c.r[8].w[0]);  if (t) { goto L_002B50F4; } }
    st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002B50D8:
    st32((c.r[17].w[0] + 72u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B50ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B50ECu) [[unlikely]] return; }
L_002B50EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B519C; } }
L_002B50F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[13]);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[2], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5164u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B5164u) [[unlikely]] return; }
L_002B5164:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5170u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B5170u) [[unlikely]] return; }
L_002B5170:
    c.f[2] = ld32((c.r[17].w[0] + 88u));
    c.f[3] = ld32((c.r[17].w[0] + 80u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B50D8u | kUnwind; return; } goto L_002B50D8; } }
L_002B519C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B51C0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    c.f[22] = ld32((c.r[29].w[0] + 92u));
    c.f[21] = ld32((c.r[29].w[0] + 124u));
    c.f[20] = ld32((c.r[29].w[0] + 188u));
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5200u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B5200u) [[unlikely]] return; }
L_002B5200:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B53E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B521C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002B55C8; } }
L_002B521C:
    set32(c.r[2], 0u + 4u);
    set32(c.r[17], c.r[29].w[0] + 200u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[22] = 0u;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    c.f[21] = ld32((c.r[3].w[0] + 104u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B524Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B524Cu) [[unlikely]] return; }
L_002B524C:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5258u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B5258u) [[unlikely]] return; }
L_002B5258:
    c.f[3] = ld32((c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[4] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[2] = c.f[0] ^ fp::kSign;
    set32(c.r[6], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[29].w[0] + 192u), c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 216u), c.f[3]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52C0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 381u, depth + 1u); else { c.pc = 0x0028BAD0u; return; } if (c.pc != 0x002B52C0u) [[unlikely]] return; }
L_002B52C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[22] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52D0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002B52D0u) [[unlikely]] return; }
L_002B52D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[3].d[0] | 4059ull;
    c.f[21] = 0u;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = c.r[2].d[0] | 63875ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.f[2] = c.r[5].w[0];
    set32(c.r[17], c.r[29].w[0] + 168u);
    c.facc = fp::ee::add(c.fcr31, c.f[21], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[1] = c.r[4].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 164u), 0u);
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[21], c.f[2]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[22] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B536Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B536Cu) [[unlikely]] return; }
L_002B536C:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5378u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B5378u) [[unlikely]] return; }
L_002B5378:
    c.f[2] = ld32((c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.f[4] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[3], 0u + 211u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 164u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[22]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[29].w[0] + 160u), c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 84u), c.f[3]);
    st32((c.r[16].w[0] + 88u), c.f[1]);
    st32((c.r[16].w[0] + 92u), c.f[20]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B56C4; } }
L_002B53E4:
    set32(c.r[2], 0u + 4u);
    set32(c.r[17], c.r[29].w[0] + 136u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[22] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5428u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B5428u) [[unlikely]] return; }
L_002B5428:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5434u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B5434u) [[unlikely]] return; }
L_002B5434:
    c.f[3] = ld32((c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[4] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[2] = c.f[0] ^ fp::kSign;
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[7], 0u + 1u);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[29].w[0] + 128u), c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 152u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B54A0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 363u, depth + 1u); else { c.pc = 0x0028B7C0u; return; } if (c.pc != 0x002B54A0u) [[unlikely]] return; }
L_002B54A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[22] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B54B0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002B54B0u) [[unlikely]] return; }
L_002B54B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[3].d[0] | 4059ull;
    c.f[20] = 0u;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = c.r[2].d[0] | 63875ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.f[2] = c.r[5].w[0];
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[1] = c.r[4].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 100u), 0u);
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[2]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[22] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B554Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B554Cu) [[unlikely]] return; }
L_002B554C:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5558u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B5558u) [[unlikely]] return; }
L_002B5558:
    c.f[2] = ld32((c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.f[4] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[3], 0u + 211u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[22]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[29].w[0] + 96u), c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 84u), c.f[3]);
    st32((c.r[16].w[0] + 88u), c.f[1]);
    st32((c.r[16].w[0] + 92u), c.f[21]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B56C4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_002B55C8:
    c.r[6].d[0] = 0ull | 0ull;
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[1] = c.r[2].w[0];
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    set32(c.r[17], c.r[29].w[0] + 72u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    st32((c.r[29].w[0] + 64u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[20] = 0u;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 68u), 0u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[2]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5650u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B5650u) [[unlikely]] return; }
L_002B5650:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B565Cu); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B565Cu) [[unlikely]] return; }
L_002B565C:
    c.f[2] = ld32((c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.f[4] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[3], 0u + 211u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[29].w[0] + 64u), c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 84u), c.f[3]);
    st32((c.r[16].w[0] + 88u), c.f[1]);
    st32((c.r[16].w[0] + 92u), c.f[22]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 26;
L_002B56C4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B570C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B574C; } }
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B5714; } }
L_002B56F4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B56F8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002B56FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B5754; } }
L_002B5704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B5790; } }
L_002B570C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B56FCu | kUnwind; return; } goto L_002B56FC; } }
L_002B5714:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[16].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B56F4u | kUnwind; return; } goto L_002B56F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B572Cu); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B572Cu) [[unlikely]] return; }
L_002B572C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B56F8u | kUnwind; return; } goto L_002B56F8; } }
L_002B574C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B56FCu | kUnwind; return; } goto L_002B56FC; } }
L_002B5754:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5760u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0075(c, 258u, depth + 1u); else { c.pc = 0x003D7F30u; return; } if (c.pc != 0x002B5760u) [[unlikely]] return; }
L_002B5760:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B578C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5774u); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002B5774u) [[unlikely]] return; }
L_002B5774:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5784u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002B5784u) [[unlikely]] return; }
L_002B5784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5704u | kUnwind; return; } goto L_002B5704; } }
L_002B578C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B5790:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002B57B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    c.f[21] = ld32((c.r[29].w[0] + 172u));
    c.f[22] = ld32((c.r[29].w[0] + 156u));
    c.f[23] = ld32((c.r[29].w[0] + 204u));
    c.f[24] = ld32((c.r[29].w[0] + 236u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B5EA0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_002B5800:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B5824; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B5824:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B5EB8; } }
L_002B5844:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 96u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 20224u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_002D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B5870:
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], c.r[5].w[0] + 544u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002B6934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5890u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 159u, depth + 1u); else { c.pc = 0x0028D940u; return; } if (c.pc != 0x002B5890u) [[unlikely]] return; }
L_002B5890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5E98; } }
L_002B5898:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B58ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B58ACu) [[unlikely]] return; }
L_002B58AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    set32(c.r[6], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B58CCu); set32(c.r[4], c.r[4].w[0] + 680u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x002B58CCu) [[unlikely]] return; }
L_002B58CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5ECC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 704u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B6934; } }
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B6934; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B5E98; } }
L_002B591C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], c.r[18].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 21u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B593Cu); set32(c.r[4], c.r[3].w[0] + 680u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x002B593Cu) [[unlikely]] return; }
L_002B593C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5F84; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 525u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B5F98; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B598Cu); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B598Cu) [[unlikely]] return; }
L_002B598C:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B60CC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B610C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B60D4; } }
L_002B59E4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B59E8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002B59EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B59FCu); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002B59FCu) [[unlikely]] return; }
L_002B59FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B5E98; } }
L_002B5A04:
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u + 11u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_002B6114; } }
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B6934; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 525u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B5A54; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B5A54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B616C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 211u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 112u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6124; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6164; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B612C; } }
L_002B5AAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5AB0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002B5AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5AEC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AC8u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0075(c, 258u, depth + 1u); else { c.pc = 0x003D7F30u; return; } if (c.pc != 0x002B5AC8u) [[unlikely]] return; }
L_002B5AC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5AEC; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5ADCu); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002B5ADCu) [[unlikely]] return; }
L_002B5ADC:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AECu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002B5AECu) [[unlikely]] return; }
L_002B5AEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.f[21] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AFCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002B5AFCu) [[unlikely]] return; }
L_002B5AFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[3].d[0] | 4059ull;
    c.f[20] = 0u;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = c.r[2].d[0] | 63875ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.f[2] = c.r[5].w[0];
    set32(c.r[16], c.r[29].w[0] + 216u);
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[1] = c.r[4].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 208u), 0u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 212u), 0u);
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[2]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B98u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B5B98u) [[unlikely]] return; }
L_002B5B98:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5BA4u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B5BA4u) [[unlikely]] return; }
L_002B5BA4:
    c.f[2] = ld32((c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.f[4] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[29].w[0] + 208u), c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 84u), c.f[3]);
    st32((c.r[18].w[0] + 88u), c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.f[24]);  if (t) { goto L_002B5E98; } }
L_002B5C00:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], c.r[18].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 21u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C20u); set32(c.r[4], c.r[3].w[0] + 680u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x002B5C20u) [[unlikely]] return; }
L_002B5C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6180; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 525u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B5C50; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B5C50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B62A4; } }
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B6934; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B5E98; } }
L_002B5C84:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], c.r[18].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 21u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5CA4u); set32(c.r[4], c.r[3].w[0] + 680u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x002B5CA4u) [[unlikely]] return; }
L_002B5CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B62B4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 525u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B5CD4; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B5CD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6934; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));  if (t) { goto L_002B62B8; } }
L_002B5CE4:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1416u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B5D58; } }
L_002B5CF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 1400u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5D20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5D20u) [[unlikely]] return; }
L_002B5D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6440; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002B6440; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], ld32((c.r[3].w[0] + 1416u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5CF8u | kUnwind; return; } goto L_002B5CF8; } }
    c.budget -= 1;
L_002B5D58:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5D6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5D6Cu) [[unlikely]] return; }
L_002B5D6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[22] = ld32((c.r[3].w[0] + 104u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[23] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5DA0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B5DA0u) [[unlikely]] return; }
L_002B5DA0:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5DACu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B5DACu) [[unlikely]] return; }
L_002B5DAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[23]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[3] = 0u;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[22]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B67BC; } }
L_002B5DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[5]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B67E4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 97u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002B67E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5E28u); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B5E28u) [[unlikely]] return; }
L_002B5E28:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B68EC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B692C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B68F4; } }
L_002B5E80:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5E84:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002B5E88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5E98u); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002B5E98u) [[unlikely]] return; }
L_002B5E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002B6938; } }
L_002B5EA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5EB0u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x002B5EB0u) [[unlikely]] return; }
L_002B5EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5800u | kUnwind; return; } goto L_002B5800; } }
L_002B5EB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5844u | kUnwind; return; } goto L_002B5844; } }
L_002B5ECC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5EE0u); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B5EE0u) [[unlikely]] return; }
L_002B5EE0:
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B5F3C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B5F7C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B5F44; } }
L_002B5F1C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5F20:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002B5F24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F34u); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002B5F34u) [[unlikely]] return; }
L_002B5F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B5F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5F24u | kUnwind; return; } goto L_002B5F24; } }
L_002B5F44:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5F1Cu | kUnwind; return; } goto L_002B5F1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F5Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B5F5Cu) [[unlikely]] return; }
L_002B5F5C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5F20u | kUnwind; return; } goto L_002B5F20; } }
L_002B5F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5F24u | kUnwind; return; } goto L_002B5F24; } }
L_002B5F84:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B5F98:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5FA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B5FA4u) [[unlikely]] return; }
L_002B5FA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B6050; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B5FC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5FD8u); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B5FD8u) [[unlikely]] return; }
L_002B5FD8:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6084; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B60C4; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B608C; } }
L_002B6030:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B6034:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002B6038:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6048u); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002B6048u) [[unlikely]] return; }
L_002B6048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B6050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6058u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 68u, depth + 1u); else { c.pc = 0x002B51C0u; return; } if (c.pc != 0x002B6058u) [[unlikely]] return; }
L_002B6058:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6064u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B6064u) [[unlikely]] return; }
L_002B6064:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B6084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6038u | kUnwind; return; } goto L_002B6038; } }
L_002B608C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6030u | kUnwind; return; } goto L_002B6030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B60A4u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B60A4u) [[unlikely]] return; }
L_002B60A4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6034u | kUnwind; return; } goto L_002B6034; } }
L_002B60C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6038u | kUnwind; return; } goto L_002B6038; } }
L_002B60CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B59ECu | kUnwind; return; } goto L_002B59EC; } }
L_002B60D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B59E4u | kUnwind; return; } goto L_002B59E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B60ECu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B60ECu) [[unlikely]] return; }
L_002B60EC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B59E8u | kUnwind; return; } goto L_002B59E8; } }
L_002B610C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B59ECu | kUnwind; return; } goto L_002B59EC; } }
L_002B6114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B611Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 159u, depth + 1u); else { c.pc = 0x0028D940u; return; } if (c.pc != 0x002B611Cu) [[unlikely]] return; }
L_002B611C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B6124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5AB4u | kUnwind; return; } goto L_002B5AB4; } }
L_002B612C:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5AACu | kUnwind; return; } goto L_002B5AAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6144u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B6144u) [[unlikely]] return; }
L_002B6144:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5AB0u | kUnwind; return; } goto L_002B5AB0; } }
L_002B6164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5AB4u | kUnwind; return; } goto L_002B5AB4; } }
L_002B616C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B6180:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.f[21] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6190u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002B6190u) [[unlikely]] return; }
L_002B6190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[3].d[0] | 4059ull;
    c.f[20] = 0u;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = c.r[2].d[0] | 63875ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.f[2] = c.r[5].w[0];
    set32(c.r[16], c.r[29].w[0] + 184u);
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[1] = c.r[4].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 180u), 0u);
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[20], c.f[2]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B622Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B622Cu) [[unlikely]] return; }
L_002B622C:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6238u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B6238u) [[unlikely]] return; }
L_002B6238:
    c.f[2] = ld32((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.f[4] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[3], 0u + 211u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[29].w[0] + 176u), c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 84u), c.f[3]);
    st32((c.r[18].w[0] + 88u), c.f[1]);
    st32((c.r[18].w[0] + 92u), c.f[23]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B62A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 68u, depth + 1u); else { c.pc = 0x002B51C0u; return; } if (c.pc != 0x002B62ACu) [[unlikely]] return; }
L_002B62AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B62B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002B62B8:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62D0u); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B62D0u) [[unlikely]] return; }
L_002B62D0:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[16], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), 0u);
    c.f[0] = c.r[3].w[0];
    c.f[21] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6310u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B6310u) [[unlikely]] return; }
L_002B6310:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B631Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B631Cu) [[unlikely]] return; }
L_002B631C:
    c.f[2] = ld32((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.f[4] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[3], 0u + 211u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 132u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 84u), c.f[3]);
    st32((c.r[18].w[0] + 88u), c.f[1]);
    st32((c.r[18].w[0] + 92u), c.f[22]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 29;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 128u), c.f[5]);  if (t) { goto L_002B63F8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6438; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B6400; } }
L_002B63B0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B63B4:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002B63B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6934; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B63CCu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0075(c, 258u, depth + 1u); else { c.pc = 0x003D7F30u; return; } if (c.pc != 0x002B63CCu) [[unlikely]] return; }
L_002B63CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B63E0u); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002B63E0u) [[unlikely]] return; }
L_002B63E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B63F0u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002B63F0u) [[unlikely]] return; }
L_002B63F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B63F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B63B8u | kUnwind; return; } goto L_002B63B8; } }
L_002B6400:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B63B0u | kUnwind; return; } goto L_002B63B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6418u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B6418u) [[unlikely]] return; }
L_002B6418:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B63B4u | kUnwind; return; } goto L_002B63B4; } }
L_002B6438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B63B8u | kUnwind; return; } goto L_002B63B8; } }
L_002B6440:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[4] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[24] = ld32((c.r[2].w[0] + 104u));
    c.f[22] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[25] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[23] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6474u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B6474u) [[unlikely]] return; }
L_002B6474:
    c.f[12] = c.f[24];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6480u); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B6480u) [[unlikely]] return; }
L_002B6480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[25], c.f[25]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[3] = 0u;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[24]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[24]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[23]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B6580; } }
L_002B64BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[5]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B6628; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 211u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B65A8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B65E8; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B65B0; } }
L_002B6528:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B652C:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002B6530:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B65F0; } }
L_002B6538:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_002B653C:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[5] = ld32((c.r[3].w[0] + 36u));
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[18].w[0] + 84u), c.f[4]);
    st32((c.r[18].w[0] + 88u), c.f[2]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.f[21]);  if (t) { goto L_002B6934; } }
L_002B6580:
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[23]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[23] = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B64BCu | kUnwind; return; } goto L_002B64BC; } }
L_002B65A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6530u | kUnwind; return; } goto L_002B6530; } }
L_002B65B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6528u | kUnwind; return; } goto L_002B6528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65C8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B65C8u) [[unlikely]] return; }
L_002B65C8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B652Cu | kUnwind; return; } goto L_002B652C; } }
L_002B65E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6530u | kUnwind; return; } goto L_002B6530; } }
L_002B65F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65FCu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0075(c, 258u, depth + 1u); else { c.pc = 0x003D7F30u; return; } if (c.pc != 0x002B65FCu) [[unlikely]] return; }
L_002B65FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6538u | kUnwind; return; } goto L_002B6538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6610u); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002B6610u) [[unlikely]] return; }
L_002B6610:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6620u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002B6620u) [[unlikely]] return; }
L_002B6620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B653Cu | kUnwind; return; } goto L_002B653C; } }
L_002B6628:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6644u); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B6644u) [[unlikely]] return; }
L_002B6644:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[16], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    c.f[0] = c.r[3].w[0];
    c.f[22] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.f[21] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6684u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B6684u) [[unlikely]] return; }
L_002B6684:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6690u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B6690u) [[unlikely]] return; }
L_002B6690:
    c.f[2] = ld32((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.f[4] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[3], 0u + 211u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[3] = ld32((c.r[29].w[0] + 100u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 84u), c.f[3]);
    st32((c.r[18].w[0] + 88u), c.f[1]);
    st32((c.r[18].w[0] + 92u), c.f[20]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 29;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.f[5]);  if (t) { goto L_002B673C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B677C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B6744; } }
L_002B6724:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B6728:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002B672C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6784; } }
L_002B6734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6934; } }
L_002B673C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B672Cu | kUnwind; return; } goto L_002B672C; } }
L_002B6744:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6724u | kUnwind; return; } goto L_002B6724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B675Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B675Cu) [[unlikely]] return; }
L_002B675C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6728u | kUnwind; return; } goto L_002B6728; } }
L_002B677C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B672Cu | kUnwind; return; } goto L_002B672C; } }
L_002B6784:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6790u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0075(c, 258u, depth + 1u); else { c.pc = 0x003D7F30u; return; } if (c.pc != 0x002B6790u) [[unlikely]] return; }
L_002B6790:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B67A4u); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002B67A4u) [[unlikely]] return; }
L_002B67A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B67B4u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002B67B4u) [[unlikely]] return; }
L_002B67B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6734u | kUnwind; return; } goto L_002B6734; } }
L_002B67BC:
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5DE8u | kUnwind; return; } goto L_002B5DE8; } }
L_002B67E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6800u); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B6800u) [[unlikely]] return; }
L_002B6800:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], 0u + 211u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B68A4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B68E4; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B68AC; } }
L_002B685C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B6860:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002B6864:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6934; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6878u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0075(c, 258u, depth + 1u); else { c.pc = 0x003D7F30u; return; } if (c.pc != 0x002B6878u) [[unlikely]] return; }
L_002B6878:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B6934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B688Cu); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002B688Cu) [[unlikely]] return; }
L_002B688C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B689Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002B689Cu) [[unlikely]] return; }
L_002B689C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E98u | kUnwind; return; } goto L_002B5E98; } }
L_002B68A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6864u | kUnwind; return; } goto L_002B6864; } }
L_002B68AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B685Cu | kUnwind; return; } goto L_002B685C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B68C4u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B68C4u) [[unlikely]] return; }
L_002B68C4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6860u | kUnwind; return; } goto L_002B6860; } }
L_002B68E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6864u | kUnwind; return; } goto L_002B6864; } }
L_002B68EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E88u | kUnwind; return; } goto L_002B5E88; } }
L_002B68F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[18].w[0] + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E80u | kUnwind; return; } goto L_002B5E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B690Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002B690Cu) [[unlikely]] return; }
L_002B690C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E84u | kUnwind; return; } goto L_002B5E84; } }
L_002B692C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E88u | kUnwind; return; } goto L_002B5E88; } }
L_002B6934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002B6938:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002B6970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] + 1072u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6990u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x002B6990u) [[unlikely]] return; }
L_002B6990:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B69A4u); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x002B69A4u) [[unlikely]] return; }
L_002B69A4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[13], c.r[4].w[0] << 3);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[4].w[0] << 6);
    set32(c.r[8], c.r[4].w[0] << 8);
    set32(c.r[9], 0u - 33u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[7], 0u - 257u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[4].w[0] << 9);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[13].d[0] = c.r[3].d[0] | c.r[13].d[0];
    set32(c.r[5], 0u - 129u);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[3], 0u - 513u);
    c.r[13].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B6A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] + 1072u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6A78u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x002B6A78u) [[unlikely]] return; }
L_002B6A78:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6A8Cu); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x002B6A8Cu) [[unlikely]] return; }
L_002B6A8C:
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
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[6], 0u - 129u);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u - 513u);
    c.r[14].d[0] = ld16((c.r[16].w[0] + 1202u));
    set32(c.r[4], 0u + 6u);
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
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 96u)));
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B6B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B70u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B6B70u) [[unlikely]] return; }
L_002B6B70:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B6B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_002B6BA0:
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B6BB8; } }
    set32(c.r[3], 0u + 211u);
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002B6BB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B6BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[10].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 2u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[13], 0u - 3u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[12], c.r[12].w[0] - 27952u);
    set32(c.r[11], 0u + 30u);
    set32(c.r[8], 0u - 5u);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - 16688u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 19712u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[3].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[4].w[0]), c.r[12].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[8].d[0] = c.r[11].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 69;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 116u), 0u);  c.pc = t; return; }
L_002B6CE0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 172u));
    c.f[20] = ld32((c.r[29].w[0] + 236u));
    c.f[21] = ld32((c.r[29].w[0] + 220u));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B7200; } }
L_002B6D34:
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6D5C; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B6D5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B764C; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B764C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6E78; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 1416u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B6E78; } }
    set32(c.r[17], c.r[29].w[0] + 260u);
    set32(c.r[16], c.r[29].w[0] + 264u);
    c.budget -= 2;
L_002B6D9C:
    set32(c.r[3], ld32((c.r[6].w[0] + 1400u)));
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B7210; } }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B7210; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6E58; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 24u));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B6E58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[4] = ld32((c.r[6].w[0] + 36u));
    c.f[2] = ld32((c.r[6].w[0] + 32u));
    c.f[6] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[5] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[17].w[0]), c.f[3]);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.f[5]);  if (t) { goto L_002B7228; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6E54u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x002B6E54u) [[unlikely]] return; }
L_002B6E54:
    c.budget -= 1;
L_002B6E58:
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[3], ld32((c.r[6].w[0] + 1416u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6D9Cu | kUnwind; return; } goto L_002B6D9C; } }
L_002B6E78:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 164u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B764C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 20192u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_002D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B6EA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[6].w[0] + 680u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[20].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6EBCu); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x002B6EBCu) [[unlikely]] return; }
L_002B6EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B764C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B764C; } }
L_002B6ED0:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_002B7258; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B764C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 172u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B726C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[20].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B6F10:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6F1Cu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B6F1Cu) [[unlikely]] return; }
L_002B6F1C:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 136u), c.f[0]);  if (t) { goto L_002B764C; } }
L_002B6F3C:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_002B7288; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B764C; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B764C; } }
L_002B6F6C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 544u);  if (t) { goto L_002B729C; } }
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B764C; } }
    st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 211u);
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B764C; } }
L_002B6FA8:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_002B72C8; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B764C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 172u));  if (t) { goto L_002B72CC; } }
L_002B6FD4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 544u);  if (t) { goto L_002B7338; } }
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B764C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 172u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B73FC; } }
    st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 211u);
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B764C; } }
L_002B701C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B7044; } }
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 136u), c.f[0]);  if (t) { goto L_002B7190; } }
L_002B7044:
    st32((c.r[20].w[0] + 136u), 0u);
    set32(c.r[18], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B7190; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1416u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002B7190; } }
    set32(c.r[23], c.r[29].w[0] + 196u);
    set32(c.r[30], c.r[29].w[0] + 200u);
    c.budget -= 2;
L_002B7078:
    set32(c.r[2], ld32((c.r[18].w[0] + 1400u)));
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[22].w[0] + 1348u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B75B4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 24u));
    set32(c.r[2], 0u + 29u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B75B4; } }
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B7428; } }
    c.budget -= 1;
L_002B70C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B70D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B75B4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.f[5] = ld32((c.r[22].w[0] + 32u));
    c.f[1] = ld32((c.r[22].w[0] + 40u));
    c.f[3] = ld32((c.r[22].w[0] + 36u));
    c.f[4] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[23] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[12] = c.f[21];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B710Cu); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002B710Cu) [[unlikely]] return; }
L_002B710C:
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[20].w[0] + 160u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[23]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B75A8; } }
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    set32(c.r[3], 0u + 211u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[5] = ld32((c.r[4].w[0] + 36u));
    c.f[3] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[20].w[0] + 144u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[20].w[0] + 148u), c.f[4]);
    st32((c.r[20].w[0] + 152u), c.f[2]);
    st32((c.r[20].w[0] + 156u), c.f[20]);
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
L_002B7188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_002B7650; } }
L_002B7190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B75DC; } }
    st32((c.r[20].w[0] + 132u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B75F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B71CCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 270u, depth + 1u); else { c.pc = 0x002B7AA0u; return; } if (c.pc != 0x002B71CCu) [[unlikely]] return; }
L_002B71CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B764C; } }
L_002B71D4:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_002B7620; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[3], 0u + 204u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B764C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 132u), 0u);  if (t) { goto L_002B7624; } }
L_002B7200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7208u); set32(c.r[4], ld32((c.r[20].w[0] + 176u)));  if (depth < kMaxDepth) unit_0095(c, 73u, depth + 1u); else { c.pc = 0x004550F0u; return; } if (c.pc != 0x002B7208u) [[unlikely]] return; }
L_002B7208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6D34u | kUnwind; return; } goto L_002B6D34; } }
L_002B7210:
    set32(c.r[5], ld32((c.r[20].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7220u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x002B7220u) [[unlikely]] return; }
L_002B7220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6E58u | kUnwind; return; } goto L_002B6E58; } }
L_002B7228:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7248u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002B7248u) [[unlikely]] return; }
L_002B7248:
    st32((c.r[20].w[0] + 160u), c.f[0]);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6E58u | kUnwind; return; } goto L_002B6E58; } }
L_002B7258:
    c.f[12] = ld32((c.r[20].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7264u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 39u, depth + 1u); else { c.pc = 0x0028C7F0u; return; } if (c.pc != 0x002B7264u) [[unlikely]] return; }
L_002B7264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B764C; } }
L_002B726C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7274u); set32(c.r[4], ld32((c.r[20].w[0] + 176u)));  if (depth < kMaxDepth) unit_0095(c, 88u, depth + 1u); else { c.pc = 0x004552D0u; return; } if (c.pc != 0x002B7274u) [[unlikely]] return; }
L_002B7274:
    st8((c.r[20].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29720u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6F10u | kUnwind; return; } goto L_002B6F10; } }
L_002B7288:
    c.f[12] = ld32((c.r[20].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 39u, depth + 1u); else { c.pc = 0x0028C7F0u; return; } if (c.pc != 0x002B7294u) [[unlikely]] return; }
L_002B7294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B764C; } }
L_002B729C:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 122u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B72ACu); set32(c.r[6], 0u + 123u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x002B72ACu) [[unlikely]] return; }
L_002B72AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B72C0u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 177u, depth + 1u); else { c.pc = 0x0028DC00u; return; } if (c.pc != 0x002B72C0u) [[unlikely]] return; }
L_002B72C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B764C; } }
L_002B72C8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 172u));
    c.budget -= 1;
L_002B72CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B72F8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 140u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B72F8; } }
    st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 211u);
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B764C; } }
L_002B72F8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 140u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B730C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[20].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B730C:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 262u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B731Cu); set32(c.r[6], 0u + 267u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x002B731Cu) [[unlikely]] return; }
L_002B731C:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7330u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 177u, depth + 1u); else { c.pc = 0x0028DC00u; return; } if (c.pc != 0x002B7330u) [[unlikely]] return; }
L_002B7330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B764C; } }
L_002B7338:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 230u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7348u); set32(c.r[6], 0u + 237u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x002B7348u) [[unlikely]] return; }
L_002B7348:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B735Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 177u, depth + 1u); else { c.pc = 0x0028DC00u; return; } if (c.pc != 0x002B735Cu) [[unlikely]] return; }
L_002B735C:
    c.f[0] = ld32((c.r[28].w[0] - 29720u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[4].w[0];
    c.f[2] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B764C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    c.f[0] = c.r[3].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    c.f[5] = ld32((c.r[4].w[0] + 40u));
    c.f[6] = ld32((c.r[5].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 248u), c.f[5]);
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 244u), c.f[3]);  if (t) { goto L_002B764C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B73DCu); set32(c.r[4], ld32((c.r[20].w[0] + 176u)));  if (depth < kMaxDepth) unit_0095(c, 116u, depth + 1u); else { c.pc = 0x004556F0u; return; } if (c.pc != 0x002B73DCu) [[unlikely]] return; }
L_002B73DC:
    st8((c.r[20].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 172u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B764C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29720u), c.f[0]);  if (t) { goto L_002B764C; } }
L_002B73FC:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 230u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B740Cu); set32(c.r[6], 0u + 237u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x002B740Cu) [[unlikely]] return; }
L_002B740C:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7420u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 177u, depth + 1u); else { c.pc = 0x0028DC00u; return; } if (c.pc != 0x002B7420u) [[unlikely]] return; }
L_002B7420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B764C; } }
L_002B7428:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 164u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[17].w[0] + 164u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B70C8u | kUnwind; return; } goto L_002B70C8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B70C8u | kUnwind; return; } goto L_002B70C8; } }
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[3].w[0] + 36u));
    c.f[22] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[24] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[23] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[12] = c.f[22];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B747Cu); c.f[13] = c.f[24];  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002B747Cu) [[unlikely]] return; }
L_002B747C:
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[24]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B7528; } }
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    set32(c.r[2], 0u + 211u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    c.f[5] = ld32((c.r[3].w[0] + 36u));
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 148u), c.f[4]);
    st32((c.r[17].w[0] + 152u), c.f[2]);
    st32((c.r[17].w[0] + 156u), c.f[21]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
L_002B74F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[2].w[0] - 20416u));
    c.f[0] = ld32((c.r[28].w[0] - 29720u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B7538; } }
L_002B7520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B70D0u | kUnwind; return; } goto L_002B70D0; } }
L_002B7528:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B74F8u | kUnwind; return; } goto L_002B74F8; } }
    c.budget -= 1;
L_002B7538:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[5].w[0] + 36u));
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    c.f[6] = ld32((c.r[5].w[0] + 40u));
    c.f[5] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 192u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[23].w[0]), c.f[3]);
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[30].w[0]), c.f[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7520u | kUnwind; return; } goto L_002B7520; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7598u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 103u, depth + 1u); else { c.pc = 0x004554B0u; return; } if (c.pc != 0x002B7598u) [[unlikely]] return; }
L_002B7598:
    st8((c.r[17].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7520u | kUnwind; return; } goto L_002B7520; } }
    c.budget -= 1;
L_002B75A8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7188u | kUnwind; return; } goto L_002B7188; } }
L_002B75B4:
    set32(c.r[18], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[2], ld32((c.r[18].w[0] + 1416u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7078u | kUnwind; return; } goto L_002B7078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7190u | kUnwind; return; } goto L_002B7190; } }
L_002B75DC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B75ECu); st32((c.r[20].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 270u, depth + 1u); else { c.pc = 0x002B7AA0u; return; } if (c.pc != 0x002B75ECu) [[unlikely]] return; }
L_002B75EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B764C; } }
L_002B75F4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7608u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B7608u) [[unlikely]] return; }
L_002B7608:
    set32(c.r[3], c.r[2].w[0] + 20u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 132u), c.f[0]);  if (t) { goto L_002B764C; } }
L_002B7620:
    st32((c.r[20].w[0] + 132u), 0u);
    c.budget -= 1;
L_002B7624:
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 164u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7638u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B7638u) [[unlikely]] return; }
L_002B7638:
    set32(c.r[3], c.r[2].w[0] + 20u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 132u), c.f[0]);
    c.budget -= 5;
L_002B764C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_002B7650:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002B7690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B76B8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 172u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B76B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B76B8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 72u, depth + 1u); else { c.pc = 0x004550E0u; return; } if (c.pc != 0x002B76B8u) [[unlikely]] return; }
L_002B76B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B76D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 211u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7700u); st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B7700u) [[unlikely]] return; }
L_002B7700:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7710u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B7710u) [[unlikely]] return; }
L_002B7710:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 90u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B772Cu); st32((c.r[16].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B772Cu) [[unlikely]] return; }
L_002B772C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B773Cu); set32(c.r[5], 0u + 90u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002B773Cu) [[unlikely]] return; }
L_002B773C:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], 0u + 211u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    st8((c.r[16].w[0] + 164u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 173u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7778u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B7778u) [[unlikely]] return; }
L_002B7778:
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B7790:
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B77B4; } }
    set32(c.r[3], 0u + 211u);
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002B77B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B77C0:
    st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 89u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 91u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 128u), c.r[7].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[6].w[0]);  c.pc = t; return; }
L_002B77F0:
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
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[24], 0u - 2u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[13], 0u - 3u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[12], c.r[12].w[0] - 27952u);
    set32(c.r[11], 0u + 11u);
    set32(c.r[9], 0u - 5u);
    set32(c.r[8], c.r[8].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] - 19040u);
    set32(c.r[6], c.r[6].w[0] - 19376u);
    set32(c.r[5], 0u + 29u);
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
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 77;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 176u), 0u);  c.pc = t; return; }
L_002B7930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B79A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 19040u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B798C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B798C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002B798C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002B798C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B79A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B79A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002B79A4u) [[unlikely]] return; }
L_002B79A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B79C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] + 1072u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B79E0u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x002B79E0u) [[unlikely]] return; }
L_002B79E0:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B79F4u); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x002B79F4u) [[unlikely]] return; }
L_002B79F4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[13], c.r[4].w[0] << 3);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[4].w[0] << 6);
    set32(c.r[8], c.r[4].w[0] << 8);
    set32(c.r[9], 0u - 33u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[7], 0u - 257u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[4].w[0] << 9);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[13].d[0] = c.r[3].d[0] | c.r[13].d[0];
    set32(c.r[5], 0u - 129u);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[3], 0u - 513u);
    c.r[13].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B7AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
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
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B7AE8; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002B7AE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B7FC0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B7C1C; } }
    set32(c.r[3], 0u + 211u);
    st8((c.r[5].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 681u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B7C78; } }
L_002B7B14:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B7CF4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7B34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7B34u) [[unlikely]] return; }
L_002B7B34:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002B7B48; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002B7B64; } }
L_002B7B48:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002B7B64:
    st32((c.r[17].w[0] + 64u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 68u), 0u);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B7B94; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7B90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7B90u) [[unlikely]] return; }
L_002B7B90:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002B7B94:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B7BE0; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 33u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 724u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 724u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 11;
L_002B7BCC:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 724u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 724u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7C1C; } }
L_002B7BE0:
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[5], 0u - 17u);
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 724u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 724u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 724u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_002B7C1C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002B7D00; } }
L_002B7C2C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B7D50; } }
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B7D48; } }
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B7D48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.f[0]);  if (t) { goto L_002B7D50; } }
L_002B7C78:
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7C88u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002B7C88u) [[unlikely]] return; }
L_002B7C88:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 232u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7CA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7CA0u) [[unlikely]] return; }
L_002B7CA0:
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7CB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7CB8u) [[unlikely]] return; }
L_002B7CB8:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 108u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7CECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7CECu) [[unlikely]] return; }
L_002B7CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B14u | kUnwind; return; } goto L_002B7B14; } }
L_002B7CF4:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7C1Cu | kUnwind; return; } goto L_002B7C1C; } }
L_002B7D00:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B7D1C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B7D1C:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 88u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 89u)));
    set32(c.r[4], c.r[2].w[0] + 680u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7D34u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_0054(c, 48u, depth + 1u); else { c.pc = 0x00350D30u; return; } if (c.pc != 0x002B7D34u) [[unlikely]] return; }
L_002B7D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7C2Cu | kUnwind; return; } goto L_002B7C2C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7C2Cu | kUnwind; return; } goto L_002B7C2C; } }
L_002B7D48:
    set32(c.r[3], 0u + 3u);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B7D50:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B7E94; } }
L_002B7D60:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B7DC4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B7D94; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7D8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7D8Cu) [[unlikely]] return; }
L_002B7D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B7D98; } }
L_002B7D94:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002B7D98:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B7EB4; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B7F28; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_002B7DC0:
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002B7DC4:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B7F3C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 90u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B7FC0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1440u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B7FC0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1432u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B7E78; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1424u)));
    c.f[20] = ld32((c.r[4].w[0] + 104u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[12] = c.f[20];
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7E38u); c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002B7E38u) [[unlikely]] return; }
L_002B7E38:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7E44u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002B7E44u) [[unlikely]] return; }
L_002B7E44:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B7FC0; } }
L_002B7E78:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1424u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7E8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 35u, depth + 1u); else { c.pc = 0x00284D10u; return; } if (c.pc != 0x002B7E8Cu) [[unlikely]] return; }
L_002B7E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B7FC4; } }
L_002B7E94:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7EA8u); set32(c.r[4], c.r[28].w[0] - 29236u);  if (depth < kMaxDepth) unit_0054(c, 72u, depth + 1u); else { c.pc = 0x00351530u; return; } if (c.pc != 0x002B7EA8u) [[unlikely]] return; }
L_002B7EA8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7D60u | kUnwind; return; } goto L_002B7D60; } }
L_002B7EB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 232u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7ED0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7ED0u) [[unlikely]] return; }
L_002B7ED0:
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7EE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7EE8u) [[unlikely]] return; }
L_002B7EE8:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 108u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7F1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B7F1Cu) [[unlikely]] return; }
L_002B7F1C:
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DC4u | kUnwind; return; } goto L_002B7DC4; } }
L_002B7F28:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 89u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7F34u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_001F(c, 271u, depth + 1u); else { c.pc = 0x0027E3A0u; return; } if (c.pc != 0x002B7F34u) [[unlikely]] return; }
L_002B7F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DC0u | kUnwind; return; } goto L_002B7DC0; } }
L_002B7F3C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002B7FA4; } }
L_002B7F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7F6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002B7F6Cu) [[unlikely]] return; }
L_002B7F6C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B7FC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002B7FC0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7F9Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002B7F9Cu) [[unlikely]] return; }
L_002B7F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7E8Cu | kUnwind; return; } goto L_002B7E8C; } }
L_002B7FA4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7F64u | kUnwind; return; } goto L_002B7F64; } }
L_002B7FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B7FC4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B7FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] + 1072u);
    c.budget -= 8;
    [[clang::musttail]] return unit_002E(c, 1u, depth);
}

}

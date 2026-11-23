#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0078[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    288, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 309, 0, 0,
};

void unit_0078(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E0000;
    case 2u: goto L_003E0004;
    case 3u: goto L_003E001C;
    case 4u: goto L_003E0024;
    case 5u: goto L_003E003C;
    case 6u: goto L_003E005C;
    case 7u: goto L_003E0064;
    case 8u: goto L_003E006C;
    case 9u: goto L_003E0090;
    case 10u: goto L_003E00C8;
    case 11u: goto L_003E00CC;
    case 12u: goto L_003E00D0;
    case 13u: goto L_003E00DC;
    case 14u: goto L_003E00F4;
    case 15u: goto L_003E0114;
    case 16u: goto L_003E0144;
    case 17u: goto L_003E0170;
    case 18u: goto L_003E01C4;
    case 19u: goto L_003E0204;
    case 20u: goto L_003E0254;
    case 21u: goto L_003E025C;
    case 22u: goto L_003E027C;
    case 23u: goto L_003E02A0;
    case 24u: goto L_003E02FC;
    case 25u: goto L_003E0314;
    case 26u: goto L_003E0330;
    case 27u: goto L_003E0360;
    case 28u: goto L_003E037C;
    case 29u: goto L_003E038C;
    case 30u: goto L_003E03B0;
    case 31u: goto L_003E03E0;
    case 32u: goto L_003E03FC;
    case 33u: goto L_003E040C;
    case 34u: goto L_003E0430;
    case 35u: goto L_003E047C;
    case 36u: goto L_003E04B8;
    case 37u: goto L_003E04D4;
    case 38u: goto L_003E0520;
    case 39u: goto L_003E0540;
    case 40u: goto L_003E0594;
    case 41u: goto L_003E0608;
    case 42u: goto L_003E0628;
    case 43u: goto L_003E0640;
    case 44u: goto L_003E068C;
    case 45u: goto L_003E06A4;
    case 46u: goto L_003E06C0;
    case 47u: goto L_003E06E4;
    case 48u: goto L_003E06F0;
    case 49u: goto L_003E0714;
    case 50u: goto L_003E0730;
    case 51u: goto L_003E0740;
    case 52u: goto L_003E0750;
    case 53u: goto L_003E0774;
    case 54u: goto L_003E0780;
    case 55u: goto L_003E07A4;
    case 56u: goto L_003E07B0;
    case 57u: goto L_003E07D4;
    case 58u: goto L_003E07E0;
    case 59u: goto L_003E083C;
    case 60u: goto L_003E0854;
    case 61u: goto L_003E0870;
    case 62u: goto L_003E08CC;
    case 63u: goto L_003E08E4;
    case 64u: goto L_003E0900;
    case 65u: goto L_003E095C;
    case 66u: goto L_003E0974;
    case 67u: goto L_003E0990;
    case 68u: goto L_003E09EC;
    case 69u: goto L_003E0A04;
    case 70u: goto L_003E0FF0;
    case 71u: goto L_003E1018;
    case 72u: goto L_003E1028;
    case 73u: goto L_003E105C;
    case 74u: goto L_003E10A0;
    case 75u: goto L_003E10E8;
    case 76u: goto L_003E1100;
    case 77u: goto L_003E1130;
    case 78u: goto L_003E1140;
    case 79u: goto L_003E11A8;
    case 80u: goto L_003E11C0;
    case 81u: goto L_003E11D8;
    case 82u: goto L_003E1208;
    case 83u: goto L_003E1218;
    case 84u: goto L_003E1280;
    case 85u: goto L_003E1298;
    case 86u: goto L_003E12C0;
    case 87u: goto L_003E12EC;
    case 88u: goto L_003E131C;
    case 89u: goto L_003E1328;
    case 90u: goto L_003E135C;
    case 91u: goto L_003E1380;
    case 92u: goto L_003E13A8;
    case 93u: goto L_003E13B8;
    case 94u: goto L_003E13EC;
    case 95u: goto L_003E1410;
    case 96u: goto L_003E1438;
    case 97u: goto L_003E1448;
    case 98u: goto L_003E147C;
    case 99u: goto L_003E14A0;
    case 100u: goto L_003E14C8;
    case 101u: goto L_003E14D8;
    case 102u: goto L_003E150C;
    case 103u: goto L_003E1530;
    case 104u: goto L_003E1558;
    case 105u: goto L_003E1568;
    case 106u: goto L_003E159C;
    case 107u: goto L_003E15C0;
    case 108u: goto L_003E15E8;
    case 109u: goto L_003E15F8;
    case 110u: goto L_003E162C;
    case 111u: goto L_003E1650;
    case 112u: goto L_003E1678;
    case 113u: goto L_003E1688;
    case 114u: goto L_003E16BC;
    case 115u: goto L_003E16E0;
    case 116u: goto L_003E1708;
    case 117u: goto L_003E1718;
    case 118u: goto L_003E174C;
    case 119u: goto L_003E1770;
    case 120u: goto L_003E1798;
    case 121u: goto L_003E17A8;
    case 122u: goto L_003E17DC;
    case 123u: goto L_003E1800;
    case 124u: goto L_003E1834;
    case 125u: goto L_003E1854;
    case 126u: goto L_003E185C;
    case 127u: goto L_003E1898;
    case 128u: goto L_003E19A0;
    case 129u: goto L_003E19DC;
    case 130u: goto L_003E19F0;
    case 131u: goto L_003E1A20;
    case 132u: goto L_003E1A30;
    case 133u: goto L_003E1A98;
    case 134u: goto L_003E1AB0;
    case 135u: goto L_003E1AE0;
    case 136u: goto L_003E1B08;
    case 137u: goto L_003E1B18;
    case 138u: goto L_003E1B4C;
    case 139u: goto L_003E1B5C;
    case 140u: goto L_003E1B90;
    case 141u: goto L_003E1BD0;
    case 142u: goto L_003E1C0C;
    case 143u: goto L_003E1C20;
    case 144u: goto L_003E1C50;
    case 145u: goto L_003E1C60;
    case 146u: goto L_003E1CC8;
    case 147u: goto L_003E1CE0;
    case 148u: goto L_003E1D10;
    case 149u: goto L_003E1D38;
    case 150u: goto L_003E1D48;
    case 151u: goto L_003E1D7C;
    case 152u: goto L_003E1D8C;
    case 153u: goto L_003E1DC0;
    case 154u: goto L_003E1E00;
    case 155u: goto L_003E1E3C;
    case 156u: goto L_003E1E50;
    case 157u: goto L_003E1E80;
    case 158u: goto L_003E1E90;
    case 159u: goto L_003E1EF8;
    case 160u: goto L_003E1F10;
    case 161u: goto L_003E1F40;
    case 162u: goto L_003E1F68;
    case 163u: goto L_003E1F78;
    case 164u: goto L_003E1FAC;
    case 165u: goto L_003E1FBC;
    case 166u: goto L_003E1FF0;
    case 167u: goto L_003E2030;
    case 168u: goto L_003E206C;
    case 169u: goto L_003E2080;
    case 170u: goto L_003E20B0;
    case 171u: goto L_003E20C0;
    case 172u: goto L_003E2128;
    case 173u: goto L_003E2140;
    case 174u: goto L_003E2170;
    case 175u: goto L_003E2198;
    case 176u: goto L_003E21A8;
    case 177u: goto L_003E21DC;
    case 178u: goto L_003E21EC;
    case 179u: goto L_003E2220;
    case 180u: goto L_003E2260;
    case 181u: goto L_003E229C;
    case 182u: goto L_003E22B0;
    case 183u: goto L_003E22E0;
    case 184u: goto L_003E22F0;
    case 185u: goto L_003E2358;
    case 186u: goto L_003E2370;
    case 187u: goto L_003E23A0;
    case 188u: goto L_003E23C8;
    case 189u: goto L_003E23D8;
    case 190u: goto L_003E240C;
    case 191u: goto L_003E241C;
    case 192u: goto L_003E2450;
    case 193u: goto L_003E2490;
    case 194u: goto L_003E24C0;
    case 195u: goto L_003E2528;
    case 196u: goto L_003E2540;
    case 197u: goto L_003E25C0;
    case 198u: goto L_003E2674;
    case 199u: goto L_003E2684;
    case 200u: goto L_003E26A0;
    case 201u: goto L_003E26B4;
    case 202u: goto L_003E2740;
    case 203u: goto L_003E2750;
    case 204u: goto L_003E279C;
    case 205u: goto L_003E2878;
    case 206u: goto L_003E28E8;
    case 207u: goto L_003E295C;
    case 208u: goto L_003E2978;
    case 209u: goto L_003E298C;
    case 210u: goto L_003E2A10;
    case 211u: goto L_003E2A90;
    case 212u: goto L_003E2AA0;
    case 213u: goto L_003E2AC0;
    case 214u: goto L_003E2AD0;
    case 215u: goto L_003E2B20;
    case 216u: goto L_003E2BA8;
    case 217u: goto L_003E2BB8;
    case 218u: goto L_003E2CCC;
    case 219u: goto L_003E2CFC;
    case 220u: goto L_003E2DE4;
    case 221u: goto L_003E2E10;
    case 222u: goto L_003E2E70;
    case 223u: goto L_003E2E84;
    case 224u: goto L_003E2ED8;
    case 225u: goto L_003E2EF4;
    case 226u: goto L_003E2F08;
    case 227u: goto L_003E2F5C;
    case 228u: goto L_003E2F84;
    case 229u: goto L_003E2FC4;
    case 230u: goto L_003E2FD8;
    case 231u: goto L_003E302C;
    case 232u: goto L_003E306C;
    case 233u: goto L_003E3080;
    case 234u: goto L_003E30D4;
    case 235u: goto L_003E3114;
    case 236u: goto L_003E3128;
    case 237u: goto L_003E317C;
    case 238u: goto L_003E3198;
    case 239u: goto L_003E31AC;
    case 240u: goto L_003E3200;
    case 241u: goto L_003E321C;
    case 242u: goto L_003E3230;
    case 243u: goto L_003E3284;
    case 244u: goto L_003E32B0;
    case 245u: goto L_003E32E8;
    case 246u: goto L_003E32F8;
    case 247u: goto L_003E3388;
    case 248u: goto L_003E3398;
    case 249u: goto L_003E33AC;
    case 250u: goto L_003E3420;
    case 251u: goto L_003E3490;
    case 252u: goto L_003E34A0;
    case 253u: goto L_003E34B0;
    case 254u: goto L_003E34F0;
    case 255u: goto L_003E350C;
    case 256u: goto L_003E35A0;
    case 257u: goto L_003E35C8;
    case 258u: goto L_003E35E8;
    case 259u: goto L_003E3618;
    case 260u: goto L_003E3620;
    case 261u: goto L_003E3664;
    case 262u: goto L_003E36E8;
    case 263u: goto L_003E36F8;
    case 264u: goto L_003E36FC;
    case 265u: goto L_003E374C;
    case 266u: goto L_003E37B0;
    case 267u: goto L_003E37E4;
    case 268u: goto L_003E3828;
    case 269u: goto L_003E3848;
    case 270u: goto L_003E38A8;
    case 271u: goto L_003E38B0;
    case 272u: goto L_003E38F0;
    case 273u: goto L_003E3950;
    case 274u: goto L_003E3980;
    case 275u: goto L_003E399C;
    case 276u: goto L_003E39BC;
    case 277u: goto L_003E39D4;
    case 278u: goto L_003E39FC;
    case 279u: goto L_003E3A1C;
    case 280u: goto L_003E3A78;
    case 281u: goto L_003E3AF0;
    case 282u: goto L_003E3B04;
    case 283u: goto L_003E3B58;
    case 284u: goto L_003E3B5C;
    case 285u: goto L_003E3B9C;
    case 286u: goto L_003E3BA4;
    case 287u: goto L_003E3BF0;
    case 288u: goto L_003E3C00;
    case 289u: goto L_003E3C04;
    case 290u: goto L_003E3C10;
    case 291u: goto L_003E3C6C;
    case 292u: goto L_003E3CC0;
    case 293u: goto L_003E3CE0;
    case 294u: goto L_003E3CF8;
    case 295u: goto L_003E3D18;
    case 296u: goto L_003E3D38;
    case 297u: goto L_003E3D4C;
    case 298u: goto L_003E3DA0;
    case 299u: goto L_003E3DBC;
    case 300u: goto L_003E3DD0;
    case 301u: goto L_003E3E24;
    case 302u: goto L_003E3E3C;
    case 303u: goto L_003E3E78;
    case 304u: goto L_003E3EE8;
    case 305u: goto L_003E3F18;
    case 306u: goto L_003E3F5C;
    case 307u: goto L_003E3FE0;
    case 308u: goto L_003E3FF0;
    case 309u: goto L_003E3FF4;
    default: bad_entry(c, 0x003E0000u); return;
    }
L_003E0000:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003E0004:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E0074; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E001Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E001Cu) [[unlikely]] return; }
L_003E001C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003E0078; } }
L_003E0024:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DFFF0u | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 360u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E003Cu); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003E003Cu) [[unlikely]] return; }
L_003E003C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 24u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DFFF4u | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 361u, depth); } }
L_003E005C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DFFF8u | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 362u, depth); } }
L_003E0064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E006Cu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0085(c, 165u, depth + 1u); else { c.pc = 0x00416F50u; return; } if (c.pc != 0x003E006Cu) [[unlikely]] return; }
L_003E006C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0004u | kUnwind; return; } goto L_003E0004; } }
L_003E0074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E0078:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E0134; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E00FC; } }
L_003E00C8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E00CC:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003E00D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E013C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003E00DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E014C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E00F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E00F4u) [[unlikely]] return; }
L_003E00F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003E0150; } }
L_003E00FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[18].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E00C8u | kUnwind; return; } goto L_003E00C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0114u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003E0114u) [[unlikely]] return; }
L_003E0114:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E00CCu | kUnwind; return; } goto L_003E00CC; } }
L_003E0134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E00D0u | kUnwind; return; } goto L_003E00D0; } }
L_003E013C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0144u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0085(c, 191u, depth + 1u); else { c.pc = 0x004173A0u; return; } if (c.pc != 0x003E0144u) [[unlikely]] return; }
L_003E0144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E00DCu | kUnwind; return; } goto L_003E00DC; } }
L_003E014C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E0150:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E0170:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28958u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28956u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E01C4u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003E01C4u) [[unlikely]] return; }
L_003E01C4:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 28958u));
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 28956u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003E0240; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_003E0204:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003E021C; } }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_003E0244; } }
L_003E021C:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0204u | kUnwind; return; } goto L_003E0204; } }
    c.budget -= 1;
L_003E0240:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E0244:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003E025C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0254u); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0085(c, 200u, depth + 1u); else { c.pc = 0x004174E0u; return; } if (c.pc != 0x003E0254u) [[unlikely]] return; }
L_003E0254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E025Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0085(c, 173u, depth + 1u); else { c.pc = 0x00417080u; return; } if (c.pc != 0x003E025Cu) [[unlikely]] return; }
L_003E025C:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E027C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E027Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E027Cu) [[unlikely]] return; }
L_003E027C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E02A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E0314; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 5120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003E02FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4880u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E02FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E02FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E02FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E02FCu) [[unlikely]] return; }
L_003E02FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E0314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0314u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E0314u) [[unlikely]] return; }
L_003E0314:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E0384; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003E0360:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E0394; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E037Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E037Cu) [[unlikely]] return; }
L_003E037C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003E0398; } }
L_003E0384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E038Cu); c.r[4].d[0] = ld8((c.r[18].w[0] + 8u));  if (depth < kMaxDepth) unit_0083(c, 107u, depth + 1u); else { c.pc = 0x0040D4C0u; return; } if (c.pc != 0x003E038Cu) [[unlikely]] return; }
L_003E038C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E0360u | kUnwind; return; } goto L_003E0360; } }
L_003E0394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E0398:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E03B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E0404; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003E03E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E0414; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E03FCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E03FCu) [[unlikely]] return; }
L_003E03FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003E0418; } }
L_003E0404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E040Cu); c.r[4].d[0] = ld8((c.r[18].w[0] + 8u));  if (depth < kMaxDepth) unit_0083(c, 110u, depth + 1u); else { c.pc = 0x0040D500u; return; } if (c.pc != 0x003E040Cu) [[unlikely]] return; }
L_003E040C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E03E0u | kUnwind; return; } goto L_003E03E0; } }
L_003E0414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E0418:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E0430:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E0500; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 28768u)));
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003E0500; } }
L_003E047C:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003E04D8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E04C0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E04B8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003E04B8u) [[unlikely]] return; }
L_003E04B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E04D8; } }
L_003E04C0:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E04D4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 514u, depth + 1u); else { c.pc = 0x002C21D0u; return; } if (c.pc != 0x003E04D4u) [[unlikely]] return; }
L_003E04D4:
    c.budget -= 1;
L_003E04D8:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[16].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E047Cu | kUnwind; return; } goto L_003E047C; } }
L_003E0500:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E0520; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0520u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0520u) [[unlikely]] return; }
L_003E0520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E0540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E0608; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] + 2u);  if (t) { goto L_003E059C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E0608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0594u);  if (depth < kMaxDepth) unit_001C(c, 66u, depth + 1u); else { c.pc = 0x002708C0u; return; } if (c.pc != 0x003E0594u) [[unlikely]] return; }
L_003E0594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_003E060C; } }
L_003E059C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 3u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E0608; } }
    c.r[2].d[0] = c.r[5].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E05C8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28596u), c.r[2].w[0]);  if (t) { goto L_003E05CC; } }
L_003E05C8:
    st8((c.r[28].w[0] - 28592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_003E05CC:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 3u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0608u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_001C(c, 69u, depth + 1u); else { c.pc = 0x002708F0u; return; } if (c.pc != 0x003E0608u) [[unlikely]] return; }
L_003E0608:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003E060C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E0628; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0628u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0628u) [[unlikely]] return; }
L_003E0628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E0640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E06A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4880u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E068C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E068C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E068Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E068Cu) [[unlikely]] return; }
L_003E068C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E06A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E06A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E06A4u) [[unlikely]] return; }
L_003E06A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E06C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E06E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E06E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E06E4u) [[unlikely]] return; }
L_003E06E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E06F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E071C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0714u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0714u) [[unlikely]] return; }
L_003E0714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E0724; } }
L_003E071C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003E0724:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E0730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003E0740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003E0750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E0774; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0774u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E0774u) [[unlikely]] return; }
L_003E0774:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E0780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E07A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E07A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E07A4u) [[unlikely]] return; }
L_003E07A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E07B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E07D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E07D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E07D4u) [[unlikely]] return; }
L_003E07D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E07E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E0854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 5072u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003E083C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4880u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E083C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E083C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E083Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E083Cu) [[unlikely]] return; }
L_003E083C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E0854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0854u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E0854u) [[unlikely]] return; }
L_003E0854:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E08E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 5024u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003E08CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4880u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E08CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E08CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E08CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E08CCu) [[unlikely]] return; }
L_003E08CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E08E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E08E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E08E4u) [[unlikely]] return; }
L_003E08E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E0974; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4976u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003E095C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4880u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E095C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E095C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E095Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E095Cu) [[unlikely]] return; }
L_003E095C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E0974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0974u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E0974u) [[unlikely]] return; }
L_003E0974:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E0A04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4928u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003E09EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4880u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E09EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E09EC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E09ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E09ECu) [[unlikely]] return; }
L_003E09EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E0A04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E0A04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E0A04u) [[unlikely]] return; }
L_003E0A04:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E0FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E105C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1040; } }
L_003E1018:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1028u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1028u) [[unlikely]] return; }
L_003E1028:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1018u | kUnwind; return; } goto L_003E1018; } }
    c.budget -= 1;
L_003E1040:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003E105C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E105Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E105Cu) [[unlikely]] return; }
L_003E105C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E10A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E1298; } }
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E11A8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003E1198; } }
L_003E10E8:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003E1180; } }
    c.r[19].d[0] = c.r[21].d[0] & 65535ull;
    c.budget -= 2;
L_003E1100:
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1158; } }
    c.budget -= 1;
L_003E1130:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1140u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1140u) [[unlikely]] return; }
L_003E1140:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1130u | kUnwind; return; } goto L_003E1130; } }
    c.budget -= 1;
L_003E1158:
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[2], c.r[20].w[0] + 1u);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10u));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1100u | kUnwind; return; } goto L_003E1100; } }
    c.budget -= 1;
L_003E1180:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E10E8u | kUnwind; return; } goto L_003E10E8; } }
L_003E1198:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E11A8u); set32(c.r[5], c.r[5].w[0] + 8000u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003E11A8u) [[unlikely]] return; }
L_003E11A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E1280; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003E1270; } }
L_003E11C0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003E1258; } }
    c.r[19].d[0] = c.r[21].d[0] & 65535ull;
    c.budget -= 2;
L_003E11D8:
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1230; } }
    c.budget -= 1;
L_003E1208:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1218u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1218u) [[unlikely]] return; }
L_003E1218:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1208u | kUnwind; return; } goto L_003E1208; } }
    c.budget -= 1;
L_003E1230:
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[2], c.r[20].w[0] + 1u);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E11D8u | kUnwind; return; } goto L_003E11D8; } }
    c.budget -= 1;
L_003E1258:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E11C0u | kUnwind; return; } goto L_003E11C0; } }
L_003E1270:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1280u); set32(c.r[5], c.r[5].w[0] + 9120u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003E1280u) [[unlikely]] return; }
L_003E1280:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E1298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1298u) [[unlikely]] return; }
L_003E1298:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E12C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E135C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1340; } }
L_003E12EC:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E1328; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E1320; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E1320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E131Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x003E131Cu) [[unlikely]] return; }
L_003E131C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003E1320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1328u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1328u) [[unlikely]] return; }
L_003E1328:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E12ECu | kUnwind; return; } goto L_003E12EC; } }
    c.budget -= 1;
L_003E1340:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_003E135C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E135Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E135Cu) [[unlikely]] return; }
L_003E135C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E1380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E13EC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E13D0; } }
L_003E13A8:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E13B8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E13B8u) [[unlikely]] return; }
L_003E13B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E13A8u | kUnwind; return; } goto L_003E13A8; } }
    c.budget -= 1;
L_003E13D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003E13EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E13ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E13ECu) [[unlikely]] return; }
L_003E13EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E147C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1460; } }
L_003E1438:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1448u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1448u) [[unlikely]] return; }
L_003E1448:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1438u | kUnwind; return; } goto L_003E1438; } }
    c.budget -= 1;
L_003E1460:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003E147C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E147Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E147Cu) [[unlikely]] return; }
L_003E147C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E14A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E150C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E14F0; } }
L_003E14C8:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E14D8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E14D8u) [[unlikely]] return; }
L_003E14D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E14C8u | kUnwind; return; } goto L_003E14C8; } }
    c.budget -= 1;
L_003E14F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003E150C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E150Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E150Cu) [[unlikely]] return; }
L_003E150C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E159C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1580; } }
L_003E1558:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1568u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1568u) [[unlikely]] return; }
L_003E1568:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1558u | kUnwind; return; } goto L_003E1558; } }
    c.budget -= 1;
L_003E1580:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003E159C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E159Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E159Cu) [[unlikely]] return; }
L_003E159C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E15C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E162C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1610; } }
L_003E15E8:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E15F8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E15F8u) [[unlikely]] return; }
L_003E15F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E15E8u | kUnwind; return; } goto L_003E15E8; } }
    c.budget -= 1;
L_003E1610:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003E162C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E162Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E162Cu) [[unlikely]] return; }
L_003E162C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E16BC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E16A0; } }
L_003E1678:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1688u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1688u) [[unlikely]] return; }
L_003E1688:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1678u | kUnwind; return; } goto L_003E1678; } }
    c.budget -= 1;
L_003E16A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003E16BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E16BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E16BCu) [[unlikely]] return; }
L_003E16BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E16E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E174C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1730; } }
L_003E1708:
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1718u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1718u) [[unlikely]] return; }
L_003E1718:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1708u | kUnwind; return; } goto L_003E1708; } }
    c.budget -= 1;
L_003E1730:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003E174C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E174Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E174Cu) [[unlikely]] return; }
L_003E174C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E17DC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E17C0; } }
L_003E1798:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E17A8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E17A8u) [[unlikely]] return; }
L_003E17A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1798u | kUnwind; return; } goto L_003E1798; } }
    c.budget -= 1;
L_003E17C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003E17DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E17DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E17DCu) [[unlikely]] return; }
L_003E17DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E1898; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E1880; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1878; } }
L_003E1834:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E1860; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1854u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0084(c, 532u, depth + 1u); else { c.pc = 0x00413E70u; return; } if (c.pc != 0x003E1854u) [[unlikely]] return; }
L_003E1854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E185Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E185Cu) [[unlikely]] return; }
L_003E185C:
    c.budget -= 1;
L_003E1860:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1834u | kUnwind; return; } goto L_003E1834; } }
    c.budget -= 1;
L_003E1878:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 2;
L_003E1880:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E1898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1898u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1898u) [[unlikely]] return; }
L_003E1898:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E19A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E1AB0; } }
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E1A88; } }
L_003E19DC:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E1A70; } }
    c.r[17].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 1;
L_003E19F0:
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1A48; } }
    c.budget -= 1;
L_003E1A20:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1A30u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1A30u) [[unlikely]] return; }
L_003E1A30:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1A20u | kUnwind; return; } goto L_003E1A20; } }
    c.budget -= 1;
L_003E1A48:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[18].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E19F0u | kUnwind; return; } goto L_003E19F0; } }
    c.budget -= 1;
L_003E1A70:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E19DCu | kUnwind; return; } goto L_003E19DC; } }
L_003E1A88:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1A98u); set32(c.r[5], c.r[5].w[0] + 6880u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003E1A98u) [[unlikely]] return; }
L_003E1A98:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E1AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1AB0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1AB0u) [[unlikely]] return; }
L_003E1AB0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E1AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E1B90; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1B30; } }
L_003E1B08:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B18u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1B18u) [[unlikely]] return; }
L_003E1B18:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1B08u | kUnwind; return; } goto L_003E1B08; } }
    c.budget -= 1;
L_003E1B30:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E1B78; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1B70; } }
L_003E1B4C:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B5Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1B5Cu) [[unlikely]] return; }
L_003E1B5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1B4Cu | kUnwind; return; } goto L_003E1B4C; } }
L_003E1B70:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_003E1B78:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E1B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1B90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1B90u) [[unlikely]] return; }
L_003E1B90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1BD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E1CE0; } }
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E1CB8; } }
L_003E1C0C:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E1CA0; } }
    c.r[17].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 1;
L_003E1C20:
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1C78; } }
    c.budget -= 1;
L_003E1C50:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1C60u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1C60u) [[unlikely]] return; }
L_003E1C60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1C50u | kUnwind; return; } goto L_003E1C50; } }
    c.budget -= 1;
L_003E1C78:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[18].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1C20u | kUnwind; return; } goto L_003E1C20; } }
    c.budget -= 1;
L_003E1CA0:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1C0Cu | kUnwind; return; } goto L_003E1C0C; } }
L_003E1CB8:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1CC8u); set32(c.r[5], c.r[5].w[0] + 7440u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003E1CC8u) [[unlikely]] return; }
L_003E1CC8:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E1CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1CE0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1CE0u) [[unlikely]] return; }
L_003E1CE0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E1D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E1DC0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1D60; } }
L_003E1D38:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1D48u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1D48u) [[unlikely]] return; }
L_003E1D48:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1D38u | kUnwind; return; } goto L_003E1D38; } }
    c.budget -= 1;
L_003E1D60:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E1DA8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1DA0; } }
L_003E1D7C:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1D8Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1D8Cu) [[unlikely]] return; }
L_003E1D8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1D7Cu | kUnwind; return; } goto L_003E1D7C; } }
L_003E1DA0:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_003E1DA8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E1DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1DC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1DC0u) [[unlikely]] return; }
L_003E1DC0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E1E00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E1F10; } }
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E1EE8; } }
L_003E1E3C:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E1ED0; } }
    c.r[17].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 1;
L_003E1E50:
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1EA8; } }
    c.budget -= 1;
L_003E1E80:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1E90u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1E90u) [[unlikely]] return; }
L_003E1E90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1E80u | kUnwind; return; } goto L_003E1E80; } }
    c.budget -= 1;
L_003E1EA8:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[18].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1E50u | kUnwind; return; } goto L_003E1E50; } }
    c.budget -= 1;
L_003E1ED0:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1E3Cu | kUnwind; return; } goto L_003E1E3C; } }
L_003E1EE8:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1EF8u); set32(c.r[5], c.r[5].w[0] + 8000u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003E1EF8u) [[unlikely]] return; }
L_003E1EF8:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E1F10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1F10u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1F10u) [[unlikely]] return; }
L_003E1F10:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E1F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E1FF0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1F90; } }
L_003E1F68:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1F78u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1F78u) [[unlikely]] return; }
L_003E1F78:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1F68u | kUnwind; return; } goto L_003E1F68; } }
    c.budget -= 1;
L_003E1F90:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E1FD8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E1FD0; } }
L_003E1FAC:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1FBCu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1FBCu) [[unlikely]] return; }
L_003E1FBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E1FACu | kUnwind; return; } goto L_003E1FAC; } }
L_003E1FD0:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_003E1FD8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E1FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E1FF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E1FF0u) [[unlikely]] return; }
L_003E1FF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E2030:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E2140; } }
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E2118; } }
L_003E206C:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E2100; } }
    c.r[17].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 1;
L_003E2080:
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E20D8; } }
    c.budget -= 1;
L_003E20B0:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E20C0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E20C0u) [[unlikely]] return; }
L_003E20C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E20B0u | kUnwind; return; } goto L_003E20B0; } }
    c.budget -= 1;
L_003E20D8:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[18].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2080u | kUnwind; return; } goto L_003E2080; } }
    c.budget -= 1;
L_003E2100:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E206Cu | kUnwind; return; } goto L_003E206C; } }
L_003E2118:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2128u); set32(c.r[5], c.r[5].w[0] + 8560u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003E2128u) [[unlikely]] return; }
L_003E2128:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E2140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2140u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E2140u) [[unlikely]] return; }
L_003E2140:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E2170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E2220; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E21C0; } }
L_003E2198:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E21A8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E21A8u) [[unlikely]] return; }
L_003E21A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2198u | kUnwind; return; } goto L_003E2198; } }
    c.budget -= 1;
L_003E21C0:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E2208; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E2200; } }
L_003E21DC:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E21ECu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E21ECu) [[unlikely]] return; }
L_003E21EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E21DCu | kUnwind; return; } goto L_003E21DC; } }
L_003E2200:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_003E2208:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E2220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2220u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E2220u) [[unlikely]] return; }
L_003E2220:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E2260:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E2370; } }
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E2348; } }
L_003E229C:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E2330; } }
    c.r[17].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 1;
L_003E22B0:
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E2308; } }
    c.budget -= 1;
L_003E22E0:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E22F0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E22F0u) [[unlikely]] return; }
L_003E22F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E22E0u | kUnwind; return; } goto L_003E22E0; } }
    c.budget -= 1;
L_003E2308:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[18].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[21].w[0] + 2u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E22B0u | kUnwind; return; } goto L_003E22B0; } }
    c.budget -= 1;
L_003E2330:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E229Cu | kUnwind; return; } goto L_003E229C; } }
L_003E2348:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2358u); set32(c.r[5], c.r[5].w[0] + 9120u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003E2358u) [[unlikely]] return; }
L_003E2358:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E2370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2370u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E2370u) [[unlikely]] return; }
L_003E2370:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E23A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E2450; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E23F0; } }
L_003E23C8:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E23D8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E23D8u) [[unlikely]] return; }
L_003E23D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E23C8u | kUnwind; return; } goto L_003E23C8; } }
    c.budget -= 1;
L_003E23F0:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E2438; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E2430; } }
L_003E240C:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E241Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E241Cu) [[unlikely]] return; }
L_003E241C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E240Cu | kUnwind; return; } goto L_003E240C; } }
L_003E2430:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_003E2438:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E2450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2450u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E2450u) [[unlikely]] return; }
L_003E2450:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E2490:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.f[0]);  c.pc = t; return; }
L_003E24C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003E2718; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 176u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E2528; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2528u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2528u) [[unlikely]] return; }
L_003E2528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[13] = ld32((c.r[2].w[0] - 20412u));
    c.f[12] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2540u); set32(c.r[4], c.r[4].w[0] - 27632u);  if (depth < kMaxDepth) unit_0075(c, 82u, depth + 1u); else { c.pc = 0x003D5640u; return; } if (c.pc != 0x003E2540u) [[unlikely]] return; }
L_003E2540:
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E2568; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_003E2568:
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[6] = ld32((c.r[18].w[0] + 8u));
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[21] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 136u), c.f[5]);
    st32((c.r[29].w[0] + 132u), c.f[3]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E2708; } }
L_003E25C0:
    c.f[4] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2674u); c.f[12] = ld32((c.r[19].w[0] + 16u));  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E2674u) [[unlikely]] return; }
L_003E2674:
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2684u); c.f[12] = ld32((c.r[19].w[0] + 16u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E2684u) [[unlikely]] return; }
L_003E2684:
    set32(c.r[20], c.r[29].w[0] + 152u);
    st32((c.r[20].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E26A0u); set32(c.r[5], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E26A0u) [[unlikely]] return; }
L_003E26A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E26B4u); set32(c.r[5], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E26B4u) [[unlikely]] return; }
L_003E26B4:
    c.f[5] = ld32((c.r[20].w[0]));
    c.f[6] = ld32((c.r[29].w[0] + 144u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[21]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[21]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[20].w[0]), c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st32((c.r[29].w[0] + 144u), c.f[6]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[4]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_003E2718; } }
L_003E2708:
    st32((c.r[19].w[0] + 4u), c.f[1]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E25C0u | kUnwind; return; } goto L_003E25C0; } }
L_003E2718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E2740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E2750:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003E2A68; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 57u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E27C8; } }
L_003E279C:
    c.f[8] = ld32((c.r[19].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E27DC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003E2A68; } }
L_003E27C8:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E279Cu | kUnwind; return; } goto L_003E279C; } }
L_003E27DC:
    c.f[7] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.f[6] = ld32((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[4] = 0u;
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[21] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[5], c.f[3]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[8]);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[3]);
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[19].w[0] + 12u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 39;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 136u), c.f[6]);  if (t) { goto L_003E2A5C; } }
L_003E2878:
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E28E8u); c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[3]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E28E8u) [[unlikely]] return; }
L_003E28E8:
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E295Cu); c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[3]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E295Cu) [[unlikely]] return; }
L_003E295C:
    set32(c.r[20], c.r[29].w[0] + 152u);
    st32((c.r[20].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2978u); set32(c.r[5], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2978u) [[unlikely]] return; }
L_003E2978:
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E298Cu); set32(c.r[5], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E298Cu) [[unlikely]] return; }
L_003E298C:
    c.f[5] = ld32((c.r[20].w[0]));
    c.f[6] = ld32((c.r[29].w[0] + 144u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[21]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[21]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[20].w[0]), c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st32((c.r[29].w[0] + 144u), c.f[6]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[4]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 57u));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E2A68; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E2A68; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2A10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2A10u) [[unlikely]] return; }
L_003E2A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E2A68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 3184u);
    c.f[4] = ld32((c.r[28].w[0] - 31644u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 56u), c.f[4]);
    st32((c.r[4].w[0] + 16u), c.f[3]);
    st32((c.r[4].w[0] + 20u), c.f[2]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    st8((c.r[19].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003E2A6C; } }
L_003E2A5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2878u | kUnwind; return; } goto L_003E2878; } }
L_003E2A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003E2A6C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E2A90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003E2AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 56u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E2AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2AC0u);  if (depth < kMaxDepth) unit_0078(c, 194u, depth + 1u); else { c.pc = 0x003E24C0u; return; } if (c.pc != 0x003E2AC0u) [[unlikely]] return; }
L_003E2AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003E2AD4; } }
L_003E2AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2AD0u);  if (depth < kMaxDepth) unit_0078(c, 203u, depth + 1u); else { c.pc = 0x003E2750u; return; } if (c.pc != 0x003E2AD0u) [[unlikely]] return; }
L_003E2AD0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003E2AD4:
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E2B0C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E2B0C; } }
    st32((c.r[16].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_003E2B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E2B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[7] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[5] = ld32((c.r[28].w[0] - 29672u));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[6] = ld32((c.r[7].w[0] + 8u));
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[7], c.f[5]);
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 12u), 0u);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.f[4] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[7]);
    st32((c.r[4].w[0] + 40u), c.f[5]);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[13] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2BA8u); st32((c.r[4].w[0] + 44u), c.f[2]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x003E2BA8u) [[unlikely]] return; }
L_003E2BA8:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[13] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2BB8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x003E2BB8u) [[unlikely]] return; }
L_003E2BB8:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[0] = 0u;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 31;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 8u), c.f[1]);  if (t) { goto L_003E2C40; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E2C48; } }
L_003E2C40:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003E2C48:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.f[20]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 56u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E2CD4; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E2CC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 3184u);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F350000u);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] | 1267ull;
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.f[3]);
    st32((c.r[4].w[0] + 20u), c.f[2]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.budget -= 15;
L_003E2CC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 27632u), c.r[4].w[0]);
    c.budget -= 3;
L_003E2CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003E2DFC; } }
L_003E2CD4:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22901u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E2D40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22899u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E2DC8; } }
L_003E2CFC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E2D40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 3184u);
    c.f[4] = ld32((c.r[28].w[0] - 31644u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 56u), c.f[4]);
    st32((c.r[4].w[0] + 16u), c.f[3]);
    st32((c.r[4].w[0] + 20u), c.f[2]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.budget -= 14;
L_003E2D40:
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = ld32((c.r[28].w[0] - 29672u));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 4u), c.f[3]);  if (t) { goto L_003E2DF4; } }
    c.f[2] = ld32((c.r[28].w[0] - 29672u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);  if (t) { goto L_003E2DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_003E2DC0; } }
L_003E2DA0:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E2DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_003E2DBC; } }
L_003E2DB4:
    c.f[0] = c.f[3];
    c.f[1] = c.f[0];
    c.budget -= 2;
L_003E2DBC:
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_003E2DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2CCCu | kUnwind; return; } goto L_003E2CCC; } }
L_003E2DC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2DE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2DE4u) [[unlikely]] return; }
L_003E2DE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2CFCu | kUnwind; return; } goto L_003E2CFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2CFCu | kUnwind; return; } goto L_003E2CFC; } }
L_003E2DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2CCCu | kUnwind; return; } goto L_003E2CCC; } }
L_003E2DFC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E2E10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 15u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003E2F64; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 48u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003E2F8C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E2EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2E70u); c.f[21] = ld32((c.r[18].w[0] + 80u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E2E70u) [[unlikely]] return; }
L_003E2E70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2E84u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E2E84u) [[unlikely]] return; }
L_003E2E84:
    c.f[2] = ld32((c.r[18].w[0] + 88u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[18].w[0] + 80u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2ED8u); set32(c.r[5], c.r[18].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2ED8u) [[unlikely]] return; }
L_003E2ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E2F5C; } }
L_003E2EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2EF4u); c.f[21] = ld32((c.r[18].w[0] + 64u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E2EF4u) [[unlikely]] return; }
L_003E2EF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2F08u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E2F08u) [[unlikely]] return; }
L_003E2F08:
    c.f[2] = ld32((c.r[18].w[0] + 72u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[18].w[0] + 64u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[18].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2F5Cu); set32(c.r[5], c.r[18].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2F5Cu) [[unlikely]] return; }
L_003E2F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003E3290; } }
L_003E2F64:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2F84u); set32(c.r[5], c.r[18].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E2F84u) [[unlikely]] return; }
L_003E2F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2F5Cu | kUnwind; return; } goto L_003E2F5C; } }
L_003E2F8C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 49u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E302C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E2FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 49u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003E302C; } }
L_003E2FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2FC4u); c.f[21] = ld32((c.r[18].w[0] + 80u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E2FC4u) [[unlikely]] return; }
L_003E2FC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E2FD8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E2FD8u) [[unlikely]] return; }
L_003E2FD8:
    c.f[2] = ld32((c.r[18].w[0] + 88u));
    set32(c.r[5], c.r[18].w[0] + 80u);
    c.f[3] = ld32((c.r[18].w[0] + 80u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E302Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E302Cu) [[unlikely]] return; }
L_003E302C:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 49u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E30D4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E3058; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003E30D4; } }
L_003E3058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E306Cu); c.f[21] = ld32((c.r[18].w[0] + 64u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E306Cu) [[unlikely]] return; }
L_003E306C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3080u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E3080u) [[unlikely]] return; }
L_003E3080:
    c.f[2] = ld32((c.r[18].w[0] + 72u));
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.f[3] = ld32((c.r[18].w[0] + 64u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[18].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E30D4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E30D4u) [[unlikely]] return; }
L_003E30D4:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 49u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E328C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003E3208; } }
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E3184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3114u); c.f[21] = ld32((c.r[18].w[0] + 64u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E3114u) [[unlikely]] return; }
L_003E3114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3128u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E3128u) [[unlikely]] return; }
L_003E3128:
    c.f[2] = ld32((c.r[18].w[0] + 72u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[18].w[0] + 64u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[18].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E317Cu); set32(c.r[5], c.r[18].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E317Cu) [[unlikely]] return; }
L_003E317C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2F5Cu | kUnwind; return; } goto L_003E2F5C; } }
L_003E3184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3198u); c.f[21] = ld32((c.r[18].w[0] + 80u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E3198u) [[unlikely]] return; }
L_003E3198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E31ACu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E31ACu) [[unlikely]] return; }
L_003E31AC:
    c.f[2] = ld32((c.r[18].w[0] + 88u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[18].w[0] + 80u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3200u); set32(c.r[5], c.r[18].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3200u) [[unlikely]] return; }
L_003E3200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2F5Cu | kUnwind; return; } goto L_003E2F5C; } }
L_003E3208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E321Cu); c.f[21] = ld32((c.r[18].w[0] + 80u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E321Cu) [[unlikely]] return; }
L_003E321C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3230u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E3230u) [[unlikely]] return; }
L_003E3230:
    c.f[2] = ld32((c.r[18].w[0] + 88u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[18].w[0] + 80u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3284u); set32(c.r[5], c.r[18].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3284u) [[unlikely]] return; }
L_003E3284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E2F5Cu | kUnwind; return; } goto L_003E2F5C; } }
L_003E328C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E3290:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E32B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E32E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E32E8u) [[unlikely]] return; }
L_003E32E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E3300; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003E32F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003E347C; } }
L_003E3300:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.f[3] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[2] = c.r[2].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    set32(c.r[2], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3388u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E3388u) [[unlikely]] return; }
L_003E3388:
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3398u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E3398u) [[unlikely]] return; }
L_003E3398:
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E33ACu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00471D00u; return; } if (c.pc != 0x003E33ACu) [[unlikely]] return; }
L_003E33AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E33E8; } }
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF350000u);
    c.r[2].d[0] = c.r[2].d[0] | 1267ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E33DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E3418; } }
L_003E33DC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003E3418; } }
L_003E33E8:
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF350000u);
    c.r[2].d[0] = c.r[2].d[0] | 1267ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E3414; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003E3418; } }
L_003E3414:
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003E3418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3420u); c.f[12] = ld32((c.r[29].w[0] + 76u));  if (depth < kMaxDepth) unit_000B(c, 76u, depth + 1u); else { c.pc = 0x0022DAB8u; return; } if (c.pc != 0x003E3420u) [[unlikely]] return; }
L_003E3420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.f[1] = c.f[0] & fp::kAbs;
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E3460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E3474; } }
L_003E3460:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003E3474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003E3474; } }
L_003E3474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E32F8u | kUnwind; return; } goto L_003E32F8; } }
L_003E347C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E3490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_003E34A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_003E34B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E34F0u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E34F0u) [[unlikely]] return; }
L_003E34F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E35D0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E350Cu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_007A(c, 312u, depth + 1u); else { c.pc = 0x003EB4E0u; return; } if (c.pc != 0x003E350Cu) [[unlikely]] return; }
L_003E350C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E38A8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 128u);  if (t) { goto L_003E37B8; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E37B8; } }
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E37C0; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E37C0; } }
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E37C8; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E37C8; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E35A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E37D0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E320000u);
    c.r[2].d[0] = c.r[2].d[0] | 47298ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E35C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E35C8u) [[unlikely]] return; }
L_003E35C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E38A8; } }
L_003E35D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E35E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E35E8u) [[unlikely]] return; }
L_003E35E8:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3618u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 312u, depth + 1u); else { c.pc = 0x003EB4E0u; return; } if (c.pc != 0x003E3618u) [[unlikely]] return; }
L_003E3618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3628; } }
L_003E3620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003E38CC; } }
L_003E3628:
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], 0u + 3u);
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 60u), 0u);
    st32((c.r[19].w[0] + 112u), 0u);
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3664u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3664u) [[unlikely]] return; }
L_003E3664:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = 0u;
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[6] = ld32((c.r[3].w[0] + 20u));
    c.f[4] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[19].w[0] + 100u), c.f[5]);
    st32((c.r[19].w[0] + 104u), c.f[3]);
    st32((c.r[19].w[0] + 108u), c.f[20]);
    c.f[0] = ld32((c.r[19].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E3758; } }
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E3758; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[20] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E36E8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E36E8u) [[unlikely]] return; }
L_003E36E8:
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E36F8u); st32((c.r[19].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E36F8u) [[unlikely]] return; }
L_003E36F8:
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.budget -= 1;
L_003E36FC:
    c.f[0] = ld32((c.r[19].w[0] + 96u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 3u);
    st32((c.r[19].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    st32((c.r[19].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    st32((c.r[19].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 108u));
    st32((c.r[19].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 84u));
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 88u));
    st32((c.r[19].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 92u));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[19].w[0] + 76u), c.f[0]);  if (t) { goto L_003E37A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E330000u);
    c.budget -= 1;
L_003E374C:
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 128u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3620u | kUnwind; return; } goto L_003E3620; } }
L_003E3758:
    st32((c.r[19].w[0] + 100u), 0u);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[19].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 104u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E36FCu | kUnwind; return; } goto L_003E36FC; } }
L_003E37A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E37B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 244u, depth + 1u); else { c.pc = 0x003E32B0u; return; } if (c.pc != 0x003E37B0u) [[unlikely]] return; }
L_003E37B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3E330000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E374Cu | kUnwind; return; } goto L_003E374C; } }
L_003E37B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E35A0u | kUnwind; return; } goto L_003E35A0; } }
L_003E37C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E35A0u | kUnwind; return; } goto L_003E35A0; } }
L_003E37C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E35A0u | kUnwind; return; } goto L_003E35A0; } }
L_003E37D0:
    set32(c.r[4], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E37E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E37E4u) [[unlikely]] return; }
L_003E37E4:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[12] = c.r[3].w[0];
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3828u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3828u) [[unlikely]] return; }
L_003E3828:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3848u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_007A(c, 312u, depth + 1u); else { c.pc = 0x003EB4E0u; return; } if (c.pc != 0x003E3848u) [[unlikely]] return; }
L_003E3848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E38A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[19].w[0] + 128u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[19].w[0] + 128u), c.f[0]);  if (t) { goto L_003E3884; } }
    c.f[1] = ld32((c.r[19].w[0] + 128u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E38A8; } }
L_003E3884:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E320000u);
    c.r[2].d[0] = c.r[2].d[0] | 47298ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E38A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E38A8u) [[unlikely]] return; }
L_003E38A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003E38B8; } }
L_003E38B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E38C8; } }
L_003E38B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 128u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E38B0u | kUnwind; return; } goto L_003E38B0; } }
L_003E38C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003E38CC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003E38F0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    c.f[21] = ld32((c.r[29].w[0] + 320u));
    c.f[22] = ld32((c.r[29].w[0] + 324u));
    c.f[23] = ld32((c.r[29].w[0] + 328u));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3950u); c.r[21].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3950u) [[unlikely]] return; }
L_003E3950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E39DC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E3A24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3980u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3980u) [[unlikely]] return; }
L_003E3980:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E399Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E399Cu) [[unlikely]] return; }
L_003E399C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E3ED0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E39BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E39BCu) [[unlikely]] return; }
L_003E39BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 5u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E39D4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 253u, depth + 1u); else { c.pc = 0x003E34B0u; return; } if (c.pc != 0x003E39D4u) [[unlikely]] return; }
L_003E39D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { [[clang::musttail]] return unit_0079(c, 6u, depth); } }
L_003E39DC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E39FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E39FCu) [[unlikely]] return; }
L_003E39FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 5u, depth); } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3A1Cu) [[unlikely]] return; }
L_003E3A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E39D4u | kUnwind; return; } goto L_003E39D4; } }
L_003E3A24:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[19], c.r[29].w[0] + 292u);
    set32(c.r[18], c.r[29].w[0] + 296u);
    set32(c.r[17], c.r[29].w[0] + 300u);
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3A78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3A78u) [[unlikely]] return; }
L_003E3A78:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E3CC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3E2C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E3D24; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 49u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E3D24; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003E3DA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E3DA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3AF0u); c.f[24] = ld32((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E3AF0u) [[unlikely]] return; }
L_003E3AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3B04u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E3B04u) [[unlikely]] return; }
L_003E3B04:
    c.f[2] = ld32((c.r[16].w[0] + 88u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[3] = ld32((c.r[16].w[0] + 80u));
    set32(c.r[6], c.r[29].w[0] + 288u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[1]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3B58u); set32(c.r[7], c.r[29].w[0] + 240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3B58u) [[unlikely]] return; }
L_003E3B58:
    c.f[3] = ld32((c.r[29].w[0] + 240u));
    c.budget -= 1;
L_003E3B5C:
    set32(c.r[19], c.r[29].w[0] + 180u);
    c.f[2] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[18], c.r[29].w[0] + 184u);
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[17], c.r[29].w[0] + 188u);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[7], c.r[29].w[0] + 192u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3B9Cu); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 46u, depth + 1u); else { c.pc = 0x003D4E50u; return; } if (c.pc != 0x003E3B9Cu) [[unlikely]] return; }
L_003E3B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E3E44; } }
L_003E3BA4:
    c.f[2] = ld32((c.r[29].w[0] + 296u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40100000u);
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[6] = ld32((c.r[29].w[0] + 288u));
    c.f[5] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 144u), c.f[5]);
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 148u), c.f[3]);  if (t) { goto L_003E3E68; } }
L_003E3BF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 4;
L_003E3C00:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_003E3C04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E3E88; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E3C10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003E3C74; } }
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    set32(c.r[7], c.r[29].w[0] + 288u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[21]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3C6Cu); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3C6Cu) [[unlikely]] return; }
L_003E3C6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E39D4u | kUnwind; return; } goto L_003E39D4; } }
L_003E3C74:
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    set32(c.r[7], c.r[29].w[0] + 288u);
    set32(c.r[8], 0u + 1u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[21]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3CC0u); c.r[9].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3CC0u) [[unlikely]] return; }
L_003E3CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E39D4u | kUnwind; return; } goto L_003E39D4; } }
L_003E3CC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3CE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3CE0u) [[unlikely]] return; }
L_003E3CE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3CF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3CF8u) [[unlikely]] return; }
L_003E3CF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3D18u); set32(c.r[7], c.r[29].w[0] + 240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3D18u) [[unlikely]] return; }
L_003E3D18:
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3C04u | kUnwind; return; } goto L_003E3C04; } }
L_003E3D24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3D38u); c.f[24] = ld32((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E3D38u) [[unlikely]] return; }
L_003E3D38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3D4Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E3D4Cu) [[unlikely]] return; }
L_003E3D4C:
    c.f[2] = ld32((c.r[16].w[0] + 88u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.f[3] = ld32((c.r[16].w[0] + 80u));
    set32(c.r[6], c.r[29].w[0] + 288u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[1]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3DA0u); set32(c.r[7], c.r[29].w[0] + 240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3DA0u) [[unlikely]] return; }
L_003E3DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[29].w[0] + 240u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3B5Cu | kUnwind; return; } goto L_003E3B5C; } }
L_003E3DA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3DBCu); c.f[24] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E3DBCu) [[unlikely]] return; }
L_003E3DBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3DD0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E3DD0u) [[unlikely]] return; }
L_003E3DD0:
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[6], c.r[29].w[0] + 288u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[1]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E24u); set32(c.r[7], c.r[29].w[0] + 240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3E24u) [[unlikely]] return; }
L_003E3E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3B58u | kUnwind; return; } goto L_003E3B58; } }
L_003E3E2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E3Cu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0078(c, 221u, depth + 1u); else { c.pc = 0x003E2E10u; return; } if (c.pc != 0x003E3E3Cu) [[unlikely]] return; }
L_003E3E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3B58u | kUnwind; return; } goto L_003E3B58; } }
L_003E3E44:
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3BA4u | kUnwind; return; } goto L_003E3BA4; } }
L_003E3E68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3E78u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_007A(c, 312u, depth + 1u); else { c.pc = 0x003EB4E0u; return; } if (c.pc != 0x003E3E78u) [[unlikely]] return; }
L_003E3E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3BF0u | kUnwind; return; } goto L_003E3BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3C00u | kUnwind; return; } goto L_003E3C00; } }
L_003E3E88:
    c.f[5] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[3], 0u + 1u);
    c.f[4] = ld32((c.r[29].w[0] + 288u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[3] = ld32((c.r[29].w[0] + 244u));
    c.f[2] = ld32((c.r[29].w[0] + 292u));
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[22] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.f[23] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E3C10u | kUnwind; return; } goto L_003E3C10; } }
L_003E3ED0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3EE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3EE8u) [[unlikely]] return; }
L_003E3EE8:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F18u); st32((c.r[29].w[0] + 236u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 312u, depth + 1u); else { c.pc = 0x003EB4E0u; return; } if (c.pc != 0x003E3F18u) [[unlikely]] return; }
L_003E3F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0079(c, 5u, depth); } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], 0u + 3u);
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3F5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E3F5Cu) [[unlikely]] return; }
L_003E3F5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = 0u;
    set32(c.r[3], ld32((c.r[3].w[0] + 92u)));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[6] = ld32((c.r[3].w[0] + 20u));
    c.f[4] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[16].w[0] + 100u), c.f[5]);
    st32((c.r[16].w[0] + 104u), c.f[3]);
    st32((c.r[16].w[0] + 108u), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0079(c, 3u, depth); } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0079(c, 3u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[20] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3FE0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E3FE0u) [[unlikely]] return; }
L_003E3FE0:
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E3FF0u); st32((c.r[16].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E3FF0u) [[unlikely]] return; }
L_003E3FF0:
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 1;
L_003E3FF4:
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0079(c, 1u, depth);
}

}

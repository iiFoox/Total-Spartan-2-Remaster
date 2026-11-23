#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BE[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 70, 71, 0, 72, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 81, 0, 82, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0,
};

void unit_00BE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004F8000;
    case 2u: goto L_004F8038;
    case 3u: goto L_004F804C;
    case 4u: goto L_004F80A8;
    case 5u: goto L_004F80B0;
    case 6u: goto L_004F80D4;
    case 7u: goto L_004F8198;
    case 8u: goto L_004F81A4;
    case 9u: goto L_004F81A8;
    case 10u: goto L_004F81D0;
    case 11u: goto L_004F823C;
    case 12u: goto L_004F8258;
    case 13u: goto L_004F8298;
    case 14u: goto L_004F82A0;
    case 15u: goto L_004F82E8;
    case 16u: goto L_004F82F4;
    case 17u: goto L_004F830C;
    case 18u: goto L_004F832C;
    case 19u: goto L_004F83A4;
    case 20u: goto L_004F83C0;
    case 21u: goto L_004F83E0;
    case 22u: goto L_004F8438;
    case 23u: goto L_004F8448;
    case 24u: goto L_004F8458;
    case 25u: goto L_004F8460;
    case 26u: goto L_004F8520;
    case 27u: goto L_004F8538;
    case 28u: goto L_004F8564;
    case 29u: goto L_004F856C;
    case 30u: goto L_004F8574;
    case 31u: goto L_004F8580;
    case 32u: goto L_004F859C;
    case 33u: goto L_004F8628;
    case 34u: goto L_004F8630;
    case 35u: goto L_004F8680;
    case 36u: goto L_004F86E4;
    case 37u: goto L_004F86F0;
    case 38u: goto L_004F8724;
    case 39u: goto L_004F8744;
    case 40u: goto L_004F877C;
    case 41u: goto L_004F87B4;
    case 42u: goto L_004F87C4;
    case 43u: goto L_004F8868;
    case 44u: goto L_004F8888;
    case 45u: goto L_004F88B8;
    case 46u: goto L_004F88C4;
    case 47u: goto L_004F8900;
    case 48u: goto L_004F8974;
    case 49u: goto L_004F89D8;
    case 50u: goto L_004F8AC8;
    case 51u: goto L_004F8AD0;
    case 52u: goto L_004F8AF0;
    case 53u: goto L_004F8B60;
    case 54u: goto L_004F8B78;
    case 55u: goto L_004F8C1C;
    case 56u: goto L_004F8C5C;
    case 57u: goto L_004F8C70;
    case 58u: goto L_004F8C88;
    case 59u: goto L_004F8C9C;
    case 60u: goto L_004F8CB4;
    case 61u: goto L_004F8CC8;
    case 62u: goto L_004F8CE0;
    case 63u: goto L_004F8D10;
    case 64u: goto L_004F8D40;
    case 65u: goto L_004F8D54;
    case 66u: goto L_004F8DE4;
    case 67u: goto L_004F8DEC;
    case 68u: goto L_004F8E20;
    case 69u: goto L_004F8E80;
    case 70u: goto L_004F8E90;
    case 71u: goto L_004F8E94;
    case 72u: goto L_004F8E9C;
    case 73u: goto L_004F8EA0;
    case 74u: goto L_004F8EB8;
    case 75u: goto L_004F8F2C;
    case 76u: goto L_004F8F90;
    case 77u: goto L_004F8FF4;
    case 78u: goto L_004F90C8;
    case 79u: goto L_004F9128;
    case 80u: goto L_004F9138;
    case 81u: goto L_004F913C;
    case 82u: goto L_004F9144;
    case 83u: goto L_004F9148;
    case 84u: goto L_004F9160;
    case 85u: goto L_004F91D4;
    case 86u: goto L_004F9238;
    case 87u: goto L_004F92B8;
    case 88u: goto L_004F92C8;
    case 89u: goto L_004F92EC;
    case 90u: goto L_004F9304;
    case 91u: goto L_004F9338;
    case 92u: goto L_004F9348;
    case 93u: goto L_004F936C;
    case 94u: goto L_004F93A0;
    case 95u: goto L_004F93CC;
    case 96u: goto L_004F93E0;
    case 97u: goto L_004F9414;
    case 98u: goto L_004F942C;
    case 99u: goto L_004F9450;
    case 100u: goto L_004F9494;
    case 101u: goto L_004F94AC;
    case 102u: goto L_004F94D0;
    case 103u: goto L_004F9508;
    case 104u: goto L_004F9540;
    case 105u: goto L_004F9578;
    case 106u: goto L_004F9590;
    case 107u: goto L_004F95B0;
    case 108u: goto L_004F9610;
    case 109u: goto L_004F9630;
    case 110u: goto L_004F9638;
    case 111u: goto L_004F967C;
    case 112u: goto L_004F9694;
    case 113u: goto L_004F9A70;
    case 114u: goto L_004F9B38;
    case 115u: goto L_004F9C20;
    case 116u: goto L_004F9CD4;
    case 117u: goto L_004F9D70;
    case 118u: goto L_004F9E2C;
    case 119u: goto L_004F9E50;
    case 120u: goto L_004F9E70;
    case 121u: goto L_004F9EA0;
    case 122u: goto L_004F9EC0;
    case 123u: goto L_004F9F7C;
    case 124u: goto L_004F9FA0;
    case 125u: goto L_004F9FC0;
    case 126u: goto L_004FA07C;
    case 127u: goto L_004FA0A0;
    case 128u: goto L_004FA0C0;
    case 129u: goto L_004FA114;
    case 130u: goto L_004FA12C;
    case 131u: goto L_004FA1A8;
    case 132u: goto L_004FA1C0;
    case 133u: goto L_004FA1D0;
    case 134u: goto L_004FA208;
    case 135u: goto L_004FA214;
    case 136u: goto L_004FA230;
    case 137u: goto L_004FA238;
    case 138u: goto L_004FA298;
    case 139u: goto L_004FA2E0;
    case 140u: goto L_004FA310;
    case 141u: goto L_004FA334;
    case 142u: goto L_004FA370;
    case 143u: goto L_004FA398;
    case 144u: goto L_004FA3F0;
    case 145u: goto L_004FA410;
    case 146u: goto L_004FA438;
    case 147u: goto L_004FA450;
    case 148u: goto L_004FA45C;
    case 149u: goto L_004FA478;
    case 150u: goto L_004FA4A8;
    case 151u: goto L_004FA4D8;
    case 152u: goto L_004FA500;
    case 153u: goto L_004FA530;
    case 154u: goto L_004FA550;
    case 155u: goto L_004FA598;
    case 156u: goto L_004FA5B8;
    case 157u: goto L_004FA664;
    case 158u: goto L_004FA670;
    case 159u: goto L_004FA6A0;
    case 160u: goto L_004FA6AC;
    case 161u: goto L_004FA6C0;
    case 162u: goto L_004FA6CC;
    case 163u: goto L_004FA6DC;
    case 164u: goto L_004FA700;
    case 165u: goto L_004FA740;
    case 166u: goto L_004FA790;
    case 167u: goto L_004FA7B0;
    case 168u: goto L_004FA7C0;
    case 169u: goto L_004FA7E8;
    case 170u: goto L_004FA808;
    case 171u: goto L_004FA828;
    case 172u: goto L_004FA844;
    case 173u: goto L_004FA870;
    case 174u: goto L_004FA880;
    case 175u: goto L_004FA8B8;
    case 176u: goto L_004FA8C4;
    case 177u: goto L_004FA8D4;
    case 178u: goto L_004FA954;
    case 179u: goto L_004FA980;
    case 180u: goto L_004FAA50;
    case 181u: goto L_004FAAB0;
    case 182u: goto L_004FAAF8;
    case 183u: goto L_004FAB20;
    case 184u: goto L_004FAB60;
    case 185u: goto L_004FAB78;
    case 186u: goto L_004FAC6C;
    case 187u: goto L_004FAC90;
    case 188u: goto L_004FAC98;
    case 189u: goto L_004FACF8;
    case 190u: goto L_004FAD00;
    case 191u: goto L_004FAD50;
    case 192u: goto L_004FAD90;
    case 193u: goto L_004FADC8;
    case 194u: goto L_004FADD4;
    case 195u: goto L_004FADE8;
    case 196u: goto L_004FADF4;
    case 197u: goto L_004FAE10;
    case 198u: goto L_004FAE60;
    case 199u: goto L_004FAE80;
    case 200u: goto L_004FAE90;
    case 201u: goto L_004FAEB0;
    case 202u: goto L_004FAEC0;
    case 203u: goto L_004FAEF0;
    case 204u: goto L_004FAF10;
    case 205u: goto L_004FAF3C;
    case 206u: goto L_004FAF48;
    case 207u: goto L_004FAF60;
    case 208u: goto L_004FAF68;
    case 209u: goto L_004FAF94;
    case 210u: goto L_004FAFC0;
    case 211u: goto L_004FAFF0;
    case 212u: goto L_004FB008;
    case 213u: goto L_004FB020;
    case 214u: goto L_004FB030;
    case 215u: goto L_004FB048;
    case 216u: goto L_004FB050;
    case 217u: goto L_004FB07C;
    case 218u: goto L_004FB0B0;
    case 219u: goto L_004FB150;
    case 220u: goto L_004FB158;
    case 221u: goto L_004FB184;
    case 222u: goto L_004FB1B0;
    case 223u: goto L_004FB1CC;
    case 224u: goto L_004FB22C;
    case 225u: goto L_004FB2AC;
    case 226u: goto L_004FB2EC;
    case 227u: goto L_004FB2F8;
    case 228u: goto L_004FB340;
    case 229u: goto L_004FB360;
    case 230u: goto L_004FB430;
    case 231u: goto L_004FB67C;
    case 232u: goto L_004FB6C4;
    case 233u: goto L_004FB90C;
    case 234u: goto L_004FB990;
    case 235u: goto L_004FB9C4;
    case 236u: goto L_004FB9DC;
    case 237u: goto L_004FB9F0;
    case 238u: goto L_004FBB10;
    case 239u: goto L_004FBB40;
    case 240u: goto L_004FBB58;
    case 241u: goto L_004FBB70;
    case 242u: goto L_004FBB80;
    case 243u: goto L_004FBB90;
    case 244u: goto L_004FBBA0;
    case 245u: goto L_004FBBB0;
    case 246u: goto L_004FBBC0;
    case 247u: goto L_004FBBE0;
    case 248u: goto L_004FBBF0;
    case 249u: goto L_004FBC00;
    case 250u: goto L_004FBC10;
    case 251u: goto L_004FBC20;
    case 252u: goto L_004FBC30;
    case 253u: goto L_004FBC40;
    case 254u: goto L_004FBC50;
    case 255u: goto L_004FBC60;
    case 256u: goto L_004FBC7C;
    case 257u: goto L_004FBCB0;
    case 258u: goto L_004FBCD0;
    case 259u: goto L_004FBD00;
    case 260u: goto L_004FBD28;
    case 261u: goto L_004FBD40;
    case 262u: goto L_004FBD5C;
    case 263u: goto L_004FBD70;
    case 264u: goto L_004FBD7C;
    case 265u: goto L_004FBDD4;
    case 266u: goto L_004FBE68;
    case 267u: goto L_004FBE78;
    case 268u: goto L_004FBE8C;
    case 269u: goto L_004FBEA0;
    case 270u: goto L_004FBEA8;
    case 271u: goto L_004FBEC0;
    case 272u: goto L_004FBEF0;
    case 273u: goto L_004FBF08;
    case 274u: goto L_004FBF20;
    case 275u: goto L_004FBF58;
    case 276u: goto L_004FBFD8;
    case 277u: goto L_004FBFF8;
    default: bad_entry(c, 0x004F8000u); return;
    }
L_004F8000:
    c.r[7].d[0] = ld8((c.r[8].w[0] + 1496u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[8].w[0] + 1496u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 58u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F8630; } }
L_004F8038:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 58u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F8678; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004F804C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 50u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[4].w[0] + 360u));  if (t) { goto L_004F8064; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004F8080; } }
L_004F8064:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004F8080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F8520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F80A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 113u, depth + 1u); else { c.pc = 0x0029E2D0u; return; } if (c.pc != 0x004F80A8u) [[unlikely]] return; }
L_004F80A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));  if (t) { goto L_004F8524; } }
L_004F80B0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 58u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F80D4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_004F80D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F80D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 139u, depth + 1u); else { c.pc = 0x0029EA00u; return; } if (c.pc != 0x004F80D4u) [[unlikely]] return; }
L_004F80D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F8520; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8228; } }
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_004F812C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_004F8130; } }
L_004F812C:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004F8130:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_004F8688; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F8704; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F8170; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F8170:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F8188; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F8188:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F8198:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F81A4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004F81A4u) [[unlikely]] return; }
L_004F81A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004F81A8:
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8710; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1572u));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_004F81D0:
    c.f[4] = ld32((c.r[2].w[0] + 52u));
    c.f[3] = ld32((c.r[29].w[0] + 84u));
    c.f[6] = ld32((c.r[2].w[0] + 48u));
    c.f[5] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004F8220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004F822C; } }
L_004F8220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004F822C; } }
L_004F8228:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F822C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F823Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 111u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x004F823Cu) [[unlikely]] return; }
L_004F823C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F8520; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8258u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8258u) [[unlikely]] return; }
L_004F8258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F82A8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004F8290; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F8290; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F8290:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004F871C; } }
L_004F8298:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004F8734; } }
L_004F82A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_004F8304; } }
L_004F82A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1496u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004F8300; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 216u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004F8758; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F8758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004F8758; } }
L_004F82E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F82F4; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F82F4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_004F8300; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F8300:
    c.r[17].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 1;
L_004F8304:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004F8768; } }
L_004F830C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004F8330; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F8784; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F832C:
    st8((c.r[16].w[0] + 81u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_004F8330:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F8520; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
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
    c.r[2].d[0] = ld8((c.r[16].w[0] + 81u));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F83AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F83A4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 324u, depth + 1u); else { c.pc = 0x0028B260u; return; } if (c.pc != 0x004F83A4u) [[unlikely]] return; }
L_004F83A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_004F83C4; } }
L_004F83AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F83C0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 96u, depth + 1u); else { c.pc = 0x0028CF60u; return; } if (c.pc != 0x004F83C0u) [[unlikely]] return; }
L_004F83C0:
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004F83C4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 380u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[17].w[0] + 360u));  if (t) { goto L_004F83E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F83E0u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F83E0u) [[unlikely]] return; }
L_004F83E0:
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 360u), c.f[20]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 364u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8438u); st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BD(c, 194u, depth + 1u); else { c.pc = 0x004F7920u; return; } if (c.pc != 0x004F8438u) [[unlikely]] return; }
L_004F8438:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8448u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x004F8448u) [[unlikely]] return; }
L_004F8448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F8520; } }
L_004F8450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0029E200u; return; } if (c.pc != 0x004F8458u) [[unlikely]] return; }
L_004F8458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F8520; } }
L_004F8460:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 51u));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.f[2] = ld32((c.r[3].w[0] + 360u));  if (t) { goto L_004F8478; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004F8494; } }
L_004F8478:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004F8494:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F8520; } }
    c.r[8].d[0] = ld8((c.r[3].w[0] + 1496u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 65u);
    set32(c.r[7], c.r[2].w[0] << 6);
    set32(c.r[5], 0u - 33u);
    set32(c.r[2], 0u - 129u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8520u); st8((c.r[3].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0029E200u; return; } if (c.pc != 0x004F8520u) [[unlikely]] return; }
L_004F8520:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 1;
L_004F8524:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F8AD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F8A60; } }
L_004F8538:
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F8A78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8564u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 186u, depth + 1u); else { c.pc = 0x004F75D0u; return; } if (c.pc != 0x004F8564u) [[unlikely]] return; }
L_004F8564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004F8AD4; } }
L_004F856C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7FA8u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 218u, depth); } }
L_004F8574:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7FA8u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 218u, depth); } }
L_004F8580:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 58u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7FB0u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 219u, depth); } }
L_004F859C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 24u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = ld32((c.r[8].w[0] + 36u));
    c.f[1] = ld32((c.r[8].w[0] + 32u));
    c.f[5] = ld32((c.r[8].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[6] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 152u), c.f[5]);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 148u), c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7FC0u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 220u, depth); } }
    c.r[7].d[0] = ld8((c.r[8].w[0] + 1496u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[2], 0u - 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[8].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 58u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8628u); st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0027(c, 109u, depth + 1u); else { c.pc = 0x0029E200u; return; } if (c.pc != 0x004F8628u) [[unlikely]] return; }
L_004F8628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 58u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7FC4u | kUnwind; return; } [[clang::musttail]] return unit_00BD(c, 221u, depth); } }
L_004F8630:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[7], ld32((c.r[3].w[0] + 344u)));
    c.r[4].d[0] = c.r[4].d[0] << 54;
    c.r[6].d[0] = c.r[4].d[0] >> 60;
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8520u | kUnwind; return; } goto L_004F8520; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 13856u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x004F8000u < 16384u) { entry = entries_00BE[(t - 0x004F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004F8678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 139u, depth + 1u); else { c.pc = 0x0029EA00u; return; } if (c.pc != 0x004F8680u) [[unlikely]] return; }
L_004F8680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F804Cu | kUnwind; return; } goto L_004F804C; } }
L_004F8688:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F86F8; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F86BC; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F86BC:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F86D4; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F86D4:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F86E4:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F86F0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004F86F0u) [[unlikely]] return; }
L_004F86F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F81A8u | kUnwind; return; } goto L_004F81A8; } }
L_004F86F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F86E4u | kUnwind; return; } goto L_004F86E4; } }
L_004F8704:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8198u | kUnwind; return; } goto L_004F8198; } }
L_004F8710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F81D0u | kUnwind; return; } goto L_004F81D0; } }
L_004F871C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8724u); set32(c.r[4], ld32((c.r[4].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 72u, depth + 1u); else { c.pc = 0x00450FA0u; return; } if (c.pc != 0x004F8724u) [[unlikely]] return; }
L_004F8724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8298u | kUnwind; return; } goto L_004F8298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8298u | kUnwind; return; } goto L_004F8298; } }
L_004F8734:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1536u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8744u); set32(c.r[4], ld32((c.r[2].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 145u, depth + 1u); else { c.pc = 0x002A19A0u; return; } if (c.pc != 0x004F8744u) [[unlikely]] return; }
L_004F8744:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F82A0u | kUnwind; return; } goto L_004F82A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F82A0u | kUnwind; return; } goto L_004F82A0; } }
L_004F8758:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F82F4u | kUnwind; return; } goto L_004F82F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F82E8u | kUnwind; return; } goto L_004F82E8; } }
L_004F8768:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F877Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F877Cu) [[unlikely]] return; }
L_004F877C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F830Cu | kUnwind; return; } goto L_004F830C; } }
L_004F8784:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 52u);
    st32((c.r[16].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004F87CC; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[4].d[0] = c.r[4].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F87CC; } }
L_004F87B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004F8A28; } }
L_004F87C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F832Cu | kUnwind; return; } goto L_004F832C; } }
L_004F87CC:
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[9], c.r[2].w[0] << 3);
    set32(c.r[8], 0u - 9u);
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[10].d[0] = ld8((c.r[11].w[0] + 1496u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 1496u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
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
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8870; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8868u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x004F8868u) [[unlikely]] return; }
L_004F8868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_004F888C; } }
L_004F8870:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8888u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x004F8888u) [[unlikely]] return; }
L_004F8888:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004F888C:
    set32(c.r[3], 0u + 52u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004F88C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F88C4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 142u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F88B8u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x004F88B8u) [[unlikely]] return; }
L_004F88B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F88C4u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_00B6(c, 26u, depth + 1u); else { c.pc = 0x004D83F0u; return; } if (c.pc != 0x004F88C4u) [[unlikely]] return; }
L_004F88C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F8A18; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F8A18; } }
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F8958; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    c.budget -= 3;
L_004F8900:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F8948; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004F8948; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004F8958; } }
L_004F8948:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8900u | kUnwind; return; } goto L_004F8900; } }
L_004F8958:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_004F8974:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004F89E0; } }
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004F8A20; } }
L_004F89D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_004F8A14; } }
L_004F89E0:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004F89F8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F89F8:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8974u | kUnwind; return; } goto L_004F8974; } }
    breakpoint(c, 0x004F8A08u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_004F8A14:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_004F8A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F87B4u | kUnwind; return; } goto L_004F87B4; } }
L_004F8A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F89D8u | kUnwind; return; } goto L_004F89D8; } }
L_004F8A28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], 0u - 9u);
    c.r[9].d[0] = ld16((c.r[4].w[0] + 29166u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[6].d[0] = ld16((c.r[4].w[0] + 29154u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[5].w[0] + 29166u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 29154u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F87C4u | kUnwind; return; } goto L_004F87C4; } }
L_004F8A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8538u | kUnwind; return; } goto L_004F8538; } }
L_004F8A78:
    st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004F8AC8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 81u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F8AC8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8AC8u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0034(c, 48u, depth + 1u); else { c.pc = 0x002D0A50u; return; } if (c.pc != 0x004F8AC8u) [[unlikely]] return; }
L_004F8AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8AD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 167u, depth + 1u); else { c.pc = 0x004F7110u; return; } if (c.pc != 0x004F8AD0u) [[unlikely]] return; }
L_004F8AD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004F8AD4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004F8AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1536u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F8CBC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F8C90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F8B80; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F8B48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F8B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F8CE0; } }
L_004F8B48:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 119u);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8B60u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F8B60u) [[unlikely]] return; }
L_004F8B60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8B78u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x004F8B78u) [[unlikely]] return; }
L_004F8B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F8CE0; } }
L_004F8B80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F8C38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[11].d[0] = ld8((c.r[2].w[0] - 13944u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[3].w[0] - 13932u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] - 13943u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[6].w[0] - 13931u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] - 13942u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[5].w[0] - 13930u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] - 13941u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].d[0] = ld8((c.r[3].w[0] - 13951u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[4].w[0] - 13929u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] - 13952u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] - 13949u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[6].w[0] - 13935u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[7].w[0] - 13936u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] - 13950u));
    st8((c.r[3].w[0] - 13933u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 13933u));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 36;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[5].w[0] - 13934u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_004F8CE8; } }
L_004F8C1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[3].w[0] - 13933u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 28240u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | 128ull;
    st8((c.r[2].w[0] - 13933u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_004F8C38:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 9u);
    set32(c.r[7], c.r[7].w[0] - 13936u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8C5Cu); set32(c.r[4], c.r[3].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 19u, depth + 1u); else { c.pc = 0x004E83E0u; return; } if (c.pc != 0x004F8C5Cu) [[unlikely]] return; }
L_004F8C5C:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], 0u + 121u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8C70u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F8C70u) [[unlikely]] return; }
L_004F8C70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8C88u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x004F8C88u) [[unlikely]] return; }
L_004F8C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F8CE0; } }
L_004F8C90:
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8C9Cu); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F8C9Cu) [[unlikely]] return; }
L_004F8C9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8CB4u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x004F8CB4u) [[unlikely]] return; }
L_004F8CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F8CE0; } }
L_004F8CBC:
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8CC8u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F8CC8u) [[unlikely]] return; }
L_004F8CC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8CE0u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x004F8CE0u) [[unlikely]] return; }
L_004F8CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004F8CF8; } }
L_004F8CE8:
    set32(c.r[3], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 13933u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8C1Cu | kUnwind; return; } goto L_004F8C1C; } }
L_004F8CF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F8D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 39u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8D40u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0027(c, 157u, depth + 1u); else { c.pc = 0x0029F0B0u; return; } if (c.pc != 0x004F8D40u) [[unlikely]] return; }
L_004F8D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 20048u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8D54u); set32(c.r[4], ld32((c.r[17].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 70u, depth + 1u); else { c.pc = 0x00450F80u; return; } if (c.pc != 0x004F8D54u) [[unlikely]] return; }
L_004F8D54:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 736u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[11], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[9], 0u - 9u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[11].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 1496u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.r[6].d[0] = ld8((c.r[8].w[0] + 1496u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st8((c.r[8].w[0] + 1496u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[11].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8DE4u); st8((c.r[18].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00BE(c, 52u, depth + 1u); else { c.pc = 0x004F8AF0u; return; } if (c.pc != 0x004F8DE4u) [[unlikely]] return; }
L_004F8DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8DECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 115u, depth + 1u); else { c.pc = 0x0029E330u; return; } if (c.pc != 0x004F8DECu) [[unlikely]] return; }
L_004F8DEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8FDC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F8FDC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F928C; } }
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
L_004F8E20:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F8E68; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004F8E68; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004F928C; } }
L_004F8E68:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8E20u | kUnwind; return; } goto L_004F8E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 260u)));  if (t) { goto L_004F9290; } }
L_004F8E80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004F92AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004F8E94; } }
L_004F8E90:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 1;
L_004F8E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F92D0; } }
L_004F8E9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 1;
L_004F8EA0:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 8u);  if (t) { goto L_004F8F10; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_004F8EB8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F8F00; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004F8F00; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F8F10; } }
L_004F8F00:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8EB8u | kUnwind; return; } goto L_004F8EB8; } }
L_004F8F10:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_004F8F2C:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F8F98; } }
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F92F4; } }
L_004F8F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[17].w[0]);  if (t) { goto L_004F8FCC; } }
L_004F8F98:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_004F8FB0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F8FB0:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8F2Cu | kUnwind; return; } goto L_004F8F2C; } }
    breakpoint(c, 0x004F8FC0u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0]), c.r[17].w[0]);
    c.budget -= 3;
L_004F8FCC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004F8FDC:
    set32(c.r[3], ld32((c.r[17].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = ld32((c.r[3].w[0] + 44u));  if (t) { goto L_004F92FC; } }
    set32(c.r[3], 0u + 102u);
    c.budget -= 1;
L_004F8FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 360u), 0u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[17].w[0] + 364u), c.f[20]);
    set32(c.r[5], 0u - 2u);
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[2].w[0] << 3);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 58u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 58u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 82u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 81u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 43;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F9284; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F9284; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F930C; } }
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
L_004F90C8:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F9110; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004F9110; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004F930C; } }
L_004F9110:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F90C8u | kUnwind; return; } goto L_004F90C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 260u)));  if (t) { goto L_004F9310; } }
L_004F9128:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004F932C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004F913C; } }
L_004F9138:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 1;
L_004F913C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F9350; } }
L_004F9144:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 1;
L_004F9148:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 8u);  if (t) { goto L_004F91B8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_004F9160:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F91A8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004F91A8; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F91B8; } }
L_004F91A8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9160u | kUnwind; return; } goto L_004F9160; } }
L_004F91B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_004F91D4:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F9240; } }
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F9374; } }
L_004F9238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[17].w[0]);  if (t) { goto L_004F9274; } }
L_004F9240:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_004F9258; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F9258:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F91D4u | kUnwind; return; } goto L_004F91D4; } }
    breakpoint(c, 0x004F9268u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0]), c.r[17].w[0]);
    c.budget -= 3;
L_004F9274:
    set32(c.r[2], 0u + 2u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004F9284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004F937C; } }
L_004F928C:
    set32(c.r[3], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 1;
L_004F9290:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8E90u | kUnwind; return; } goto L_004F8E90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 148u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8E80u | kUnwind; return; } goto L_004F8E80; } }
L_004F92AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F92B8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004F92B8u) [[unlikely]] return; }
L_004F92B8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F92C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F92C8u) [[unlikely]] return; }
L_004F92C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8E94u | kUnwind; return; } goto L_004F8E94; } }
L_004F92D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8E9Cu | kUnwind; return; } goto L_004F8E9C; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F92ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x004F92ECu) [[unlikely]] return; }
L_004F92EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8EA0u | kUnwind; return; } goto L_004F8EA0; } }
L_004F92F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8F90u | kUnwind; return; } goto L_004F8F90; } }
L_004F92FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9304u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F9304u) [[unlikely]] return; }
L_004F9304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 102u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8FF4u | kUnwind; return; } goto L_004F8FF4; } }
L_004F930C:
    set32(c.r[3], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 1;
L_004F9310:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9138u | kUnwind; return; } goto L_004F9138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 148u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9128u | kUnwind; return; } goto L_004F9128; } }
L_004F932C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9338u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004F9338u) [[unlikely]] return; }
L_004F9338:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9348u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F9348u) [[unlikely]] return; }
L_004F9348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F913Cu | kUnwind; return; } goto L_004F913C; } }
L_004F9350:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9144u | kUnwind; return; } goto L_004F9144; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F936Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x004F936Cu) [[unlikely]] return; }
L_004F936C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9148u | kUnwind; return; } goto L_004F9148; } }
L_004F9374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9238u | kUnwind; return; } goto L_004F9238; } }
L_004F937C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004F93A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F93CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F93CCu); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 151u, depth + 1u); else { c.pc = 0x0029EF30u; return; } if (c.pc != 0x004F93CCu) [[unlikely]] return; }
L_004F93CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F93E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F942C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 27568u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9414u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x004F9414u) [[unlikely]] return; }
L_004F9414:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F942C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F942Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004F942Cu) [[unlikely]] return; }
L_004F942C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F9450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F94AC; } }
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F9494; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F9494; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_004F9494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9494u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x004F9494u) [[unlikely]] return; }
L_004F9494:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F94AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F94ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004F94ACu) [[unlikely]] return; }
L_004F94AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F94D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[16], c.r[17].w[0] + 24u);
    st8((c.r[4].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9508u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x004F9508u) [[unlikely]] return; }
L_004F9508:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 19ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F9540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F9590; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004F9578; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_004F9578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9578u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x004F9578u) [[unlikely]] return; }
L_004F9578:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F9590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9590u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004F9590u) [[unlikely]] return; }
L_004F9590:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F95B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[12]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 24;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_004F9640; } }
L_004F9610:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F9638; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9630u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004F9630u) [[unlikely]] return; }
L_004F9630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004F9A5C; } }
L_004F9638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004F9A5C; } }
L_004F9640:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 29u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[7].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9610u | kUnwind; return; } goto L_004F9610; } }
    c.f[2] = ld32((c.r[7].w[0] + 20u));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[4] = ld32((c.r[7].w[0] + 12u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[7].w[0] + 4u), c.f[1]);  if (t) { goto L_004F9A3C; } }
L_004F967C:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 24u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = ld32((c.r[3].w[0]));  if (t) { goto L_004F9A48; } }
L_004F9694:
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[7].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    c.r[5].d[0] = ld8((c.r[7].w[0] + 29u));
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] < 0; c.r[6].d[0] = ld8((c.r[7].w[0] + 30u));  if (t) { goto L_004F96C4; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004F96E0; } }
L_004F96C4:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004F96E0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_004F96F4; } }
    c.f[1] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004F9710; } }
L_004F96F4:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004F9710:
    c.f[4] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[8].d[0] = ld8((c.r[7].w[0] + 31u));
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 6u));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  if (t) { goto L_004F9840; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004F9768; } }
    c.f[1] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004F9784; } }
L_004F9768:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004F9784:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_004F9798; } }
    c.f[1] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004F97B4; } }
L_004F9798:
    set32(c.r[5], c.r[8].w[0] >> 1);
    c.r[4].d[0] = c.r[8].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004F97B4:
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_004F97DC; } }
    c.f[1] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004F97F8; } }
L_004F97DC:
    set32(c.r[5], c.r[9].w[0] >> 1);
    c.r[4].d[0] = c.r[9].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004F97F8:
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004F9918; } }
L_004F9840:
    set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[6].d[0] = ld8((c.r[7].w[0] + 28u));  if (t) { goto L_004F985C; } }
    c.f[1] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004F9878; } }
L_004F985C:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004F9878:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_004F988C; } }
    c.f[1] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004F98A8; } }
L_004F988C:
    set32(c.r[5], c.r[6].w[0] >> 1);
    c.r[4].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004F98A8:
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
L_004F9918:
    c.f[2] = ld32((c.r[7].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    c.f[3] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F9954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 6;
L_004F9954:
    c.r[5].d[0] = ld16((c.r[7].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = ld16((c.r[7].w[0] + 34u));
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.r[7].d[0] = 0ull | 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 28;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004F99D0; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004F99EC; } }
L_004F99D0:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004F99EC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[2], c.r[5].w[0] << 16);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    set32(c.r[6], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9638u | kUnwind; return; } goto L_004F9638; } }
L_004F9A3C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F967Cu | kUnwind; return; } goto L_004F967C; } }
L_004F9A48:
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[0] = c.f[1];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9694u | kUnwind; return; } goto L_004F9694; } }
L_004F9A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004F9A70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 19u));
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[1] = ld32((c.r[7].w[0] + 20u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld16((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.r[20].d[0] = ld16((c.r[7].w[0] + 2u));
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] < 0; st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F9AE0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004F9AFC; } }
L_004F9AE0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004F9AFC:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_004F9B10; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004F9B2C; } }
L_004F9B10:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004F9B2C:
    c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9B38u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004F9B38u) [[unlikely]] return; }
L_004F9B38:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_004F9B4C; } }
    c.f[1] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004F9B68; } }
L_004F9B4C:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004F9B68:
    c.f[1] = 0u;
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[20].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] < 0; st16((c.r[19].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004F9BC8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004F9BE4; } }
L_004F9BC8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004F9BE4:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_004F9BF8; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004F9C14; } }
L_004F9BF8:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004F9C14:
    c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9C20u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004F9C20u) [[unlikely]] return; }
L_004F9C20:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_004F9C34; } }
    c.f[1] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004F9C50; } }
L_004F9C34:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004F9C50:
    c.f[1] = 0u;
    c.r[6].d[0] = 0ull | 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    set32(c.r[7], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[3] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[2].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[4] = c.r[5].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[5], c.f[4]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    st16((c.r[19].w[0] + 34u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    st8((c.r[19].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9CD4u); set32(c.r[4], c.r[21].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x004F9CD4u) [[unlikely]] return; }
L_004F9CD4:
    set32(c.r[7], ld32((c.r[19].w[0] + 16u)));
    c.f[2] = ld32((c.r[18].w[0]));
    c.r[8].d[0] = ld16((c.r[19].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 17u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 19u));
    c.r[12].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[11], ld32((c.r[7].w[0])));
    set32(c.r[9], c.r[12].w[0] << 4);
    set32(c.r[7], c.r[8].w[0] << 16);
    set32(c.r[10], c.r[11].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    set32(c.r[9], c.r[11].w[0] + 396u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[8], c.r[12].w[0] << 2);
    st32((c.r[10].w[0]), c.f[2]);
    set32(c.r[7], c.r[11].w[0] + 328u);
    st32((c.r[10].w[0] + 4u), c.f[1]);
    set32(c.r[9], c.r[9].w[0] + c.r[12].w[0]);
    st32((c.r[10].w[0] + 8u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004F9D70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[9].d[0] = ld8((c.r[3].w[0] - 13648u));
    st32((c.r[29].w[0] + 60u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] - 13646u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].d[0] = ld8((c.r[9].w[0] - 13631u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 34u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[7].d[0] = ld16((c.r[3].w[0] - 13644u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[8].d[0] = ld8((c.r[8].w[0] - 13630u));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[12].d[0] = ld16((c.r[3].w[0] - 13642u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].d[0] = ld8((c.r[7].w[0] - 13629u));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0] - 13640u));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 13636u));
    c.r[11].d[0] = ld8((c.r[10].w[0] - 13632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[10], c.r[28].w[0] - 28200u);
    c.f[0] = ld32((c.r[3].w[0] - 13628u));
    st32((c.r[29].w[0] + 64u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 13624u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 47;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F9E34; } }
L_004F9E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004F9E60; } }
L_004F9E34:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9E50u); set32(c.r[8], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00BE(c, 113u, depth + 1u); else { c.pc = 0x004F9A70u; return; } if (c.pc != 0x004F9E50u) [[unlikely]] return; }
L_004F9E50:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9E2Cu | kUnwind; return; } goto L_004F9E2C; } }
L_004F9E60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004F9E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F9EA0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F9EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9EA0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004F9EA0u) [[unlikely]] return; }
L_004F9EA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F9EC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[9].d[0] = ld8((c.r[3].w[0] - 13680u));
    st32((c.r[29].w[0] + 60u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] - 13678u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].d[0] = ld8((c.r[9].w[0] - 13663u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 34u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[7].d[0] = ld16((c.r[3].w[0] - 13676u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[8].d[0] = ld8((c.r[8].w[0] - 13662u));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[12].d[0] = ld16((c.r[3].w[0] - 13674u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].d[0] = ld8((c.r[7].w[0] - 13661u));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0] - 13672u));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 13668u));
    c.r[11].d[0] = ld8((c.r[10].w[0] - 13664u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[10], c.r[28].w[0] - 28208u);
    c.f[0] = ld32((c.r[3].w[0] - 13660u));
    st32((c.r[29].w[0] + 64u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 13656u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 47;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F9F84; } }
L_004F9F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004F9FB0; } }
L_004F9F84:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9FA0u); set32(c.r[8], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00BE(c, 113u, depth + 1u); else { c.pc = 0x004F9A70u; return; } if (c.pc != 0x004F9FA0u) [[unlikely]] return; }
L_004F9FA0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9F7Cu | kUnwind; return; } goto L_004F9F7C; } }
L_004F9FB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004F9FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[9].d[0] = ld8((c.r[3].w[0] - 13712u));
    st32((c.r[29].w[0] + 60u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] - 13710u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].d[0] = ld8((c.r[9].w[0] - 13695u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 34u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[7].d[0] = ld16((c.r[3].w[0] - 13708u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[8].d[0] = ld8((c.r[8].w[0] - 13694u));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[12].d[0] = ld16((c.r[3].w[0] - 13706u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].d[0] = ld8((c.r[7].w[0] - 13693u));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0] - 13704u));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 13700u));
    c.r[11].d[0] = ld8((c.r[10].w[0] - 13696u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[10], c.r[28].w[0] - 28216u);
    c.f[0] = ld32((c.r[3].w[0] - 13692u));
    st32((c.r[29].w[0] + 64u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 13688u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 47;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FA084; } }
L_004FA07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FA0B0; } }
L_004FA084:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA0A0u); set32(c.r[8], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00BE(c, 113u, depth + 1u); else { c.pc = 0x004F9A70u; return; } if (c.pc != 0x004FA0A0u) [[unlikely]] return; }
L_004FA0A0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA07Cu | kUnwind; return; } goto L_004FA07C; } }
L_004FA0B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FA0C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004FA198; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 1;
L_004FA114:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004FA190; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 3;
L_004FA12C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004FA180; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004FA190; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004FA190; } }
L_004FA180:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA12Cu | kUnwind; return; } goto L_004FA12C; } }
L_004FA190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004FA1B0; } }
L_004FA198:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA1A8u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004FA1A8u) [[unlikely]] return; }
L_004FA1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[17].w[0] + 6u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA114u | kUnwind; return; } goto L_004FA114; } }
L_004FA1B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FA1C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C120u | kUnwind; return; } [[clang::musttail]] return unit_0083(c, 10u, depth); }
L_004FA1D0:
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
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004FA210; } }
L_004FA208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FA2E8; } }
L_004FA210:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FA214:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA230u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_00BE(c, 107u, depth + 1u); else { c.pc = 0x004F95B0u; return; } if (c.pc != 0x004FA230u) [[unlikely]] return; }
L_004FA230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FA254; } }
L_004FA238:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA214u | kUnwind; return; } goto L_004FA214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA208u | kUnwind; return; } goto L_004FA208; } }
L_004FA254:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004FA2D0; } }
    c.budget -= 1;
L_004FA298:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA238u | kUnwind; return; } goto L_004FA238; } }
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
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA238u | kUnwind; return; } goto L_004FA238; } }
L_004FA2D0:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA2E0u); set32(c.r[4], c.r[19].w[0] + 28u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004FA2E0u) [[unlikely]] return; }
L_004FA2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA298u | kUnwind; return; } goto L_004FA298; } }
L_004FA2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004FA310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FA388; } }
L_004FA334:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004FA3E0; } }
L_004FA370:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA334u | kUnwind; return; } goto L_004FA334; } }
L_004FA388:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004FA3F8; } }
L_004FA398:
    c.r[4].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA398u | kUnwind; return; } goto L_004FA398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FA3F8; } }
L_004FA3E0:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA3F0u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004FA3F0u) [[unlikely]] return; }
L_004FA3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA370u | kUnwind; return; } goto L_004FA370; } }
L_004FA3F8:
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FA410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FA43C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA438u); set32(c.r[5], c.r[5].w[0] - 23296u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004FA438u) [[unlikely]] return; }
L_004FA438:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004FA43C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FA454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA450u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FA450u) [[unlikely]] return; }
L_004FA450:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004FA454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA45Cu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0082(c, 390u, depth + 1u); else { c.pc = 0x0040BFC0u; return; } if (c.pc != 0x004FA45Cu) [[unlikely]] return; }
L_004FA45C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28212u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FA48C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FA478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA478u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FA478u) [[unlikely]] return; }
L_004FA478:
    set32(c.r[3], ld32((c.r[28].w[0] - 28500u)));
    st32((c.r[28].w[0] - 28212u), 0u);
    st32((c.r[28].w[0] - 28216u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 28500u), c.r[3].w[0]);
    c.budget -= 5;
L_004FA48C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28204u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FA4BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FA4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA4A8u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FA4A8u) [[unlikely]] return; }
L_004FA4A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 28500u)));
    st32((c.r[28].w[0] - 28204u), 0u);
    st32((c.r[28].w[0] - 28208u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 28500u), c.r[3].w[0]);
    c.budget -= 5;
L_004FA4BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28196u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FA4EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FA4D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA4D8u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FA4D8u) [[unlikely]] return; }
L_004FA4D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 28500u)));
    st32((c.r[28].w[0] - 28196u), 0u);
    st32((c.r[28].w[0] - 28200u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 28500u), c.r[3].w[0]);
    c.budget -= 5;
L_004FA4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FA500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FA530; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FA530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA530u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FA530u) [[unlikely]] return; }
L_004FA530:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FA550:
    set32(c.r[29], c.r[29].w[0] - 192u);
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
    set32(c.r[21], c.r[21].w[0] - 13744u);
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FA628; } }
L_004FA598:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA5B8u); set32(c.r[5], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004FA5B8u) [[unlikely]] return; }
L_004FA5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FA614; } }
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
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004FA628; } }
L_004FA614:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA598u | kUnwind; return; } goto L_004FA598; } }
L_004FA628:
    set32(c.r[22], c.r[29].w[0] + 188u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[29].w[0] + 184u), 0u);
    set32(c.r[2], c.r[2].w[0] - 13744u);
    st32((c.r[22].w[0]), 0u);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 64u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA664u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 14u, depth + 1u); else { c.pc = 0x0040C1A0u; return; } if (c.pc != 0x004FA664u) [[unlikely]] return; }
L_004FA664:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA670u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0082(c, 357u, depth + 1u); else { c.pc = 0x0040BA70u; return; } if (c.pc != 0x004FA670u) [[unlikely]] return; }
L_004FA670:
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[2], c.r[2].w[0] >> 4);
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[20].w[0] + 4u));  if (t) { goto L_004FA6A4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA6A0u); set32(c.r[5], c.r[5].w[0] - 23296u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004FA6A0u) [[unlikely]] return; }
L_004FA6A0:
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_004FA6A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004FA77C; } }
L_004FA6AC:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[20].w[0] + 4u));  if (t) { goto L_004FA6C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA6C0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FA6C0u) [[unlikely]] return; }
L_004FA6C0:
    st32((c.r[20].w[0] + 12u), 0u);
    c.budget -= 1;
L_004FA6C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004FA7B8; } }
L_004FA6CC:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004FA7C8; } }
L_004FA6DC:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[18].d[0] = c.r[19].d[0] & 65535ull;
    c.r[5].d[0] = ld16((c.r[20].w[0] + 64u));
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[17], c.r[3].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA700u); set32(c.r[21], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x004FA700u) [[unlikely]] return; }
L_004FA700:
    set32(c.r[3], c.r[2].w[0] >> 16);
    set32(c.r[4], c.r[20].w[0] + 44u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA740u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004FA740u) [[unlikely]] return; }
L_004FA740:
    set32(c.r[2], c.r[19].w[0] + 1u);
    st32((c.r[21].w[0] + 16u), c.r[16].w[0]);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA6DCu | kUnwind; return; } goto L_004FA6DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_004FA7CC; } }
L_004FA77C:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA790u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004FA790u) [[unlikely]] return; }
L_004FA790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22416u);
    set32(c.r[6], c.r[6].w[0] - 23296u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA7B0u); set32(c.r[7], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004FA7B0u) [[unlikely]] return; }
L_004FA7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA6ACu | kUnwind; return; } goto L_004FA6AC; } }
L_004FA7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA7C0u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004FA7C0u) [[unlikely]] return; }
L_004FA7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA6CCu | kUnwind; return; } goto L_004FA6CC; } }
L_004FA7C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_004FA7CC:
    set32(c.r[4], c.r[28].w[0] - 28216u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA7E8u); st32((c.r[29].w[0] + 168u), 0u);  if (depth < kMaxDepth) unit_0087(c, 200u, depth + 1u); else { c.pc = 0x0041F610u; return; } if (c.pc != 0x004FA7E8u) [[unlikely]] return; }
L_004FA7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[28].w[0] - 28208u);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA808u); st32((c.r[29].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0087(c, 200u, depth + 1u); else { c.pc = 0x0041F610u; return; } if (c.pc != 0x004FA808u) [[unlikely]] return; }
L_004FA808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[28].w[0] - 28200u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA828u); st32((c.r[29].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0087(c, 200u, depth + 1u); else { c.pc = 0x0041F610u; return; } if (c.pc != 0x004FA828u) [[unlikely]] return; }
L_004FA828:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FA848; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FA844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA844u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FA844u) [[unlikely]] return; }
L_004FA844:
    st32((c.r[22].w[0]), 0u);
    c.budget -= 1;
L_004FA848:
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
L_004FA870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004FA880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA8B8u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004FA8B8u) [[unlikely]] return; }
L_004FA8B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FA944; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004FA8C4:
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004FA938; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_004FA8D4:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_004FA928; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_004FA938; } }
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
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004FA938; } }
L_004FA928:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA8D4u | kUnwind; return; } goto L_004FA8D4; } }
L_004FA938:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_004FA95C; } }
L_004FA944:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA954u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004FA954u) [[unlikely]] return; }
L_004FA954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA8C4u | kUnwind; return; } goto L_004FA8C4; } }
L_004FA95C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FA980:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004FAA38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = 0u;
    c.f[8] = ld32((c.r[8].w[0]));
    c.f[7] = ld32((c.r[8].w[0] + 4u));
    c.f[6] = ld32((c.r[8].w[0] + 8u));
    c.f[5] = ld32((c.r[8].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    st32((c.r[2].w[0] + 16u), c.f[8]);
    st32((c.r[2].w[0] + 20u), c.f[7]);
    st32((c.r[2].w[0] + 24u), c.f[6]);
    st32((c.r[2].w[0] + 28u), c.f[5]);
    st32((c.r[2].w[0]), c.f[4]);
    st32((c.r[2].w[0] + 4u), c.f[3]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    st32((c.r[2].w[0] + 12u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[12]);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 48u), c.r[7].w[0]);
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[2].w[0] + 52u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_004FAA24; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 32u)));  if (t) { goto L_004FAA3C; } }
L_004FAA24:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_004FAA3C; } }
L_004FAA38:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_004FAA3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FAA50:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004FACB0; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 224u);
    set32(c.r[21], c.r[29].w[0] + 240u);
    set32(c.r[22], c.r[29].w[0] + 256u);
    set32(c.r[23], c.r[29].w[0] + 228u);
    set32(c.r[30], c.r[29].w[0] + 212u);
    c.budget -= 6;
L_004FAAB0:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 40u), c.f[1]);  if (t) { goto L_004FAC70; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FAAE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FAC70; } }
L_004FAAE8:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAAF8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004FAAF8u) [[unlikely]] return; }
L_004FAAF8:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAB20u); st32((c.r[20].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FAB20u) [[unlikely]] return; }
L_004FAB20:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_004FACB8; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1577u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FAB58; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_004FAB58:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 2;
L_004FAB60:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 6;
L_004FAB78:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAB78u | kUnwind; return; } goto L_004FAB78; } }
    set32(c.r[2], c.r[29].w[0] + 180u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[29].w[0] + 184u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[2].w[0]), 0u);
    c.f[5] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF0E0000u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 17574ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE060000u);
    c.r[2].d[0] = c.r[2].d[0] | 59635ull;
    c.f[8] = c.r[2].w[0];
    c.f[7] = ld32((c.r[29].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED60000u);
    c.r[2].d[0] = c.r[2].d[0] | 14638ull;
    c.f[6] = c.r[2].w[0];
    c.f[9] = ld32((c.r[21].w[0]));
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = ld32((c.r[23].w[0]));
    c.f[2] = ld32((c.r[30].w[0]));
    c.f[10] = c.r[3].w[0];
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[7]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[9]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[3]);
    c.f[4] = ld32((c.r[22].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 192u), c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAC6Cu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 55u, depth + 1u); else { c.pc = 0x003F44E0u; return; } if (c.pc != 0x004FAC6Cu) [[unlikely]] return; }
L_004FAC6C:
    c.budget -= 1;
L_004FAC70:
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004FACC0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_004FAC90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FACE0; } }
L_004FAC98:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAAB0u | kUnwind; return; } goto L_004FAAB0; } }
    c.budget -= 1;
L_004FACB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FAD58; } }
L_004FACB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAB60u | kUnwind; return; } goto L_004FAB60; } }
L_004FACC0:
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 44u), c.f[0]);  if (t) { goto L_004FACD8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FACD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAC90u | kUnwind; return; } goto L_004FAC90; } }
L_004FACE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FACF8u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004FACF8u) [[unlikely]] return; }
L_004FACF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FAD40; } }
L_004FAD00:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAC98u | kUnwind; return; } goto L_004FAC98; } }
    c.budget -= 1;
L_004FAD40:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[20].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAD50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004FAD50u) [[unlikely]] return; }
L_004FAD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAD00u | kUnwind; return; } goto L_004FAD00; } }
L_004FAD58:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004FAD90:
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
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FADCC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FADC8u); set32(c.r[5], c.r[5].w[0] - 20800u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004FADC8u) [[unlikely]] return; }
L_004FADC8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004FADCC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004FAE54; } }
L_004FADD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_004FADEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FADE8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FADE8u) [[unlikely]] return; }
L_004FADE8:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004FADEC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004FAE88; } }
L_004FADF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004FAE98; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
L_004FAE10:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 64u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAE10u | kUnwind; return; } goto L_004FAE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004FAE9C; } }
L_004FAE54:
    set32(c.r[2], c.r[17].w[0] << 6);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAE60u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004FAE60u) [[unlikely]] return; }
L_004FAE60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20816u);
    set32(c.r[6], c.r[6].w[0] - 20800u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAE80u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004FAE80u) [[unlikely]] return; }
L_004FAE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FADD4u | kUnwind; return; } goto L_004FADD4; } }
L_004FAE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAE90u); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004FAE90u) [[unlikely]] return; }
L_004FAE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FADF4u | kUnwind; return; } goto L_004FADF4; } }
L_004FAE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004FAE9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FAEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004FAEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FAEF0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FAEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAEF0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FAEF0u) [[unlikely]] return; }
L_004FAEF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FAF10:
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
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FAF44; } }
L_004FAF3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { goto L_004FAFA0; } }
L_004FAF44:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FAF48:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAF60u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004FAF60u) [[unlikely]] return; }
L_004FAF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FAF84; } }
L_004FAF68:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAF48u | kUnwind; return; } goto L_004FAF48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAF3Cu | kUnwind; return; } goto L_004FAF3C; } }
L_004FAF84:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[19].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAF94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004FAF94u) [[unlikely]] return; }
L_004FAF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAF68u | kUnwind; return; } goto L_004FAF68; } }
    c.budget -= 1;
L_004FAFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FAFC0:
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
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FB02C; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_004FAFF0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FB00C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB008u); set32(c.r[5], c.r[5].w[0] - 20800u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004FB008u) [[unlikely]] return; }
L_004FB008:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_004FB00C:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FB088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB020u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FB020u) [[unlikely]] return; }
L_004FB020:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FB088; } }
L_004FB02C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FB030:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB048u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004FB048u) [[unlikely]] return; }
L_004FB048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FB06C; } }
L_004FB050:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB030u | kUnwind; return; } goto L_004FB030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAFF0u | kUnwind; return; } goto L_004FAFF0; } }
L_004FB06C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[19].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB07Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004FB07Cu) [[unlikely]] return; }
L_004FB07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB050u | kUnwind; return; } goto L_004FB050; } }
    c.budget -= 1;
L_004FB088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FB0B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[6], 0u - 2u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.f[3]);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.f[2]);
    set32(c.r[17], c.r[29].w[0] + 168u);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    set32(c.r[16], c.r[29].w[0] + 164u);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[22], c.r[29].w[0] + 172u);
    st32((c.r[4].w[0] + 32u), c.f[12]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 36u));
    c.f[20] = ld32((c.r[29].w[0] + 156u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 40;
L_004FB150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB158u); set32(c.r[4], c.r[28].w[0] - 28336u);  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x004FB158u) [[unlikely]] return; }
L_004FB158:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[28].w[0] - 28336u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB184u); st32((c.r[29].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x004FB184u) [[unlikely]] return; }
L_004FB184:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[28].w[0] - 28336u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB1B0u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x004FB1B0u) [[unlikely]] return; }
L_004FB1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[4], c.r[28].w[0] - 28336u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB1CCu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x004FB1CCu) [[unlikely]] return; }
L_004FB1CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[4], c.r[28].w[0] - 28336u);
    c.f[4] = c.r[2].w[0];
    c.f[3] = 0u;
    c.f[5] = c.r[3].w[0];
    set32(c.r[2], c.r[21].w[0] + c.r[20].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 3248u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[22].w[0]));
    st32((c.r[18].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 3248u));
    st32((c.r[19].w[0] + 3648u), c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB22Cu); st8((c.r[2].w[0] + 4048u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x004FB22Cu) [[unlikely]] return; }
L_004FB22C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 28336u);
    c.f[2] = 0u;
    c.f[5] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[6] = c.r[3].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 160u));
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[0]);
    c.f[4] = ld32((c.r[17].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[18].w[0] + 1648u), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[18].w[0] + 1652u), c.f[1]);
    st32((c.r[18].w[0] + 1656u), c.f[0]);
    st32((c.r[17].w[0]), c.f[2]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2ACu); st32((c.r[18].w[0] + 1660u), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x004FB2ACu) [[unlikely]] return; }
L_004FB2AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 55676ull;
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C030000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[3] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[4] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2ECu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004FB2ECu) [[unlikely]] return; }
L_004FB2EC:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2F8u); st32((c.r[19].w[0] + 4148u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004FB2F8u) [[unlikely]] return; }
L_004FB2F8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    st32((c.r[19].w[0] + 4548u), c.f[0]);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB150u | kUnwind; return; } goto L_004FB150; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004FB340:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 36u));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004FB360:
    set32(c.r[29], c.r[29].w[0] - 368u);
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
    c.r[3].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FB960; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[19], c.r[29].w[0] + 356u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[20], c.r[29].w[0] + 360u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.f[0] = c.r[22].w[0];
    set32(c.r[3], c.r[29].w[0] + 220u);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[20].w[0]), 0u);
    set32(c.r[21], c.r[29].w[0] + 188u);
    set32(c.r[22], c.r[29].w[0] + 172u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.f[14] = ld32((c.r[3].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[8] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[17], c.r[29].w[0] + 196u);
    c.f[10] = ld32((c.r[20].w[0]));
    set32(c.r[25], c.r[29].w[0] + 200u);
    c.f[9] = ld32((c.r[19].w[0]));
    set32(c.r[24], c.r[29].w[0] + 212u);
    c.f[7] = ld32((c.r[21].w[0]));
    set32(c.r[15], c.r[29].w[0] + 216u);
    c.f[4] = ld32((c.r[22].w[0]));
    set32(c.r[14], c.r[29].w[0] + 340u);
    set32(c.r[13], c.r[29].w[0] + 344u);
    set32(c.r[12], c.r[29].w[0] + 348u);
    set32(c.r[11], c.r[29].w[0] + 228u);
    set32(c.r[10], c.r[29].w[0] + 232u);
    set32(c.r[9], c.r[29].w[0] + 236u);
    set32(c.r[8], c.r[29].w[0] + 180u);
    set32(c.r[7], c.r[29].w[0] + 184u);
    set32(c.r[6], c.r[29].w[0] + 260u);
    set32(c.r[5], c.r[29].w[0] + 264u);
    set32(c.r[4], c.r[29].w[0] + 268u);
    set32(c.r[23], c.r[29].w[0] + 164u);
    set32(c.r[30], c.r[29].w[0] + 168u);
    set32(c.r[3], c.r[29].w[0] + 272u);
    c.budget -= 37;
L_004FB430:
    set32(c.r[19], c.r[16].w[0] + c.r[18].w[0]);
    c.r[19].d[0] = ld8((c.r[19].w[0] + 4048u));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004FB650; } }
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[19], c.r[18].w[0] << 2);
    set32(c.r[20], c.r[16].w[0] + c.r[19].w[0]);
    c.f[11] = ld32((c.r[20].w[0] + 3648u));
    set32(c.r[19], c.r[18].w[0] << 4);
    c.f[6] = ld32((c.r[20].w[0] + 3248u));
    set32(c.r[22], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[21], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[19], c.r[29].w[0] + 252u);
    st32((c.r[19].w[0]), c.f[4]);
    c.f[13] = ld32((c.r[22].w[0] + 1648u));
    set32(c.r[19], ld32((c.r[16].w[0] + 12u)));
    c.f[5] = ld32((c.r[22].w[0] + 48u));
    c.f[2] = ld32((c.r[22].w[0] + 56u));
    c.f[12] = fp::ee::div(c.fcr31, c.f[11], c.f[6]);
    set32(c.r[20], c.r[21].w[0] << 1);
    set32(c.r[20], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[20], c.r[20].w[0] << 3);
    set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);
    set32(c.r[20], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[19], c.r[29].w[0] + 320u);
    c.f[11] = fp::ee::mul(c.fcr31, c.f[5], c.f[12]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[2], c.f[12]);
    c.f[3] = ld32((c.r[22].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 192u), c.f[11]);
    st32((c.r[25].w[0]), c.f[5]);
    st32((c.r[12].w[0]), c.f[14]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[3], c.f[12]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[11]);
    c.f[11] = ld32((c.r[22].w[0] + 1656u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.f[12] = ld32((c.r[22].w[0] + 1652u));
    st32((c.r[19].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[9], c.f[11]);
    set32(c.r[19], c.r[29].w[0] + 324u);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    st32((c.r[29].w[0] + 336u), c.f[1]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    c.f[5] = fp::ee::msub(c.fcr31, c.facc, c.f[10], c.f[12]);
    c.f[1] = ld32((c.r[22].w[0] + 1660u));
    st32((c.r[19].w[0]), c.f[3]);
    set32(c.r[19], c.r[29].w[0] + 328u);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[24].w[0]), c.f[3]);
    set32(c.r[19], c.r[29].w[0] + 304u);
    st32((c.r[14].w[0]), c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[13]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[8], c.f[11]);
    st32((c.r[15].w[0]), c.f[2]);
    st32((c.r[13].w[0]), c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[8], c.f[12]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[9], c.f[13]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[9].w[0]), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    st32((c.r[19].w[0]), c.f[13]);
    set32(c.r[19], c.r[29].w[0] + 308u);
    st32((c.r[19].w[0]), c.f[12]);
    set32(c.r[19], c.r[29].w[0] + 312u);
    st32((c.r[19].w[0]), c.f[11]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[19], c.r[29].w[0] + 276u);
    st32((c.r[17].w[0]), c.f[6]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[5]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[19].w[0]), c.f[5]);
    set32(c.r[19], c.r[29].w[0] + 280u);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[8].w[0]), c.f[3]);
    set32(c.r[19], c.r[29].w[0] + 288u);
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[1]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[11], c.f[5]);
    st32((c.r[7].w[0]), c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[11], c.f[6]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[13], c.f[1]);
    st32((c.r[6].w[0]), c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[13], c.f[5]);
    c.f[5] = fp::ee::msub(c.fcr31, c.facc, c.f[12], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[5].w[0]), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[23].w[0]), c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[19].w[0]), c.f[3]);
    set32(c.r[19], c.r[29].w[0] + 244u);
    st32((c.r[19].w[0]), c.f[2]);
    set32(c.r[19], c.r[29].w[0] + 292u);
    st32((c.r[19].w[0]), c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    set32(c.r[19], c.r[29].w[0] + 248u);
    st32((c.r[19].w[0]), c.f[1]);
    set32(c.r[19], c.r[29].w[0] + 296u);
    st32((c.r[29].w[0] + 272u), c.f[6]);
    st32((c.r[4].w[0]), c.f[7]);
    st32((c.r[29].w[0] + 224u), c.f[13]);
    st32((c.r[11].w[0]), c.f[12]);
    st32((c.r[10].w[0]), c.f[11]);
    st32((c.r[29].w[0] + 256u), c.f[6]);
    st32((c.r[30].w[0]), c.f[5]);
    st32((c.r[29].w[0] + 240u), c.f[3]);
    st32((c.r[19].w[0]), c.f[1]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[20].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[20].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[19], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 132;
L_004FB650:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[19].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB430u | kUnwind; return; } goto L_004FB430; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FB960; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB67Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004FB67Cu) [[unlikely]] return; }
L_004FB67C:
    set32(c.r[8], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[8].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[8], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_004FB960; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - 8u);  if (t) { goto L_004FB8F0; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_004FB6C4:
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[18], c.r[6].w[0] + 24u);
    set32(c.r[17], c.r[6].w[0] + 48u);
    set32(c.r[16], c.r[6].w[0] + 72u);
    set32(c.r[15], c.r[6].w[0] + 96u);
    set32(c.r[14], c.r[6].w[0] + 120u);
    set32(c.r[13], c.r[6].w[0] + 144u);
    set32(c.r[12], c.r[6].w[0] + 168u);
    c.r[9].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[6].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[6], c.r[6].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[18].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[16].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[8].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB6C4u | kUnwind; return; } goto L_004FB6C4; } }
L_004FB8F0:
    c.r[1].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004FB960; } }
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004FB90C:
    set32(c.r[6], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[8].w[0] + 1056u)));
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[8].w[0] + 1064u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB90Cu | kUnwind; return; } goto L_004FB90C; } }
    c.budget -= 1;
L_004FB960:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_004FB990:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FBB08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[5] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 32u), c.f[1]);  if (t) { goto L_004FBA3C; } }
L_004FB9C4:
    c.f[4] = 0u;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
L_004FB9DC:
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 4048u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FBA5C; } }
    c.budget -= 1;
L_004FB9F0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB9DCu | kUnwind; return; } goto L_004FB9DC; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[6].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FBB08; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_004FBB08; } }
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FBB08; } }
L_004FBA3C:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB9C4u | kUnwind; return; } goto L_004FB9C4; } }
L_004FBA5C:
    c.f[0] = ld32((c.r[7].w[0] + 3648u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[7].w[0] + 3648u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 1656u));
    c.f[0] = ld32((c.r[7].w[0] + 4548u));
    c.f[3] = ld32((c.r[6].w[0] + 1648u));
    c.f[2] = ld32((c.r[7].w[0] + 4148u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[6].w[0] + 1648u), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4548u));
    c.f[1] = ld32((c.r[6].w[0] + 1656u));
    c.f[0] = ld32((c.r[7].w[0] + 4148u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[6].w[0] + 1656u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 56u));
    c.f[0] = ld32((c.r[7].w[0] + 4548u));
    c.f[3] = ld32((c.r[6].w[0] + 48u));
    c.f[2] = ld32((c.r[7].w[0] + 4148u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4548u));
    c.f[1] = ld32((c.r[6].w[0] + 56u));
    c.f[0] = ld32((c.r[7].w[0] + 4148u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[6].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 3648u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 35;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004FBB00; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB9F0u | kUnwind; return; } goto L_004FB9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 3648u), c.f[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB9F0u | kUnwind; return; } goto L_004FB9F0; } }
    c.budget -= 1;
L_004FBB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB9F0u | kUnwind; return; } goto L_004FB9F0; } }
L_004FBB08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FBB10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FBB58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB40u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 292u, depth + 1u); else { c.pc = 0x004AA500u; return; } if (c.pc != 0x004FBB40u) [[unlikely]] return; }
L_004FBB40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FBB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FBB58u) [[unlikely]] return; }
L_004FBB58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FBB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FBB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 80u);  c.pc = t; return; }
L_004FBB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 80u);  c.pc = t; return; }
L_004FBBA0:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FBBB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 96u));  c.pc = t; return; }
L_004FBBC0:
    c.r[4].d[0] = ld8((c.r[4].w[0] + 104u));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_004FBBE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004FBBF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004FBC00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004FBC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004FBC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004FBC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 10000u);  c.pc = t; return; }
L_004FBC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 10000u);  c.pc = t; return; }
L_004FBC50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FBC60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBC7Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004FBC7Cu) [[unlikely]] return; }
L_004FBC7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FBC8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004FBCB8; } }
L_004FBC8C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 104u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FBCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FBCB8; } }
L_004FBCA0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBCB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FBCB0u) [[unlikely]] return; }
L_004FBCB0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_004FBCB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FBCD0:
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 24u));
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[6]);
    st32((c.r[4].w[0] + 96u), c.f[1]);
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004FBD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBD28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FBD28u) [[unlikely]] return; }
L_004FBD28:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FBD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBD5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 222u, depth + 1u); else { c.pc = 0x0045BC80u; return; } if (c.pc != 0x004FBD5Cu) [[unlikely]] return; }
L_004FBD5C:
    st32((c.r[17].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBD70u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 135u, depth + 1u); else { c.pc = 0x002E9680u; return; } if (c.pc != 0x004FBD70u) [[unlikely]] return; }
L_004FBD70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBD7Cu); set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));  if (depth < kMaxDepth) unit_0020(c, 310u, depth + 1u); else { c.pc = 0x00283EF0u; return; } if (c.pc != 0x004FBD7Cu) [[unlikely]] return; }
L_004FBD7C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 41u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FBD94; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004FBD94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FBE94; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004FBE8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 20360u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1536u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004FBE8C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FBE70; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_004FBDD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    set32(c.r[3], 0u - 2u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u + 60u);
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
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004FBE80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBE68u); set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));  if (depth < kMaxDepth) unit_0028(c, 217u, depth + 1u); else { c.pc = 0x002A2720u; return; } if (c.pc != 0x004FBE68u) [[unlikely]] return; }
L_004FBE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_004FBE90; } }
L_004FBE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBE78u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004FBE78u) [[unlikely]] return; }
L_004FBE78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FBDD4u | kUnwind; return; } goto L_004FBDD4; } }
L_004FBE80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBE8Cu); set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));  if (depth < kMaxDepth) unit_0028(c, 197u, depth + 1u); else { c.pc = 0x002A2380u; return; } if (c.pc != 0x004FBE8Cu) [[unlikely]] return; }
L_004FBE8C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_004FBE90:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_004FBE94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBEA0u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0052(c, 196u, depth + 1u); else { c.pc = 0x0034BE80u; return; } if (c.pc != 0x004FBEA0u) [[unlikely]] return; }
L_004FBEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBEA8u); set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));  if (depth < kMaxDepth) unit_004B(c, 220u, depth + 1u); else { c.pc = 0x0032F160u; return; } if (c.pc != 0x004FBEA8u) [[unlikely]] return; }
L_004FBEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FBEC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[18].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBEF0u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 144u, depth + 1u); else { c.pc = 0x002E9850u; return; } if (c.pc != 0x004FBEF0u) [[unlikely]] return; }
L_004FBEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 42u));
    set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));
    c.r[2].d[0] = c.r[3].d[0] ^ 2ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBF08u); c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0020(c, 312u, depth + 1u); else { c.pc = 0x00283F50u; return; } if (c.pc != 0x004FBF08u) [[unlikely]] return; }
L_004FBF08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1536u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 40u)));  if (t) { [[clang::musttail]] return unit_00BF(c, 7u, depth); } }
L_004FBF20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[2].w[0] - 20360u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1536u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004FBFF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 20360u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FBF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBF58u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004FBF58u) [[unlikely]] return; }
L_004FBF58:
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
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
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBFD8u); st32((c.r[16].w[0] + 372u), c.f[0]);  if (depth < kMaxDepth) unit_00BF(c, 275u, depth + 1u); else { c.pc = 0x004FE840u; return; } if (c.pc != 0x004FBFD8u) [[unlikely]] return; }
L_004FBFD8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00BF(c, 9u, depth); } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBFF8u); set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));  if (depth < kMaxDepth) unit_0028(c, 217u, depth + 1u); else { c.pc = 0x002A2720u; return; } if (c.pc != 0x004FBFF8u) [[unlikely]] return; }
L_004FBFF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC004u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 206u, depth + 1u); else { c.pc = 0x00477CC0u; return; } if (c.pc != 0x004FC004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00BF(c, 2u, depth);
}

}

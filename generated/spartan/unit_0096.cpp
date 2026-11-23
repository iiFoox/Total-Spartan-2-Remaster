#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0096[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0,
    0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0096(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00458000;
    case 2u: goto L_00458010;
    case 3u: goto L_00458020;
    case 4u: goto L_00458050;
    case 5u: goto L_00458070;
    case 6u: goto L_00458090;
    case 7u: goto L_00458138;
    case 8u: goto L_00458150;
    case 9u: goto L_0045816C;
    case 10u: goto L_00458174;
    case 11u: goto L_004581D8;
    case 12u: goto L_004581FC;
    case 13u: goto L_00458228;
    case 14u: goto L_00458250;
    case 15u: goto L_00458270;
    case 16u: goto L_00458290;
    case 17u: goto L_004582B0;
    case 18u: goto L_00458340;
    case 19u: goto L_00458358;
    case 20u: goto L_00458378;
    case 21u: goto L_004583D4;
    case 22u: goto L_00458440;
    case 23u: goto L_00458498;
    case 24u: goto L_004584A0;
    case 25u: goto L_004584A8;
    case 26u: goto L_004584B4;
    case 27u: goto L_004584D0;
    case 28u: goto L_00458598;
    case 29u: goto L_004585AC;
    case 30u: goto L_00458604;
    case 31u: goto L_00458670;
    case 32u: goto L_00458688;
    case 33u: goto L_004586A4;
    case 34u: goto L_004586C0;
    case 35u: goto L_00458714;
    case 36u: goto L_00458744;
    case 37u: goto L_0045874C;
    case 38u: goto L_004587AC;
    case 39u: goto L_00458824;
    case 40u: goto L_00458888;
    case 41u: goto L_004588DC;
    case 42u: goto L_004588E4;
    case 43u: goto L_00458924;
    case 44u: goto L_00458938;
    case 45u: goto L_00458940;
    case 46u: goto L_0045898C;
    case 47u: goto L_0045899C;
    case 48u: goto L_004589E4;
    case 49u: goto L_00458ACC;
    case 50u: goto L_00458B5C;
    case 51u: goto L_00458B70;
    case 52u: goto L_00458BC8;
    case 53u: goto L_00458C10;
    case 54u: goto L_00458C50;
    case 55u: goto L_00458C60;
    case 56u: goto L_00458C70;
    case 57u: goto L_00458C90;
    case 58u: goto L_00458D30;
    case 59u: goto L_00458D40;
    case 60u: goto L_00458D50;
    case 61u: goto L_00458D60;
    case 62u: goto L_00458D70;
    case 63u: goto L_00458DC0;
    case 64u: goto L_00458DD0;
    case 65u: goto L_00458E0C;
    case 66u: goto L_00458E80;
    case 67u: goto L_00458EC4;
    case 68u: goto L_00458EF0;
    case 69u: goto L_00458F38;
    case 70u: goto L_00458F98;
    case 71u: goto L_00458FB0;
    case 72u: goto L_00459024;
    case 73u: goto L_00459028;
    case 74u: goto L_0045908C;
    case 75u: goto L_004590E0;
    case 76u: goto L_004590FC;
    case 77u: goto L_00459178;
    case 78u: goto L_004591DC;
    case 79u: goto L_00459268;
    case 80u: goto L_004592DC;
    case 81u: goto L_00459340;
    case 82u: goto L_00459420;
    case 83u: goto L_00459460;
    case 84u: goto L_0045957C;
    case 85u: goto L_0045958C;
    case 86u: goto L_004595C8;
    case 87u: goto L_0045962C;
    case 88u: goto L_00459644;
    case 89u: goto L_004596C0;
    case 90u: goto L_00459724;
    case 91u: goto L_00459778;
    case 92u: goto L_00459794;
    case 93u: goto L_00459810;
    case 94u: goto L_00459874;
    case 95u: goto L_004598CC;
    case 96u: goto L_004598E8;
    case 97u: goto L_0045995C;
    case 98u: goto L_0045999C;
    case 99u: goto L_00459A1C;
    case 100u: goto L_00459A30;
    case 101u: goto L_00459A44;
    case 102u: goto L_00459A60;
    case 103u: goto L_00459AB0;
    case 104u: goto L_00459B98;
    case 105u: goto L_00459BA8;
    case 106u: goto L_00459C00;
    case 107u: goto L_00459C80;
    case 108u: goto L_00459C90;
    case 109u: goto L_00459D00;
    case 110u: goto L_00459D64;
    case 111u: goto L_00459DC4;
    case 112u: goto L_00459DD8;
    case 113u: goto L_00459E3C;
    case 114u: goto L_00459E54;
    case 115u: goto L_00459E64;
    case 116u: goto L_00459ECC;
    case 117u: goto L_00459EF0;
    case 118u: goto L_00459F20;
    case 119u: goto L_00459F40;
    case 120u: goto L_00459F60;
    case 121u: goto L_0045A000;
    case 122u: goto L_0045A018;
    case 123u: goto L_0045A034;
    case 124u: goto L_0045A03C;
    case 125u: goto L_0045A0C0;
    case 126u: goto L_0045A120;
    case 127u: goto L_0045A140;
    case 128u: goto L_0045A1B8;
    case 129u: goto L_0045A220;
    case 130u: goto L_0045A270;
    case 131u: goto L_0045A290;
    case 132u: goto L_0045A308;
    case 133u: goto L_0045A370;
    case 134u: goto L_0045A448;
    case 135u: goto L_0045A470;
    case 136u: goto L_0045A490;
    case 137u: goto L_0045A4B0;
    case 138u: goto L_0045A4D0;
    case 139u: goto L_0045A560;
    case 140u: goto L_0045A578;
    case 141u: goto L_0045A598;
    case 142u: goto L_0045A5EC;
    case 143u: goto L_0045A690;
    case 144u: goto L_0045A6E0;
    case 145u: goto L_0045A71C;
    case 146u: goto L_0045A790;
    case 147u: goto L_0045A7A4;
    case 148u: goto L_0045A814;
    case 149u: goto L_0045A8B4;
    case 150u: goto L_0045A8B8;
    case 151u: goto L_0045A8D0;
    case 152u: goto L_0045A9B0;
    case 153u: goto L_0045A9D4;
    case 154u: goto L_0045A9F4;
    case 155u: goto L_0045A9FC;
    case 156u: goto L_0045AA58;
    case 157u: goto L_0045AAB8;
    case 158u: goto L_0045AAD0;
    case 159u: goto L_0045AB48;
    case 160u: goto L_0045ABAC;
    case 161u: goto L_0045AC00;
    case 162u: goto L_0045AC1C;
    case 163u: goto L_0045AC98;
    case 164u: goto L_0045ACFC;
    case 165u: goto L_0045AD88;
    case 166u: goto L_0045ADFC;
    case 167u: goto L_0045AE60;
    case 168u: goto L_0045AEE0;
    case 169u: goto L_0045AF40;
    case 170u: goto L_0045AF58;
    case 171u: goto L_0045AFD0;
    case 172u: goto L_0045B034;
    case 173u: goto L_0045B088;
    case 174u: goto L_0045B0A4;
    case 175u: goto L_0045B120;
    case 176u: goto L_0045B184;
    case 177u: goto L_0045B1D8;
    case 178u: goto L_0045B1E0;
    case 179u: goto L_0045B218;
    case 180u: goto L_0045B27C;
    case 181u: goto L_0045B3F4;
    case 182u: goto L_0045B400;
    case 183u: goto L_0045B41C;
    case 184u: goto L_0045B4F4;
    case 185u: goto L_0045B528;
    case 186u: goto L_0045B5E8;
    case 187u: goto L_0045B630;
    case 188u: goto L_0045B664;
    case 189u: goto L_0045B694;
    case 190u: goto L_0045B6C0;
    case 191u: goto L_0045B784;
    case 192u: goto L_0045B798;
    case 193u: goto L_0045B7AC;
    case 194u: goto L_0045B7C4;
    case 195u: goto L_0045B7D8;
    case 196u: goto L_0045B7F8;
    case 197u: goto L_0045B80C;
    case 198u: goto L_0045B898;
    case 199u: goto L_0045B8EC;
    case 200u: goto L_0045B948;
    case 201u: goto L_0045B95C;
    case 202u: goto L_0045B970;
    case 203u: goto L_0045B984;
    case 204u: goto L_0045B99C;
    case 205u: goto L_0045B9E8;
    case 206u: goto L_0045B9F8;
    case 207u: goto L_0045BA64;
    case 208u: goto L_0045BA90;
    case 209u: goto L_0045BAA4;
    case 210u: goto L_0045BAB8;
    case 211u: goto L_0045BAE0;
    case 212u: goto L_0045BB2C;
    case 213u: goto L_0045BB40;
    case 214u: goto L_0045BB60;
    case 215u: goto L_0045BB90;
    case 216u: goto L_0045BBA0;
    case 217u: goto L_0045BBB0;
    case 218u: goto L_0045BBC0;
    case 219u: goto L_0045BBD0;
    case 220u: goto L_0045BBEC;
    case 221u: goto L_0045BC40;
    case 222u: goto L_0045BC80;
    case 223u: goto L_0045BCA4;
    case 224u: goto L_0045BD10;
    case 225u: goto L_0045BD38;
    case 226u: goto L_0045BDA0;
    case 227u: goto L_0045BDE4;
    case 228u: goto L_0045BDF4;
    case 229u: goto L_0045BE08;
    case 230u: goto L_0045BE10;
    case 231u: goto L_0045BE30;
    case 232u: goto L_0045BE3C;
    case 233u: goto L_0045BE48;
    case 234u: goto L_0045BE54;
    case 235u: goto L_0045BE70;
    case 236u: goto L_0045BEE0;
    case 237u: goto L_0045BF08;
    case 238u: goto L_0045BF14;
    case 239u: goto L_0045BF30;
    default: bad_entry(c, 0x00458000u); return;
    }
L_00458000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00458010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00458020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 222u)));
    set32(c.r[5], c.r[4].w[0] + 8u);
    st8((c.r[4].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 216u), 0u);
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
L_00458050:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004580C0; } }
L_00458070:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00458388; } }
    c.budget -= 1;
L_00458090:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_00458390; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458070u | kUnwind; return; } goto L_00458070; } }
    c.budget -= 1;
L_004580C0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[11], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[10].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[11].d[0];
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_00458398; } }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | c.r[11].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00458150; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_004583B8; } }
    c.budget -= 1;
L_00458138:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00458150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0045816C; } }
L_00458150:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458050u | kUnwind; return; } goto L_00458050; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0045816C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00458380; } }
L_00458174:
    set32(c.r[4], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00458208; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00458198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00458228; } }
L_00458198:
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 752u)));
    set32(c.r[6], c.r[3].w[0] + 752u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 800u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 92u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004583C0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 97u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004583C0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004581D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00458228; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00458228; } }
    set32(c.r[4], c.r[3].w[0] + 752u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004581FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 98u, depth + 1u); else { c.pc = 0x00395750u; return; } if (c.pc != 0x004581FCu) [[unlikely]] return; }
L_004581FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00458228; } }
    c.budget -= 1;
L_00458208:
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004583C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458228u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x00458228u) [[unlikely]] return; }
L_00458228:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_004583E0; } }
    c.budget -= 1;
L_00458250:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004583E8; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_00458270:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004582E0; } }
L_00458290:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_004583F0; } }
    c.budget -= 1;
L_004582B0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_004583F8; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458290u | kUnwind; return; } goto L_00458290; } }
    c.budget -= 1;
L_004582E0:
    set32(c.r[10], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_00458400; } }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00458358; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_00458420; } }
L_00458340:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00458358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00458378; } }
L_00458358:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458270u | kUnwind; return; } goto L_00458270; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00458378:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458174u | kUnwind; return; } goto L_00458174; } }
L_00458380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00458428; } }
L_00458388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458090u | kUnwind; return; } goto L_00458090; } }
L_00458390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045816Cu | kUnwind; return; } goto L_0045816C; } }
L_00458398:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458150u | kUnwind; return; } goto L_00458150; } }
L_004583B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458138u | kUnwind; return; } goto L_00458138; } }
L_004583C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004581D8u | kUnwind; return; } goto L_004581D8; } }
L_004583C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004583D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x004583D4u) [[unlikely]] return; }
L_004583D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458228u | kUnwind; return; } goto L_00458228; } }
    c.budget -= 1;
L_004583E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458250u | kUnwind; return; } goto L_00458250; } }
L_004583E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458378u | kUnwind; return; } goto L_00458378; } }
L_004583F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004582B0u | kUnwind; return; } goto L_004582B0; } }
L_004583F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458378u | kUnwind; return; } goto L_00458378; } }
L_00458400:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458358u | kUnwind; return; } goto L_00458358; } }
L_00458420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458340u | kUnwind; return; } goto L_00458340; } }
L_00458428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00458440:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[7].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_004584C0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00458470; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], 0u + 7u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 295u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_004584C0; } }
L_00458470:
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004584BC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 20528u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00458000u < 16384u) { entry = entries_0096[(t - 0x00458000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00458498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_004584BC; } }
L_004584A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_004584BC; } }
L_004584A8:
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004584BC; } }
L_004584B4:
    set32(c.r[3], 0u + 50u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004584BC:
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_004584C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004584D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00458518; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00458518; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00458518:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004586A4; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 64u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00458678; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00458624; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00458550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004586A8; } }
L_00458550:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00458578; } }
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00458578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004585A0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458598u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 297u, depth + 1u); else { c.pc = 0x0028AE50u; return; } if (c.pc != 0x00458598u) [[unlikely]] return; }
L_00458598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004586A4; } }
L_004585A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004585ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x004585ACu) [[unlikely]] return; }
L_004585AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004585C8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004585E4; } }
L_004585C8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004585E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458604u); c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00458604u) [[unlikely]] return; }
L_00458604:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_004586A4; } }
L_00458624:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00458694; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 811u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045865C; } }
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0045865C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00458694; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458670u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 297u, depth + 1u); else { c.pc = 0x0028AE50u; return; } if (c.pc != 0x00458670u) [[unlikely]] return; }
L_00458670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004586A4; } }
L_00458678:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458688u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 297u, depth + 1u); else { c.pc = 0x0028AE50u; return; } if (c.pc != 0x00458688u) [[unlikely]] return; }
L_00458688:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004586A4; } }
L_00458694:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004586A4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 297u, depth + 1u); else { c.pc = 0x0028AE50u; return; } if (c.pc != 0x004586A4u) [[unlikely]] return; }
L_004586A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004586A8:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004586C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 6ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_00458704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_00458708; } }
L_00458704:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00458708:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00458994; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_00458714:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004589A4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004589A4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1056u));
    c.r[1].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004589A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458744u); set32(c.r[4], c.r[4].w[0] + 752u);  if (depth < kMaxDepth) unit_0064(c, 326u, depth + 1u); else { c.pc = 0x00393260u; return; } if (c.pc != 0x00458744u) [[unlikely]] return; }
L_00458744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 64u));  if (t) { goto L_004589A8; } }
L_0045874C:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 280u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 68u), c.f[1]);  if (t) { goto L_00458BE8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00458BE8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[17], c.r[2].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00458808; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
L_004587AC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004587F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004587F4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 213u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00458808; } }
L_004587F4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004587ACu | kUnwind; return; } goto L_004587AC; } }
    c.budget -= 1;
L_00458808:
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[17].w[0] + 200u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 214u)));
    c.r[2].d[0] = c.r[6].d[0] << 56;
    set32(c.r[4], 0u + 10u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
L_00458824:
    c.r[5].d[0] = c.r[6].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00458890; } }
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 64u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 213u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 214u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004589D0; } }
L_00458888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_004588C4; } }
L_00458890:
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_004588A8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004588A8:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458824u | kUnwind; return; } goto L_00458824; } }
    breakpoint(c, 0x004588B8u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 3;
L_004588C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004588DCu); st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x004588DCu) [[unlikely]] return; }
L_004588DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045898C; } }
L_004588E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004589D8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.f[13] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458924u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_008B(c, 155u, depth + 1u); else { c.pc = 0x0042F930u; return; } if (c.pc != 0x00458924u) [[unlikely]] return; }
L_00458924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004589D8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458938u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x00458938u) [[unlikely]] return; }
L_00458938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), 0u);  if (t) { goto L_0045898C; } }
L_00458940:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00458970; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00458970; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00458970:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00458B64; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], 0u + 192u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00458B64; } }
L_0045898C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00458BEC; } }
L_00458994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045899Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 3u, depth + 1u); else { c.pc = 0x00458020u; return; } if (c.pc != 0x0045899Cu) [[unlikely]] return; }
L_0045899C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458714u | kUnwind; return; } goto L_00458714; } }
L_004589A4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 64u));
    c.budget -= 1;
L_004589A8:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00458BE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 20560u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00458000u < 16384u) { entry = entries_0096[(t - 0x00458000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004589D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458888u | kUnwind; return; } goto L_00458888; } }
L_004589D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004589E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x004589E4u) [[unlikely]] return; }
L_004589E4:
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00458BE8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 94u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 94u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 94u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 94u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 95u));
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_00458A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00458A54; } }
L_00458A4C:
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1267u));
    c.budget -= 2;
L_00458A54:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00458BE8; } }
    c.r[9].d[0] = ld8((c.r[3].w[0] + 95u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 9u);
    set32(c.r[8], c.r[6].w[0] << 3);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 95u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 64u);  if (t) { goto L_00458AD4; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 530u));
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00458AD4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 95u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458ACCu); set32(c.r[4], ld32((c.r[3].w[0] + 40u)));  if (depth < kMaxDepth) unit_0063(c, 55u, depth + 1u); else { c.pc = 0x0038CB10u; return; } if (c.pc != 0x00458ACCu) [[unlikely]] return; }
L_00458ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045898Cu | kUnwind; return; } goto L_0045898C; } }
L_00458AD4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00458B48; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00458B48; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 1388u)));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00458B10; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 5;
L_00458B10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00458B48; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[4].d[0] = c.r[4].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00458B48; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 95u));
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045898Cu | kUnwind; return; } goto L_0045898C; } }
L_00458B48:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00458BE8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458B5Cu); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 35u, depth + 1u); else { c.pc = 0x00300C70u; return; } if (c.pc != 0x00458B5Cu) [[unlikely]] return; }
L_00458B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045898Cu | kUnwind; return; } goto L_0045898C; } }
L_00458B64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458B70u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x00458B70u) [[unlikely]] return; }
L_00458B70:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00458B8C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00458BA8; } }
L_00458B8C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00458BA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458BC8u); c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00458BC8u) [[unlikely]] return; }
L_00458BC8:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045898Cu | kUnwind; return; } goto L_0045898C; } }
L_00458BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00458BEC:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00458C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 295u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00458C68; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 64u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00458C78; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00458C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458C50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x00458C50u) [[unlikely]] return; }
L_00458C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00458C60; } }
L_00458C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458C60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x00458C60u) [[unlikely]] return; }
L_00458C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00458C7C; } }
L_00458C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458C70u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0096(c, 22u, depth + 1u); else { c.pc = 0x00458440u; return; } if (c.pc != 0x00458C70u) [[unlikely]] return; }
L_00458C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458C60u | kUnwind; return; } goto L_00458C60; } }
L_00458C78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00458C7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00458C90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    set32(c.r[3], c.r[3].w[0] - 29376u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[9], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 29344u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], c.r[2].w[0] - 29360u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29392u);
    set32(c.r[3], 0u + 21u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13824u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00458D30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00458D40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00458D50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004584D0u | kUnwind; return; } goto L_004584D0; }
L_00458D60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004586C0u | kUnwind; return; } goto L_004586C0; }
L_00458D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00458DA0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00458DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00458E64; } }
L_00458DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00458E60; } }
L_00458DA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00458DBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00458E60; } }
L_00458DBC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00458DC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 236u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458DD0u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x00458DD0u) [[unlikely]] return; }
L_00458DD0:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 11920u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458E44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458E0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458E0Cu) [[unlikely]] return; }
L_00458E0C:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[6].w[0] + 8672u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[5].w[0] + 8676u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[4].w[0] + 8680u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 8684u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 216u)));  if (t) { goto L_00458E60; } }
L_00458E44:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458DC0u | kUnwind; return; } goto L_00458DC0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00458E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00458E64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00458E80:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00458EAC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00458EB4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00458EBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00459414; } }
L_00458EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00459414; } }
L_00458EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00459414; } }
L_00458EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00459394; } }
L_00458EC4:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    set32(c.r[2], 0u + 62u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004593B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004593B8; } }
L_00458EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004593D0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 238u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045938C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004593D8; } }
    set32(c.r[5], c.r[6].w[0] + 8u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 4;
L_00458F38:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458F80; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00458F80; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004593D8; } }
L_00458F80:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458F38u | kUnwind; return; } goto L_00458F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[6].w[0] + 252u)));  if (t) { goto L_004593DC; } }
L_00458F98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 8u);  if (t) { goto L_00459008; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00458FB0:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00458FF8; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00458FF8; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00459008; } }
L_00458FF8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458FB0u | kUnwind; return; } goto L_00458FB0; } }
L_00459008:
    set32(c.r[5], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.budget -= 7;
L_00459024:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 1;
L_00459028:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00459094; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004593FC; } }
L_0045908C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_004590CC; } }
L_00459094:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004590B0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004590B0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459028u | kUnwind; return; } goto L_00459028; } }
    breakpoint(c, 0x004590C0u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
L_004590CC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0045922C; } }
L_004590E0:
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 8u);  if (t) { goto L_00459158; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004590FC:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00459144; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00459144; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00459158; } }
L_00459144:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004590FCu | kUnwind; return; } goto L_004590FC; } }
    c.budget -= 1;
L_00459158:
    set32(c.r[5], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_00459178:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004591E4; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00459404; } }
L_004591DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_0045921C; } }
L_004591E4:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00459200; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00459200:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459178u | kUnwind; return; } goto L_00459178; } }
    breakpoint(c, 0x00459210u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
L_0045921C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0045922C:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 238u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004592C0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 3;
L_00459268:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004592B0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_004592B0; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004592C0; } }
L_004592B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459268u | kUnwind; return; } goto L_00459268; } }
L_004592C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_004592DC:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00459348; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 16384u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0045940C; } }
L_00459340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 56u)));  if (t) { goto L_0045937C; } }
L_00459348:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00459360; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00459360:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004592DCu | kUnwind; return; } goto L_004592DC; } }
    breakpoint(c, 0x00459370u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
L_0045937C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0045938C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00459414; } }
L_00459394:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 238u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458EC4u | kUnwind; return; } goto L_00458EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00459414; } }
L_004593B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00459414; } }
L_004593B8:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1057u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458EF0u | kUnwind; return; } goto L_00458EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00459414; } }
L_004593D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00459414; } }
L_004593D8:
    set32(c.r[2], ld32((c.r[6].w[0] + 252u)));
    c.budget -= 1;
L_004593DC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004590E0u | kUnwind; return; } goto L_004590E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[6].w[0] + 208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458F98u | kUnwind; return; } goto L_00458F98; } }
L_004593FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045908Cu | kUnwind; return; } goto L_0045908C; } }
L_00459404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004591DCu | kUnwind; return; } goto L_004591DC; } }
L_0045940C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459340u | kUnwind; return; } goto L_00459340; } }
L_00459414:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00459420:
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00459448; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 238u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00459448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0045944C; } }
L_00459448:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0045944C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00459460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[3].w[0] << 5);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 33u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[4].w[0] + 48u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 94u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00459BE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004598D4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 238u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004594D4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004594DC; } }
L_004594D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004594DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045958C; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0045958C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 11924u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045958C; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045958C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00459568; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00459568; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00459568:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0045958C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045957Cu); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 99u, depth + 1u); else { c.pc = 0x0028CFD0u; return; } if (c.pc != 0x0045957Cu) [[unlikely]] return; }
L_0045957C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045958Cu); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x0045958Cu) [[unlikely]] return; }
L_0045958C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00459BA0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004598C4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00459BB0; } }
    set32(c.r[4], c.r[5].w[0] + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 4;
L_004595C8:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00459610; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00459610; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00459BB0; } }
L_00459610:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004595C8u | kUnwind; return; } goto L_004595C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 252u)));  if (t) { goto L_00459BB4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.budget -= 1;
L_0045962C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 8u);  if (t) { goto L_004596A0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00459644:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045968C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0045968C; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004596A0; } }
L_0045968C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459644u | kUnwind; return; } goto L_00459644; } }
    c.budget -= 1;
L_004596A0:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_004596C0:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045972C; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00459BD4; } }
L_00459724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_00459764; } }
L_0045972C:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_00459748; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00459748:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004596C0u | kUnwind; return; } goto L_004596C0; } }
    breakpoint(c, 0x00459758u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
L_00459764:
    set32(c.r[2], 0u + 1u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004598C4; } }
L_00459778:
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 8u);  if (t) { goto L_004597F0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00459794:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004597DC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004597DC; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004597F0; } }
L_004597DC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459794u | kUnwind; return; } goto L_00459794; } }
    c.budget -= 1;
L_004597F0:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_00459810:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045987C; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00459BDC; } }
L_00459874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_004598B4; } }
L_0045987C:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_00459898; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00459898:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459810u | kUnwind; return; } goto L_00459810; } }
    breakpoint(c, 0x004598A8u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
L_004598B4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004598C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004598CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 344u, depth + 1u); else { c.pc = 0x0039BFE0u; return; } if (c.pc != 0x004598CCu) [[unlikely]] return; }
L_004598CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00459BE8; } }
L_004598D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004598E8u); set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  if (depth < kMaxDepth) unit_0041(c, 245u, depth + 1u); else { c.pc = 0x00306720u; return; } if (c.pc != 0x004598E8u) [[unlikely]] return; }
L_004598E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_00459904; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00459904:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00459950; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 1u);  if (t) { goto L_0045992C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045992C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00459950; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_00459950; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00459950:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00459A4C; } }
L_0045995C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00459AF8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u + 195u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00459A00; } }
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00459A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045999Cu); set32(c.r[4], ld32((c.r[16].w[0] + 208u)));  if (depth < kMaxDepth) unit_0041(c, 245u, depth + 1u); else { c.pc = 0x00306720u; return; } if (c.pc != 0x0045999Cu) [[unlikely]] return; }
L_0045999C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00459A00; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 40u)));
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
    c.budget -= 19;
L_00459A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00459A1Cu) [[unlikely]] return; }
L_00459A1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A30u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00459A30u) [[unlikely]] return; }
L_00459A30:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A44u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x00459A44u) [[unlikely]] return; }
L_00459A44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00459BE4; } }
L_00459A4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00459A60u) [[unlikely]] return; }
L_00459A60:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[21] = c.r[3].w[0];
    c.f[3] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    c.f[5] = ld32((c.r[5].w[0] + 40u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[4]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459AB0u); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);  if (depth < kMaxDepth) unit_0041(c, 245u, depth + 1u); else { c.pc = 0x00306720u; return; } if (c.pc != 0x00459AB0u) [[unlikely]] return; }
L_00459AB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00459ADC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[21] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
L_00459ADC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[21]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00459AF0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00459AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045995Cu | kUnwind; return; } goto L_0045995C; } }
L_00459AF8:
    set32(c.r[8], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u + 195u);
    set32(c.r[6], 0u + 1u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 94u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[8].w[0] + 94u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[10], c.r[5].w[0] + 544u);  if (t) { goto L_00459BE4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00459BE4; } }
    c.r[9].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[7], 0u - 3u);
    set32(c.r[8], c.r[11].w[0] << 1);
    set32(c.r[4], 0u - 17u);
    set32(c.r[5], c.r[11].w[0] << 4);
    set32(c.r[2], 0u - 2049u);
    set32(c.r[3], c.r[11].w[0] << 11);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0]));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459B98u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 167u, depth + 1u); else { c.pc = 0x00289CC0u; return; } if (c.pc != 0x00459B98u) [[unlikely]] return; }
L_00459B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459A44u | kUnwind; return; } goto L_00459A44; } }
L_00459BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459BA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 344u, depth + 1u); else { c.pc = 0x0039BFE0u; return; } if (c.pc != 0x00459BA8u) [[unlikely]] return; }
L_00459BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00459BE4; } }
L_00459BB0:
    set32(c.r[2], ld32((c.r[5].w[0] + 252u)));
    c.budget -= 1;
L_00459BB4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459778u | kUnwind; return; } goto L_00459778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[5].w[0] + 208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045962Cu | kUnwind; return; } goto L_0045962C; } }
L_00459BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459724u | kUnwind; return; } goto L_00459724; } }
L_00459BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459874u | kUnwind; return; } goto L_00459874; } }
L_00459BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00459BE8:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00459C00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[9], 0u - 3u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[2].w[0] << 1);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[5].w[0] + 68u));
    st32((c.r[4].w[0] + 208u), 0u);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 238u));
    set32(c.r[2], 0u + 195u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 238u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 216u), 0u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 238u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 238u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 232u), 0u);
    set32(c.r[16], ld32((c.r[4].w[0] + 184u)));
    st32((c.r[4].w[0] + 184u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[8], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 32;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00459E6C; } }
L_00459C80:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00459C90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00459C90u) [[unlikely]] return; }
L_00459C90:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[6] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 104u), c.f[5]);
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 100u), c.f[3]);  if (t) { goto L_00459ED4; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 552u));
    set32(c.r[2], c.r[3].w[0] + 544u);
    set32(c.r[3], 0u + 195u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00459DE0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00459D00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00459D00u) [[unlikely]] return; }
L_00459D00:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[6] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 88u), c.f[5]);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 84u), c.f[3]);  if (t) { goto L_00459ED4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00459D64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459D64u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_0094(c, 81u, depth + 1u); else { c.pc = 0x00451090u; return; } if (c.pc != 0x00459D64u) [[unlikely]] return; }
L_00459D64:
    set32(c.r[11], ld32((c.r[18].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[4].w[0] + 21824u);
    c.r[10].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[11].w[0] + 544u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[11].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459DC4u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_009E(c, 202u, depth + 1u); else { c.pc = 0x0047B1D0u; return; } if (c.pc != 0x00459DC4u) [[unlikely]] return; }
L_00459DC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459DD8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 167u, depth + 1u); else { c.pc = 0x00289CC0u; return; } if (c.pc != 0x00459DD8u) [[unlikely]] return; }
L_00459DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00459E64; } }
L_00459DE0:
    c.r[12].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 2049u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 50u);
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[2].w[0]));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459E3Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x00459E3Cu) [[unlikely]] return; }
L_00459E3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00459EB4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00459E54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00459E54u) [[unlikely]] return; }
L_00459E54:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459E64u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 369u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x00459E64u) [[unlikely]] return; }
L_00459E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00459ED8; } }
L_00459E6C:
    c.r[6].d[0] = ld16((c.r[8].w[0]));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[6].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[8].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459C80u | kUnwind; return; } goto L_00459C80; } }
L_00459EB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[6], 0u + 15u);
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459ECCu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 372u, depth + 1u); else { c.pc = 0x0028B930u; return; } if (c.pc != 0x00459ECCu) [[unlikely]] return; }
L_00459ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459E64u | kUnwind; return; } goto L_00459E64; } }
L_00459ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00459ED8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00459EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 222u)));
    set32(c.r[4], c.r[5].w[0] + 8u);
    st8((c.r[5].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 216u), 0u);
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
L_00459F20:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00459F90; } }
L_00459F40:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0045A5A8; } }
    c.budget -= 1;
L_00459F60:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0045A5B0; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459F40u | kUnwind; return; } goto L_00459F40; } }
    c.budget -= 1;
L_00459F90:
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[10].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[11].d[0];
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_0045A5B8; } }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | c.r[11].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0045A018; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0045A5D8; } }
L_0045A000:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0045A018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0045A034; } }
L_0045A018:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459F20u | kUnwind; return; } goto L_00459F20; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0045A034:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0045A5A0; } }
L_0045A03C:
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], 0u + 2048u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0045A448; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0045A420; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0045A408; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0045A3E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0045A088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045A448; } }
    c.budget -= 1;
L_0045A088:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045A5E0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 238u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], ld32((c.r[6].w[0])));  if (t) { goto L_0045A3D8; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045A5F8; } }
    set32(c.r[6], c.r[7].w[0] + 8u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_0045A0C0:
    c.r[4].d[0] = ld8((c.r[8].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045A108; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0045A108; } }
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0045A5F8; } }
L_0045A108:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[4].d[0] = c.r[9].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A0C0u | kUnwind; return; } goto L_0045A0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045A5F8; } }
L_0045A120:
    set32(c.r[5], ld32((c.r[7].w[0] + 208u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[7].w[0] + 8u);  if (t) { goto L_0045A198; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0045A140:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0045A188; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0045A188; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0045A198; } }
L_0045A188:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A140u | kUnwind; return; } goto L_0045A140; } }
L_0045A198:
    set32(c.r[6], ld32((c.r[4].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 200u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], 0u + 10u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
L_0045A1B8:
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 8u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0045A228; } }
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[8].w[0] + 1u);
    st32((c.r[10].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0045A620; } }
    c.budget -= 1;
L_0045A220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045A258; } }
L_0045A228:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0045A240; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045A240:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A1B8u | kUnwind; return; } goto L_0045A1B8; } }
    breakpoint(c, 0x0045A250u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0045A258:
    set32(c.r[4], 0u + 8u);
    st32((c.r[10].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0045A3C0; } }
L_0045A270:
    set32(c.r[5], ld32((c.r[7].w[0] + 208u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[7].w[0] + 8u);  if (t) { goto L_0045A2E8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0045A290:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0045A2D8; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0045A2D8; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0045A2E8; } }
L_0045A2D8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A290u | kUnwind; return; } goto L_0045A290; } }
L_0045A2E8:
    set32(c.r[6], ld32((c.r[4].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 200u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], 0u + 10u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
L_0045A308:
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 8u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0045A378; } }
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[8].w[0] + 1u);
    st32((c.r[10].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0045A628; } }
    c.budget -= 1;
L_0045A370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045A3A8; } }
L_0045A378:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0045A390; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045A390:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A308u | kUnwind; return; } goto L_0045A308; } }
    breakpoint(c, 0x0045A3A0u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0045A3A8:
    set32(c.r[4], 0u + 8u);
    st32((c.r[10].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0045A3C0:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 238u));
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 238u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0045A3D8:
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 208u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 232u), 0u);  if (t) { goto L_0045A448; } }
L_0045A3E8:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 4u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 238u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 238u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045A448; } }
L_0045A408:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 4u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0045A448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 184u), 0u);  if (t) { goto L_0045A448; } }
L_0045A420:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045A448; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 228u), c.f[0]);
    c.budget -= 7;
L_0045A448:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_0045A630; } }
    c.budget -= 1;
L_0045A470:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0045A638; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_0045A490:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0045A500; } }
L_0045A4B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0045A640; } }
    c.budget -= 1;
L_0045A4D0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0045A648; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A4B0u | kUnwind; return; } goto L_0045A4B0; } }
    c.budget -= 1;
L_0045A500:
    set32(c.r[10], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_0045A650; } }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0045A578; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0045A670; } }
L_0045A560:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0045A578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0045A598; } }
L_0045A578:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A490u | kUnwind; return; } goto L_0045A490; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0045A598:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A03Cu | kUnwind; return; } goto L_0045A03C; } }
L_0045A5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045A678; } }
L_0045A5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459F60u | kUnwind; return; } goto L_00459F60; } }
L_0045A5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A034u | kUnwind; return; } goto L_0045A034; } }
L_0045A5B8:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A018u | kUnwind; return; } goto L_0045A018; } }
L_0045A5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A000u | kUnwind; return; } goto L_0045A000; } }
L_0045A5E0:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A5ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 106u, depth + 1u); else { c.pc = 0x00459C00u; return; } if (c.pc != 0x0045A5ECu) [[unlikely]] return; }
L_0045A5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A448u | kUnwind; return; } goto L_0045A448; } }
    c.budget -= 1;
L_0045A5F8:
    set32(c.r[4], ld32((c.r[7].w[0] + 252u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 811u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A270u | kUnwind; return; } goto L_0045A270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A120u | kUnwind; return; } goto L_0045A120; } }
    c.budget -= 1;
L_0045A620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A220u | kUnwind; return; } goto L_0045A220; } }
L_0045A628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A370u | kUnwind; return; } goto L_0045A370; } }
L_0045A630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A470u | kUnwind; return; } goto L_0045A470; } }
L_0045A638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A598u | kUnwind; return; } goto L_0045A598; } }
L_0045A640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A4D0u | kUnwind; return; } goto L_0045A4D0; } }
L_0045A648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A598u | kUnwind; return; } goto L_0045A598; } }
L_0045A650:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A578u | kUnwind; return; } goto L_0045A578; } }
L_0045A670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A560u | kUnwind; return; } goto L_0045A560; } }
L_0045A678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045A690:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01080000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 2060ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_0045A6D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_0045A6D8; } }
L_0045A6D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045A6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045A788; } }
L_0045A6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 53;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045A71C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 216u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045A71C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A71Cu); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x0045A71Cu) [[unlikely]] return; }
L_0045A71C:
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A7A4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045A7A4; } }
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0045A798; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0045A7A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 762u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045A7A4; } }
L_0045A788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A790u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0096(c, 117u, depth + 1u); else { c.pc = 0x00459EF0u; return; } if (c.pc != 0x0045A790u) [[unlikely]] return; }
L_0045A790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A6E0u | kUnwind; return; } goto L_0045A6E0; } }
L_0045A798:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A7A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x0045A7A4u) [[unlikely]] return; }
L_0045A7A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A834; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045A7FC; } }
    st32((c.r[16].w[0] + 216u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 208u), 0u);
    set32(c.r[4], 0u - 3u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 238u));
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 238u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 238u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0045A834; } }
L_0045A7FC:
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A814u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045A814u) [[unlikely]] return; }
L_0045A814:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 172u), c.f[0]);
    c.budget -= 8;
L_0045A834:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045B31C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 802u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 752u);  if (t) { goto L_0045A878; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 49u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045A880; } }
L_0045A878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_0045A880:
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045B2D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 11924u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045B2D4; } }
L_0045A8B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_0045A8B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 801u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 97u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045B344; } }
L_0045A8D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045A9B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 232u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0045B360; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 238u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045B360; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.f[2] = c.r[3].w[0];
    c.f[0] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 762u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (t) { goto L_0045A978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_0045A978:
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0045A9B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045A9B0; } }
    st32((c.r[16].w[0] + 232u), 0u);
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 238u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_0045A9B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045B428; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045B428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A9D4u);  if (depth < kMaxDepth) unit_0094(c, 72u, depth + 1u); else { c.pc = 0x00450FA0u; return; } if (c.pc != 0x0045A9D4u) [[unlikely]] return; }
L_0045A9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045B428; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 228u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 228u), c.f[0]);  if (t) { goto L_0045B428; } }
L_0045A9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A9FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 68u, depth + 1u); else { c.pc = 0x0039CE70u; return; } if (c.pc != 0x0045A9FCu) [[unlikely]] return; }
L_0045A9FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045B1E0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0045AEB0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 238u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045B1E0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045B43C; } }
    set32(c.r[5], c.r[6].w[0] + 8u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 4;
L_0045AA58:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045AAA0; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0045AAA0; } }
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045B43C; } }
L_0045AAA0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AA58u | kUnwind; return; } goto L_0045AA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[6].w[0] + 252u)));  if (t) { goto L_0045B440; } }
L_0045AAB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 8u);  if (t) { goto L_0045AB28; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0045AAD0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045AB18; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0045AB18; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0045AB28; } }
L_0045AB18:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AAD0u | kUnwind; return; } goto L_0045AAD0; } }
L_0045AB28:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0045AB48:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0045ABB4; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0045B460; } }
L_0045ABAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0045ABEC; } }
L_0045ABB4:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0045ABD0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0045ABD0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AB48u | kUnwind; return; } goto L_0045AB48; } }
    breakpoint(c, 0x0045ABE0u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_0045ABEC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045AD4C; } }
L_0045AC00:
    set32(c.r[4], ld32((c.r[6].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 8u);  if (t) { goto L_0045AC78; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0045AC1C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045AC64; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0045AC64; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0045AC78; } }
L_0045AC64:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AC1Cu | kUnwind; return; } goto L_0045AC1C; } }
    c.budget -= 1;
L_0045AC78:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0045AC98:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0045AD04; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0045B468; } }
L_0045ACFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0045AD3C; } }
L_0045AD04:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0045AD20; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0045AD20:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AC98u | kUnwind; return; } goto L_0045AC98; } }
    breakpoint(c, 0x0045AD30u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_0045AD3C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0045AD4C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 238u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 238u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045ADE0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 16384u);
    c.budget -= 3;
L_0045AD88:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045ADD0; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0045ADD0; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0045ADE0; } }
L_0045ADD0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AD88u | kUnwind; return; } goto L_0045AD88; } }
L_0045ADE0:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_0045ADFC:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0045AE68; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 16384u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0045B470; } }
L_0045AE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_0045AE9C; } }
L_0045AE68:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0045AE80; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045AE80:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045ADFCu | kUnwind; return; } goto L_0045ADFC; } }
    breakpoint(c, 0x0045AE90u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
L_0045AE9C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045B1E0; } }
L_0045AEB0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 238u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045B1E0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045B478; } }
    set32(c.r[5], c.r[6].w[0] + 8u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 4;
L_0045AEE0:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045AF28; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0045AF28; } }
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045B478; } }
L_0045AF28:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AEE0u | kUnwind; return; } goto L_0045AEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[6].w[0] + 252u)));  if (t) { goto L_0045B47C; } }
L_0045AF40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 8u);  if (t) { goto L_0045AFB0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0045AF58:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045AFA0; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0045AFA0; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0045AFB0; } }
L_0045AFA0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AF58u | kUnwind; return; } goto L_0045AF58; } }
L_0045AFB0:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0045AFD0:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0045B03C; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0045B49C; } }
L_0045B034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0045B074; } }
L_0045B03C:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0045B058; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0045B058:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AFD0u | kUnwind; return; } goto L_0045AFD0; } }
    breakpoint(c, 0x0045B068u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_0045B074:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045B1E0; } }
L_0045B088:
    set32(c.r[4], ld32((c.r[6].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 8u);  if (t) { goto L_0045B100; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0045B0A4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045B0EC; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0045B0EC; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0045B100; } }
L_0045B0EC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B0A4u | kUnwind; return; } goto L_0045B0A4; } }
    c.budget -= 1;
L_0045B100:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0045B120:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0045B18C; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0045B4A4; } }
L_0045B184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0045B1C4; } }
L_0045B18C:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0045B1A8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0045B1A8:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B120u | kUnwind; return; } goto L_0045B120; } }
    breakpoint(c, 0x0045B1B8u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_0045B1C4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0045B1E0; } }
L_0045B1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B1E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 68u, depth + 1u); else { c.pc = 0x0039CE70u; return; } if (c.pc != 0x0045B1E0u) [[unlikely]] return; }
L_0045B1E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 801u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045B4AC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045B4B8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B218u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B218u) [[unlikely]] return; }
L_0045B218:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[6] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 72u), c.f[5]);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 68u), c.f[3]);  if (t) { goto L_0045B274; } }
    set32(c.r[3], 0u + 96u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045B27C; } }
L_0045B274:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 196u)));
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0045B27C:
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045B618; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 238u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045B514; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[7].w[0] + 32u));
    st32((c.r[6].w[0] + 8672u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 36u));
    st32((c.r[5].w[0] + 8676u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 40u));
    st32((c.r[4].w[0] + 8680u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 44u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8684u), c.f[0]);  if (t) { goto L_0045B618; } }
L_0045B2D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[6].d[0] = ld8((c.r[2].w[0] - 11924u));
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] - 11924u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0045B314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A8B8u | kUnwind; return; } goto L_0045A8B8; } }
L_0045B314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 228u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A8B4u | kUnwind; return; } goto L_0045A8B4; } }
L_0045B31C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[2].w[0] - 11924u));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 11924u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A8B4u | kUnwind; return; } goto L_0045A8B4; } }
L_0045B344:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 238u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A8D0u | kUnwind; return; } goto L_0045A8D0; } }
L_0045B360:
    set32(c.r[2], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A9B0u | kUnwind; return; } goto L_0045A9B0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 762u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[5], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 801u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 82u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 97u)));
    c.f[0] = c.r[4].w[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (t) { goto L_0045B3D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 4;
L_0045B3D4:
    c.f[0] = ld32((c.r[16].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A9B0u | kUnwind; return; } goto L_0045A9B0; } }
    c.r[5].d[0] = ld16((c.r[7].w[0] + 6u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B3F4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0045B3F4u) [[unlikely]] return; }
L_0045B3F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045B40C; } }
L_0045B400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 232u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A9B0u | kUnwind; return; } goto L_0045A9B0; } }
L_0045B40C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B41Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B41Cu) [[unlikely]] return; }
L_0045B41C:
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 184u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B400u | kUnwind; return; } goto L_0045B400; } }
L_0045B428:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B1D8u | kUnwind; return; } goto L_0045B1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A9F4u | kUnwind; return; } goto L_0045A9F4; } }
L_0045B43C:
    set32(c.r[3], ld32((c.r[6].w[0] + 252u)));
    c.budget -= 1;
L_0045B440:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AC00u | kUnwind; return; } goto L_0045AC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[6].w[0] + 208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AAB8u | kUnwind; return; } goto L_0045AAB8; } }
L_0045B460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045ABACu | kUnwind; return; } goto L_0045ABAC; } }
L_0045B468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045ACFCu | kUnwind; return; } goto L_0045ACFC; } }
L_0045B470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AE60u | kUnwind; return; } goto L_0045AE60; } }
L_0045B478:
    set32(c.r[3], ld32((c.r[6].w[0] + 252u)));
    c.budget -= 1;
L_0045B47C:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B088u | kUnwind; return; } goto L_0045B088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[6].w[0] + 208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AF40u | kUnwind; return; } goto L_0045AF40; } }
L_0045B49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B034u | kUnwind; return; } goto L_0045B034; } }
L_0045B4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B184u | kUnwind; return; } goto L_0045B184; } }
L_0045B4AC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B27Cu | kUnwind; return; } goto L_0045B27C; } }
L_0045B4B8:
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0045B508; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 11924u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045B508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B4F4u); set32(c.r[4], ld32((c.r[5].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 72u, depth + 1u); else { c.pc = 0x00450FA0u; return; } if (c.pc != 0x0045B4F4u) [[unlikely]] return; }
L_0045B4F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045B508; } }
    set32(c.r[3], 0u + 96u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B27Cu | kUnwind; return; } goto L_0045B27C; } }
L_0045B508:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B27Cu | kUnwind; return; } goto L_0045B27C; } }
L_0045B514:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B528u); set32(c.r[17], c.r[2].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B528u) [[unlikely]] return; }
L_0045B528:
    c.f[4] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[6] = 0u;
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[6]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[4] = fp::ee::sqrt(c.fcr31, c.f[1]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0045B5D4; } }
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = c.r[8].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[2], c.f[4]);
    c.f[3] = ld32((c.r[7].w[0] + 36u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    c.f[3] = ld32((c.r[7].w[0] + 40u));
    c.f[0] = ld32((c.r[7].w[0] + 32u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 8676u), c.f[4]);
    st32((c.r[4].w[0] + 8680u), c.f[2]);
    st32((c.r[3].w[0] + 8684u), c.f[20]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8672u), c.f[0]);  if (t) { goto L_0045B618; } }
L_0045B5D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B5E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B5E8u) [[unlikely]] return; }
L_0045B5E8:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[6].w[0] + 8672u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[5].w[0] + 8676u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[4].w[0] + 8680u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 8684u), c.f[0]);
    c.budget -= 12;
L_0045B618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0045B630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045B694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 13872u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28400u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0045B69C; } }
L_0045B664:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045B694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8448u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0045B694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8416u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B694u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 37u, depth + 1u); else { c.pc = 0x003A4890u; return; } if (c.pc != 0x0045B694u) [[unlikely]] return; }
L_0045B694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0045B6A4; } }
L_0045B69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28400u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B664u | kUnwind; return; } goto L_0045B664; } }
L_0045B6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045B6C0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[11], 0u - 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[9], 0u - 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u - 9u);
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u - 65u);
    st32((c.r[4].w[0] + 180u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[12], c.r[2].w[0] << 1);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 144u));
    set32(c.r[10], c.r[2].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 129u);
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 144u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 144u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 144u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 144u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 228u), 0u);
    st32((c.r[4].w[0] + 232u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 49;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B784u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B784u) [[unlikely]] return; }
L_0045B784:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B798u); set32(c.r[5], c.r[5].w[0] + 20592u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0045B798u) [[unlikely]] return; }
L_0045B798:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B7ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x002BD2E0u; return; } if (c.pc != 0x0045B7ACu) [[unlikely]] return; }
L_0045B7AC:
    st32((c.r[18].w[0] + 212u), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], 0u + 8u);
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 236u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] - 11920u);
    c.budget -= 6;
L_0045B7C4:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B7D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B7D8u) [[unlikely]] return; }
L_0045B7D8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[17].d[0] << 56;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 20610u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B7F8u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0045B7F8u) [[unlikely]] return; }
L_0045B7F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B80Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x002BD2E0u; return; } if (c.pc != 0x0045B80Cu) [[unlikely]] return; }
L_0045B80C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045B824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 236u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_0045B840; } }
L_0045B824:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B7C4u | kUnwind; return; } goto L_0045B7C4; } }
    c.budget -= 1;
L_0045B840:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 236u)));
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045B908; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0045B8D0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0045B880; } }
    c.r[1].d[0] = c.r[4].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045B880; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0045B880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045B8D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 11920u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0045B898:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], c.r[4].w[0] + 8u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    c.budget -= 13;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B898u | kUnwind; return; } goto L_0045B898; } }
    c.budget -= 1;
L_0045B8D0:
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045B908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 11920u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0045B8EC:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0]), 0u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B8ECu | kUnwind; return; } goto L_0045B8EC; } }
L_0045B908:
    set32(c.r[2], ld32((c.r[18].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045BA6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045BA6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29166u));
    set32(c.r[3], 0u - 513u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(512ll);
    st32((c.r[28].w[0] - 28400u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[2].w[0] + 29166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0045B948:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B95Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B95Cu) [[unlikely]] return; }
L_0045B95C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B970u); set32(c.r[5], c.r[5].w[0] + 20617u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0045B970u) [[unlikely]] return; }
L_0045B970:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B984u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x002BD2E0u; return; } if (c.pc != 0x0045B984u) [[unlikely]] return; }
L_0045B984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045BA74; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B99Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B99Cu) [[unlikely]] return; }
L_0045B99C:
    st32((c.r[18].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045B9B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 236u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0045B9E8; } }
L_0045B9B4:
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    st32((c.r[5].w[0] + 8672u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    st32((c.r[4].w[0] + 8676u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    st32((c.r[3].w[0] + 8680u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[2].w[0] + 8684u), c.f[0]);
    c.budget -= 13;
L_0045B9E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045BA7C; } }
    st32((c.r[18].w[0] + 220u), 0u);
    c.budget -= 1;
L_0045B9F8:
    st32((c.r[18].w[0] + 208u), 0u);
    c.r[8].d[0] = 0ull & 1ull;
    st32((c.r[18].w[0] + 216u), 0u);
    set32(c.r[6], 0u - 3u);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 238u));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[3], 0u - 5u);
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 238u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 238u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 238u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 145u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 145u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 238u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BA64u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 79u, depth + 1u); else { c.pc = 0x00451070u; return; } if (c.pc != 0x0045BA64u) [[unlikely]] return; }
L_0045BA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0045BAC0; } }
L_0045BA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28400u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B948u | kUnwind; return; } goto L_0045B948; } }
L_0045BA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 224u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B9E8u | kUnwind; return; } goto L_0045B9E8; } }
L_0045BA7C:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BA90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045BA90u) [[unlikely]] return; }
L_0045BA90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BAA4u); set32(c.r[5], c.r[5].w[0] + 20627u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0045BAA4u) [[unlikely]] return; }
L_0045BAA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BAB8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x002BD2E0u; return; } if (c.pc != 0x0045BAB8u) [[unlikely]] return; }
L_0045BAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 220u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B9F8u | kUnwind; return; } goto L_0045B9F8; } }
L_0045BAC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0045BAE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 17504u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[3], c.r[3].w[0] - 17520u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 17568u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[9], 0u + 20u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[10], c.r[10].w[0] - 17472u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BB2Cu); set32(c.r[11], c.r[11].w[0] - 17488u);  if (depth < kMaxDepth) unit_0067(c, 99u, depth + 1u); else { c.pc = 0x0039D460u; return; } if (c.pc != 0x0045BB2Cu) [[unlikely]] return; }
L_0045BB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BB40u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0096(c, 190u, depth + 1u); else { c.pc = 0x0045B6C0u; return; } if (c.pc != 0x0045BB40u) [[unlikely]] return; }
L_0045BB40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045BB60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], 0u - 513u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[5], c.r[2].w[0] << 9);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { st16((c.r[2].w[0] + 29166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D3B0u | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 98u, depth); }
L_0045BB90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CE60u | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 67u, depth); }
L_0045BBA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A690u | kUnwind; return; } goto L_0045A690; }
L_0045BBB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00459460u | kUnwind; return; } goto L_00459460; }
L_0045BBC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CDB0u | kUnwind; return; } [[clang::musttail]] return unit_0067(c, 66u, depth); }
L_0045BBD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045BC10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 13840u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0045BC18; } }
L_0045BBEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045BC10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0045BC10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0045BC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045BC6C; } }
L_0045BC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 13856u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 76u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BBECu | kUnwind; return; } goto L_0045BBEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[28].w[0] - 29120u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BBECu | kUnwind; return; } goto L_0045BBEC; } }
L_0045BC40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0045BC54; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BBECu | kUnwind; return; } goto L_0045BBEC; } }
L_0045BC54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BC40u | kUnwind; return; } goto L_0045BC40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BBECu | kUnwind; return; } goto L_0045BBEC; } }
L_0045BC6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045BC80:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] - 11856u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[6], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], 0u - 2049u);
    c.budget -= 9;
L_0045BCA4:
    set32(c.r[3], ld32((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045BCF0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    st32((c.r[3].w[0] + 1568u), 0u);
    set32(c.r[10], ld32((c.r[11].w[0])));
    c.r[3].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[11].w[0]), 0u);
    c.budget -= 16;
L_0045BCF0:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[3].d[0] = c.r[12].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BCA4u | kUnwind; return; } goto L_0045BCA4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045BD10:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[28].w[0] - 28396u), 0u);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] - 11856u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[6], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], 0u - 2049u);
    c.budget -= 10;
L_0045BD38:
    set32(c.r[3], ld32((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045BD88; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    st32((c.r[3].w[0] + 1568u), 0u);
    set32(c.r[10], ld32((c.r[11].w[0])));
    c.r[3].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[11].w[0]), 0u);
    c.budget -= 17;
L_0045BD88:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[3].d[0] = c.r[12].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BD38u | kUnwind; return; } goto L_0045BD38; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045BDA0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[21], c.r[21].w[0] - 11872u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 11856u);
    set32(c.r[17], c.r[17].w[0] - 11888u);
    c.budget -= 17;
L_0045BDE4:
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BDF4u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0045BDF4u) [[unlikely]] return; }
L_0045BDF4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE08u); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0045BE08u) [[unlikely]] return; }
L_0045BE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE10u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0045BE10u) [[unlikely]] return; }
L_0045BE10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24112u);
    set32(c.r[6], c.r[6].w[0] + 23088u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE30u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0045BE30u) [[unlikely]] return; }
L_0045BE30:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE3Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0045BE3Cu) [[unlikely]] return; }
L_0045BE3C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
L_0045BE48:
    set32(c.r[4], 0u + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE54u); st32((c.r[16].w[0] + 4u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0045BE54u) [[unlikely]] return; }
L_0045BE54:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BE48u | kUnwind; return; } goto L_0045BE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE70u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0045BE70u) [[unlikely]] return; }
L_0045BE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045BE88; } }
    set32(c.r[3], 0u + 12u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[22].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[23].w[0]);
    c.budget -= 4;
L_0045BE88:
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BDE4u | kUnwind; return; } goto L_0045BDE4; } }
    st32((c.r[28].w[0] - 28396u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0045BEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045BF14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 13904u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BF08u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 42u, depth + 1u); else { c.pc = 0x0045C970u; return; } if (c.pc != 0x0045BF08u) [[unlikely]] return; }
L_0045BF08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BF14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x0045BF14u) [[unlikely]] return; }
L_0045BF14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045BF30:
    set32(c.r[29], c.r[29].w[0] - 1296u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 11872u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    c.f[20] = ld32((c.r[29].w[0] + 188u));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[19], ld32((c.r[6].w[0])));
    set32(c.r[4], 0u + 115u);
    c.budget -= 25;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[21].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0097(c, 18u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[4], 0u + 97u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0097(c, 18u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[4], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0097(c, 18u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[4], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0097(c, 18u, depth); } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    c.r[30].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.r[23].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[20], c.r[3].w[0] + 24u);  if (t) { [[clang::musttail]] return unit_0097(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1568u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0097(c, 1u, depth); } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { [[clang::musttail]] return unit_0097(c, 2u, depth); } }
    [[clang::musttail]] return unit_0097(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0067[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
};

void unit_0067(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0039C000;
    case 2u: goto L_0039C008;
    case 3u: goto L_0039C034;
    case 4u: goto L_0039C04C;
    case 5u: goto L_0039C058;
    case 6u: goto L_0039C07C;
    case 7u: goto L_0039C0F8;
    case 8u: goto L_0039C15C;
    case 9u: goto L_0039C1C8;
    case 10u: goto L_0039C1D0;
    case 11u: goto L_0039C1D8;
    case 12u: goto L_0039C254;
    case 13u: goto L_0039C25C;
    case 14u: goto L_0039C274;
    case 15u: goto L_0039C27C;
    case 16u: goto L_0039C2F0;
    case 17u: goto L_0039C388;
    case 18u: goto L_0039C3A8;
    case 19u: goto L_0039C3CC;
    case 20u: goto L_0039C3EC;
    case 21u: goto L_0039C3FC;
    case 22u: goto L_0039C414;
    case 23u: goto L_0039C41C;
    case 24u: goto L_0039C470;
    case 25u: goto L_0039C4E8;
    case 26u: goto L_0039C54C;
    case 27u: goto L_0039C5A4;
    case 28u: goto L_0039C5AC;
    case 29u: goto L_0039C5DC;
    case 30u: goto L_0039C658;
    case 31u: goto L_0039C6BC;
    case 32u: goto L_0039C718;
    case 33u: goto L_0039C728;
    case 34u: goto L_0039C768;
    case 35u: goto L_0039C7A4;
    case 36u: goto L_0039C7C4;
    case 37u: goto L_0039C7D8;
    case 38u: goto L_0039C7EC;
    case 39u: goto L_0039C844;
    case 40u: goto L_0039C84C;
    case 41u: goto L_0039C870;
    case 42u: goto L_0039C8E8;
    case 43u: goto L_0039C94C;
    case 44u: goto L_0039C9AC;
    case 45u: goto L_0039C9C4;
    case 46u: goto L_0039C9C8;
    case 47u: goto L_0039C9DC;
    case 48u: goto L_0039C9F8;
    case 49u: goto L_0039CA0C;
    case 50u: goto L_0039CA20;
    case 51u: goto L_0039CA78;
    case 52u: goto L_0039CACC;
    case 53u: goto L_0039CB34;
    case 54u: goto L_0039CBC8;
    case 55u: goto L_0039CBCC;
    case 56u: goto L_0039CC8C;
    case 57u: goto L_0039CCB0;
    case 58u: goto L_0039CCC4;
    case 59u: goto L_0039CCE0;
    case 60u: goto L_0039CD0C;
    case 61u: goto L_0039CD20;
    case 62u: goto L_0039CD58;
    case 63u: goto L_0039CD70;
    case 64u: goto L_0039CD84;
    case 65u: goto L_0039CD8C;
    case 66u: goto L_0039CDB0;
    case 67u: goto L_0039CE60;
    case 68u: goto L_0039CE70;
    case 69u: goto L_0039CEB0;
    case 70u: goto L_0039CEB4;
    case 71u: goto L_0039CEC8;
    case 72u: goto L_0039CED4;
    case 73u: goto L_0039CF0C;
    case 74u: goto L_0039CF34;
    case 75u: goto L_0039CF48;
    case 76u: goto L_0039CF68;
    case 77u: goto L_0039CF74;
    case 78u: goto L_0039CF9C;
    case 79u: goto L_0039CFC0;
    case 80u: goto L_0039CFE0;
    case 81u: goto L_0039D088;
    case 82u: goto L_0039D0A0;
    case 83u: goto L_0039D0BC;
    case 84u: goto L_0039D0C4;
    case 85u: goto L_0039D10C;
    case 86u: goto L_0039D138;
    case 87u: goto L_0039D158;
    case 88u: goto L_0039D178;
    case 89u: goto L_0039D198;
    case 90u: goto L_0039D228;
    case 91u: goto L_0039D240;
    case 92u: goto L_0039D260;
    case 93u: goto L_0039D314;
    case 94u: goto L_0039D32C;
    case 95u: goto L_0039D358;
    case 96u: goto L_0039D370;
    case 97u: goto L_0039D38C;
    case 98u: goto L_0039D3B0;
    case 99u: goto L_0039D460;
    case 100u: goto L_0039D4E8;
    case 101u: goto L_0039D670;
    case 102u: goto L_0039D6C0;
    case 103u: goto L_0039D728;
    case 104u: goto L_0039D810;
    case 105u: goto L_0039D81C;
    case 106u: goto L_0039D828;
    case 107u: goto L_0039D8D4;
    case 108u: goto L_0039D918;
    case 109u: goto L_0039D91C;
    case 110u: goto L_0039D9AC;
    case 111u: goto L_0039DA64;
    case 112u: goto L_0039DACC;
    case 113u: goto L_0039DB4C;
    case 114u: goto L_0039DB6C;
    case 115u: goto L_0039DBE8;
    case 116u: goto L_0039DC98;
    case 117u: goto L_0039DD08;
    case 118u: goto L_0039DD24;
    case 119u: goto L_0039DDCC;
    case 120u: goto L_0039DE2C;
    case 121u: goto L_0039DE60;
    case 122u: goto L_0039DF0C;
    case 123u: goto L_0039DF58;
    case 124u: goto L_0039DF90;
    case 125u: goto L_0039DFC0;
    case 126u: goto L_0039DFF0;
    case 127u: goto L_0039E010;
    case 128u: goto L_0039E040;
    case 129u: goto L_0039E250;
    case 130u: goto L_0039E300;
    case 131u: goto L_0039E3B0;
    case 132u: goto L_0039E3C0;
    case 133u: goto L_0039E3D0;
    case 134u: goto L_0039E40C;
    case 135u: goto L_0039E41C;
    case 136u: goto L_0039E430;
    case 137u: goto L_0039E468;
    case 138u: goto L_0039E488;
    case 139u: goto L_0039E4C8;
    case 140u: goto L_0039E4CC;
    case 141u: goto L_0039E4F4;
    case 142u: goto L_0039E57C;
    case 143u: goto L_0039E5A4;
    case 144u: goto L_0039E5AC;
    case 145u: goto L_0039E5D0;
    case 146u: goto L_0039E628;
    case 147u: goto L_0039E650;
    case 148u: goto L_0039E6A8;
    case 149u: goto L_0039E6E8;
    case 150u: goto L_0039E744;
    case 151u: goto L_0039E764;
    case 152u: goto L_0039E7C0;
    case 153u: goto L_0039E804;
    case 154u: goto L_0039E828;
    case 155u: goto L_0039E83C;
    case 156u: goto L_0039E854;
    case 157u: goto L_0039E874;
    case 158u: goto L_0039E898;
    case 159u: goto L_0039E8AC;
    case 160u: goto L_0039E90C;
    case 161u: goto L_0039E988;
    case 162u: goto L_0039E9EC;
    case 163u: goto L_0039EA3C;
    case 164u: goto L_0039EA5C;
    case 165u: goto L_0039EAC0;
    case 166u: goto L_0039EB38;
    case 167u: goto L_0039EB9C;
    case 168u: goto L_0039EC24;
    case 169u: goto L_0039EC48;
    case 170u: goto L_0039EC5C;
    case 171u: goto L_0039EC70;
    case 172u: goto L_0039EC90;
    case 173u: goto L_0039ECB4;
    case 174u: goto L_0039ECC8;
    case 175u: goto L_0039ED20;
    case 176u: goto L_0039ED98;
    case 177u: goto L_0039EDFC;
    case 178u: goto L_0039EEC0;
    case 179u: goto L_0039EF38;
    case 180u: goto L_0039EF9C;
    case 181u: goto L_0039F02C;
    case 182u: goto L_0039F038;
    case 183u: goto L_0039F05C;
    case 184u: goto L_0039F064;
    case 185u: goto L_0039F090;
    case 186u: goto L_0039F0A0;
    case 187u: goto L_0039F0C8;
    case 188u: goto L_0039F0D0;
    case 189u: goto L_0039F118;
    case 190u: goto L_0039F160;
    case 191u: goto L_0039F18C;
    case 192u: goto L_0039F1C8;
    case 193u: goto L_0039F1D4;
    case 194u: goto L_0039F1DC;
    case 195u: goto L_0039F24C;
    case 196u: goto L_0039F278;
    case 197u: goto L_0039F28C;
    case 198u: goto L_0039F2B0;
    case 199u: goto L_0039F2B8;
    case 200u: goto L_0039F308;
    case 201u: goto L_0039F310;
    case 202u: goto L_0039F33C;
    case 203u: goto L_0039F398;
    case 204u: goto L_0039F410;
    case 205u: goto L_0039F474;
    case 206u: goto L_0039F4E0;
    case 207u: goto L_0039F500;
    case 208u: goto L_0039F520;
    case 209u: goto L_0039F57C;
    case 210u: goto L_0039F5A8;
    case 211u: goto L_0039F630;
    case 212u: goto L_0039F670;
    case 213u: goto L_0039F690;
    case 214u: goto L_0039F6B0;
    case 215u: goto L_0039F6D0;
    case 216u: goto L_0039F778;
    case 217u: goto L_0039F790;
    case 218u: goto L_0039F7AC;
    case 219u: goto L_0039F7D4;
    case 220u: goto L_0039F8A8;
    case 221u: goto L_0039F8B8;
    case 222u: goto L_0039F8D8;
    case 223u: goto L_0039F8F8;
    case 224u: goto L_0039F988;
    case 225u: goto L_0039F9A0;
    case 226u: goto L_0039F9C0;
    case 227u: goto L_0039FA60;
    case 228u: goto L_0039FAA4;
    case 229u: goto L_0039FB60;
    case 230u: goto L_0039FB98;
    case 231u: goto L_0039FC08;
    case 232u: goto L_0039FC28;
    case 233u: goto L_0039FCA0;
    case 234u: goto L_0039FD04;
    case 235u: goto L_0039FD8C;
    case 236u: goto L_0039FE04;
    case 237u: goto L_0039FE68;
    case 238u: goto L_0039FEB4;
    case 239u: goto L_0039FEC4;
    case 240u: goto L_0039FED4;
    case 241u: goto L_0039FF40;
    case 242u: goto L_0039FFF4;
    default: bad_entry(c, 0x0039C000u); return;
    }
L_0039C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C008u);  if (depth < kMaxDepth) unit_0068(c, 64u, depth + 1u); else { c.pc = 0x003A1380u; return; } if (c.pc != 0x0039C008u) [[unlikely]] return; }
L_0039C008:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039CA80; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039CA80; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C034u) [[unlikely]] return; }
L_0039C034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039CA80; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C04Cu); st32((c.r[16].w[0] + 184u), 0u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039C04Cu) [[unlikely]] return; }
L_0039C04C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_0039CA80; } }
L_0039C058:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[18], c.r[2].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039C0D8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0039C07C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039C0C4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0039C0C4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 213u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039C0D8; } }
L_0039C0C4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C07Cu | kUnwind; return; } goto L_0039C07C; } }
    c.budget -= 1;
L_0039C0D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 200u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 200u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 214u)));
    c.r[2].d[0] = c.r[6].d[0] << 56;
    set32(c.r[4], 0u + 10u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 8;
L_0039C0F8:
    c.r[5].d[0] = c.r[6].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039C164; } }
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 213u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 214u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039CAAC; } }
L_0039C15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039C19C; } }
L_0039C164:
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0039C180; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039C180:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C0F8u | kUnwind; return; } goto L_0039C0F8; } }
    breakpoint(c, 0x0039C190u);
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0039C19C:
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C1C8u); st32((c.r[3].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039C1C8u) [[unlikely]] return; }
L_0039C1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 22u, depth + 1u); else { c.pc = 0x003A05E0u; return; } if (c.pc != 0x0039C1D0u) [[unlikely]] return; }
L_0039C1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039CA78; } }
L_0039C1D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039C208; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039C208; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039C208:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039CD8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039C268; } }
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 145u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 144u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C254u); c.r[8].d[0] = c.r[3].d[0] >> 63;  if (depth < kMaxDepth) unit_0023(c, 135u, depth + 1u); else { c.pc = 0x0028D5D0u; return; } if (c.pc != 0x0039C254u) [[unlikely]] return; }
L_0039C254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C25Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0039C25Cu) [[unlikely]] return; }
L_0039C25C:
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.budget -= 3;
L_0039C268:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C274u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039C274u) [[unlikely]] return; }
L_0039C274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039CA78; } }
L_0039C27C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039C2AC; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039C2AC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039C2AC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039CD8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039CAB4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 80u));
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C2F0u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x0039C2F0u) [[unlikely]] return; }
L_0039C2F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.f[3] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[4] = ld32((c.r[3].w[0] + 104u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    set32(c.r[2], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[3] = c.r[4].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 31;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039C3B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C388u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_0068(c, 15u, depth + 1u); else { c.pc = 0x003A03B0u; return; } if (c.pc != 0x0039C388u) [[unlikely]] return; }
L_0039C388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039C3EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 15u, depth + 1u); else { c.pc = 0x003A03B0u; return; } if (c.pc != 0x0039C3A8u) [[unlikely]] return; }
L_0039C3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  if (t) { goto L_0039C3F0; } }
L_0039C3B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    set32(c.r[5], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3CCu); c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_0068(c, 15u, depth + 1u); else { c.pc = 0x003A03B0u; return; } if (c.pc != 0x0039C3CCu) [[unlikely]] return; }
L_0039C3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039C3EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 15u, depth + 1u); else { c.pc = 0x003A03B0u; return; } if (c.pc != 0x0039C3ECu) [[unlikely]] return; }
L_0039C3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.budget -= 1;
L_0039C3F0:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3FCu); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0039C3FCu) [[unlikely]] return; }
L_0039C3FC:
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C414u); st32((c.r[16].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039C414u) [[unlikely]] return; }
L_0039C414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039CA78; } }
L_0039C41C:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039C44C; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039C44C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039C44C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0039CD8C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 8u);  if (t) { goto L_0039C4C8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0039C470:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039C4B8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0039C4B8; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039C4C8; } }
L_0039C4B8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C470u | kUnwind; return; } goto L_0039C470; } }
L_0039C4C8:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_0039C4E8:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039C554; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039CB10; } }
L_0039C54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039C58C; } }
L_0039C554:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0039C570; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039C570:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C4E8u | kUnwind; return; } goto L_0039C4E8; } }
    breakpoint(c, 0x0039C580u);
    c.r[8].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0039C58C:
    set32(c.r[5], 0u + 1u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5A4u); st32((c.r[16].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039C5A4u) [[unlikely]] return; }
L_0039C5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039CA78; } }
L_0039C5AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039C638; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0039C5DC:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039C624; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0039C624; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039C638; } }
L_0039C624:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C5DCu | kUnwind; return; } goto L_0039C5DC; } }
    c.budget -= 1;
L_0039C638:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_0039C658:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039C6C4; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039CB18; } }
L_0039C6BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039C6FC; } }
L_0039C6C4:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0039C6E0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039C6E0:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C658u | kUnwind; return; } goto L_0039C658; } }
    breakpoint(c, 0x0039C6F0u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_0039C6FC:
    set32(c.r[2], 0u + 3u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C718u); st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039C718u) [[unlikely]] return; }
L_0039C718:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 198u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039CB20; } }
L_0039C728:
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039C74C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039C754; } }
L_0039C74C:
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1267u));
    c.budget -= 2;
L_0039C754:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039CCCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039CC94; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039C768:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039CCB8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039CD8C; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039CA78; } }
L_0039C7A4:
    set32(c.r[18], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0039CD14; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C7C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C7C4u) [[unlikely]] return; }
L_0039C7C4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C7D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C7D8u) [[unlikely]] return; }
L_0039C7D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C7ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x0039C7ECu) [[unlikely]] return; }
L_0039C7EC:
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[3].w[0] + 104u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039CD8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039C834; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039C834; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039C834:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039CD8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C844u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 313u, depth + 1u); else { c.pc = 0x0039B940u; return; } if (c.pc != 0x0039C844u) [[unlikely]] return; }
L_0039C844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039CA78; } }
L_0039C84C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039C8C8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0039C870:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039C8B8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0039C8B8; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039C8C8; } }
L_0039C8B8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C870u | kUnwind; return; } goto L_0039C870; } }
L_0039C8C8:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_0039C8E8:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039C954; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039CD28; } }
L_0039C94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039C98C; } }
L_0039C954:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0039C970; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039C970:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C8E8u | kUnwind; return; } goto L_0039C8E8; } }
    breakpoint(c, 0x0039C980u);
    c.r[8].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0039C98C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C9ACu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039C9ACu) [[unlikely]] return; }
L_0039C9AC:
    c.f[2] = ld32((c.r[16].w[0] + 180u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039CD30; } }
L_0039C9C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_0039C9C8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039CD60; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 1;
L_0039C9DC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0039CD78; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C9F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C9F8u) [[unlikely]] return; }
L_0039C9F8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039CA0Cu) [[unlikely]] return; }
L_0039CA0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x0039CA20u) [[unlikely]] return; }
L_0039CA20:
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[3].w[0] + 104u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039CD8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039CA68; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039CA68; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039CA68:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039CD8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 313u, depth + 1u); else { c.pc = 0x0039B940u; return; } if (c.pc != 0x0039CA78u) [[unlikely]] return; }
L_0039CA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039CD90; } }
L_0039CA80:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039CD8C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15472u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_0067[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039CAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C15Cu | kUnwind; return; } goto L_0039C15C; } }
L_0039CAB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], c.r[2].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CACCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x0039CACCu) [[unlikely]] return; }
L_0039CACC:
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 5u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[5].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 117u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CA78u | kUnwind; return; } goto L_0039CA78; } }
L_0039CB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C54Cu | kUnwind; return; } goto L_0039C54C; } }
L_0039CB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C6BCu | kUnwind; return; } goto L_0039C6BC; } }
L_0039CB20:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CB34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039CB34u) [[unlikely]] return; }
L_0039CB34:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], 0u - 5u);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 172u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[8].d[0] = ld8((c.r[3].w[0] + 95u));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 95u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 25;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0039CC00; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 530u));
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039CC00; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 95u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CBC8u); set32(c.r[4], ld32((c.r[3].w[0] + 40u)));  if (depth < kMaxDepth) unit_0063(c, 55u, depth + 1u); else { c.pc = 0x0038CB10u; return; } if (c.pc != 0x0039CBC8u) [[unlikely]] return; }
L_0039CBC8:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 198u));
    c.budget -= 1;
L_0039CBCC:
    set32(c.r[5], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 198u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 198u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 198u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C728u | kUnwind; return; } goto L_0039C728; } }
L_0039CC00:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0039CC74; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039CC74; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 1388u)));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039CC3C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 1396u)));
    c.r[4].d[0] = c.r[4].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 5;
L_0039CC3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039CC74; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[4].d[0] = c.r[4].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039CC74; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 95u));
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CBC8u | kUnwind; return; } goto L_0039CBC8; } }
L_0039CC74:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CBC8u | kUnwind; return; } goto L_0039CBC8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[16].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC8Cu); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 35u, depth + 1u); else { c.pc = 0x00300C70u; return; } if (c.pc != 0x0039CC8Cu) [[unlikely]] return; }
L_0039CC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[16].w[0] + 198u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CBCCu | kUnwind; return; } goto L_0039CBCC; } }
L_0039CC94:
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CCB0u); set32(c.r[4], c.r[3].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 8u, depth + 1u); else { c.pc = 0x003001B0u; return; } if (c.pc != 0x0039CCB0u) [[unlikely]] return; }
L_0039CCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C768u | kUnwind; return; } goto L_0039C768; } }
L_0039CCB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CCC4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039CCC4u) [[unlikely]] return; }
L_0039CCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CA78u | kUnwind; return; } goto L_0039CA78; } }
L_0039CCCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CCE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039CCE0u) [[unlikely]] return; }
L_0039CCE0:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD0Cu); st32((c.r[16].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039CD0Cu) [[unlikely]] return; }
L_0039CD0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CA78u | kUnwind; return; } goto L_0039CA78; } }
L_0039CD14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039CD20u) [[unlikely]] return; }
L_0039CD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CA78u | kUnwind; return; } goto L_0039CA78; } }
L_0039CD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C94Cu | kUnwind; return; } goto L_0039C94C; } }
L_0039CD30:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 180u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C9C4u | kUnwind; return; } goto L_0039C9C4; } }
    st32((c.r[16].w[0] + 180u), c.f[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD58u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039CD58u) [[unlikely]] return; }
L_0039CD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C9C8u | kUnwind; return; } goto L_0039C9C8; } }
L_0039CD60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD70u); st32((c.r[16].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039CD70u) [[unlikely]] return; }
L_0039CD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 184u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C9DCu | kUnwind; return; } goto L_0039C9DC; } }
L_0039CD78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039CD84u) [[unlikely]] return; }
L_0039CD84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CA78u | kUnwind; return; } goto L_0039CA78; } }
L_0039CD8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0039CD90:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039CDB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[15].d[0] = 0ull & 1ull;
    c.r[24].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    set32(c.r[13], 0u - 9u);
    set32(c.r[14], c.r[15].w[0] << 3);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[15].w[0] << 6);
    set32(c.r[10], 0u - 2u);
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[3].w[0] + 532u), c.r[24].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[24].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[3].d[0] = c.r[3].d[0] | 62154ull;
    c.r[13].d[0] = c.r[24].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 108u), c.r[3].w[0]);  c.pc = t; return; }
L_0039CE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039CE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_0039CEA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_0039CEA8; } }
L_0039CEA4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039CEA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039CF7C; } }
L_0039CEB0:
    c.f[1] = ld32((c.r[16].w[0] + 188u));
    c.budget -= 1;
L_0039CEB4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039D2F0; } }
L_0039CEC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039D304; } }
L_0039CED4:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x040B0000u);
    c.r[4].d[0] = c.r[3].d[0] | 41530ull;
    st32((c.r[6].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_0039CEFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));  if (t) { goto L_0039CF00; } }
L_0039CEFC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039CF00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039D324; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 1;
L_0039CF0C:
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039CF50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039D334; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039CF34u) [[unlikely]] return; }
L_0039CF34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039CF68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF48u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039CF48u) [[unlikely]] return; }
L_0039CF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_0039CF6C; } }
L_0039CF50:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039CF68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039CF68u) [[unlikely]] return; }
L_0039CF68:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_0039CF6C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039D394; } }
L_0039CF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0039D3A0; } }
L_0039CF7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 222u)));
    set32(c.r[5], c.r[4].w[0] + 8u);
    st8((c.r[4].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 216u), 0u);
    set32(c.r[3], 0u + 10u);
    c.budget -= 8;
L_0039CF9C:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039D010; } }
    c.budget -= 1;
L_0039CFC0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0039D270; } }
    c.budget -= 1;
L_0039CFE0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0039D278; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CFC0u | kUnwind; return; } goto L_0039CFC0; } }
    c.budget -= 1;
L_0039D010:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[11], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[10].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[11].d[0];
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_0039D280; } }
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
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0039D0A0; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0039D2A0; } }
    c.budget -= 1;
L_0039D088:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0039D0A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039D0BC; } }
L_0039D0A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CF9Cu | kUnwind; return; } goto L_0039CF9C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0039D0BC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CEB0u | kUnwind; return; } goto L_0039CEB0; } }
L_0039D0C4:
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039D0E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D110; } }
    c.budget -= 1;
L_0039D0E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039D110; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039D110; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D10Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039D10Cu) [[unlikely]] return; }
L_0039D10C:
    c.budget -= 1;
L_0039D110:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_0039D2A8; } }
    c.budget -= 1;
L_0039D138:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039D2B0; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_0039D158:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039D1C8; } }
L_0039D178:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0039D2B8; } }
    c.budget -= 1;
L_0039D198:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0039D2C0; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D178u | kUnwind; return; } goto L_0039D178; } }
    c.budget -= 1;
L_0039D1C8:
    set32(c.r[10], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_0039D2C8; } }
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
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0039D240; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0039D2E8; } }
L_0039D228:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0039D240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039D260; } }
L_0039D240:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D158u | kUnwind; return; } goto L_0039D158; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0039D260:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D0C4u | kUnwind; return; } goto L_0039D0C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 188u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CEB4u | kUnwind; return; } goto L_0039CEB4; } }
L_0039D270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CFE0u | kUnwind; return; } goto L_0039CFE0; } }
L_0039D278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D0BCu | kUnwind; return; } goto L_0039D0BC; } }
L_0039D280:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D0A0u | kUnwind; return; } goto L_0039D0A0; } }
L_0039D2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D088u | kUnwind; return; } goto L_0039D088; } }
L_0039D2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D138u | kUnwind; return; } goto L_0039D138; } }
L_0039D2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D260u | kUnwind; return; } goto L_0039D260; } }
L_0039D2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D198u | kUnwind; return; } goto L_0039D198; } }
L_0039D2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D260u | kUnwind; return; } goto L_0039D260; } }
L_0039D2C8:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D240u | kUnwind; return; } goto L_0039D240; } }
L_0039D2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D228u | kUnwind; return; } goto L_0039D228; } }
L_0039D2F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CEC8u | kUnwind; return; } goto L_0039CEC8; } }
L_0039D304:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D314u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039D314u) [[unlikely]] return; }
L_0039D314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CED4u | kUnwind; return; } goto L_0039CED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 184u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CED4u | kUnwind; return; } goto L_0039CED4; } }
L_0039D324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D32Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 189u, depth + 1u); else { c.pc = 0x003A3CC0u; return; } if (c.pc != 0x0039D32Cu) [[unlikely]] return; }
L_0039D32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CF0Cu | kUnwind; return; } goto L_0039CF0C; } }
L_0039D334:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 180u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 180u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039D358u) [[unlikely]] return; }
L_0039D358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CF68u | kUnwind; return; } goto L_0039CF68; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D370u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039D370u) [[unlikely]] return; }
L_0039D370:
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CF68u | kUnwind; return; } goto L_0039CF68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D38Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0066(c, 332u, depth + 1u); else { c.pc = 0x0039BEC0u; return; } if (c.pc != 0x0039D38Cu) [[unlikely]] return; }
L_0039D38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CF68u | kUnwind; return; } goto L_0039CF68; } }
L_0039D394:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CF74u | kUnwind; return; } goto L_0039CF74; } }
L_0039D3A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D3B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[15].d[0] = 0ull & 1ull;
    c.r[24].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    set32(c.r[13], 0u - 9u);
    set32(c.r[14], c.r[15].w[0] << 3);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[15].w[0] << 6);
    set32(c.r[10], 0u - 2u);
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[3].w[0] + 532u), c.r[24].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[24].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[3].d[0] = c.r[3].d[0] | 62154ull;
    c.r[13].d[0] = c.r[24].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 108u), c.r[3].w[0]);  c.pc = t; return; }
L_0039D460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[15], ld32((c.r[29].w[0] + 48u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[12], c.r[12].w[0] - 8544u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[15].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), c.r[14].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8528u);
    set32(c.r[13], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[4].w[0] + 16u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[10].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0]), c.r[12].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D4E8u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 38u, depth + 1u); else { c.pc = 0x003A48D0u; return; } if (c.pc != 0x0039D4E8u) [[unlikely]] return; }
L_0039D4E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[2], c.r[2].w[0] - 8416u);
    set32(c.r[24], 0u - 5u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 144u));
    set32(c.r[3], 0u - 3u);
    set32(c.r[14], 0u - 9u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[12], 0u - 17u);
    set32(c.r[13], c.r[2].w[0] << 4);
    set32(c.r[10], 0u - 33u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[8], 0u - 65u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[6], 0u - 129u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u - 2u);
    c.r[17].d[0] = ld8((c.r[16].w[0] + 144u));
    set32(c.r[3], 0u + 55u);
    c.r[24].d[0] = c.r[17].d[0] & c.r[24].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[25].d[0];
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[24].d[0] = ld8((c.r[16].w[0] + 144u));
    c.r[14].d[0] = c.r[24].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[16].w[0] + 144u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[16].w[0] + 144u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[16].w[0] + 144u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 144u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 146u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 144u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 256u));
    c.budget -= 61;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0039D5E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_0039D5F0; } }
L_0039D5E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 2;
L_0039D5F0:
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 145u));
    set32(c.r[6], c.r[6].w[0] - 8448u);
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0] + 752u)));
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[8].d[0] = ld8((c.r[9].w[0] + 121u));
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 145u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[16].w[0]), c.r[6].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 192u), c.r[4].w[0]);
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 188u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D670:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039D6B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8416u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0039D6B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8528u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0039D6B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_0039D6B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0039D6B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0039D6C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.f[22] = ld32((c.r[29].w[0] + 92u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039DE04; } }
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039DB54; } }
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039DB54; } }
L_0039D728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[5] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.f[6] = ld32((c.r[17].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.f[2] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    c.f[4] = c.r[3].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.f[0] = ld32((c.r[2].w[0] + 280u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    set32(c.r[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[7] = c.r[4].w[0];
    c.f[0] = c.f[1] ^ fp::kSign;
    c.f[7] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    c.f[7] = fp::cvt_w_s(c.f[7]);
    c.f[7] = fp::cvt_s_w(c.f[7]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[7]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039DC20; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039DC74; } }
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[1]);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.budget -= 21;
L_0039D810:
    c.f[20] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D81Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0039D81Cu) [[unlikely]] return; }
L_0039D81C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D828u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0039D828u) [[unlikely]] return; }
L_0039D828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[6], 0u + 1u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], 0u + 255u);
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[28].w[0] - 30496u);
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 129u);
    set32(c.r[7], 0u + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = 0u;
    set32(c.r[2], c.r[29].w[0] + 130u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 131u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D8D4u); st32((c.r[29].w[0] + 124u), c.f[22]);  if (depth < kMaxDepth) unit_0018(c, 197u, depth + 1u); else { c.pc = 0x00262AA0u; return; } if (c.pc != 0x0039D8D4u) [[unlikely]] return; }
L_0039D8D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = 0u;
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[20]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 72u), c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D918u); set32(c.r[6], c.r[3].w[0] + 80u);  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x0039D918u) [[unlikely]] return; }
L_0039D918:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_0039D91C:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039DE3C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.f[1] = ld32((c.r[17].w[0] + 128u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 280u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 128u), c.f[1]);  if (t) { goto L_0039DE3C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0039D968; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0039D984; } }
L_0039D968:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0039D984:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D9ACu); c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0039D9ACu) [[unlikely]] return; }
L_0039D9AC:
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039DE3C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 811u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039DA00; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0039DA00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039DA1C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039DA24; } }
L_0039DA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0039DA64; } }
L_0039DA24:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039DA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0039DA64; } }
L_0039DA40:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039DE34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039DE34; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039DA64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039DE3C; } }
    set32(c.r[10], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 2049u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[2], 0u + 49u);
    c.r[9].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[17].w[0] + 44u)));
    st16((c.r[16].w[0] + 162u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DACCu); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x0039DACCu) [[unlikely]] return; }
L_0039DACC:
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    set32(c.r[4], 0u - 9u);
    c.f[1] = ld32((c.r[2].w[0] + 112u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], 0u - 129u);
    set32(c.r[5], 0u + 13u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[16].w[0] + 168u), c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[1]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 40u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[4].d[0] & 32ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] ^ 32ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB4Cu); c.r[6].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0062(c, 54u, depth + 1u); else { c.pc = 0x00388FF0u; return; } if (c.pc != 0x0039DB4Cu) [[unlikely]] return; }
L_0039DB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039DE40; } }
L_0039DB54:
    c.f[0] = ld32((c.r[5].w[0] + 104u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB6Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0039DB6Cu) [[unlikely]] return; }
L_0039DB6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 0ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DBE8u); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0039DBE8u) [[unlikely]] return; }
L_0039DBE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[4].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D000000u);
    c.r[2].d[0] = c.r[2].d[0] | 44541ull;
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 132u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D728u | kUnwind; return; } goto L_0039D728; } }
L_0039DC20:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[1]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 136u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D810u | kUnwind; return; } goto L_0039D810; } }
L_0039DC74:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DC98u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x0039DC98u) [[unlikely]] return; }
L_0039DC98:
    c.f[3] = ld32((c.r[17].w[0] + 140u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.f[2] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD08u); c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0039DD08u) [[unlikely]] return; }
L_0039DD08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD24u); c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0039DD24u) [[unlikely]] return; }
L_0039DD24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[5] = c.r[2].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[6] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[5].d[0] = c.r[2].d[0] | 4059ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.f[3] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.f[4] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[2] = ld32((c.r[17].w[0] + 140u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[20], c.f[3]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DDCCu); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0039DDCCu) [[unlikely]] return; }
L_0039DDCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[4].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D000000u);
    c.r[2].d[0] = c.r[2].d[0] | 44541ull;
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 132u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D810u | kUnwind; return; } goto L_0039D810; } }
L_0039DE04:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D918u | kUnwind; return; } goto L_0039D918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE2Cu);  if (depth < kMaxDepth) unit_0068(c, 164u, depth + 1u); else { c.pc = 0x003A3590u; return; } if (c.pc != 0x0039DE2Cu) [[unlikely]] return; }
L_0039DE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D91Cu | kUnwind; return; } goto L_0039D91C; } }
L_0039DE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DA64u | kUnwind; return; } goto L_0039DA64; } }
L_0039DE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0039DE40:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0039DE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 7216u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 7232u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 7248u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 7424u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 7600u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 13u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8528u);
    st32((c.r[4].w[0] + 40u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF0Cu); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 38u, depth + 1u); else { c.pc = 0x003A48D0u; return; } if (c.pc != 0x0039DF0Cu) [[unlikely]] return; }
L_0039DF0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[2].w[0] - 8464u);
    set32(c.r[3], c.r[3].w[0] - 8128u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 148u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8496u);
    set32(c.r[3], ld32((c.r[28].w[0] - 29120u)));
    st32((c.r[17].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 29120u), c.r[5].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF58u); st32((c.r[17].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0039DF58u) [[unlikely]] return; }
L_0039DF58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 128u), c.f[0]);
    st32((c.r[17].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 136u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039DF90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039DFE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8496u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0039DFE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[28].w[0] - 29120u);  if (t) { goto L_0039DFE8; } }
L_0039DFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0039DFD4; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0039DFE8; } }
L_0039DFD4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DFC0u | kUnwind; return; } goto L_0039DFC0; } }
    c.budget -= 1;
L_0039DFE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0039DFF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039E038; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[28].w[0] - 29120u);  if (t) { goto L_0039E038; } }
L_0039E010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0039E024; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0039E038; } }
L_0039E024:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E010u | kUnwind; return; } goto L_0039E010; } }
    c.budget -= 1;
L_0039E038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0039E040:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039E248; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 380u));
    set32(c.r[6], 0u + 201u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 280u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 279u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 278u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 277u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 202u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 195u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 194u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 193u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 191u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 190u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 189u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 188u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 187u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 186u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 185u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 115u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 114u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 184u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 183u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 182u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 181u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 180u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 179u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 178u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 177u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 176u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 175u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 174u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 166u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 168u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 159u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 161u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    set32(c.r[6], 0u + 160u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0039E220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E224; } }
L_0039E220:
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0039E224:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039E248; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0039E248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E250:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[15].d[0] = 0ull & 1ull;
    c.r[24].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    set32(c.r[13], 0u - 9u);
    set32(c.r[14], c.r[15].w[0] << 3);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[15].w[0] << 6);
    set32(c.r[10], 0u - 2u);
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[3].w[0] + 532u), c.r[24].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[24].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[3].d[0] = c.r[3].d[0] | 62154ull;
    c.r[13].d[0] = c.r[24].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 108u), c.r[3].w[0]);  c.pc = t; return; }
L_0039E300:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[15].d[0] = 0ull & 1ull;
    c.r[24].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    set32(c.r[13], 0u - 9u);
    set32(c.r[14], c.r[15].w[0] << 3);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[15].w[0] << 6);
    set32(c.r[10], 0u - 2u);
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[3].w[0] + 532u), c.r[24].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[24].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[3].d[0] = c.r[3].d[0] | 62154ull;
    c.r[13].d[0] = c.r[24].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 117u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 117u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 108u), c.r[3].w[0]);  c.pc = t; return; }
L_0039E3B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D6C0u | kUnwind; return; } goto L_0039D6C0; }
L_0039E3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x040B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[3].d[0] | 41530ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[7].w[0] + 212u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 8u);  if (t) { goto L_0039E400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));  if (t) { goto L_0039E404; } }
L_0039E400:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039E404:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039E414; } }
L_0039E40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039E424; } }
L_0039E414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E41Cu);  if (depth < kMaxDepth) unit_0068(c, 189u, depth + 1u); else { c.pc = 0x003A3CC0u; return; } if (c.pc != 0x0039E41Cu) [[unlikely]] return; }
L_0039E41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E40Cu | kUnwind; return; } goto L_0039E40C; } }
L_0039E424:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039E430:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039E490; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 136u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039F4E8; } }
L_0039E468:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039F4F8; } }
L_0039E488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039F650; } }
L_0039E490:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039E4B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 136u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0039E4B8; } }
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st16((c.r[3].w[0] + 1494u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0039E4B8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 187u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039F508; } }
L_0039E4C8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 136u));
    c.budget -= 1;
L_0039E4CC:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15520u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_0067[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039E4F4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039E560; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 762u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039E560; } }
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039E57C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 187u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039E554; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E57C; } }
L_0039E554:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E57C; } }
L_0039E560:
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039E57C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0039E57C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 164u, depth + 1u); else { c.pc = 0x003A3590u; return; } if (c.pc != 0x0039E5A4u) [[unlikely]] return; }
L_0039E5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F4E0; } }
L_0039E5AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039F5A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0039E5D0:
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039E5FC; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039E5FC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039E5FC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039F64C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E628u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 87u, depth + 1u); else { c.pc = 0x0028CE70u; return; } if (c.pc != 0x0039E628u) [[unlikely]] return; }
L_0039E628:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 187u));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 187u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039F4E0; } }
L_0039E650:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039E684; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039E684; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039E684:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039F5B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039F5B4; } }
L_0039E6A8:
    st8((c.r[16].w[0] + 185u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[4] = ld32((c.r[3].w[0] + 80u));
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 88u));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E6E8u); c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E6E8u) [[unlikely]] return; }
L_0039E6E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 40u));
    c.f[6] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 184u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 23;
    { const bool t = c.r[1].d[0] != 0ull; c.f[23] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_0039E7D8; } }
L_0039E744:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E764u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E764u) [[unlikely]] return; }
L_0039E764:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 40u));
    c.f[6] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039F5BC; } }
    c.budget -= 1;
L_0039E7C0:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 184u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E744u | kUnwind; return; } goto L_0039E744; } }
L_0039E7D8:
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 128u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E804u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E804u) [[unlikely]] return; }
L_0039E804:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E828u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E828u) [[unlikely]] return; }
L_0039E828:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E83Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x0039E83Cu) [[unlikely]] return; }
L_0039E83C:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[4].d[0] = c.r[4].d[0] | 39322ull;
    st32((c.r[3].w[0] + 104u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 186u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039F4E0; } }
L_0039E854:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E874u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E874u) [[unlikely]] return; }
L_0039E874:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E898u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E898u) [[unlikely]] return; }
L_0039E898:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E8ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x0039E8ACu) [[unlikely]] return; }
L_0039E8AC:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[7].d[0] = c.r[2].d[0] | 39322ull;
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], 0u - 33u);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st32((c.r[6].w[0] + 104u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 132u), 0u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 292u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039E968; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0039E90C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039E954; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0039E954; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E968; } }
L_0039E954:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E90Cu | kUnwind; return; } goto L_0039E90C; } }
    c.budget -= 1;
L_0039E968:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_0039E988:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039E9F4; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039F5C8; } }
L_0039E9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039EA2C; } }
L_0039E9F4:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0039EA10; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039EA10:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E988u | kUnwind; return; } goto L_0039E988; } }
    breakpoint(c, 0x0039EA20u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_0039EA2C:
    set32(c.r[2], 0u + 3u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0039EA3C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039EA5Cu) [[unlikely]] return; }
L_0039EA5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55051ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039EC04; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039EB18; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0039EAC0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039EB08; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0039EB08; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039EB18; } }
L_0039EB08:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EAC0u | kUnwind; return; } goto L_0039EAC0; } }
L_0039EB18:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_0039EB38:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039EBA4; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039F5D0; } }
L_0039EB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039EBDC; } }
L_0039EBA4:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0039EBC0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039EBC0:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EB38u | kUnwind; return; } goto L_0039EB38; } }
    breakpoint(c, 0x0039EBD0u);
    c.r[8].d[0] = 0ull + 0ull;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0039EBDC:
    set32(c.r[2], 0u + 3u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 10;
L_0039EC04:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039EC24u) [[unlikely]] return; }
L_0039EC24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039EC48u) [[unlikely]] return; }
L_0039EC48:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC5Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x0039EC5Cu) [[unlikely]] return; }
L_0039EC5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[4].d[0] = c.r[4].d[0] | 39322ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 104u), c.r[4].w[0]);  if (t) { goto L_0039F4E0; } }
L_0039EC70:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039EC90u) [[unlikely]] return; }
L_0039EC90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039ECB4u) [[unlikely]] return; }
L_0039ECB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECC8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x0039ECC8u) [[unlikely]] return; }
L_0039ECC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[4].d[0] = c.r[4].d[0] | 39322ull;
    st32((c.r[3].w[0] + 104u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 186u));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039EE6C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039ED78; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0039ED20:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039ED68; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0039ED68; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0039ED78; } }
L_0039ED68:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039ED20u | kUnwind; return; } goto L_0039ED20; } }
L_0039ED78:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0039ED98:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039EE04; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039F5D8; } }
L_0039EDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039EE3C; } }
L_0039EE04:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0039EE20; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039EE20:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039ED98u | kUnwind; return; } goto L_0039ED98; } }
    breakpoint(c, 0x0039EE30u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0039EE3C:
    set32(c.r[3], 0u + 3u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0039F4E0; } }
L_0039EE6C:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039EE9C; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039EE9C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039EE9C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 8u);  if (t) { goto L_0039EF18; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0039EEC0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039EF08; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0039EF08; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039EF18; } }
L_0039EF08:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EEC0u | kUnwind; return; } goto L_0039EEC0; } }
L_0039EF18:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_0039EF38:
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
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039EFA4; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039F5E0; } }
L_0039EF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039EFDC; } }
L_0039EFA4:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0039EFC0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039EFC0:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EF38u | kUnwind; return; } goto L_0039EF38; } }
    breakpoint(c, 0x0039EFD0u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_0039EFDC:
    set32(c.r[2], 0u + 3u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 8u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 187u));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 187u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 185u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F02Cu); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 212u, depth + 1u); else { c.pc = 0x0028A340u; return; } if (c.pc != 0x0039F02Cu) [[unlikely]] return; }
L_0039F02C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F038u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 439u, depth + 1u); else { c.pc = 0x00387F80u; return; } if (c.pc != 0x0039F038u) [[unlikely]] return; }
L_0039F038:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[3], 0u - 33u);
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 292u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039F4E0; } }
L_0039F05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F064u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x0039F064u) [[unlikely]] return; }
L_0039F064:
    set32(c.r[7], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 27296u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 94u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F090u); st8((c.r[7].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x0039F090u) [[unlikely]] return; }
L_0039F090:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 1494u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039F5E8; } }
L_0039F0A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039F4E0; } }
L_0039F0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F0D0u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x0039F0D0u) [[unlikely]] return; }
L_0039F0D0:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039F118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F118u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x0039F118u) [[unlikely]] return; }
L_0039F118:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F19C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F5F8; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1581u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039F150; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0039F150:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0039F160:
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    set32(c.r[4], c.r[4].w[0] - 13392u);
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F18Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0091(c, 20u, depth + 1u); else { c.pc = 0x00444620u; return; } if (c.pc != 0x0039F18Cu) [[unlikely]] return; }
L_0039F18C:
    set32(c.r[3], 0u + 13u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st16((c.r[3].w[0] + 1494u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0039F19C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F1C8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 209u, depth + 1u); else { c.pc = 0x0028A2E0u; return; } if (c.pc != 0x0039F1C8u) [[unlikely]] return; }
L_0039F1C8:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039F4E0; } }
L_0039F1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F1DCu); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x0039F1DCu) [[unlikely]] return; }
L_0039F1DC:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1494u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0039F604; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F288; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F638; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1581u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039F23C; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0039F23C:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0039F24C:
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    set32(c.r[4], c.r[4].w[0] - 13392u);
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F278u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0091(c, 20u, depth + 1u); else { c.pc = 0x00444620u; return; } if (c.pc != 0x0039F278u) [[unlikely]] return; }
L_0039F278:
    set32(c.r[3], 0u + 13u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st16((c.r[3].w[0] + 1494u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0039F288:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0039F28C:
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039F4E0; } }
L_0039F2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F2B8u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x0039F2B8u) [[unlikely]] return; }
L_0039F2B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 186u));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 186u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039F4E0; } }
L_0039F308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F310u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x0039F310u) [[unlikely]] return; }
L_0039F310:
    set32(c.r[7], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[4], c.r[4].w[0] + 27296u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[7].w[0] + 94u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F33Cu); st8((c.r[7].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x0039F33Cu) [[unlikely]] return; }
L_0039F33C:
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039F64C; } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 292u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[7].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039F3F0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0039F398:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039F3E0; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0039F3E0; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0039F3F0; } }
L_0039F3E0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F398u | kUnwind; return; } goto L_0039F398; } }
L_0039F3F0:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0039F410:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039F47C; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039F644; } }
L_0039F474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039F4B4; } }
L_0039F47C:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0039F498; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039F498:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F410u | kUnwind; return; } goto L_0039F410; } }
    breakpoint(c, 0x0039F4A8u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0039F4B4:
    set32(c.r[3], 0u + 3u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 11;
L_0039F4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F64C; } }
L_0039F4E8:
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 1494u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E468u | kUnwind; return; } goto L_0039E468; } }
L_0039F4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F500u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 164u, depth + 1u); else { c.pc = 0x003A3590u; return; } if (c.pc != 0x0039F500u) [[unlikely]] return; }
L_0039F500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E488u | kUnwind; return; } goto L_0039E488; } }
L_0039F508:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], c.r[4].w[0] - 13392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F520u); set32(c.r[7], c.r[29].w[0] + 111u);  if (depth < kMaxDepth) unit_0091(c, 19u, depth + 1u); else { c.pc = 0x00444610u; return; } if (c.pc != 0x0039F520u) [[unlikely]] return; }
L_0039F520:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039F584; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E4C8u | kUnwind; return; } goto L_0039E4C8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 187u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 187u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F57Cu); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 139u, depth + 1u); else { c.pc = 0x00396240u; return; } if (c.pc != 0x0039F57Cu) [[unlikely]] return; }
L_0039F57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 136u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E4CCu | kUnwind; return; } goto L_0039E4CC; } }
L_0039F584:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 187u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 187u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E4C8u | kUnwind; return; } goto L_0039E4C8; } }
L_0039F5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F5A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 164u, depth + 1u); else { c.pc = 0x003A3590u; return; } if (c.pc != 0x0039F5A8u) [[unlikely]] return; }
L_0039F5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E5D0u | kUnwind; return; } goto L_0039E5D0; } }
L_0039F5B0:
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0039F5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F4E0u | kUnwind; return; } goto L_0039F4E0; } }
L_0039F5BC:
    c.f[23] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 185u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E7C0u | kUnwind; return; } goto L_0039E7C0; } }
L_0039F5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E9ECu | kUnwind; return; } goto L_0039E9EC; } }
L_0039F5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EB9Cu | kUnwind; return; } goto L_0039EB9C; } }
L_0039F5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EDFCu | kUnwind; return; } goto L_0039EDFC; } }
L_0039F5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EF9Cu | kUnwind; return; } goto L_0039EF9C; } }
L_0039F5E8:
    set32(c.r[3], 0u + 9u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 132u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F0A0u | kUnwind; return; } goto L_0039F0A0; } }
L_0039F5F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 15360u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F160u | kUnwind; return; } goto L_0039F160; } }
L_0039F604:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 187u));
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 27296u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 187u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F630u); st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x0039F630u) [[unlikely]] return; }
L_0039F630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F28Cu | kUnwind; return; } goto L_0039F28C; } }
L_0039F638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 15360u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F24Cu | kUnwind; return; } goto L_0039F24C; } }
L_0039F644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F474u | kUnwind; return; } goto L_0039F474; } }
L_0039F64C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0039F650:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0039F670:
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 222u)));
    set32(c.r[6], c.r[5].w[0] + 8u);
    st8((c.r[5].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 216u), 0u);
    set32(c.r[3], 0u + 10u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
L_0039F690:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039F700; } }
L_0039F6B0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0039F9D0; } }
    c.budget -= 1;
L_0039F6D0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_0039F9D8; } }
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F6B0u | kUnwind; return; } goto L_0039F6B0; } }
    c.budget -= 1;
L_0039F700:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[12], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[11], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[11].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[12].d[0];
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[9], c.r[11].w[0] + 16u);  if (t) { goto L_0039F9E0; } }
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | c.r[12].d[0];
    st32((c.r[9].w[0]), c.r[7].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 204u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 12u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[9].d[0];
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0039F790; } }
    set32(c.r[7], c.r[11].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0039FA00; } }
    c.budget -= 1;
L_0039F778:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0039F790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0039F7AC; } }
L_0039F790:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F690u | kUnwind; return; } goto L_0039F690; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0039F7AC:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_0039F9C8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[3], 0u + 10u);
    c.f[1] = c.r[8].w[0];
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], 0u + 8192u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[8], 0u + 4u);
    c.budget -= 8;
L_0039F7D4:
    set32(c.r[9], ld32((c.r[10].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_0039F848; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_0039F7F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F888; } }
L_0039F7F0:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 136u));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_0039F830; } }
    set32(c.r[9], ld32((c.r[4].w[0] + 36u)));
    c.r[9].d[0] = ld8((c.r[9].w[0] + 284u));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[5].d[0];  if (t) { goto L_0039F830; } }
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 128u), c.f[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[9], ld32((c.r[10].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[9].w[0] + 752u)));
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[10].w[0] + 108u), c.f[0]);
    st8((c.r[4].w[0] + 136u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_0039F830:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 136u));
    c.r[1].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0039F888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F888; } }
L_0039F848:
    c.r[9].d[0] = ld8((c.r[10].w[0] + 4u));
    c.r[1].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039F888; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 136u));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_0039F888; } }
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 128u), c.f[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[9], ld32((c.r[10].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[9].w[0] + 752u)));
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[10].w[0] + 108u), c.f[0]);
    st8((c.r[4].w[0] + 136u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_0039F888:
    set32(c.r[11], ld32((c.r[4].w[0] + 36u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 220u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[11].w[0] + 220u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = c.r[9].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[9].d[0] == c.r[3].d[0]; set32(c.r[10], c.r[11].w[0] + 8u);  if (t) { goto L_0039FA08; } }
L_0039F8A8:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == c.r[9].d[0];  if (t) { goto L_0039FA10; } }
L_0039F8B8:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[15], c.r[10].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[15].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[11].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0039F928; } }
L_0039F8D8:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[11].d[0] == c.r[3].d[0];  if (t) { goto L_0039FA18; } }
    c.budget -= 1;
L_0039F8F8:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[11].d[0];  if (t) { goto L_0039FA20; } }
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[15], c.r[10].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[15].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F8D8u | kUnwind; return; } goto L_0039F8D8; } }
    c.budget -= 1;
L_0039F928:
    set32(c.r[14], ld32((c.r[10].w[0] + 208u)));
    set32(c.r[11], ld32((c.r[15].w[0] + 16u)));
    c.r[11].d[0] = c.r[11].d[0] & c.r[14].d[0];
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[12], c.r[15].w[0] + 16u);  if (t) { goto L_0039FA28; } }
    set32(c.r[11], ld32((c.r[12].w[0])));
    c.r[11].d[0] = c.r[11].d[0] | c.r[14].d[0];
    st32((c.r[12].w[0]), c.r[11].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    set32(c.r[11], ld32((c.r[10].w[0] + 204u)));
    set32(c.r[12], c.r[14].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[12].w[0] + 12u)));
    c.r[11].d[0] = c.r[11].d[0] & c.r[12].d[0];
    c.budget -= 13;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_0039F9A0; } }
    set32(c.r[11], c.r[14].w[0] + 1u);
    st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[11].d[0] == c.r[3].d[0]; c.r[9].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_0039FA48; } }
L_0039F988:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_0039F9A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0039F9C0; } }
L_0039F9A0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F8B8u | kUnwind; return; } goto L_0039F8B8; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 212u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 6;
L_0039F9C0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F7D4u | kUnwind; return; } goto L_0039F7D4; } }
L_0039F9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039FA50; } }
L_0039F9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F6D0u | kUnwind; return; } goto L_0039F6D0; } }
L_0039F9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F7ACu | kUnwind; return; } goto L_0039F7AC; } }
L_0039F9E0:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[11].w[0] + 12u), c.r[8].w[0]);
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F790u | kUnwind; return; } goto L_0039F790; } }
L_0039FA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F778u | kUnwind; return; } goto L_0039F778; } }
L_0039FA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F8A8u | kUnwind; return; } goto L_0039F8A8; } }
L_0039FA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F9C0u | kUnwind; return; } goto L_0039F9C0; } }
L_0039FA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F8F8u | kUnwind; return; } goto L_0039F8F8; } }
L_0039FA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F9C0u | kUnwind; return; } goto L_0039F9C0; } }
L_0039FA28:
    st8((c.r[15].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[15].w[0] + 12u), c.r[5].w[0]);
    c.r[9].d[0] = c.r[13].d[0] + 0ull;
    st8((c.r[15].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 213u)));
    set32(c.r[11], c.r[11].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 213u), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F9A0u | kUnwind; return; } goto L_0039F9A0; } }
L_0039FA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F988u | kUnwind; return; } goto L_0039F988; } }
L_0039FA50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039FA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 8196u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 8196ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_0039FA94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_0039FA98; } }
L_0039FA94:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039FA98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039FEBC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_0039FAA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 762u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FB60; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 136u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039FB60; } }
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[3].w[0];
    c.f[0] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039FB44; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0039FB44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039FB60; } }
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB60u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0094(c, 80u, depth + 1u); else { c.pc = 0x00451080u; return; } if (c.pc != 0x0039FB60u) [[unlikely]] return; }
L_0039FB60:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x040B0000u);
    c.r[4].d[0] = c.r[3].d[0] | 41530ull;
    st32((c.r[6].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_0039FB88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));  if (t) { goto L_0039FB8C; } }
L_0039FB88:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039FB8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039FECC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_0039FB98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039FEDC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 136u));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039FEE8; } }
    set32(c.r[4], 0u + 3u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 136u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0039FF28; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039FF28; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039FEF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0039FC08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FC80; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0039FC28:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039FC70; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0039FC70; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0039FC80; } }
L_0039FC70:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FC28u | kUnwind; return; } goto L_0039FC28; } }
L_0039FC80:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0039FCA0:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039FD0C; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039FF18; } }
L_0039FD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0039FD44; } }
L_0039FD0C:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0039FD28; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039FD28:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FCA0u | kUnwind; return; } goto L_0039FCA0; } }
    breakpoint(c, 0x0039FD38u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_0039FD44:
    set32(c.r[3], 0u + 3u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[4].w[0] + 108u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FDE8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 2048u);
    c.budget -= 3;
L_0039FD8C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0039FDD4; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0039FDD4; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0039FDE8; } }
L_0039FDD4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FD8Cu | kUnwind; return; } goto L_0039FD8C; } }
    c.budget -= 1;
L_0039FDE8:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 2048ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_0039FE04:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039FE70; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 2048u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039FF20; } }
L_0039FE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 14u);  if (t) { goto L_0039FEA4; } }
L_0039FE70:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0039FE88; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039FE88:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FE04u | kUnwind; return; } goto L_0039FE04; } }
    breakpoint(c, 0x0039FE98u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
L_0039FEA4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0039FEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0039FF2C; } }
L_0039FEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 212u, depth + 1u); else { c.pc = 0x0039F670u; return; } if (c.pc != 0x0039FEC4u) [[unlikely]] return; }
L_0039FEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FAA4u | kUnwind; return; } goto L_0039FAA4; } }
L_0039FECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 189u, depth + 1u); else { c.pc = 0x003A3CC0u; return; } if (c.pc != 0x0039FED4u) [[unlikely]] return; }
L_0039FED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FB98u | kUnwind; return; } goto L_0039FB98; } }
L_0039FEDC:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FEB4u | kUnwind; return; } goto L_0039FEB4; } }
L_0039FEE8:
    set32(c.r[3], 0u + 67u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FEB4u | kUnwind; return; } goto L_0039FEB4; } }
L_0039FEF4:
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039FF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FC08u | kUnwind; return; } goto L_0039FC08; } }
L_0039FF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FD04u | kUnwind; return; } goto L_0039FD04; } }
L_0039FF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FE68u | kUnwind; return; } goto L_0039FE68; } }
L_0039FF28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0039FF2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039FF40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 928u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 912u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 896u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 336u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], 0u + 14u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 8544u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8528u);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FFF4u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 38u, depth + 1u); else { c.pc = 0x003A48D0u; return; } if (c.pc != 0x0039FFF4u) [[unlikely]] return; }
L_0039FFF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[2], c.r[2].w[0] - 8512u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0068(c, 1u, depth);
}

}

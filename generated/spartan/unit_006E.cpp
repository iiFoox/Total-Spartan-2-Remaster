#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 42,
    43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95,
    0, 96, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122,
    0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 208,
    0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 215, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 219, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 223, 224, 0, 0, 0, 225, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 228, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0,
    0, 240, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 251,
    0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B8000;
    case 2u: goto L_003B8058;
    case 3u: goto L_003B8098;
    case 4u: goto L_003B80B0;
    case 5u: goto L_003B8110;
    case 6u: goto L_003B8184;
    case 7u: goto L_003B81F8;
    case 8u: goto L_003B8228;
    case 9u: goto L_003B8260;
    case 10u: goto L_003B8270;
    case 11u: goto L_003B8280;
    case 12u: goto L_003B82C4;
    case 13u: goto L_003B8354;
    case 14u: goto L_003B8384;
    case 15u: goto L_003B83B0;
    case 16u: goto L_003B8480;
    case 17u: goto L_003B8490;
    case 18u: goto L_003B84E8;
    case 19u: goto L_003B84F8;
    case 20u: goto L_003B8554;
    case 21u: goto L_003B8564;
    case 22u: goto L_003B85BC;
    case 23u: goto L_003B85CC;
    case 24u: goto L_003B8648;
    case 25u: goto L_003B8680;
    case 26u: goto L_003B8688;
    case 27u: goto L_003B8690;
    case 28u: goto L_003B8734;
    case 29u: goto L_003B87D8;
    case 30u: goto L_003B8870;
    case 31u: goto L_003B8890;
    case 32u: goto L_003B89A0;
    case 33u: goto L_003B89E0;
    case 34u: goto L_003B8A1C;
    case 35u: goto L_003B8A30;
    case 36u: goto L_003B8A4C;
    case 37u: goto L_003B8B38;
    case 38u: goto L_003B8B70;
    case 39u: goto L_003B8BA0;
    case 40u: goto L_003B8C8C;
    case 41u: goto L_003B8CF8;
    case 42u: goto L_003B8CFC;
    case 43u: goto L_003B8D00;
    case 44u: goto L_003B8D18;
    case 45u: goto L_003B8DBC;
    case 46u: goto L_003B8DC4;
    case 47u: goto L_003B8DE0;
    case 48u: goto L_003B8DE8;
    case 49u: goto L_003B8ED4;
    case 50u: goto L_003B8EFC;
    case 51u: goto L_003B8F58;
    case 52u: goto L_003B8F94;
    case 53u: goto L_003B8FA4;
    case 54u: goto L_003B8FD8;
    case 55u: goto L_003B9068;
    case 56u: goto L_003B9078;
    case 57u: goto L_003B90A0;
    case 58u: goto L_003B90D4;
    case 59u: goto L_003B90F4;
    case 60u: goto L_003B9118;
    case 61u: goto L_003B9154;
    case 62u: goto L_003B9188;
    case 63u: goto L_003B91D0;
    case 64u: goto L_003B92B0;
    case 65u: goto L_003B92C4;
    case 66u: goto L_003B92D8;
    case 67u: goto L_003B9300;
    case 68u: goto L_003B9310;
    case 69u: goto L_003B9358;
    case 70u: goto L_003B9398;
    case 71u: goto L_003B9408;
    case 72u: goto L_003B9478;
    case 73u: goto L_003B9490;
    case 74u: goto L_003B9494;
    case 75u: goto L_003B952C;
    case 76u: goto L_003B9554;
    case 77u: goto L_003B95A8;
    case 78u: goto L_003B95C4;
    case 79u: goto L_003B95E0;
    case 80u: goto L_003B9618;
    case 81u: goto L_003B9620;
    case 82u: goto L_003B9628;
    case 83u: goto L_003B9670;
    case 84u: goto L_003B967C;
    case 85u: goto L_003B9684;
    case 86u: goto L_003B9738;
    case 87u: goto L_003B9744;
    case 88u: goto L_003B9788;
    case 89u: goto L_003B97A0;
    case 90u: goto L_003B97DC;
    case 91u: goto L_003B9800;
    case 92u: goto L_003B9820;
    case 93u: goto L_003B98C8;
    case 94u: goto L_003B98E0;
    case 95u: goto L_003B98FC;
    case 96u: goto L_003B9904;
    case 97u: goto L_003B9914;
    case 98u: goto L_003B9918;
    case 99u: goto L_003B9938;
    case 100u: goto L_003B9954;
    case 101u: goto L_003B9978;
    case 102u: goto L_003B9998;
    case 103u: goto L_003B9A28;
    case 104u: goto L_003B9A40;
    case 105u: goto L_003B9A5C;
    case 106u: goto L_003B9B04;
    case 107u: goto L_003B9B90;
    case 108u: goto L_003B9C00;
    case 109u: goto L_003B9C10;
    case 110u: goto L_003B9C3C;
    case 111u: goto L_003B9C4C;
    case 112u: goto L_003B9C58;
    case 113u: goto L_003B9C64;
    case 114u: goto L_003B9C70;
    case 115u: goto L_003B9C80;
    case 116u: goto L_003B9C8C;
    case 117u: goto L_003B9C9C;
    case 118u: goto L_003B9CB0;
    case 119u: goto L_003B9D30;
    case 120u: goto L_003B9E50;
    case 121u: goto L_003B9E74;
    case 122u: goto L_003B9E7C;
    case 123u: goto L_003B9E84;
    case 124u: goto L_003B9E9C;
    case 125u: goto L_003B9EF0;
    case 126u: goto L_003B9F84;
    case 127u: goto L_003BA010;
    case 128u: goto L_003BA01C;
    case 129u: goto L_003BA028;
    case 130u: goto L_003BA098;
    case 131u: goto L_003BA0A4;
    case 132u: goto L_003BA0E8;
    case 133u: goto L_003BA0FC;
    case 134u: goto L_003BA118;
    case 135u: goto L_003BA1A0;
    case 136u: goto L_003BA1B8;
    case 137u: goto L_003BA1F8;
    case 138u: goto L_003BA298;
    case 139u: goto L_003BA2F0;
    case 140u: goto L_003BA318;
    case 141u: goto L_003BA324;
    case 142u: goto L_003BA330;
    case 143u: goto L_003BA3A8;
    case 144u: goto L_003BA3B8;
    case 145u: goto L_003BA3F8;
    case 146u: goto L_003BA494;
    case 147u: goto L_003BA4EC;
    case 148u: goto L_003BA53C;
    case 149u: goto L_003BA5B0;
    case 150u: goto L_003BA638;
    case 151u: goto L_003BA650;
    case 152u: goto L_003BA690;
    case 153u: goto L_003BA730;
    case 154u: goto L_003BA788;
    case 155u: goto L_003BA7B0;
    case 156u: goto L_003BA7BC;
    case 157u: goto L_003BA8C0;
    case 158u: goto L_003BA8EC;
    case 159u: goto L_003BA914;
    case 160u: goto L_003BA948;
    case 161u: goto L_003BA954;
    case 162u: goto L_003BAA90;
    case 163u: goto L_003BAB00;
    case 164u: goto L_003BAB70;
    case 165u: goto L_003BAB80;
    case 166u: goto L_003BABA8;
    case 167u: goto L_003BABAC;
    case 168u: goto L_003BACA0;
    case 169u: goto L_003BACE0;
    case 170u: goto L_003BAD30;
    case 171u: goto L_003BAD38;
    case 172u: goto L_003BAD7C;
    case 173u: goto L_003BADCC;
    case 174u: goto L_003BADF0;
    case 175u: goto L_003BAE20;
    case 176u: goto L_003BAE60;
    case 177u: goto L_003BB040;
    case 178u: goto L_003BB0CC;
    case 179u: goto L_003BB0D8;
    case 180u: goto L_003BB0F0;
    case 181u: goto L_003BB194;
    case 182u: goto L_003BB1A0;
    case 183u: goto L_003BB1C0;
    case 184u: goto L_003BB1D0;
    case 185u: goto L_003BB1E0;
    case 186u: goto L_003BB218;
    case 187u: goto L_003BB220;
    case 188u: goto L_003BB228;
    case 189u: goto L_003BB270;
    case 190u: goto L_003BB27C;
    case 191u: goto L_003BB284;
    case 192u: goto L_003BB338;
    case 193u: goto L_003BB344;
    case 194u: goto L_003BB388;
    case 195u: goto L_003BB3A0;
    case 196u: goto L_003BB3B0;
    case 197u: goto L_003BB3E8;
    case 198u: goto L_003BB430;
    case 199u: goto L_003BB450;
    case 200u: goto L_003BB474;
    case 201u: goto L_003BB4B4;
    case 202u: goto L_003BB4E8;
    case 203u: goto L_003BB530;
    case 204u: goto L_003BB540;
    case 205u: goto L_003BB55C;
    case 206u: goto L_003BB564;
    case 207u: goto L_003BB570;
    case 208u: goto L_003BB57C;
    case 209u: goto L_003BB588;
    case 210u: goto L_003BB5A0;
    case 211u: goto L_003BB5D8;
    case 212u: goto L_003BB5F0;
    case 213u: goto L_003BB604;
    case 214u: goto L_003BB62C;
    case 215u: goto L_003BB630;
    case 216u: goto L_003BB634;
    case 217u: goto L_003BB644;
    case 218u: goto L_003BB6B4;
    case 219u: goto L_003BB6B8;
    case 220u: goto L_003BB6BC;
    case 221u: goto L_003BB6CC;
    case 222u: goto L_003BB758;
    case 223u: goto L_003BB75C;
    case 224u: goto L_003BB760;
    case 225u: goto L_003BB770;
    case 226u: goto L_003BB780;
    case 227u: goto L_003BB7B4;
    case 228u: goto L_003BB7B8;
    case 229u: goto L_003BB7BC;
    case 230u: goto L_003BB7CC;
    case 231u: goto L_003BB81C;
    case 232u: goto L_003BB85C;
    case 233u: goto L_003BB89C;
    case 234u: goto L_003BB8D4;
    case 235u: goto L_003BB8E8;
    case 236u: goto L_003BB908;
    case 237u: goto L_003BB950;
    case 238u: goto L_003BB96C;
    case 239u: goto L_003BB978;
    case 240u: goto L_003BB984;
    case 241u: goto L_003BB98C;
    case 242u: goto L_003BB998;
    case 243u: goto L_003BB9A4;
    case 244u: goto L_003BB9B0;
    case 245u: goto L_003BB9BC;
    case 246u: goto L_003BB9C8;
    case 247u: goto L_003BB9D0;
    case 248u: goto L_003BB9E0;
    case 249u: goto L_003BB9EC;
    case 250u: goto L_003BB9F4;
    case 251u: goto L_003BB9FC;
    case 252u: goto L_003BBA08;
    case 253u: goto L_003BBA20;
    case 254u: goto L_003BBA2C;
    case 255u: goto L_003BBA34;
    case 256u: goto L_003BBA3C;
    case 257u: goto L_003BBA44;
    case 258u: goto L_003BBA50;
    case 259u: goto L_003BBA5C;
    case 260u: goto L_003BBA6C;
    case 261u: goto L_003BBB10;
    case 262u: goto L_003BBB30;
    case 263u: goto L_003BBB58;
    case 264u: goto L_003BBB7C;
    case 265u: goto L_003BBB94;
    case 266u: goto L_003BBBB0;
    case 267u: goto L_003BBBD0;
    case 268u: goto L_003BBBDC;
    case 269u: goto L_003BBC20;
    case 270u: goto L_003BBC38;
    case 271u: goto L_003BBC60;
    case 272u: goto L_003BBC80;
    case 273u: goto L_003BBCC0;
    case 274u: goto L_003BBCF8;
    case 275u: goto L_003BBD20;
    case 276u: goto L_003BBD70;
    case 277u: goto L_003BBDBC;
    case 278u: goto L_003BBDDC;
    case 279u: goto L_003BBE10;
    case 280u: goto L_003BBE38;
    case 281u: goto L_003BBE44;
    case 282u: goto L_003BBE50;
    case 283u: goto L_003BBE80;
    case 284u: goto L_003BBE94;
    case 285u: goto L_003BBF60;
    case 286u: goto L_003BBF88;
    case 287u: goto L_003BBF9C;
    case 288u: goto L_003BBFC4;
    default: bad_entry(c, 0x003B8000u); return;
    }
L_003B8000:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3652u)));
    c.f[0] = 0u;
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    set32(c.r[2], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8058u); c.f[12] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8058u) [[unlikely]] return; }
L_003B8058:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B80B0; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] - 3663u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003B80B0; } }
L_003B8098:
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003B80B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B8248; } }
    c.r[3].d[0] = c.r[4].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B816C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 3663u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B81B8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 552u));
    c.r[3].d[0] = c.r[3].d[0] ^ 184ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B813C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B821C; } }
L_003B8110:
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[3], 0u + 62u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B8138; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B8138; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003B8138:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_003B813C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B8248; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] - 3663u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003B8214; } }
L_003B816C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3652u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8184u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8184u) [[unlikely]] return; }
L_003B8184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B8248; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 17u);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] - 3663u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003B8214; } }
L_003B81B8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B8248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3656u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B81F8u); set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_007A(c, 92u, depth + 1u); else { c.pc = 0x003E8D90u; return; } if (c.pc != 0x003B81F8u) [[unlikely]] return; }
L_003B81F8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003B8214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B824C; } }
L_003B821C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8228u); set32(c.r[4], ld32((c.r[2].w[0] - 3656u)));  if (depth < kMaxDepth) unit_007A(c, 92u, depth + 1u); else { c.pc = 0x003E8D90u; return; } if (c.pc != 0x003B8228u) [[unlikely]] return; }
L_003B8228:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8110u | kUnwind; return; } goto L_003B8110; } }
L_003B8248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B824C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B8270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B8280:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 111u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82C4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_001F(c, 328u, depth + 1u); else { c.pc = 0x0027E9D0u; return; } if (c.pc != 0x003B82C4u) [[unlikely]] return; }
L_003B82C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B82D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B8388; } }
L_003B82D4:
    c.f[5] = ld32((c.r[18].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[5], 0u + 49u);
    c.f[7] = ld32((c.r[18].w[0] + 32u));
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    set32(c.r[2], ld32((c.r[2].w[0] + 344u)));
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1564u)));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8354u); c.f[20] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0032(c, 10u, depth + 1u); else { c.pc = 0x002C82C0u; return; } if (c.pc != 0x003B8354u) [[unlikely]] return; }
L_003B8354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B8374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B8388; } }
L_003B8374:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8384u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 70u, depth + 1u); else { c.pc = 0x002D8FD0u; return; } if (c.pc != 0x003B8384u) [[unlikely]] return; }
L_003B8384:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003B8388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B83B0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 220u));
    set32(c.r[4], 0u + 9u);
    c.budget -= 20;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003B87D0; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003B8500; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003B842C; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003B842C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_003B85D0; } }
L_003B842C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 14995u)));  if (t) { goto L_003B88C8; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003B8458; } }
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_003B8458:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B8470; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1572u));
    c.budget -= 1;
L_003B8470:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_003B8480:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    set32(c.r[5], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8490u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x003B8490u) [[unlikely]] return; }
L_003B8490:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 14994u)));  if (t) { goto L_003B88D4; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003B84C0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_003B84C0:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B84D8; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1572u));
    c.budget -= 1;
L_003B84D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003B84E8:
    set32(c.r[4], c.r[4].w[0] + 1536u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B84F8u); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x003B84F8u) [[unlikely]] return; }
L_003B84F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B85CC; } }
L_003B8500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 14995u)));  if (t) { goto L_003B88E0; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003B852C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_003B852C:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B8544; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1572u));
    c.budget -= 1;
L_003B8544:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_003B8554:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    set32(c.r[5], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8564u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x003B8564u) [[unlikely]] return; }
L_003B8564:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 14996u)));  if (t) { goto L_003B88EC; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003B8594; } }
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_003B8594:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B85AC; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1572u));
    c.budget -= 1;
L_003B85AC:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003B85BC:
    set32(c.r[4], c.r[4].w[0] + 1536u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B85CCu); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x003B85CCu) [[unlikely]] return; }
L_003B85CC:
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_003B85D0:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8990; } }
    set32(c.r[2], c.r[29].w[0] + 300u);
    set32(c.r[3], c.r[29].w[0] + 284u);
    c.f[4] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 316u);
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[5], c.r[29].w[0] + 244u);
    c.f[5] = ld32((c.r[3].w[0]));
    c.r[30].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 64u));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    st32((c.r[5].w[0]), c.f[4]);
    set32(c.r[2], ld32((c.r[6].w[0] + 1416u)));
    st32((c.r[5].w[0] + 12u), c.f[1]);
    st32((c.r[29].w[0] + 240u), c.f[5]);
    set32(c.r[3], c.r[29].w[0] + 248u);
    st32((c.r[29].w[0] + 252u), c.f[2]);
    st32((c.r[3].w[0]), c.f[3]);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_003B8990; } }
    set32(c.r[18], c.r[29].w[0] + 228u);
    set32(c.r[17], c.r[29].w[0] + 232u);
    set32(c.r[22], c.r[29].w[0] + 212u);
    set32(c.r[23], c.r[29].w[0] + 216u);
    c.budget -= 4;
L_003B8648:
    set32(c.r[3], ld32((c.r[6].w[0] + 1400u)));
    set32(c.r[16], c.r[30].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B8978; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B8978; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B88F8; } }
L_003B8680:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B8688:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B8690:
    c.r[2].d[0] = c.r[20].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[7], c.r[29].w[0] + 224u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[2].d[0] = c.r[19].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[5].w[0] + 272u);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.f[5] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = ld32((c.r[2].w[0] + 56u));
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.f[1] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[4], c.r[3].w[0] << 2);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[4].w[0] + c.r[29].w[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    st32((c.r[18].w[0]), c.f[2]);
    st32((c.r[17].w[0]), c.f[4]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.f[12] = ld32((c.r[3].w[0] + 240u));
    set32(c.r[2], ld32((c.r[2].w[0] + 1400u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8734u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 11u, depth + 1u); else { c.pc = 0x003B8280u; return; } if (c.pc != 0x003B8734u) [[unlikely]] return; }
L_003B8734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B8968; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[22] = 0u;
    set32(c.r[3], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[3].w[0] + 240u));
    c.f[3] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[22], c.f[3]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8890; } }
    c.f[21] = fp::ee::sqrt(c.fcr31, c.f[1]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B8890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[20].d[0] << 56;  if (t) { goto L_003B87DC; } }
    c.budget -= 1;
L_003B87D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_003B89A4; } }
L_003B87D8:
    c.r[6].d[0] = c.r[20].d[0] << 56;
    c.budget -= 1;
L_003B87DC:
    c.r[5].d[0] = c.r[19].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[2], c.r[6].w[0] << 6);
    set32(c.r[4], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 48u));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[5] = ld32((c.r[5].w[0] + 56u));
    c.f[3] = ld32((c.r[5].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[20]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = ld32((c.r[18].w[0]));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[12] = ld32((c.r[2].w[0] + 240u));
    st32((c.r[23].w[0]), c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1400u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8870u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006E(c, 11u, depth + 1u); else { c.pc = 0x003B8280u; return; } if (c.pc != 0x003B8870u) [[unlikely]] return; }
L_003B8870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8880; } }
    set32(c.r[20], 0u + 3u);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_003B8880:
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[20]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B87D8u | kUnwind; return; } goto L_003B87D8; } }
L_003B8890:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8690u | kUnwind; return; } goto L_003B8690; } }
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8688u | kUnwind; return; } goto L_003B8688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B8978; } }
L_003B88C8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 16672u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8480u | kUnwind; return; } goto L_003B8480; } }
L_003B88D4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 16672u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B84E8u | kUnwind; return; } goto L_003B84E8; } }
L_003B88E0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 16672u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8554u | kUnwind; return; } goto L_003B8554; } }
L_003B88EC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 16672u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B85BCu | kUnwind; return; } goto L_003B85BC; } }
L_003B88F8:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.f[1] = 0u;
    set32(c.r[2], ld32((c.r[3].w[0] + 1400u)));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.f[7] = ld32((c.r[3].w[0] + 40u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[6] = ld32((c.r[2].w[0] + 32u));
    c.f[5] = ld32((c.r[2].w[0] + 112u));
    c.f[9] = ld32((c.r[2].w[0] + 40u));
    c.f[8] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[7], c.f[9]);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[9], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[7]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8680u | kUnwind; return; } goto L_003B8680; } }
L_003B8968:
    set32(c.r[20], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8890u | kUnwind; return; } goto L_003B8890; } }
    c.budget -= 1;
L_003B8978:
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 1416u)));
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8648u | kUnwind; return; } goto L_003B8648; } }
L_003B8990:
    set32(c.r[4], c.r[21].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B89A0u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x003B89A0u) [[unlikely]] return; }
L_003B89A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_003B89A4:
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_003B89E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1416u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B8B50; } }
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A1Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003B8A1Cu) [[unlikely]] return; }
L_003B8A1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[22] = c.f[0];
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A30u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003B8A30u) [[unlikely]] return; }
L_003B8A30:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.f[21] = c.f[0];
    set32(c.r[3], ld32((c.r[5].w[0] + 1416u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003B8B50; } }
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_003B8A4C:
    set32(c.r[4], ld32((c.r[5].w[0] + 1400u)));
    set32(c.r[6], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[3] = ld32((c.r[5].w[0] + 192u));
    set32(c.r[3], ld32((c.r[5].w[0] + 1408u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 192u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B8B38; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[3], 0u + 62u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[4].w[0] + 544u);  if (t) { goto L_003B8AB8; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003B8AB8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B8AB8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003B8B28; } }
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B8B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003B8B28; } }
L_003B8B08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8B28; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B8B28:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003B8B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B38u); c.r[6].d[0] = ld16((c.r[17].w[0] + 20u));  if (depth < kMaxDepth) unit_0035(c, 140u, depth + 1u); else { c.pc = 0x002D5EB0u; return; } if (c.pc != 0x003B8B38u) [[unlikely]] return; }
L_003B8B38:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 1416u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8A4Cu | kUnwind; return; } goto L_003B8A4C; } }
L_003B8B50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B8B70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B8F04; } }
L_003B8BA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B8BD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[4].w[0] + 380u));  if (t) { goto L_003B8BEC; } }
L_003B8BD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.r[3].d[0] = ld16((c.r[4].w[0] + 380u));
    c.budget -= 7;
L_003B8BEC:
    c.r[2].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B8C8C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B8C8C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 176u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B8C38; } }
    c.f[0] = ld32((c.r[4].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8C38; } }
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003B8C38:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 176u));
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B8C78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8C78; } }
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003B8C78:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B8C8C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 276u, depth + 1u); else { c.pc = 0x003DBCD0u; return; } if (c.pc != 0x003B8C8Cu) [[unlikely]] return; }
L_003B8C8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B8DC4; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 380u));
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B8F80; } }
    c.r[1].d[0] = c.r[3].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B8F80; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8D18; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8F38; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8F78; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B8F40; } }
L_003B8CF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B8CFC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003B8D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B8D18; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D18u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x003B8D18u) [[unlikely]] return; }
L_003B8D18:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 176u));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B8D5C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8D5C; } }
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003B8D5C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 176u));
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B8DA8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8DA8; } }
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003B8DA8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B8DBC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 276u, depth + 1u); else { c.pc = 0x003DBCD0u; return; } if (c.pc != 0x003B8DBCu) [[unlikely]] return; }
L_003B8DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 15u, depth + 1u); else { c.pc = 0x003B83B0u; return; } if (c.pc != 0x003B8DC4u) [[unlikely]] return; }
L_003B8DC4:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8DE0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DE0u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x003B8DE0u) [[unlikely]] return; }
L_003B8DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 230u, depth + 1u); else { c.pc = 0x003B7F20u; return; } if (c.pc != 0x003B8DE8u) [[unlikely]] return; }
L_003B8DE8:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B9080; } }
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = ld16((c.r[7].w[0] + 380u));
    c.f[7] = ld32((c.r[7].w[0] + 32u));
    set32(c.r[5], c.r[7].w[0] + 32u);
    c.f[3] = ld32((c.r[7].w[0] + 112u));
    set32(c.r[3], 0u + 60u);
    c.f[6] = ld32((c.r[7].w[0] + 40u));
    c.f[2] = ld32((c.r[7].w[0] + 120u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[7], c.f[3]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);  if (t) { goto L_003B8FAC; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B8FAC; } }
    c.f[2] = ld32((c.r[7].w[0] + 452u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[5] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 52u);
    c.f[4] = ld32((c.r[7].w[0] + 456u));
    set32(c.r[6], 0u + 10u);
    c.f[1] = ld32((c.r[7].w[0] + 448u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[5]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[6], c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[7], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 56u), c.f[4]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8ED4u); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 199u, depth + 1u); else { c.pc = 0x002A6A20u; return; } if (c.pc != 0x003B8ED4u) [[unlikely]] return; }
L_003B8ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8F9C; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 332u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8EFCu); set32(c.r[8], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8EFCu) [[unlikely]] return; }
L_003B8EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003B9084; } }
L_003B8F04:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 176u));
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 176u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8BA0u | kUnwind; return; } goto L_003B8BA0; } }
L_003B8F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8D00u | kUnwind; return; } goto L_003B8D00; } }
L_003B8F40:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8CF8u | kUnwind; return; } goto L_003B8CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F58u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003B8F58u) [[unlikely]] return; }
L_003B8F58:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8CFCu | kUnwind; return; } goto L_003B8CFC; } }
L_003B8F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8D00u | kUnwind; return; } goto L_003B8D00; } }
L_003B8F80:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8DBCu | kUnwind; return; } goto L_003B8DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F94u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x003B8F94u) [[unlikely]] return; }
L_003B8F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8DBCu | kUnwind; return; } goto L_003B8DBC; } }
L_003B8F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8FA4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0035(c, 130u, depth + 1u); else { c.pc = 0x002D5C30u; return; } if (c.pc != 0x003B8FA4u) [[unlikely]] return; }
L_003B8FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8EFCu | kUnwind; return; } goto L_003B8EFC; } }
L_003B8FAC:
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 16u), c.f[0]);  if (t) { goto L_003B9018; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B8FE0; } }
L_003B8FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9080; } }
L_003B8FE0:
    c.r[7].d[0] = ld8((c.r[8].w[0] + 526u));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 526u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8FD8u | kUnwind; return; } goto L_003B8FD8; } }
L_003B9018:
    set32(c.r[9], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[6], 0u - 5u);
    set32(c.r[4], 0u - 33u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[3], 0u + 26u);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 526u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 526u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B9070; } }
L_003B9068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9080; } }
L_003B9070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9078u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 33u, depth + 1u); else { c.pc = 0x003B89E0u; return; } if (c.pc != 0x003B9078u) [[unlikely]] return; }
L_003B9078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9068u | kUnwind; return; } goto L_003B9068; } }
L_003B9080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003B9084:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B90A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B9178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8272u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B9180; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 1;
L_003B90D4:
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B9134; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 3663u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B9190; } }
L_003B90F4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B9134; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3656u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9118u); set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_007A(c, 92u, depth + 1u); else { c.pc = 0x003E8D90u; return; } if (c.pc != 0x003B9118u) [[unlikely]] return; }
L_003B9118:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 176u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003B9134:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B9178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[28].w[0] - 29120u);  if (t) { goto L_003B9178; } }
L_003B9154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003B9168; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003B9178; } }
L_003B9168:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9154u | kUnwind; return; } goto L_003B9154; } }
L_003B9178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B91B8; } }
L_003B9180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9188u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x003B9188u) [[unlikely]] return; }
L_003B9188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B90D4u | kUnwind; return; } goto L_003B90D4; } }
L_003B9190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = 0ull & 1ull;
    st8((c.r[2].w[0] - 3663u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 176u));
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B90F4u | kUnwind; return; } goto L_003B90F4; } }
L_003B91B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B91D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[13].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 8480u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 27904u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[28].w[0] - 29120u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] - 8272u);
    set32(c.r[12], 0u - 2u);
    set32(c.r[9], 0u - 3u);
    set32(c.r[10], c.r[13].w[0] << 1);
    set32(c.r[7], 0u - 5u);
    set32(c.r[8], c.r[13].w[0] << 2);
    set32(c.r[3], 0u - 9u);
    set32(c.r[6], c.r[13].w[0] << 3);
    set32(c.r[2], 0u + 9u);
    st32((c.r[4].w[0]), c.r[14].w[0]);
    st32((c.r[28].w[0] - 29120u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[11].d[0] = ld8((c.r[4].w[0] + 40u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[12].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 44u), 0u);
    c.r[11].d[0] = ld8((c.r[4].w[0] + 176u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[12].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 176u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 176u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 176u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 54;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B92B8; } }
    set32(c.r[2], 0u + 36u);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003B92B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B92E4; } }
L_003B92B8:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92C4u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0075(c, 258u, depth + 1u); else { c.pc = 0x003D7F30u; return; } if (c.pc != 0x003B92C4u) [[unlikely]] return; }
L_003B92C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B92D8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92D8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x003B92D8u) [[unlikely]] return; }
L_003B92D8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B92B0u | kUnwind; return; } goto L_003B92B0; } }
L_003B92E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9300:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8B70u | kUnwind; return; } goto L_003B8B70; }
L_003B9310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B9534; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B9534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B9534; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003B9358:
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003B9408; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 752u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 800u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 92u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] + 752u);  if (t) { goto L_003B9544; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 49u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 97u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B9544; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B9398:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B9408; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B9408; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003B9408; } }
    c.r[10].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[4], 0u - 2049u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 18;
L_003B9408:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B9438; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B9438; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B9438:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B95CC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], c.r[4].w[0] + 8704u);
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 522u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 522u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B954C; } }
L_003B9478:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9490u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0028CA70u; return; } if (c.pc != 0x003B9490u) [[unlikely]] return; }
L_003B9490:
    st8((c.r[16].w[0] + 289u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003B9494:
    set32(c.r[2], 0u + 9u);
    st8((c.r[16].w[0] + 290u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B94E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B94E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], 0u + 5u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 3744u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003B94E8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 240u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003B94E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 287u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 287u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B9520; } }
    st8((c.r[16].w[0] + 287u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 288u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003B9520:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B952Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003B952Cu) [[unlikely]] return; }
L_003B952C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B95D0; } }
L_003B9534:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9408u | kUnwind; return; } goto L_003B9408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9358u | kUnwind; return; } goto L_003B9358; } }
L_003B9544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9398u | kUnwind; return; } goto L_003B9398; } }
L_003B954C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9554u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003B9554u) [[unlikely]] return; }
L_003B9554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9478u | kUnwind; return; } goto L_003B9478; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1440u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B95B0; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1424u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B95A8u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0028CA70u; return; } if (c.pc != 0x003B95A8u) [[unlikely]] return; }
L_003B95A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 289u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9494u | kUnwind; return; } goto L_003B9494; } }
L_003B95B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B95C4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0028CA70u; return; } if (c.pc != 0x003B95C4u) [[unlikely]] return; }
L_003B95C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9490u | kUnwind; return; } goto L_003B9490; } }
L_003B95CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B95D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B95E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 291u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B9788; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 16736u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_006E[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B9618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9620u);  if (depth < kMaxDepth) unit_006E(c, 68u, depth + 1u); else { c.pc = 0x003B9310u; return; } if (c.pc != 0x003B9620u) [[unlikely]] return; }
L_003B9620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003B978C; } }
L_003B9628:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B9658; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B9658; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B9658:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B9788; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9670u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 20u, depth + 1u); else { c.pc = 0x0028C430u; return; } if (c.pc != 0x003B9670u) [[unlikely]] return; }
L_003B9670:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B967Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003B967Cu) [[unlikely]] return; }
L_003B967C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9788; } }
L_003B9684:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B96B4; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B96B4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B96B4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B9744; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[9], 0u + 56u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], 0u - 9u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 280u), c.f[0]);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[10], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    st16((c.r[10].w[0] + 162u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[10].w[0] + 168u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[10].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 344u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 236u)));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[10].w[0] + 164u), c.f[0]);
    c.r[8].d[0] = ld8((c.r[10].w[0] + 56u));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[10].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[10].w[0] + 188u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 112u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[10].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9738u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0062(c, 54u, depth + 1u); else { c.pc = 0x00388FF0u; return; } if (c.pc != 0x003B9738u) [[unlikely]] return; }
L_003B9738:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9744u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003B9744u) [[unlikely]] return; }
L_003B9744:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003B9774; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B9774; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B9774:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B9788; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003B9788u) [[unlikely]] return; }
L_003B9788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003B978C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B97A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[7], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 222u)));
    set32(c.r[6], c.r[4].w[0] + 8u);
    st8((c.r[4].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 216u), c.r[7].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 15;
L_003B97DC:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B9850; } }
    c.budget -= 1;
L_003B9800:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003B9A6C; } }
    c.budget -= 1;
L_003B9820:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_003B9A78; } }
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9800u | kUnwind; return; } goto L_003B9800; } }
    c.budget -= 1;
L_003B9850:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[11], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_003B9A80; } }
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003B98E0; } }
    set32(c.r[7], c.r[10].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B9AA0; } }
    c.budget -= 1;
L_003B98C8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_003B98E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003B98FC; } }
L_003B98E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B97DCu | kUnwind; return; } goto L_003B97DC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003B98FC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003B9BE0; } }
L_003B9904:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B9AA8; } }
L_003B9914:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003B9918:
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_003B9B98; } }
L_003B9938:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B9BA0; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
L_003B9954:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B99C8; } }
    c.budget -= 1;
L_003B9978:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003B9BA8; } }
    c.budget -= 1;
L_003B9998:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_003B9BB0; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9978u | kUnwind; return; } goto L_003B9978; } }
    c.budget -= 1;
L_003B99C8:
    set32(c.r[10], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_003B9BB8; } }
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
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003B9A40; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003B9BD8; } }
L_003B9A28:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003B9A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003B9A5C; } }
L_003B9A40:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9954u | kUnwind; return; } goto L_003B9954; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003B9A5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9904u | kUnwind; return; } goto L_003B9904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9BE0; } }
L_003B9A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9820u | kUnwind; return; } goto L_003B9820; } }
    c.budget -= 1;
L_003B9A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B98FCu | kUnwind; return; } goto L_003B98FC; } }
L_003B9A80:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B98E0u | kUnwind; return; } goto L_003B98E0; } }
L_003B9AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B98C8u | kUnwind; return; } goto L_003B98C8; } }
L_003B9AA8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 290u)));
    set32(c.r[3], 0u + 183u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 290u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9914u | kUnwind; return; } goto L_003B9914; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 220u));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9914u | kUnwind; return; } goto L_003B9914; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9914u | kUnwind; return; } goto L_003B9914; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9914u | kUnwind; return; } goto L_003B9914; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9B04u) [[unlikely]] return; }
L_003B9B04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9914u | kUnwind; return; } goto L_003B9914; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 289u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 289u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 289u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9914u | kUnwind; return; } goto L_003B9914; } }
    set32(c.r[12], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 15u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[11].d[0] = ld16((c.r[12].w[0] + 544u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[12].w[0] + 544u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[12].w[0] + 544u));
    c.r[4].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[12].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[12].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[12].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B90u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x003B9B90u) [[unlikely]] return; }
L_003B9B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9918u | kUnwind; return; } goto L_003B9918; } }
L_003B9B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9938u | kUnwind; return; } goto L_003B9938; } }
L_003B9BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9A5Cu | kUnwind; return; } goto L_003B9A5C; } }
L_003B9BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9998u | kUnwind; return; } goto L_003B9998; } }
L_003B9BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9A5Cu | kUnwind; return; } goto L_003B9A5C; } }
L_003B9BB8:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9A40u | kUnwind; return; } goto L_003B9A40; } }
L_003B9BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9A28u | kUnwind; return; } goto L_003B9A28; } }
L_003B9BE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B9C00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 256u), 0u);  c.pc = t; return; }
L_003B9C10:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0] + 291u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003B9CA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 16768u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_006E[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B9C3C:
    st32((c.r[4].w[0] + 256u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), 0u);  if (t) { goto L_003B9CA8; } }
L_003B9C4C:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B9CA8; } }
L_003B9C58:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B9CA8; } }
L_003B9C64:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B9CA8; } }
L_003B9C70:
    st32((c.r[4].w[0] + 256u), 0u);
    set32(c.r[3], 0u + 100u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B9CA8; } }
L_003B9C80:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 256u), 0u);  if (t) { goto L_003B9CA8; } }
L_003B9C8C:
    set32(c.r[3], 0u + 45u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 256u), 0u);  if (t) { goto L_003B9CA8; } }
L_003B9C9C:
    set32(c.r[3], 0u + 45u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 256u), 0u);
    c.budget -= 3;
L_003B9CA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B9CB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43610000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B9ED4; } }
    c.f[0] = ld32((c.r[16].w[0] + 268u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B9ED4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[12] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9D30u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x003B9D30u) [[unlikely]] return; }
L_003B9D30:
    set32(c.r[8], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.f[4] = c.r[3].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DA00000u);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] | 55676ull;
    c.r[4].d[0] = c.r[4].d[0] | 4059ull;
    c.f[5] = ld32((c.r[8].w[0] + 104u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[1] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = 0u;
    c.f[3] = c.r[4].w[0];
    c.f[5] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    set32(c.r[3], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[4] = c.r[5].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 34;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B9ED4; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 44u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9E50u); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 81u, depth + 1u); else { c.pc = 0x00302070u; return; } if (c.pc != 0x003B9E50u) [[unlikely]] return; }
L_003B9E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B9ED4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_003B9E90; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_003B9E90; } }
L_003B9E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 272u), 0u);  if (t) { goto L_003B9ED4; } }
L_003B9E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 272u), 0u);  if (t) { goto L_003B9ED4; } }
L_003B9E84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_003B9ED4; } }
L_003B9E90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9E9Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003B9E9Cu) [[unlikely]] return; }
L_003B9E9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 256u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9E84u | kUnwind; return; } goto L_003B9E84; } }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9E7Cu | kUnwind; return; } goto L_003B9E7C; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9E7Cu | kUnwind; return; } goto L_003B9E7C; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9E74u | kUnwind; return; } goto L_003B9E74; } }
L_003B9ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B9EF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 9u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 220u));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003BA54C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 1440u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BA54C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 290u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B9F8C; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 752u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 800u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 92u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 752u);  if (t) { goto L_003BA544; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 97u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BA544; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B9F84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BA54C; } }
L_003B9F8C:
    c.f[1] = ld32((c.r[7].w[0] + 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B9FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BA54C; } }
L_003B9FB0:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BA54C; } }
    c.f[0] = ld32((c.r[7].w[0] + 32u));
    set32(c.r[17], c.r[29].w[0] + 148u);
    set32(c.r[16], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 36u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 40u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 44u));
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA010u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x003BA010u) [[unlikely]] return; }
L_003BA010:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA01Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003BA01Cu) [[unlikely]] return; }
L_003BA01C:
    c.f[22] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA028u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003BA028u) [[unlikely]] return; }
L_003BA028:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[21], c.r[29].w[0] + 136u);
    c.f[21] = 0u;
    st32((c.r[29].w[0] + 128u), 0u);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[22]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[22]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[12] = c.f[20];
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA098u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003BA098u) [[unlikely]] return; }
L_003BA098:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA0A4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003BA0A4u) [[unlikely]] return; }
L_003BA0A4:
    c.f[2] = ld32((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA0E8u); st32((c.r[21].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 246u, depth + 1u); else { c.pc = 0x002EAF50u; return; } if (c.pc != 0x003BA0E8u) [[unlikely]] return; }
L_003BA0E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BA54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BA54C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 256u)));
    c.budget -= 1;
L_003BA0FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BA590; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 1440u)));
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003BA590; } }
L_003BA118:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[6], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1424u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[4].d[0];  if (t) { goto L_003BA580; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 552u));
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003BA580; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003BA580; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BA55C; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 808u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BA190; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA190; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BA190:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003BA55C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003BA55C; } }
L_003BA1A0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003BA1B8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BA1B8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003BA580; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 811u));
    c.r[4].d[0] = c.r[5].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BA1E4; } }
    c.r[4].d[0] = c.r[5].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003BA1E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BA580; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[4].d[0];  if (t) { goto L_003BA570; } }
L_003BA1F8:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 220u));
    set32(c.r[4], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA288; } }
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA250; } }
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA248; } }
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA248; } }
    set32(c.r[4], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA290; } }
L_003BA240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 224u);  if (t) { goto L_003BA298; } }
L_003BA248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 223u);  if (t) { goto L_003BA298; } }
L_003BA250:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[4], c.r[5].w[0] - 68u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BA7C8; } }
    set32(c.r[4], c.r[5].w[0] - 70u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BA280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 227u);  if (t) { goto L_003BA298; } }
    c.budget -= 1;
L_003BA280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 225u);  if (t) { goto L_003BA298; } }
L_003BA288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 228u);  if (t) { goto L_003BA298; } }
L_003BA290:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BA298:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0] + 344u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BA580; } }
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[20].w[0] + 276u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BA580; } }
    set32(c.r[4], c.r[3].w[0] + 1072u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA2F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 77u, depth + 1u); else { c.pc = 0x00301EA0u; return; } if (c.pc != 0x003BA2F0u) [[unlikely]] return; }
L_003BA2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA580; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[20].w[0] + 256u), c.r[17].w[0]);  if (t) { goto L_003BA308; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    st32((c.r[20].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_003BA308:
    set32(c.r[2], ld32((c.r[20].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA7D0; } }
L_003BA318:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA324u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003BA324u) [[unlikely]] return; }
L_003BA324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA580; } }
    c.budget -= 1;
L_003BA330:
    set32(c.r[3], ld32((c.r[20].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BA884; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003BA884; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BA884; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BA884; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1496u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BA850; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BA394; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BA394; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BA394:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003BA850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003BA850; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.budget -= 1;
L_003BA3A8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BA3B8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BA3B8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003BA884; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 811u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BA3E4; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003BA3E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BA884; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003BA860; } }
L_003BA3F8:
    set32(c.r[5], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], 0u + 52u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BA488; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BA454; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BA44C; } }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BA44C; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BA444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003BA494; } }
L_003BA444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 224u);  if (t) { goto L_003BA494; } }
L_003BA44C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 223u);  if (t) { goto L_003BA494; } }
L_003BA454:
    c.r[4].d[0] = ld16((c.r[5].w[0] + 380u));
    set32(c.r[3], c.r[4].w[0] - 68u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BA87C; } }
    set32(c.r[3], c.r[4].w[0] - 70u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BA480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 227u);  if (t) { goto L_003BA494; } }
L_003BA480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 225u);  if (t) { goto L_003BA494; } }
L_003BA488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 228u);  if (t) { goto L_003BA494; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BA494:
    set32(c.r[4], ld32((c.r[16].w[0] + 344u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BA884; } }
    c.f[2] = ld32((c.r[5].w[0] + 40u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[4] = ld32((c.r[5].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[20].w[0] + 276u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BA884; } }
    set32(c.r[4], c.r[5].w[0] + 1072u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA4ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 77u, depth + 1u); else { c.pc = 0x00301EA0u; return; } if (c.pc != 0x003BA4ECu) [[unlikely]] return; }
L_003BA4EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA884; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 256u), c.r[16].w[0]);  if (t) { goto L_003BA504; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    st32((c.r[20].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_003BA504:
    set32(c.r[2], ld32((c.r[20].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BA530; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 264u)));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 94u));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003BA530:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA53Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003BA53Cu) [[unlikely]] return; }
L_003BA53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA874; } }
L_003BA544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9F84u | kUnwind; return; } goto L_003B9F84; } }
L_003BA54C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA330u | kUnwind; return; } goto L_003BA330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 256u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA0FCu | kUnwind; return; } goto L_003BA0FC; } }
L_003BA55C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA1B8u | kUnwind; return; } goto L_003BA1B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA1A0u | kUnwind; return; } goto L_003BA1A0; } }
    c.budget -= 1;
L_003BA570:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 220u));
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA1F8u | kUnwind; return; } goto L_003BA1F8; } }
L_003BA580:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA118u | kUnwind; return; } goto L_003BA118; } }
L_003BA590:
    set32(c.r[3], ld32((c.r[20].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA330u | kUnwind; return; } goto L_003BA330; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 1440u)));
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA330u | kUnwind; return; } goto L_003BA330; } }
L_003BA5B0:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[6], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1424u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[4].d[0];  if (t) { goto L_003BA810; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 552u));
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA810; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003BA810; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BA7F0; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 808u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BA628; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA628; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BA628:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003BA7F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003BA7F0; } }
L_003BA638:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003BA650; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BA650:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003BA810; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 811u));
    c.r[4].d[0] = c.r[5].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BA67C; } }
    c.r[4].d[0] = c.r[5].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003BA67C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BA810; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[4].d[0];  if (t) { goto L_003BA800; } }
L_003BA690:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 220u));
    set32(c.r[4], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA720; } }
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA6E8; } }
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA6E0; } }
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA6E0; } }
    set32(c.r[4], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003BA6D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA728; } }
L_003BA6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 224u);  if (t) { goto L_003BA730; } }
L_003BA6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 223u);  if (t) { goto L_003BA730; } }
L_003BA6E8:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[4], c.r[5].w[0] - 68u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BA828; } }
    set32(c.r[4], c.r[5].w[0] - 70u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BA718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 227u);  if (t) { goto L_003BA730; } }
    c.budget -= 1;
L_003BA718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 225u);  if (t) { goto L_003BA730; } }
L_003BA720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 228u);  if (t) { goto L_003BA730; } }
L_003BA728:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BA730:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0] + 344u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BA810; } }
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[20].w[0] + 276u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BA810; } }
    set32(c.r[4], c.r[3].w[0] + 1072u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA788u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 77u, depth + 1u); else { c.pc = 0x00301EA0u; return; } if (c.pc != 0x003BA788u) [[unlikely]] return; }
L_003BA788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA810; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[20].w[0] + 256u), c.r[17].w[0]);  if (t) { goto L_003BA7A0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    st32((c.r[20].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_003BA7A0:
    set32(c.r[2], ld32((c.r[20].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA830; } }
L_003BA7B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA7BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003BA7BCu) [[unlikely]] return; }
L_003BA7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA810; } }
    c.budget -= 1;
L_003BA7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 226u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA298u | kUnwind; return; } goto L_003BA298; } }
L_003BA7D0:
    set32(c.r[5], ld32((c.r[2].w[0] + 264u)));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 94u));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA318u | kUnwind; return; } goto L_003BA318; } }
L_003BA7F0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA650u | kUnwind; return; } goto L_003BA650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA638u | kUnwind; return; } goto L_003BA638; } }
L_003BA800:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 220u));
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA690u | kUnwind; return; } goto L_003BA690; } }
L_003BA810:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA5B0u | kUnwind; return; } goto L_003BA5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA330u | kUnwind; return; } goto L_003BA330; } }
L_003BA828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 226u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA730u | kUnwind; return; } goto L_003BA730; } }
L_003BA830:
    set32(c.r[5], ld32((c.r[2].w[0] + 264u)));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 94u));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA7B0u | kUnwind; return; } goto L_003BA7B0; } }
L_003BA850:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA3B8u | kUnwind; return; } goto L_003BA3B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA3A8u | kUnwind; return; } goto L_003BA3A8; } }
L_003BA860:
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA3F8u | kUnwind; return; } goto L_003BA3F8; } }
L_003BA874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_003BA888; } }
L_003BA87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 226u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA494u | kUnwind; return; } goto L_003BA494; } }
L_003BA884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003BA888:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003BA8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 256u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BADD4; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BADDC; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003BA8EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BA914; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 291u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BA914; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA914u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003BA914u) [[unlikely]] return; }
L_003BA914:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 4u);
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_003BA938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_003BA93C; } }
L_003BA938:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BA93C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BADE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_003BA948:
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    c.budget -= 3;
L_003BA954:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 848u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BA998; } }
    set32(c.r[3], c.r[5].w[0] + 752u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[4].w[0] + 96u);  if (t) { goto L_003BA998; } }
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 1;
L_003BA998:
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA954u | kUnwind; return; } goto L_003BA954; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BA9FC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 284u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BAA28; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 288u)));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 288u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 284u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BAA28; } }
L_003BA9FC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 284u));
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BAA28; } }
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003BAA28:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 272u));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 272u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 291u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BAABC; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BAABC; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 752u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 800u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 92u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 752u);  if (t) { goto L_003BADF8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 97u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BADF8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BAA90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BAABC; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BAABC; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BAABC; } }
    st8((c.r[16].w[0] + 291u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003BAABC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 291u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BAE48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BAE00; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BAE00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BAE00; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 288u)));
    c.budget -= 1;
L_003BAB00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 286u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BAE10; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BABA8; } }
    c.f[1] = ld32((c.r[6].w[0] + 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BABA8; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 800u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 752u);  if (t) { goto L_003BAE28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 49u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BAE28; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BAB70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003BABA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAB80u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003BAB80u) [[unlikely]] return; }
L_003BAB80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BAB9C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BAB9C:
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003BABA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BABA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 125u, depth + 1u); else { c.pc = 0x003B9EF0u; return; } if (c.pc != 0x003BABA8u) [[unlikely]] return; }
L_003BABA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 1;
L_003BABAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BACE0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 284u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BACE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BACE0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BACE0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 809u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003BAC0C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003BAC28; } }
L_003BAC0C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_003BAC28:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 762u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32506ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BAC88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 4;
L_003BAC88:
    c.f[1] = ld32((c.r[16].w[0] + 280u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BAE30; } }
L_003BACA0:
    c.f[1] = ld32((c.r[16].w[0] + 280u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BACE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_003BACD4; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_003BACD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BACE0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003BACE0u) [[unlikely]] return; }
L_003BACE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BAE48; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 284u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BAE48; } }
    c.f[1] = ld32((c.r[16].w[0] + 272u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BAE48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BAE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 118u, depth + 1u); else { c.pc = 0x003B9CB0u; return; } if (c.pc != 0x003BAD30u) [[unlikely]] return; }
L_003BAD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BADCC; } }
L_003BAD38:
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BAE48; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 752u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 800u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 92u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 752u);  if (t) { goto L_003BAE40; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 97u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BAE40; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BAD7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BAE48; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BAE48; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BAE48; } }
    c.f[1] = ld32((c.r[7].w[0] + 768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BAE48; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BADCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 125u, depth + 1u); else { c.pc = 0x003B9EF0u; return; } if (c.pc != 0x003BADCCu) [[unlikely]] return; }
L_003BADCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BAE4C; } }
L_003BADD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA8ECu | kUnwind; return; } goto L_003BA8EC; } }
L_003BADDC:
    st32((c.r[16].w[0] + 256u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA8ECu | kUnwind; return; } goto L_003BA8EC; } }
L_003BADE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BADF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 89u, depth + 1u); else { c.pc = 0x003B97A0u; return; } if (c.pc != 0x003BADF0u) [[unlikely]] return; }
L_003BADF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA948u | kUnwind; return; } goto L_003BA948; } }
L_003BADF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAA90u | kUnwind; return; } goto L_003BAA90; } }
L_003BAE00:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAD38u | kUnwind; return; } goto L_003BAD38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 288u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAB00u | kUnwind; return; } goto L_003BAB00; } }
L_003BAE10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE20u); st32((c.r[16].w[0] + 264u), 0u);  if (depth < kMaxDepth) unit_006E(c, 125u, depth + 1u); else { c.pc = 0x003B9EF0u; return; } if (c.pc != 0x003BAE20u) [[unlikely]] return; }
L_003BAE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 256u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BABACu | kUnwind; return; } goto L_003BABAC; } }
L_003BAE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAB70u | kUnwind; return; } goto L_003BAB70; } }
L_003BAE30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 280u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BACA0u | kUnwind; return; } goto L_003BACA0; } }
L_003BAE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAD7Cu | kUnwind; return; } goto L_003BAD7C; } }
L_003BAE48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BAE4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BAE60:
    st8((c.r[4].w[0] + 287u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = 0ull & 1ull;
    st8((c.r[4].w[0] + 288u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u - 3u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 284u));
    set32(c.r[7], c.r[8].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], 0u + 9u);
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 290u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 291u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 264u), 0u);
    st8((c.r[4].w[0] + 289u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 256u), 0u);
    st32((c.r[4].w[0] + 280u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 256u));
    c.budget -= 21;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003BAFDC; } }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003BAF88; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003BAF34; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003BAEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 272u), 0u);  if (t) { goto L_003BB030; } }
L_003BAEE0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], 0u - 5u);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44610000u);
    st32((c.r[4].w[0] + 268u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41290000u);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 284u));
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 284u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BB02C; } }
L_003BAF34:
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[8].w[0] << 2);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44610000u);
    st32((c.r[4].w[0] + 268u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41290000u);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    set32(c.r[5], c.r[8].w[0] << 3);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 284u));
    set32(c.r[6], 0u - 5u);
    set32(c.r[3], 0u - 9u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 284u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BB02C; } }
L_003BAF88:
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], 0u - 5u);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44610000u);
    st32((c.r[4].w[0] + 268u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41290000u);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 284u));
    set32(c.r[3], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 284u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BB02C; } }
L_003BAFDC:
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[8].w[0] << 2);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43610000u);
    st32((c.r[4].w[0] + 268u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A20000u);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    set32(c.r[5], c.r[8].w[0] << 3);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 284u));
    set32(c.r[6], 0u - 5u);
    set32(c.r[3], 0u - 9u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 284u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
L_003BB02C:
    st32((c.r[4].w[0] + 272u), 0u);
    c.budget -= 1;
L_003BB030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BB040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[15], ld32((c.r[29].w[0] + 32u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[12], c.r[12].w[0] - 8544u);
    set32(c.r[13], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[15].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), c.r[14].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8256u);
    st32((c.r[4].w[0] + 16u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[10].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0]), c.r[12].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0CCu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_006E(c, 63u, depth + 1u); else { c.pc = 0x003B91D0u; return; } if (c.pc != 0x003BB0CCu) [[unlikely]] return; }
L_003BB0CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0D8u); st32((c.r[16].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_006E(c, 176u, depth + 1u); else { c.pc = 0x003BAE60u; return; } if (c.pc != 0x003BB0D8u) [[unlikely]] return; }
L_003BB0D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BB0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 19552u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 20000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] - 20016u);
    st32((c.r[4].w[0] + 20u), c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] - 20032u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], 0u + 15u);
    set32(c.r[9], c.r[9].w[0] - 8544u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[2], c.r[2].w[0] - 8256u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB194u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_006E(c, 63u, depth + 1u); else { c.pc = 0x003B91D0u; return; } if (c.pc != 0x003BB194u) [[unlikely]] return; }
L_003BB194:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB1A0u); st32((c.r[16].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_006E(c, 176u, depth + 1u); else { c.pc = 0x003BAE60u; return; } if (c.pc != 0x003BB1A0u) [[unlikely]] return; }
L_003BB1A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BB1C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 256u), 0u);  c.pc = t; return; }
L_003BB1D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 256u), 0u);  c.pc = t; return; }
L_003BB1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 291u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BB388; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 16800u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_006E[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BB218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB220u);  if (depth < kMaxDepth) unit_006E(c, 68u, depth + 1u); else { c.pc = 0x003B9310u; return; } if (c.pc != 0x003BB220u) [[unlikely]] return; }
L_003BB220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BB38C; } }
L_003BB228:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BB258; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BB258; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB258:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BB388; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB270u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 20u, depth + 1u); else { c.pc = 0x0028C430u; return; } if (c.pc != 0x003BB270u) [[unlikely]] return; }
L_003BB270:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB27Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003BB27Cu) [[unlikely]] return; }
L_003BB27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB388; } }
L_003BB284:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BB2B4; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BB2B4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB2B4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BB344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[9], 0u + 56u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], 0u - 9u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 280u), c.f[0]);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[10], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    st16((c.r[10].w[0] + 162u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[10].w[0] + 168u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[10].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 344u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 236u)));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[10].w[0] + 164u), c.f[0]);
    c.r[8].d[0] = ld8((c.r[10].w[0] + 56u));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[10].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[10].w[0] + 188u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 112u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[10].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB338u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0062(c, 54u, depth + 1u); else { c.pc = 0x00388FF0u; return; } if (c.pc != 0x003BB338u) [[unlikely]] return; }
L_003BB338:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB344u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003BB344u) [[unlikely]] return; }
L_003BB344:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BB374; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BB374; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB374:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BB388; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x003BB388u) [[unlikely]] return; }
L_003BB388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003BB38C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BB3A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA8C0u | kUnwind; return; } goto L_003BA8C0; }
L_003BB3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BB40C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8256u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 29104u), c.r[3].w[0]);  if (t) { goto L_003BB414; } }
L_003BB3E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BB40C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003BB40C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003BB40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BB518; } }
L_003BB414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8272u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BB4E0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 240u));
    c.budget -= 1;
L_003BB430:
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BB490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 3663u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BB4F0; } }
L_003BB450:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 240u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BB490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3656u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB474u); set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_007A(c, 92u, depth + 1u); else { c.pc = 0x003E8D90u; return; } if (c.pc != 0x003BB474u) [[unlikely]] return; }
L_003BB474:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 240u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003BB490:
    set32(c.r[3], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB3E8u | kUnwind; return; } goto L_003BB3E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[28].w[0] - 29120u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB3E8u | kUnwind; return; } goto L_003BB3E8; } }
L_003BB4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003BB4C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB3E8u | kUnwind; return; } goto L_003BB3E8; } }
L_003BB4C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB4B4u | kUnwind; return; } goto L_003BB4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB3E8u | kUnwind; return; } goto L_003BB3E8; } }
L_003BB4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4E8u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x003BB4E8u) [[unlikely]] return; }
L_003BB4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 240u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB430u | kUnwind; return; } goto L_003BB430; } }
L_003BB4F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = 0ull & 1ull;
    st8((c.r[2].w[0] - 3663u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 240u));
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB450u | kUnwind; return; } goto L_003BB450; } }
L_003BB518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BB530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 9968u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3080u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 624u, depth); }
L_003BB540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB55Cu); set32(c.r[4], c.r[4].w[0] + 9968u);  if (depth < kMaxDepth) unit_0030(c, 643u, depth + 1u); else { c.pc = 0x002C3180u; return; } if (c.pc != 0x003BB55Cu) [[unlikely]] return; }
L_003BB55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB564u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 435u, depth + 1u); else { c.pc = 0x00387F20u; return; } if (c.pc != 0x003BB564u) [[unlikely]] return; }
L_003BB564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB570u); set32(c.r[4], c.r[4].w[0] + 24224u);  if (depth < kMaxDepth) unit_0052(c, 63u, depth + 1u); else { c.pc = 0x003490B0u; return; } if (c.pc != 0x003BB570u) [[unlikely]] return; }
L_003BB570:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB57Cu); set32(c.r[4], c.r[4].w[0] + 30768u);  if (depth < kMaxDepth) unit_00BD(c, 109u, depth + 1u); else { c.pc = 0x004F62E0u; return; } if (c.pc != 0x003BB57Cu) [[unlikely]] return; }
L_003BB57C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB588u); set32(c.r[4], c.r[4].w[0] + 30832u);  if (depth < kMaxDepth) unit_00BD(c, 100u, depth + 1u); else { c.pc = 0x004F5DC0u; return; } if (c.pc != 0x003BB588u) [[unlikely]] return; }
L_003BB588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BB5A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] - 20360u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB5D8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 57u, depth + 1u); else { c.pc = 0x00450C30u; return; } if (c.pc != 0x003BB5D8u) [[unlikely]] return; }
L_003BB5D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB5F0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 25u, depth + 1u); else { c.pc = 0x003304B0u; return; } if (c.pc != 0x003BB5F0u) [[unlikely]] return; }
L_003BB5F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB7D4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_003BB604:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB644; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB83C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BB804; } }
L_003BB62C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB630:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003BB634:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB644u); set32(c.r[4], c.r[18].w[0] + 72u);  if (depth < kMaxDepth) unit_0085(c, 165u, depth + 1u); else { c.pc = 0x00416F50u; return; } if (c.pc != 0x003BB644u) [[unlikely]] return; }
L_003BB644:
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 752u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 82u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BB788; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003BB6D4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB930; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB87C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BB844; } }
L_003BB6B4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB6B8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003BB6BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6CCu); set32(c.r[4], c.r[18].w[0] + 72u);  if (depth < kMaxDepth) unit_0085(c, 165u, depth + 1u); else { c.pc = 0x00416F50u; return; } if (c.pc != 0x003BB6CCu) [[unlikely]] return; }
L_003BB6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB7CC; } }
L_003BB6D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BB930; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 24140u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BB704; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BB704; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003BB704:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003BB930; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BB724; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003BB724:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BB930; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BB8C4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BB8BC; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BB884; } }
L_003BB758:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB75C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003BB760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BB778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB770u); set32(c.r[4], c.r[18].w[0] + 72u);  if (depth < kMaxDepth) unit_0085(c, 173u, depth + 1u); else { c.pc = 0x00417080u; return; } if (c.pc != 0x003BB770u) [[unlikely]] return; }
L_003BB770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB7CC; } }
L_003BB778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB780u); set32(c.r[4], c.r[18].w[0] + 72u);  if (depth < kMaxDepth) unit_0085(c, 191u, depth + 1u); else { c.pc = 0x004173A0u; return; } if (c.pc != 0x003BB780u) [[unlikely]] return; }
L_003BB780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB7CC; } }
L_003BB788:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB930; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB928; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BB8F0; } }
L_003BB7B4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BB7B8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003BB7BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB7CCu); set32(c.r[4], c.r[18].w[0] + 72u);  if (depth < kMaxDepth) unit_0085(c, 165u, depth + 1u); else { c.pc = 0x00416F50u; return; } if (c.pc != 0x003BB7CCu) [[unlikely]] return; }
L_003BB7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003BB934; } }
L_003BB7D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 24140u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003BB7F4; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BB7F4; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003BB7F4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB644u | kUnwind; return; } goto L_003BB644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB604u | kUnwind; return; } goto L_003BB604; } }
L_003BB804:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[18].w[0] + 72u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB62Cu | kUnwind; return; } goto L_003BB62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB81Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003BB81Cu) [[unlikely]] return; }
L_003BB81C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB630u | kUnwind; return; } goto L_003BB630; } }
L_003BB83C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB634u | kUnwind; return; } goto L_003BB634; } }
L_003BB844:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[18].w[0] + 72u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB6B4u | kUnwind; return; } goto L_003BB6B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB85Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003BB85Cu) [[unlikely]] return; }
L_003BB85C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB6B8u | kUnwind; return; } goto L_003BB6B8; } }
L_003BB87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB6BCu | kUnwind; return; } goto L_003BB6BC; } }
L_003BB884:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[18].w[0] + 72u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB758u | kUnwind; return; } goto L_003BB758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB89Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003BB89Cu) [[unlikely]] return; }
L_003BB89C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB75Cu | kUnwind; return; } goto L_003BB75C; } }
L_003BB8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB760u | kUnwind; return; } goto L_003BB760; } }
L_003BB8C4:
    set32(c.r[4], c.r[18].w[0] + 72u);
    set32(c.r[5], 0u + 98u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB8D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 197u, depth + 1u); else { c.pc = 0x00417480u; return; } if (c.pc != 0x003BB8D4u) [[unlikely]] return; }
L_003BB8D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB8E8u); set32(c.r[4], c.r[18].w[0] + 72u);  if (depth < kMaxDepth) unit_0085(c, 173u, depth + 1u); else { c.pc = 0x00417080u; return; } if (c.pc != 0x003BB8E8u) [[unlikely]] return; }
L_003BB8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7CCu | kUnwind; return; } goto L_003BB7CC; } }
L_003BB8F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[18].w[0] + 72u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B4u | kUnwind; return; } goto L_003BB7B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB908u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x003BB908u) [[unlikely]] return; }
L_003BB908:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7B8u | kUnwind; return; } goto L_003BB7B8; } }
L_003BB928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB7BCu | kUnwind; return; } goto L_003BB7BC; } }
L_003BB930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003BB934:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BB950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB96Cu); set32(c.r[4], c.r[4].w[0] - 15952u);  if (depth < kMaxDepth) unit_0090(c, 74u, depth + 1u); else { c.pc = 0x00440DB0u; return; } if (c.pc != 0x003BB96Cu) [[unlikely]] return; }
L_003BB96C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB978u); set32(c.r[4], c.r[4].w[0] + 23936u);  if (depth < kMaxDepth) unit_0050(c, 215u, depth + 1u); else { c.pc = 0x00343790u; return; } if (c.pc != 0x003BB978u) [[unlikely]] return; }
L_003BB978:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB984u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 108u, depth + 1u); else { c.pc = 0x002BCB90u; return; } if (c.pc != 0x003BB984u) [[unlikely]] return; }
L_003BB984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB98Cu); set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));  if (depth < kMaxDepth) unit_004C(c, 15u, depth + 1u); else { c.pc = 0x00330270u; return; } if (c.pc != 0x003BB98Cu) [[unlikely]] return; }
L_003BB98C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB998u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0052(c, 193u, depth + 1u); else { c.pc = 0x0034BE30u; return; } if (c.pc != 0x003BB998u) [[unlikely]] return; }
L_003BB998:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9A4u); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009F(c, 3u, depth + 1u); else { c.pc = 0x0047C0F0u; return; } if (c.pc != 0x003BB9A4u) [[unlikely]] return; }
L_003BB9A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9B0u); set32(c.r[4], c.r[4].w[0] + 21824u);  if (depth < kMaxDepth) unit_009F(c, 3u, depth + 1u); else { c.pc = 0x0047C0F0u; return; } if (c.pc != 0x003BB9B0u) [[unlikely]] return; }
L_003BB9B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9BCu); set32(c.r[4], c.r[4].w[0] + 23456u);  if (depth < kMaxDepth) unit_009F(c, 3u, depth + 1u); else { c.pc = 0x0047C0F0u; return; } if (c.pc != 0x003BB9BCu) [[unlikely]] return; }
L_003BB9BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9C8u); set32(c.r[4], c.r[4].w[0] + 31536u);  if (depth < kMaxDepth) unit_00BE(c, 229u, depth + 1u); else { c.pc = 0x004FB360u; return; } if (c.pc != 0x003BB9C8u) [[unlikely]] return; }
L_003BB9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9D0u); set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));  if (depth < kMaxDepth) unit_0088(c, 27u, depth + 1u); else { c.pc = 0x00420180u; return; } if (c.pc != 0x003BB9D0u) [[unlikely]] return; }
L_003BB9D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 30804u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BBA74; } }
L_003BB9E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9ECu); set32(c.r[4], c.r[4].w[0] + 30832u);  if (depth < kMaxDepth) unit_00BD(c, 87u, depth + 1u); else { c.pc = 0x004F5AE0u; return; } if (c.pc != 0x003BB9ECu) [[unlikely]] return; }
L_003BB9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 428u, depth + 1u); else { c.pc = 0x00387BF0u; return; } if (c.pc != 0x003BB9F4u) [[unlikely]] return; }
L_003BB9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9FCu);  if (depth < kMaxDepth) unit_0021(c, 334u, depth + 1u); else { c.pc = 0x002879E0u; return; } if (c.pc != 0x003BB9FCu) [[unlikely]] return; }
L_003BB9FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA08u); set32(c.r[4], c.r[4].w[0] + 24224u);  if (depth < kMaxDepth) unit_0052(c, 62u, depth + 1u); else { c.pc = 0x00348E60u; return; } if (c.pc != 0x003BBA08u) [[unlikely]] return; }
L_003BBA08:
    set32(c.r[4], ld32((c.r[28].w[0] - 29812u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BBA20; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA20u); set32(c.r[5], c.r[5].w[0] + 3376u);  if (depth < kMaxDepth) unit_0022(c, 86u, depth + 1u); else { c.pc = 0x00289020u; return; } if (c.pc != 0x003BBA20u) [[unlikely]] return; }
L_003BBA20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA2Cu); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 46u, depth + 1u); else { c.pc = 0x00304910u; return; } if (c.pc != 0x003BBA2Cu) [[unlikely]] return; }
L_003BBA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA34u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 344u, depth + 1u); else { c.pc = 0x003F7420u; return; } if (c.pc != 0x003BBA34u) [[unlikely]] return; }
L_003BBA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA3Cu); set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));  if (depth < kMaxDepth) unit_004C(c, 19u, depth + 1u); else { c.pc = 0x003303E0u; return; } if (c.pc != 0x003BBA3Cu) [[unlikely]] return; }
L_003BBA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA44u); set32(c.r[4], ld32((c.r[28].w[0] - 29684u)));  if (depth < kMaxDepth) unit_0045(c, 54u, depth + 1u); else { c.pc = 0x00314BA0u; return; } if (c.pc != 0x003BBA44u) [[unlikely]] return; }
L_003BBA44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA50u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 70u, depth + 1u); else { c.pc = 0x002F0720u; return; } if (c.pc != 0x003BBA50u) [[unlikely]] return; }
L_003BBA50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA5Cu); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 45u, depth + 1u); else { c.pc = 0x00304900u; return; } if (c.pc != 0x003BBA5Cu) [[unlikely]] return; }
L_003BBA5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22869u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BBB04; } }
L_003BBA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003BBB18; } }
L_003BBA74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 30778u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 30788u)));
    set32(c.r[4], c.r[4].w[0] + 30776u);
    c.r[6].d[0] = c.r[6].d[0] | 16ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 30768u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1064u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 1056u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 1064u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 1064u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1064u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 1056u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 1064u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 36;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1064u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB9E0u | kUnwind; return; } goto L_003BB9E0; } }
L_003BBB04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB10u); set32(c.r[4], c.r[4].w[0] + 9968u);  if (depth < kMaxDepth) unit_0030(c, 606u, depth + 1u); else { c.pc = 0x002C2D50u; return; } if (c.pc != 0x003BBB10u) [[unlikely]] return; }
L_003BBB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBA6Cu | kUnwind; return; } goto L_003BBA6C; } }
L_003BBB18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BBB30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BBB94; } }
    set32(c.r[2], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BBB9C; } }
L_003BBB58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003BBB7C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003BBB7C; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003BBB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB7Cu);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x003BBB7Cu) [[unlikely]] return; }
L_003BBB7C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003BBB94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003BBB94u) [[unlikely]] return; }
L_003BBB94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BBBB8; } }
L_003BBB9C:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 40u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBB58u | kUnwind; return; } goto L_003BBB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBBB0u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x003BBBB0u) [[unlikely]] return; }
L_003BBBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBB58u | kUnwind; return; } goto L_003BBB58; } }
L_003BBBB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BBBD0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BBC08; } }
L_003BBBDC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BBBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BBC0C; } }
L_003BBBF8:
    set32(c.r[3], ld32((c.r[3].w[0] + 1332u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBBDCu | kUnwind; return; } goto L_003BBBDC; } }
    c.budget -= 1;
L_003BBC08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003BBC0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BBC20:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003BBC58; } }
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[3].w[0] << 3);
    c.budget -= 3;
L_003BBC38:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 529u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 1332u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBC38u | kUnwind; return; } goto L_003BBC38; } }
    c.budget -= 1;
L_003BBC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BBC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BBC84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC80u); set32(c.r[4], c.r[3].w[0] + 1324u);  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x003EBBD0u; return; } if (c.pc != 0x003BBC80u) [[unlikely]] return; }
L_003BBC80:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003BBC84:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 1u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 24u), 0u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BBCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BBCEC; } }
    st32((c.r[16].w[0] + 1320u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1316u), 0u);  if (t) { goto L_003BBD0C; } }
L_003BBCEC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCF8u); set32(c.r[4], c.r[2].w[0] + 1324u);  if (depth < kMaxDepth) unit_007A(c, 326u, depth + 1u); else { c.pc = 0x003EBC10u; return; } if (c.pc != 0x003BBCF8u) [[unlikely]] return; }
L_003BBCF8:
    st32((c.r[16].w[0] + 1320u), 0u);
    st32((c.r[16].w[0] + 1316u), 0u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003BBD0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BBD20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0] + 1320u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BBD84; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[18].d[0];  if (t) { goto L_003BBDF4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BBD64; } }
    st32((c.r[17].w[0] + 1320u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1316u), 0u);  if (t) { goto L_003BBD84; } }
L_003BBD64:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBD70u); set32(c.r[4], c.r[2].w[0] + 1324u);  if (depth < kMaxDepth) unit_007A(c, 326u, depth + 1u); else { c.pc = 0x003EBC10u; return; } if (c.pc != 0x003BBD70u) [[unlikely]] return; }
L_003BBD70:
    st32((c.r[17].w[0] + 1320u), 0u);
    st32((c.r[17].w[0] + 1316u), 0u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003BBD84:
    st32((c.r[17].w[0] + 1320u), c.r[18].w[0]);
    set32(c.r[3], 0u - 9u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st32((c.r[17].w[0] + 1316u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BBDE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDBCu); set32(c.r[4], c.r[17].w[0] + 1324u);  if (depth < kMaxDepth) unit_007A(c, 329u, depth + 1u); else { c.pc = 0x003EBC80u; return; } if (c.pc != 0x003BBDBCu) [[unlikely]] return; }
L_003BBDBC:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 14u));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BBDEC; } }
L_003BBDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003BBDF8; } }
L_003BBDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBDBCu | kUnwind; return; } goto L_003BBDBC; } }
L_003BBDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBDDCu | kUnwind; return; } goto L_003BBDDC; } }
L_003BBDF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003BBDF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BBE10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BBE40; } }
L_003BBE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003BBE6C; } }
L_003BBE40:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BBE44:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBE50u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_006E(c, 271u, depth + 1u); else { c.pc = 0x003BBC60u; return; } if (c.pc != 0x003BBE50u) [[unlikely]] return; }
L_003BBE50:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBE44u | kUnwind; return; } goto L_003BBE44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBE38u | kUnwind; return; } goto L_003BBE38; } }
L_003BBE6C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BBE80:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003BBEC8; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_003BBE94:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003BBEB4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003BBEAC; } }
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_003BBEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BBEDC; } }
L_003BBEB4:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBE94u | kUnwind; return; } goto L_003BBE94; } }
L_003BBEC8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003BBED8; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003BBED8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BBEDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BBF40; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BBF48; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_003BBF2C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003BBF2C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003BBF4C; } }
L_003BBF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BBF4C; } }
L_003BBF48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BBF4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BBF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_006F(c, 7u, depth); } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003BBFB8; } }
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_003BBF88:
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_003BBFA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006F(c, 5u, depth); } }
L_003BBF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003BBFC4; } }
L_003BBFA4:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBF88u | kUnwind; return; } goto L_003BBF88; } }
L_003BBFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u - 1u);  if (t) { [[clang::musttail]] return unit_006F(c, 6u, depth); } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BBFC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_006F(c, 3u, depth); } }
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_006F(c, 3u, depth); } }
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[8].w[0] << 5);
    c.budget -= 8;
    [[clang::musttail]] return unit_006F(c, 1u, depth);
}

}

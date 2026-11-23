#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 303, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0,
};

void unit_008F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0043C000;
    case 2u: goto L_0043C06C;
    case 3u: goto L_0043C074;
    case 4u: goto L_0043C0B4;
    case 5u: goto L_0043C118;
    case 6u: goto L_0043C140;
    case 7u: goto L_0043C184;
    case 8u: goto L_0043C194;
    case 9u: goto L_0043C1C4;
    case 10u: goto L_0043C1D4;
    case 11u: goto L_0043C1F4;
    case 12u: goto L_0043C200;
    case 13u: goto L_0043C214;
    case 14u: goto L_0043C298;
    case 15u: goto L_0043C2A4;
    case 16u: goto L_0043C2CC;
    case 17u: goto L_0043C308;
    case 18u: goto L_0043C330;
    case 19u: goto L_0043C33C;
    case 20u: goto L_0043C350;
    case 21u: goto L_0043C3D8;
    case 22u: goto L_0043C3E4;
    case 23u: goto L_0043C3F0;
    case 24u: goto L_0043C3F4;
    case 25u: goto L_0043C430;
    case 26u: goto L_0043C440;
    case 27u: goto L_0043C4E0;
    case 28u: goto L_0043C4FC;
    case 29u: goto L_0043C540;
    case 30u: goto L_0043C554;
    case 31u: goto L_0043C56C;
    case 32u: goto L_0043C580;
    case 33u: goto L_0043C5D0;
    case 34u: goto L_0043C618;
    case 35u: goto L_0043C63C;
    case 36u: goto L_0043C678;
    case 37u: goto L_0043C6DC;
    case 38u: goto L_0043C6E4;
    case 39u: goto L_0043C738;
    case 40u: goto L_0043C740;
    case 41u: goto L_0043C784;
    case 42u: goto L_0043C7A0;
    case 43u: goto L_0043C7A8;
    case 44u: goto L_0043C7F8;
    case 45u: goto L_0043C814;
    case 46u: goto L_0043C81C;
    case 47u: goto L_0043C890;
    case 48u: goto L_0043C89C;
    case 49u: goto L_0043C8A8;
    case 50u: goto L_0043C8C0;
    case 51u: goto L_0043C930;
    case 52u: goto L_0043C93C;
    case 53u: goto L_0043C948;
    case 54u: goto L_0043C950;
    case 55u: goto L_0043C960;
    case 56u: goto L_0043C994;
    case 57u: goto L_0043C99C;
    case 58u: goto L_0043C9B0;
    case 59u: goto L_0043C9DC;
    case 60u: goto L_0043C9EC;
    case 61u: goto L_0043CA30;
    case 62u: goto L_0043CA44;
    case 63u: goto L_0043CAC0;
    case 64u: goto L_0043CB30;
    case 65u: goto L_0043CBB8;
    case 66u: goto L_0043CBD0;
    case 67u: goto L_0043CCEC;
    case 68u: goto L_0043CD30;
    case 69u: goto L_0043CD3C;
    case 70u: goto L_0043CD48;
    case 71u: goto L_0043CDAC;
    case 72u: goto L_0043CDB8;
    case 73u: goto L_0043CE30;
    case 74u: goto L_0043CF8C;
    case 75u: goto L_0043CFC4;
    case 76u: goto L_0043CFEC;
    case 77u: goto L_0043CFF4;
    case 78u: goto L_0043D0DC;
    case 79u: goto L_0043D130;
    case 80u: goto L_0043D14C;
    case 81u: goto L_0043D170;
    case 82u: goto L_0043D184;
    case 83u: goto L_0043D19C;
    case 84u: goto L_0043D1BC;
    case 85u: goto L_0043D2BC;
    case 86u: goto L_0043D2E8;
    case 87u: goto L_0043D300;
    case 88u: goto L_0043D320;
    case 89u: goto L_0043D33C;
    case 90u: goto L_0043D3C8;
    case 91u: goto L_0043D3E0;
    case 92u: goto L_0043D400;
    case 93u: goto L_0043D468;
    case 94u: goto L_0043D480;
    case 95u: goto L_0043D50C;
    case 96u: goto L_0043D6AC;
    case 97u: goto L_0043D6D0;
    case 98u: goto L_0043D6E0;
    case 99u: goto L_0043D6F0;
    case 100u: goto L_0043D764;
    case 101u: goto L_0043D780;
    case 102u: goto L_0043D7F4;
    case 103u: goto L_0043D810;
    case 104u: goto L_0043D864;
    case 105u: goto L_0043D880;
    case 106u: goto L_0043D890;
    case 107u: goto L_0043D8A0;
    case 108u: goto L_0043D8B0;
    case 109u: goto L_0043D8C0;
    case 110u: goto L_0043D8D0;
    case 111u: goto L_0043D8E0;
    case 112u: goto L_0043D8F0;
    case 113u: goto L_0043D900;
    case 114u: goto L_0043D910;
    case 115u: goto L_0043D920;
    case 116u: goto L_0043D930;
    case 117u: goto L_0043D9A4;
    case 118u: goto L_0043D9C0;
    case 119u: goto L_0043D9D0;
    case 120u: goto L_0043DA18;
    case 121u: goto L_0043DA2C;
    case 122u: goto L_0043DA48;
    case 123u: goto L_0043DA68;
    case 124u: goto L_0043DA90;
    case 125u: goto L_0043DAC0;
    case 126u: goto L_0043DAEC;
    case 127u: goto L_0043DAFC;
    case 128u: goto L_0043DB18;
    case 129u: goto L_0043DB38;
    case 130u: goto L_0043DB64;
    case 131u: goto L_0043DB90;
    case 132u: goto L_0043DBBC;
    case 133u: goto L_0043DBCC;
    case 134u: goto L_0043DBE8;
    case 135u: goto L_0043DC08;
    case 136u: goto L_0043DC34;
    case 137u: goto L_0043DC60;
    case 138u: goto L_0043DC70;
    case 139u: goto L_0043DC80;
    case 140u: goto L_0043DC90;
    case 141u: goto L_0043DCA0;
    case 142u: goto L_0043DCFC;
    case 143u: goto L_0043DD18;
    case 144u: goto L_0043DD38;
    case 145u: goto L_0043DD50;
    case 146u: goto L_0043DD64;
    case 147u: goto L_0043DD78;
    case 148u: goto L_0043DDA0;
    case 149u: goto L_0043DDC0;
    case 150u: goto L_0043DDE0;
    case 151u: goto L_0043DE28;
    case 152u: goto L_0043DE74;
    case 153u: goto L_0043DE90;
    case 154u: goto L_0043DEC0;
    case 155u: goto L_0043DECC;
    case 156u: goto L_0043DF4C;
    case 157u: goto L_0043DF54;
    case 158u: goto L_0043DFA4;
    case 159u: goto L_0043DFE0;
    case 160u: goto L_0043DFF0;
    case 161u: goto L_0043E03C;
    case 162u: goto L_0043E04C;
    case 163u: goto L_0043E068;
    case 164u: goto L_0043E088;
    case 165u: goto L_0043E0B0;
    case 166u: goto L_0043E0E0;
    case 167u: goto L_0043E108;
    case 168u: goto L_0043E114;
    case 169u: goto L_0043E130;
    case 170u: goto L_0043E150;
    case 171u: goto L_0043E17C;
    case 172u: goto L_0043E1B0;
    case 173u: goto L_0043E1D8;
    case 174u: goto L_0043E1E4;
    case 175u: goto L_0043E200;
    case 176u: goto L_0043E220;
    case 177u: goto L_0043E24C;
    case 178u: goto L_0043E280;
    case 179u: goto L_0043E2DC;
    case 180u: goto L_0043E2FC;
    case 181u: goto L_0043E310;
    case 182u: goto L_0043E32C;
    case 183u: goto L_0043E350;
    case 184u: goto L_0043E37C;
    case 185u: goto L_0043E3B0;
    case 186u: goto L_0043E3C0;
    case 187u: goto L_0043E3D0;
    case 188u: goto L_0043E3E0;
    case 189u: goto L_0043E3F0;
    case 190u: goto L_0043E410;
    case 191u: goto L_0043E424;
    case 192u: goto L_0043E444;
    case 193u: goto L_0043E480;
    case 194u: goto L_0043E4A4;
    case 195u: goto L_0043E4B0;
    case 196u: goto L_0043E4B4;
    case 197u: goto L_0043E4BC;
    case 198u: goto L_0043E4D0;
    case 199u: goto L_0043E4F0;
    case 200u: goto L_0043E530;
    case 201u: goto L_0043E540;
    case 202u: goto L_0043E55C;
    case 203u: goto L_0043E56C;
    case 204u: goto L_0043E588;
    case 205u: goto L_0043E5DC;
    case 206u: goto L_0043E5EC;
    case 207u: goto L_0043E5FC;
    case 208u: goto L_0043E620;
    case 209u: goto L_0043E63C;
    case 210u: goto L_0043E674;
    case 211u: goto L_0043E6B0;
    case 212u: goto L_0043E6E4;
    case 213u: goto L_0043E728;
    case 214u: goto L_0043E750;
    case 215u: goto L_0043E7F4;
    case 216u: goto L_0043E804;
    case 217u: goto L_0043E828;
    case 218u: goto L_0043E834;
    case 219u: goto L_0043E848;
    case 220u: goto L_0043E86C;
    case 221u: goto L_0043E8A0;
    case 222u: goto L_0043E8A8;
    case 223u: goto L_0043E8D8;
    case 224u: goto L_0043E940;
    case 225u: goto L_0043E964;
    case 226u: goto L_0043E974;
    case 227u: goto L_0043EB68;
    case 228u: goto L_0043EB78;
    case 229u: goto L_0043EBC0;
    case 230u: goto L_0043EBE4;
    case 231u: goto L_0043EBF4;
    case 232u: goto L_0043EDE8;
    case 233u: goto L_0043EDF8;
    case 234u: goto L_0043EE40;
    case 235u: goto L_0043EEBC;
    case 236u: goto L_0043EECC;
    case 237u: goto L_0043EF74;
    case 238u: goto L_0043EF80;
    case 239u: goto L_0043EFDC;
    case 240u: goto L_0043EFEC;
    case 241u: goto L_0043F040;
    case 242u: goto L_0043F0BC;
    case 243u: goto L_0043F0CC;
    case 244u: goto L_0043F0D8;
    case 245u: goto L_0043F19C;
    case 246u: goto L_0043F1A8;
    case 247u: goto L_0043F204;
    case 248u: goto L_0043F250;
    case 249u: goto L_0043F2C0;
    case 250u: goto L_0043F2DC;
    case 251u: goto L_0043F2EC;
    case 252u: goto L_0043F2F0;
    case 253u: goto L_0043F31C;
    case 254u: goto L_0043F338;
    case 255u: goto L_0043F348;
    case 256u: goto L_0043F34C;
    case 257u: goto L_0043F35C;
    case 258u: goto L_0043F3B0;
    case 259u: goto L_0043F584;
    case 260u: goto L_0043F590;
    case 261u: goto L_0043F5B8;
    case 262u: goto L_0043F620;
    case 263u: goto L_0043F62C;
    case 264u: goto L_0043F670;
    case 265u: goto L_0043F6B4;
    case 266u: goto L_0043F820;
    case 267u: goto L_0043F8BC;
    case 268u: goto L_0043F8C8;
    case 269u: goto L_0043F964;
    case 270u: goto L_0043F988;
    case 271u: goto L_0043F998;
    case 272u: goto L_0043F9B4;
    case 273u: goto L_0043F9D0;
    case 274u: goto L_0043F9F0;
    case 275u: goto L_0043FA7C;
    case 276u: goto L_0043FAA0;
    case 277u: goto L_0043FAC4;
    case 278u: goto L_0043FAE0;
    case 279u: goto L_0043FAF0;
    case 280u: goto L_0043FB44;
    case 281u: goto L_0043FB4C;
    case 282u: goto L_0043FB70;
    case 283u: goto L_0043FB80;
    case 284u: goto L_0043FBF4;
    case 285u: goto L_0043FC10;
    case 286u: goto L_0043FC34;
    case 287u: goto L_0043FC48;
    case 288u: goto L_0043FCA0;
    case 289u: goto L_0043FCB4;
    case 290u: goto L_0043FCC8;
    case 291u: goto L_0043FD70;
    case 292u: goto L_0043FD80;
    case 293u: goto L_0043FDA0;
    case 294u: goto L_0043FDF4;
    case 295u: goto L_0043FE14;
    case 296u: goto L_0043FE30;
    case 297u: goto L_0043FE8C;
    case 298u: goto L_0043FE9C;
    case 299u: goto L_0043FEB0;
    case 300u: goto L_0043FEF8;
    case 301u: goto L_0043FF30;
    case 302u: goto L_0043FF38;
    case 303u: goto L_0043FF84;
    case 304u: goto L_0043FF88;
    case 305u: goto L_0043FFC0;
    case 306u: goto L_0043FFE8;
    case 307u: goto L_0043FFF8;
    default: bad_entry(c, 0x0043C000u); return;
    }
L_0043C000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[11], 0u - 3u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u - 9u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[6], c.r[29].w[0] + 224u);
    st32((c.r[17].w[0] + 40u), c.r[5].w[0]);
    c.f[13] = c.f[20];
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 171u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C06Cu); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 46u, depth + 1u); else { c.pc = 0x00439DA0u; return; } if (c.pc != 0x0043C06Cu) [[unlikely]] return; }
L_0043C06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043BC94u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 162u, depth); } }
L_0043C074:
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 28468u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 2976u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0043C094; } }
    c.r[9].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_0043C094:
    set32(c.r[3], ld32((c.r[6].w[0] + 2976u)));
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 2936u)));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0043C0E8; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 2976u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0043C0B4:
    set32(c.r[3], ld32((c.r[7].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0043C0D4; } }
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 2976u), c.r[3].w[0]);  if (t) { goto L_0043C0F8; } }
L_0043C0D4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043C0B4u | kUnwind; return; } goto L_0043C0B4; } }
    c.budget -= 1;
L_0043C0E8:
    set32(c.r[3], ld32((c.r[6].w[0] + 2976u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043C0F8; } }
    st32((c.r[6].w[0] + 2976u), 0u);
    c.budget -= 1;
L_0043C0F8:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 80u));
    c.r[3].d[0] = c.r[9].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043BA88u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 152u, depth); } }
L_0043C118:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 28468u)));  if (t) { goto L_0043C12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0043C174; } }
L_0043C12C:
    set32(c.r[3], ld32((c.r[5].w[0] + 2936u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0043C170; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0043C140:
    set32(c.r[2], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0043C15C; } }
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 64u)));  if (t) { goto L_0043C174; } }
L_0043C15C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043C140u | kUnwind; return; } goto L_0043C140; } }
    c.budget -= 1;
L_0043C170:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043C174:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C184u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0043C184u) [[unlikely]] return; }
L_0043C184:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C194u) [[unlikely]] return; }
L_0043C194:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 10288u);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C1C4u); st32((c.r[29].w[0] + 220u), c.f[0]);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0043C1C4u) [[unlikely]] return; }
L_0043C1C4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C1D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043C1D4u) [[unlikely]] return; }
L_0043C1D4:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], 0u + 171u);
    set32(c.r[16], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043C214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C1F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x0043C1F4u) [[unlikely]] return; }
L_0043C1F4:
    set32(c.r[4], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C200u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x0043C200u) [[unlikely]] return; }
L_0043C200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043C214; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C214u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 48u, depth + 1u); else { c.pc = 0x0043A1E0u; return; } if (c.pc != 0x0043C214u) [[unlikely]] return; }
L_0043C214:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[6].d[0] = 0ull & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u - 2u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[12], c.r[6].w[0] << 1);
    set32(c.r[10], c.r[6].w[0] << 3);
    set32(c.r[8], c.r[6].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[11], 0u - 3u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[9], 0u - 9u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[3], 0u - 5u);
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[5], 0u + 171u);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C298u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 46u, depth + 1u); else { c.pc = 0x00439DA0u; return; } if (c.pc != 0x0043C298u) [[unlikely]] return; }
L_0043C298:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043BC94u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 162u, depth); } }
L_0043C2A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 28468u)));  if (t) { goto L_0043C2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0043C2FC; } }
L_0043C2B8:
    set32(c.r[3], ld32((c.r[5].w[0] + 2936u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0043C2F8; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0043C2CC:
    set32(c.r[2], ld32((c.r[6].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0043C2E8; } }
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 64u)));  if (t) { goto L_0043C2FC; } }
L_0043C2E8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043C2CCu | kUnwind; return; } goto L_0043C2CC; } }
L_0043C2F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043C2FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C308u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0043C308u) [[unlikely]] return; }
L_0043C308:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 171u);
    set32(c.r[16], c.r[3].w[0] + 32u);
    set32(c.r[17], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043C350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 200u, depth + 1u); else { c.pc = 0x0028DF10u; return; } if (c.pc != 0x0043C330u) [[unlikely]] return; }
L_0043C330:
    set32(c.r[4], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C33Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 199u, depth + 1u); else { c.pc = 0x0028DF00u; return; } if (c.pc != 0x0043C33Cu) [[unlikely]] return; }
L_0043C33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043C350; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C350u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 48u, depth + 1u); else { c.pc = 0x0043A1E0u; return; } if (c.pc != 0x0043C350u) [[unlikely]] return; }
L_0043C350:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 2u);
    set32(c.r[13], c.r[2].w[0] << 1);
    set32(c.r[9], c.r[4].w[0] << 2);
    set32(c.r[12], 0u - 3u);
    set32(c.r[10], 0u - 9u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[8], 0u - 5u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[17].w[0] + 40u), c.r[4].w[0]);
    c.f[13] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], 0u + 171u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[13].d[0];
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C3D8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 46u, depth + 1u); else { c.pc = 0x00439DA0u; return; } if (c.pc != 0x0043C3D8u) [[unlikely]] return; }
L_0043C3D8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043BC94u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 162u, depth); } }
L_0043C3E4:
    st32((c.r[18].w[0] + 68u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043BB18u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 154u, depth); } }
L_0043C3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0043C3F4:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0043C430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_0043C440:
    st32((c.r[4].w[0] + 68u), 0u);
    c.r[3].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 64u), 0u);
    set32(c.r[5], 0u + 19u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    set32(c.r[13], 0u - 3u);
    st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[14], c.r[3].w[0] << 1);
    st32((c.r[4].w[0] + 76u), 0u);
    set32(c.r[11], 0u - 5u);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 80u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[10], 0u + 400u);
    set32(c.r[9], 0u + 5u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[6], 0u - 17u);
    set32(c.r[7], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 80u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 84u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 80u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 80u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0043C4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 60u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C4FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x0043C4FCu) [[unlikely]] return; }
L_0043C4FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] + 10400u);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 80u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C554u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x0043C554u) [[unlikely]] return; }
L_0043C554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043C56C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C56Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28468u)));  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0043C5D0u; return; } if (c.pc != 0x0043C56Cu) [[unlikely]] return; }
L_0043C56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C580:
    set32(c.r[3], ld32((c.r[4].w[0] + 2936u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2936u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2936u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 64u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2936u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 68u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2936u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 2936u), c.r[3].w[0]);  c.pc = t; return; }
L_0043C5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18912u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0043C000u < 16384u) { entry = entries_008F[(t - 0x0043C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0043C618:
    st32((c.r[16].w[0] + 2976u), c.r[6].w[0]);
    set32(c.r[3], 0u - 5u);
    st8((c.r[16].w[0] + 2940u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043C9EC; } }
L_0043C63C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043C9EC; } }
L_0043C678:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + 544u);
    set32(c.r[3], 0u + 170u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));  if (t) { goto L_0043CA14; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C6DCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00437440u; return; } if (c.pc != 0x0043C6DCu) [[unlikely]] return; }
L_0043C6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043C9EC; } }
L_0043C6E4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C738u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 197u, depth + 1u); else { c.pc = 0x00477AB0u; return; } if (c.pc != 0x0043C738u) [[unlikely]] return; }
L_0043C738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043C9EC; } }
L_0043C740:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C784u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0043C784u) [[unlikely]] return; }
L_0043C784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    c.r[5].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C7A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0043C7A0u) [[unlikely]] return; }
L_0043C7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043C9EC; } }
L_0043C7A8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    c.r[3].d[0] = c.r[4].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CA14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C7F8u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 191u, depth + 1u); else { c.pc = 0x00477960u; return; } if (c.pc != 0x0043C7F8u) [[unlikely]] return; }
L_0043C7F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], c.r[4].w[0] + 19136u);
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C814u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_009D(c, 193u, depth + 1u); else { c.pc = 0x00477990u; return; } if (c.pc != 0x0043C814u) [[unlikely]] return; }
L_0043C814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043C9EC; } }
L_0043C81C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043C9F4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043C9F4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0043C85C; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 80u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0043C85C:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043C890; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[2], 0u + 170u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0043C890; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C890u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00437440u; return; } if (c.pc != 0x0043C890u) [[unlikely]] return; }
L_0043C890:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C89Cu); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 192u, depth + 1u); else { c.pc = 0x00477970u; return; } if (c.pc != 0x0043C89Cu) [[unlikely]] return; }
L_0043C89C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C8A8u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 188u, depth + 1u); else { c.pc = 0x00477910u; return; } if (c.pc != 0x0043C8A8u) [[unlikely]] return; }
L_0043C8A8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0043C8C0:
    st32((c.r[16].w[0] + 2976u), 0u);
    set32(c.r[4], 0u - 5u);
    st8((c.r[16].w[0] + 2940u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043C8FC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0043C8FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043C930; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[2], 0u + 170u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0043C930; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C930u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00437440u; return; } if (c.pc != 0x0043C930u) [[unlikely]] return; }
L_0043C930:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C93Cu); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 192u, depth + 1u); else { c.pc = 0x00477970u; return; } if (c.pc != 0x0043C93Cu) [[unlikely]] return; }
L_0043C93C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C948u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 188u, depth + 1u); else { c.pc = 0x00477910u; return; } if (c.pc != 0x0043C948u) [[unlikely]] return; }
L_0043C948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043C9EC; } }
L_0043C950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C960u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0043C960u) [[unlikely]] return; }
L_0043C960:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 762u)));
    c.r[7].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C994u); set32(c.r[5], c.r[2].w[0] - 625u);  if (depth < kMaxDepth) unit_00AD(c, 131u, depth + 1u); else { c.pc = 0x004B52B0u; return; } if (c.pc != 0x0043C994u) [[unlikely]] return; }
L_0043C994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043C9EC; } }
L_0043C99C:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 84u), c.r[6].w[0]);  if (t) { goto L_0043C9EC; } }
L_0043C9B0:
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 80u));
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043C9EC; } }
L_0043C9DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CA14; } }
    st32((c.r[3].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 1;
L_0043C9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043CA18; } }
L_0043C9F4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043C8C0u | kUnwind; return; } goto L_0043C8C0; } }
L_0043CA14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043CA18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043CA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CA44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x0043CA44u) [[unlikely]] return; }
L_0043CA44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043CBBC; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043CBC0; } }
L_0043CA64:
    set32(c.r[7], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], 0u - 33u);
    c.r[6].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], 0u - 513u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[7].w[0] + 552u));
    c.r[7].d[0] = c.r[7].d[0] ^ 187ull;
    c.r[7].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 5);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 29166u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[6].d[0] << 58;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], c.r[5].w[0] << 9);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CAC0u); st16((c.r[2].w[0] + 29166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 73u, depth + 1u); else { c.pc = 0x0043CE30u; return; } if (c.pc != 0x0043CAC0u) [[unlikely]] return; }
L_0043CAC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 811u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CAE8; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0043CAE8:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    set32(c.r[5], 0u - 17u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[9], ld32((c.r[4].w[0] - 20352u)));
    c.r[1].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0043CB88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 57u);
    set32(c.r[8], ld32((c.r[4].w[0] - 20360u)));
    c.budget -= 3;
L_0043CB30:
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[7].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[7], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0043CB74; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0043CB74; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 523u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0043CB74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0043CB88; } }
L_0043CB74:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CB30u | kUnwind; return; } goto L_0043CB30; } }
    c.budget -= 1;
L_0043CB88:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043CBBC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0043CBBC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CBB8u); set32(c.r[4], c.r[3].w[0] + 372u);  if (depth < kMaxDepth) unit_00BB(c, 122u, depth + 1u); else { c.pc = 0x004ED200u; return; } if (c.pc != 0x0043CBB8u) [[unlikely]] return; }
L_0043CBB8:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_0043CBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043CBC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043CBD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[29].w[0] + 92u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 52u));
    c.f[24] = ld32((c.r[29].w[0] + 108u));
    c.f[23] = ld32((c.r[29].w[0] + 124u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043CC2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0043CDF8; } }
L_0043CC2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 2960u));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.f[21] = ld32((c.r[3].w[0] + 36u));
    c.f[22] = ld32((c.r[3].w[0] + 32u));
    c.f[20] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[21]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043CD14; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0043CD8C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0043CCEC; } }
    c.f[1] = ld32((c.r[28].w[0] - 31408u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], 0u + 6u);
    st8((c.r[17].w[0] + 2942u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 31404u));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 65u);
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 2944u), c.f[2]);
    st32((c.r[17].w[0] + 2948u), c.f[1]);
    st32((c.r[17].w[0] + 2952u), c.f[0]);
    st32((c.r[17].w[0] + 2956u), c.f[6]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 52u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 21;
L_0043CCEC:
    c.f[0] = ld32((c.r[17].w[0] + 2944u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2948u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2952u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2956u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2942u)));  if (t) { goto L_0043CDF8; } }
L_0043CD14:
    c.f[0] = ld32((c.r[28].w[0] - 31400u));
    c.f[25] = ld32((c.r[28].w[0] - 31396u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[24] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[27] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CD30u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0043CD30u) [[unlikely]] return; }
L_0043CD30:
    c.f[12] = c.f[25];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CD3Cu); c.f[26] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0043CD3Cu) [[unlikely]] return; }
L_0043CD3C:
    c.f[25] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CD48u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0043CD48u) [[unlikely]] return; }
L_0043CD48:
    c.f[4] = ld32((c.r[28].w[0] - 31392u));
    set32(c.r[2], 0u + 3u);
    c.facc = fp::ee::mul(c.fcr31, c.f[27], c.f[25]);
    st8((c.r[17].w[0] + 2942u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[26]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[22], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = c.f[25] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[27], c.f[26]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[1]);
    st32((c.r[17].w[0] + 2944u), c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 2948u), c.f[2]);
    st32((c.r[17].w[0] + 2952u), c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2956u), c.f[23]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CCECu | kUnwind; return; } goto L_0043CCEC; } }
L_0043CD8C:
    c.f[1] = ld32((c.r[28].w[0] - 31408u));
    c.f[0] = ld32((c.r[28].w[0] - 31396u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[25] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[23] = c.f[0] ^ fp::kSign;
    c.f[26] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CDACu); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0043CDACu) [[unlikely]] return; }
L_0043CDAC:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CDB8u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0043CDB8u) [[unlikely]] return; }
L_0043CDB8:
    c.facc = fp::ee::mul(c.fcr31, c.f[26], c.f[0]);
    set32(c.r[2], 0u + 6u);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[25], c.f[23]);
    st8((c.r[17].w[0] + 2942u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[22], c.f[1]);
    st32((c.r[17].w[0] + 2944u), c.f[1]);
    c.f[1] = ld32((c.r[28].w[0] - 31404u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[26], c.f[23]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[25], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[21], c.f[1]);
    st32((c.r[17].w[0] + 2948u), c.f[1]);
    st32((c.r[17].w[0] + 2952u), c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2956u), c.f[24]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CCECu | kUnwind; return; } goto L_0043CCEC; } }
L_0043CDF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0043CE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043D2F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043D2F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    set32(c.r[7], 0u + 1u);
    c.f[1] = ld32((c.r[16].w[0] + 2964u));
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 2964u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[16].w[0] + 2968u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 2968u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2960u));
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[4] = ld32((c.r[5].w[0] + 36u));
    c.f[6] = ld32((c.r[5].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[4] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 34;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043CFFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[7].d[0];  if (t) { goto L_0043D1C4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0043D2F0; } }
    c.f[1] = ld32((c.r[16].w[0] + 2968u));
    c.f[0] = ld32((c.r[28].w[0] - 31428u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043D2CC; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CF34; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
L_0043CF34:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0043CF80; } }
    c.f[1] = c.f[3] & fp::kAbs;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043CF80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043D2CC; } }
L_0043CF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0043D2CC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_0043CF8C:
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043CFC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043CFC4; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + 544u);
    set32(c.r[3], 0u + 170u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));  if (t) { goto L_0043D2DC; } }
    st32((c.r[16].w[0] + 2968u), 0u);
    c.budget -= 1;
L_0043CFC4:
    c.f[1] = ld32((c.r[16].w[0] + 2964u));
    c.f[0] = ld32((c.r[28].w[0] - 31412u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043D2F0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CFECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043CFECu) [[unlikely]] return; }
L_0043CFEC:
    st8((c.r[16].w[0] + 2960u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 2964u), 0u);
    c.budget -= 2;
L_0043CFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043D2F4; } }
L_0043CFFC:
    c.f[1] = ld32((c.r[16].w[0] + 2968u));
    c.f[0] = ld32((c.r[28].w[0] - 31432u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043D098; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 529u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[3].d[0] ^ 0ull;
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0043D068; } }
    c.f[1] = c.f[3] & fp::kAbs;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043D068; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043D06C; } }
L_0043D068:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043D06C:
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 762u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 4u);
    set32(c.r[7], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0043D098; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0043D098:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043D0DC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043D0DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043D0DC; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + 544u);
    set32(c.r[3], 0u + 170u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));  if (t) { goto L_0043D194; } }
    st32((c.r[16].w[0] + 2968u), 0u);
    c.budget -= 1;
L_0043D0DC:
    c.f[1] = ld32((c.r[16].w[0] + 2964u));
    c.f[0] = ld32((c.r[28].w[0] - 31420u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043D2F0; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 65u);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043D1A4; } }
L_0043D130:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043D170; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D14Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043D14Cu) [[unlikely]] return; }
L_0043D14C:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043D170; } }
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D170u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0043D170u) [[unlikely]] return; }
L_0043D170:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D184u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043D184u) [[unlikely]] return; }
L_0043D184:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 2960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2964u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CFF4u | kUnwind; return; } goto L_0043CFF4; } }
L_0043D194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D19Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00437440u; return; } if (c.pc != 0x0043D19Cu) [[unlikely]] return; }
L_0043D19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2968u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043D0DCu | kUnwind; return; } goto L_0043D0DC; } }
L_0043D1A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[5], c.r[5].w[0] + 18992u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D1BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x002BD2E0u; return; } if (c.pc != 0x0043D1BCu) [[unlikely]] return; }
L_0043D1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043D130u | kUnwind; return; } goto L_0043D130; } }
L_0043D1C4:
    c.f[1] = ld32((c.r[16].w[0] + 2968u));
    c.f[0] = ld32((c.r[28].w[0] - 31424u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043D234; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 529u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[3].d[0] ^ 0ull;
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0043D230; } }
    c.f[1] = c.f[3] & fp::kAbs;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043D230; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0043D234; } }
L_0043D230:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043D234:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043D260; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043D260; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043D260; } }
    st32((c.r[16].w[0] + 2968u), 0u);
    c.budget -= 1;
L_0043D260:
    c.f[1] = ld32((c.r[16].w[0] + 2964u));
    c.f[0] = ld32((c.r[28].w[0] - 31416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043D2F0; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 65u);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D2BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043D2BCu) [[unlikely]] return; }
L_0043D2BC:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 2960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2964u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CFF4u | kUnwind; return; } goto L_0043CFF4; } }
L_0043D2CC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CFC4u | kUnwind; return; } goto L_0043CFC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CF8Cu | kUnwind; return; } goto L_0043CF8C; } }
L_0043D2DC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D2E8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00437440u; return; } if (c.pc != 0x0043D2E8u) [[unlikely]] return; }
L_0043D2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2968u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CFC4u | kUnwind; return; } goto L_0043CFC4; } }
L_0043D2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043D2F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043D3D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0043D320:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043D33C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D33Cu); set32(c.r[4], c.r[2].w[0] + 372u);  if (depth < kMaxDepth) unit_00BB(c, 115u, depth + 1u); else { c.pc = 0x004ED0B0u; return; } if (c.pc != 0x0043D33Cu) [[unlikely]] return; }
L_0043D33C:
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[11].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 2940u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2941u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], 0u - 3u);
    c.r[12].d[0] = ld8((c.r[16].w[0] + 52u));
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[8], 0u - 2u);
    set32(c.r[6], 0u - 9u);
    set32(c.r[7], c.r[11].w[0] << 3);
    set32(c.r[3], 0u - 17u);
    set32(c.r[5], c.r[11].w[0] << 4);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[12].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 2972u), 0u);
    st32((c.r[16].w[0] + 2976u), 0u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[11].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D3C8u); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0043D3C8u) [[unlikely]] return; }
L_0043D3C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043D3E8; } }
L_0043D3D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D3E0u); set32(c.r[4], c.r[2].w[0] + 372u);  if (depth < kMaxDepth) unit_00BB(c, 115u, depth + 1u); else { c.pc = 0x004ED0B0u; return; } if (c.pc != 0x0043D3E0u) [[unlikely]] return; }
L_0043D3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 32u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043D320u | kUnwind; return; } goto L_0043D320; } }
L_0043D3E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0043D468; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 11040u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 28468u), 0u);  if (t) { goto L_0043D450; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D450; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0043D450:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043D468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D468u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0043D468u) [[unlikely]] return; }
L_0043D468:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[3], c.r[3].w[0] - 12672u);
    set32(c.r[2], c.r[2].w[0] + 11040u);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 35;
L_0043D50C:
    st32((c.r[10].w[0] + 56u), 0u);
    set32(c.r[11], c.r[11].w[0] + 8u);
    st32((c.r[10].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(172ll) ? 1ull : 0ull;
    st32((c.r[10].w[0] + 64u), 0u);
    st32((c.r[10].w[0] + 68u), 0u);
    st32((c.r[10].w[0] + 72u), 0u);
    st32((c.r[10].w[0] + 76u), 0u);
    st32((c.r[10].w[0] + 80u), 0u);
    st32((c.r[10].w[0] + 84u), 0u);
    st32((c.r[10].w[0] + 88u), 0u);
    st32((c.r[10].w[0] + 92u), 0u);
    st32((c.r[10].w[0] + 96u), 0u);
    st32((c.r[10].w[0] + 100u), 0u);
    st32((c.r[10].w[0] + 104u), 0u);
    st32((c.r[10].w[0] + 108u), 0u);
    st32((c.r[10].w[0] + 112u), 0u);
    st32((c.r[10].w[0] + 116u), 0u);
    st32((c.r[10].w[0] + 120u), 0u);
    st32((c.r[10].w[0] + 124u), 0u);
    st32((c.r[10].w[0] + 128u), 0u);
    st32((c.r[10].w[0] + 132u), 0u);
    st32((c.r[10].w[0] + 136u), 0u);
    st32((c.r[10].w[0] + 140u), 0u);
    st32((c.r[10].w[0] + 144u), 0u);
    st32((c.r[10].w[0] + 148u), 0u);
    st32((c.r[10].w[0] + 152u), 0u);
    st32((c.r[10].w[0] + 156u), 0u);
    st32((c.r[10].w[0] + 160u), 0u);
    st32((c.r[10].w[0] + 164u), 0u);
    st32((c.r[10].w[0] + 168u), 0u);
    st32((c.r[10].w[0] + 172u), 0u);
    st32((c.r[10].w[0] + 176u), 0u);
    st32((c.r[10].w[0] + 180u), 0u);
    c.budget -= 36;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043D50Cu | kUnwind; return; } goto L_0043D50C; } }
    set32(c.r[2], c.r[11].w[0] << 4);
    c.r[14].d[0] = 0ull & 1ull;
    set32(c.r[24], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[15], 0u + 13u);
    st32((c.r[24].w[0] + 56u), 0u);
    set32(c.r[12], 0u - 129u);
    st32((c.r[24].w[0] + 60u), 0u);
    set32(c.r[13], c.r[14].w[0] << 7);
    st32((c.r[24].w[0] + 64u), 0u);
    set32(c.r[11], 0u + 8u);
    st32((c.r[24].w[0] + 68u), 0u);
    set32(c.r[9], 0u - 3u);
    st32((c.r[24].w[0] + 72u), 0u);
    set32(c.r[10], c.r[14].w[0] << 1);
    st32((c.r[24].w[0] + 76u), 0u);
    set32(c.r[8], 0u - 2u);
    st32((c.r[24].w[0] + 80u), 0u);
    set32(c.r[6], 0u - 9u);
    st32((c.r[24].w[0] + 84u), 0u);
    set32(c.r[7], c.r[14].w[0] << 3);
    st32((c.r[24].w[0] + 88u), 0u);
    set32(c.r[3], 0u - 17u);
    st32((c.r[24].w[0] + 92u), 0u);
    set32(c.r[5], c.r[14].w[0] << 4);
    st32((c.r[24].w[0] + 96u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[24].w[0] + 100u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[24].w[0] + 104u), 0u);
    st32((c.r[24].w[0] + 108u), 0u);
    st32((c.r[24].w[0] + 112u), 0u);
    st32((c.r[24].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 2936u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 2976u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st8((c.r[16].w[0] + 2942u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[16].w[0] + 2960u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 2964u), 0u);
    st32((c.r[16].w[0] + 2968u), 0u);
    c.r[15].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[12].d[0] = c.r[15].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[16].w[0] + 2940u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2941u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 2972u), 0u);
    st32((c.r[16].w[0] + 2976u), 0u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 68;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D6ACu); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0043D6ACu) [[unlikely]] return; }
L_0043D6AC:
    st32((c.r[28].w[0] - 28468u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D6D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0043D764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 10064u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D74C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D74C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D74C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0043D74C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043D764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D764u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0043D764u) [[unlikely]] return; }
L_0043D764:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0043D7F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 10400u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D7DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D7DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D7DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0043D7DC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043D7F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D7F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0043D7F4u) [[unlikely]] return; }
L_0043D7F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0043D864; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 10736u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D84C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0043D84C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043D864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0043D864u) [[unlikely]] return; }
L_0043D864:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D880:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D8A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D8B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D8C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D8D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D8E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043D930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0043D9A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 11344u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D98C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D98C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043D98C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0043D98C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043D9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D9A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0043D9A4u) [[unlikely]] return; }
L_0043D9A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D9C0:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  [[clang::musttail]] return unit_009C(c, 13u, depth); }
L_0043D9D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 48u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[7].w[0] << (c.r[8].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043DA20; } }
L_0043DA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043DA98; } }
L_0043DA20:
    set32(c.r[16], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DA2Cu); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0095(c, 348u, depth + 1u); else { c.pc = 0x004577E0u; return; } if (c.pc != 0x0043DA2Cu) [[unlikely]] return; }
L_0043DA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043DA98; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0043DA98; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043DA48:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 1348u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043DA84; } }
L_0043DA68:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DA48u | kUnwind; return; } goto L_0043DA48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DA18u | kUnwind; return; } goto L_0043DA18; } }
L_0043DA84:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DA90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0043FDA0u; return; } if (c.pc != 0x0043DA90u) [[unlikely]] return; }
L_0043DA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DA68u | kUnwind; return; } goto L_0043DA68; } }
L_0043DA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043DAC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAECu); set32(c.r[4], c.r[2].w[0] + 60u);  if (depth < kMaxDepth) unit_0095(c, 345u, depth + 1u); else { c.pc = 0x004576D0u; return; } if (c.pc != 0x0043DAECu) [[unlikely]] return; }
L_0043DAEC:
    set32(c.r[16], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAFCu); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0095(c, 348u, depth + 1u); else { c.pc = 0x004577E0u; return; } if (c.pc != 0x0043DAFCu) [[unlikely]] return; }
L_0043DAFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043DB50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0043DB50; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043DB18:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 1348u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043DB58; } }
L_0043DB38:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DB18u | kUnwind; return; } goto L_0043DB18; } }
    c.budget -= 1;
L_0043DB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043DB70; } }
L_0043DB58:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0043FDA0u; return; } if (c.pc != 0x0043DB64u) [[unlikely]] return; }
L_0043DB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DB38u | kUnwind; return; } goto L_0043DB38; } }
    c.budget -= 1;
L_0043DB70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043DB90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DBBCu); set32(c.r[4], c.r[2].w[0] + 60u);  if (depth < kMaxDepth) unit_0095(c, 345u, depth + 1u); else { c.pc = 0x004576D0u; return; } if (c.pc != 0x0043DBBCu) [[unlikely]] return; }
L_0043DBBC:
    set32(c.r[16], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DBCCu); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0095(c, 348u, depth + 1u); else { c.pc = 0x004577E0u; return; } if (c.pc != 0x0043DBCCu) [[unlikely]] return; }
L_0043DBCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043DC20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0043DC20; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043DBE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 1348u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043DC28; } }
L_0043DC08:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DBE8u | kUnwind; return; } goto L_0043DBE8; } }
    c.budget -= 1;
L_0043DC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043DC40; } }
L_0043DC28:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0043FDA0u; return; } if (c.pc != 0x0043DC34u) [[unlikely]] return; }
L_0043DC34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DC08u | kUnwind; return; } goto L_0043DC08; } }
    c.budget -= 1;
L_0043DC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043DC60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043DC70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_009B(c, 380u, depth); }
L_0043DC80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043DC90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_009B(c, 383u, depth); }
L_0043DCA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 522u));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 48u));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] << (c.r[9].w[0] & 31u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043DD80; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0043DD58; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DCFCu); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0095(c, 351u, depth + 1u); else { c.pc = 0x004578E0u; return; } if (c.pc != 0x0043DCFCu) [[unlikely]] return; }
L_0043DCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043DD50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0043DD50; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043DD18:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 1348u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043DD6C; } }
L_0043DD38:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DD18u | kUnwind; return; } goto L_0043DD18; } }
    c.budget -= 1;
L_0043DD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043DD80; } }
L_0043DD58:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD64u); set32(c.r[4], c.r[2].w[0] + 104u);  if (depth < kMaxDepth) unit_0095(c, 353u, depth + 1u); else { c.pc = 0x004579F0u; return; } if (c.pc != 0x0043DD64u) [[unlikely]] return; }
L_0043DD64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DD50u | kUnwind; return; } goto L_0043DD50; } }
L_0043DD6C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0043FDA0u; return; } if (c.pc != 0x0043DD78u) [[unlikely]] return; }
L_0043DD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DD38u | kUnwind; return; } goto L_0043DD38; } }
L_0043DD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043DDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DDC0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0043DDC0u) [[unlikely]] return; }
L_0043DDC0:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043DDE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 23528u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043DE0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0043DE44; } }
L_0043DE0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 23526u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 23524u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0043DE98; } }
L_0043DE28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 23524u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 23528u));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 23524u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0043DE44:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043DFC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 23508u));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 23516u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0043DFC8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043DEB0; } }
L_0043DE74:
    set32(c.r[17], ld32((c.r[18].w[0] + 68u)));
    c.r[1].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0043DE88; } }
    set32(c.r[17], 0u + 5u);
    c.budget -= 1;
L_0043DE88:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { goto L_0043DEC0; } }
L_0043DE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0043DFCC; } }
L_0043DE98:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[3].w[0] + 23528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 23526u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DE28u | kUnwind; return; } goto L_0043DE28; } }
L_0043DEB0:
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DE74u | kUnwind; return; } goto L_0043DE74; } }
L_0043DEC0:
    set32(c.r[4], c.r[18].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DECCu); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0095(c, 343u, depth + 1u); else { c.pc = 0x00457640u; return; } if (c.pc != 0x0043DECCu) [[unlikely]] return; }
L_0043DECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043DFC8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[16], ld32((c.r[4].w[0] + 1348u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0043DF88; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043DF88; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x451C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = c.r[3].w[0];
    c.f[6] = ld32((c.r[5].w[0] + 40u));
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    c.f[4] = ld32((c.r[5].w[0] + 36u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 72u), c.f[5]);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 68u), c.f[3]);  if (t) { goto L_0043DF9C; } }
L_0043DF4C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0043DFAC; } }
L_0043DF54:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0043DFC8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 100u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0043DFC8; } }
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 211u);
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DE90u | kUnwind; return; } goto L_0043DE90; } }
L_0043DF88:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DEC0u | kUnwind; return; } goto L_0043DEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DE90u | kUnwind; return; } goto L_0043DE90; } }
L_0043DF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DFA4u);  if (depth < kMaxDepth) unit_001F(c, 216u, depth + 1u); else { c.pc = 0x0027DE60u; return; } if (c.pc != 0x0043DFA4u) [[unlikely]] return; }
L_0043DFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DF4Cu | kUnwind; return; } goto L_0043DF4C; } }
L_0043DFAC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 100u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DF54u | kUnwind; return; } goto L_0043DF54; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DE90u | kUnwind; return; } goto L_0043DE90; } }
L_0043DFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0043DFCC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0043DFE0:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  [[clang::musttail]] return unit_009C(c, 13u, depth); }
L_0043DFF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 48u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[7].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043E044; } }
L_0043E03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043E0B8; } }
L_0043E044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E04Cu); set32(c.r[4], c.r[19].w[0] + 84u);  if (depth < kMaxDepth) unit_0095(c, 348u, depth + 1u); else { c.pc = 0x004577E0u; return; } if (c.pc != 0x0043E04Cu) [[unlikely]] return; }
L_0043E04C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E0B8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0043E0B8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E068:
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 1348u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043E0A4; } }
L_0043E088:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E068u | kUnwind; return; } goto L_0043E068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E03Cu | kUnwind; return; } goto L_0043E03C; } }
L_0043E0A4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E0B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0043FDA0u; return; } if (c.pc != 0x0043E0B0u) [[unlikely]] return; }
L_0043E0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E088u | kUnwind; return; } goto L_0043E088; } }
L_0043E0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043E0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 60u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E108u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0095(c, 345u, depth + 1u); else { c.pc = 0x004576D0u; return; } if (c.pc != 0x0043E108u) [[unlikely]] return; }
L_0043E108:
    set32(c.r[4], c.r[19].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E114u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 348u, depth + 1u); else { c.pc = 0x004577E0u; return; } if (c.pc != 0x0043E114u) [[unlikely]] return; }
L_0043E114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E168; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0043E168; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E130:
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 1348u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043E170; } }
L_0043E150:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E130u | kUnwind; return; } goto L_0043E130; } }
    c.budget -= 1;
L_0043E168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043E188; } }
L_0043E170:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E17Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0043FDA0u; return; } if (c.pc != 0x0043E17Cu) [[unlikely]] return; }
L_0043E17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E150u | kUnwind; return; } goto L_0043E150; } }
    c.budget -= 1;
L_0043E188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043E1B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 60u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E1D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0095(c, 345u, depth + 1u); else { c.pc = 0x004576D0u; return; } if (c.pc != 0x0043E1D8u) [[unlikely]] return; }
L_0043E1D8:
    set32(c.r[4], c.r[19].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E1E4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 348u, depth + 1u); else { c.pc = 0x004577E0u; return; } if (c.pc != 0x0043E1E4u) [[unlikely]] return; }
L_0043E1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E238; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0043E238; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E200:
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 1348u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043E240; } }
L_0043E220:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E200u | kUnwind; return; } goto L_0043E200; } }
    c.budget -= 1;
L_0043E238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043E258; } }
L_0043E240:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E24Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0043FDA0u; return; } if (c.pc != 0x0043E24Cu) [[unlikely]] return; }
L_0043E24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E220u | kUnwind; return; } goto L_0043E220; } }
    c.budget -= 1;
L_0043E258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043E280:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 48u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 522u));
    set32(c.r[7], c.r[7].w[0] << (c.r[8].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043E388; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043E308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E2DCu); set32(c.r[4], c.r[19].w[0] + 84u);  if (depth < kMaxDepth) unit_0095(c, 353u, depth + 1u); else { c.pc = 0x004579F0u; return; } if (c.pc != 0x0043E2DCu) [[unlikely]] return; }
L_0043E2DC:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 136u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043E368; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 140u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E2FCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0043E2FCu) [[unlikely]] return; }
L_0043E2FC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0043E368; } }
L_0043E308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E310u); set32(c.r[4], c.r[19].w[0] + 84u);  if (depth < kMaxDepth) unit_0095(c, 351u, depth + 1u); else { c.pc = 0x004578E0u; return; } if (c.pc != 0x0043E310u) [[unlikely]] return; }
L_0043E310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E368; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0043E368; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E32C:
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 1348u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043E370; } }
    c.budget -= 1;
L_0043E350:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E32Cu | kUnwind; return; } goto L_0043E32C; } }
    c.budget -= 1;
L_0043E368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043E388; } }
L_0043E370:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E37Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 293u, depth + 1u); else { c.pc = 0x0043FDA0u; return; } if (c.pc != 0x0043E37Cu) [[unlikely]] return; }
L_0043E37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E350u | kUnwind; return; } goto L_0043E350; } }
    c.budget -= 1;
L_0043E388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043E3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043E3C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_009B(c, 380u, depth); }
L_0043E3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043E3E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_009B(c, 383u, depth); }
L_0043E3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E410u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0043E410u) [[unlikely]] return; }
L_0043E410:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 60u);
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E424u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 158u, depth + 1u); else { c.pc = 0x00286350u; return; } if (c.pc != 0x0043E424u) [[unlikely]] return; }
L_0043E424:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0043E468; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E444:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E444u | kUnwind; return; } goto L_0043E444; } }
    c.budget -= 1;
L_0043E468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043E480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043E4C4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4A4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0043E4A4u) [[unlikely]] return; }
L_0043E4A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4B0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_008F(c, 282u, depth + 1u); else { c.pc = 0x0043FB70u; return; } if (c.pc != 0x0043E4B0u) [[unlikely]] return; }
L_0043E4B0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 1;
L_0043E4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4BCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_008F(c, 266u, depth + 1u); else { c.pc = 0x0043F820u; return; } if (c.pc != 0x0043E4BCu) [[unlikely]] return; }
L_0043E4BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043E4D8; } }
L_0043E4C4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 282u, depth + 1u); else { c.pc = 0x0043FB70u; return; } if (c.pc != 0x0043E4D0u) [[unlikely]] return; }
L_0043E4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E4B4u | kUnwind; return; } goto L_0043E4B4; } }
L_0043E4D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043E4F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0043E5DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[17].w[0] + 104u);
    set32(c.r[3], c.r[3].w[0] + 11664u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0043E540; } }
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0043E5E4; } }
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 1;
L_0043E530:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043E540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E540u);  if (depth < kMaxDepth) unit_0021(c, 160u, depth + 1u); else { c.pc = 0x00286390u; return; } if (c.pc != 0x0043E540u) [[unlikely]] return; }
L_0043E540:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E56C; } }
    set32(c.r[4], c.r[17].w[0] + 92u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0043E5F4; } }
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_0043E55C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043E56C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E56Cu);  if (depth < kMaxDepth) unit_0021(c, 160u, depth + 1u); else { c.pc = 0x00286390u; return; } if (c.pc != 0x0043E56Cu) [[unlikely]] return; }
L_0043E56C:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043E588; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043E588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E588u);  if (depth < kMaxDepth) unit_0021(c, 160u, depth + 1u); else { c.pc = 0x00286390u; return; } if (c.pc != 0x0043E588u) [[unlikely]] return; }
L_0043E588:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0043E5C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043E5C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0043E5C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_0043E5C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043E5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0043E5DCu) [[unlikely]] return; }
L_0043E5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043E604; } }
L_0043E5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5ECu);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x0043E5ECu) [[unlikely]] return; }
L_0043E5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 104u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E530u | kUnwind; return; } goto L_0043E530; } }
L_0043E5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5FCu);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x0043E5FCu) [[unlikely]] return; }
L_0043E5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E55Cu | kUnwind; return; } goto L_0043E55C; } }
L_0043E604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043E620:
    st8((c.r[4].w[0] + 136u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 100u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0043E660; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E63C:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E63Cu | kUnwind; return; } goto L_0043E63C; } }
    c.budget -= 1;
L_0043E660:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0043E698; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E674:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 31348u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E674u | kUnwind; return; } goto L_0043E674; } }
L_0043E698:
    st32((c.r[4].w[0] + 120u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0043E6D0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E6B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E6B0u | kUnwind; return; } goto L_0043E6B0; } }
L_0043E6D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0043E708; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E6E4:
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 31348u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E6E4u | kUnwind; return; } goto L_0043E6E4; } }
L_0043E708:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 68u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0043E748; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E728:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E728u | kUnwind; return; } goto L_0043E728; } }
L_0043E748:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043E750:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 149u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043E784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0043E79C; } }
L_0043E784:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0043E79C; } }
L_0043E798:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E79C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043E818; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0043E7B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0043E7D0; } }
L_0043E7B8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E7CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0043E7D0; } }
L_0043E7CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E7D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E7E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0043E808; } }
L_0043E7E0:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E7FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E7F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 229u, depth + 1u); else { c.pc = 0x0043EBC0u; return; } if (c.pc != 0x0043E7F4u) [[unlikely]] return; }
L_0043E7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0043E808; } }
L_0043E7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E804u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 224u, depth + 1u); else { c.pc = 0x0043E940u; return; } if (c.pc != 0x0043E804u) [[unlikely]] return; }
L_0043E804:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0043E808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043E820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043E918; } }
L_0043E818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043E918; } }
L_0043E820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E828u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 183u, depth + 1u); else { c.pc = 0x00486790u; return; } if (c.pc != 0x0043E828u) [[unlikely]] return; }
L_0043E828:
    set32(c.r[5], ld32((c.r[28].w[0] - 28340u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E834u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 184u, depth + 1u); else { c.pc = 0x004867A0u; return; } if (c.pc != 0x0043E834u) [[unlikely]] return; }
L_0043E834:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0043E914; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E848:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043E900; } }
    set32(c.r[16], c.r[2].w[0] + 1296u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E86Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x0043E86Cu) [[unlikely]] return; }
L_0043E86C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043E884; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_w_s(c.f[0]);  if (t) { goto L_0043E890; } }
L_0043E884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.budget -= 3;
L_0043E890:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[20], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E8A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x0043E8A0u) [[unlikely]] return; }
L_0043E8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E8A8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0043E8A8u) [[unlikely]] return; }
L_0043E8A8:
    c.f[1] = c.r[20].w[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[2] = ld32((c.r[19].w[0] + 144u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E8D8u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0043E8D8u) [[unlikely]] return; }
L_0043E8D8:
    c.f[1] = c.r[20].w[0];
    c.f[2] = ld32((c.r[19].w[0] + 144u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_0043E900:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E848u | kUnwind; return; } goto L_0043E848; } }
L_0043E914:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0043E918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0043E940:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 9;
L_0043E964:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E974u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0095(c, 337u, depth + 1u); else { c.pc = 0x004574D0u; return; } if (c.pc != 0x0043E974u) [[unlikely]] return; }
L_0043E974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043EB90; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);  if (t) { goto L_0043E9C4; } }
    c.f[3] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043E9E0; } }
L_0043E9C4:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_0043E9E0:
    c.f[3] = ld32((c.r[17].w[0] + 112u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);  if (t) { goto L_0043E9FC; } }
    c.f[3] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043EA18; } }
L_0043E9FC:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_0043EA18:
    c.f[3] = ld32((c.r[17].w[0] + 116u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);  if (t) { goto L_0043EA34; } }
    c.f[3] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043EA50; } }
L_0043EA34:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_0043EA50:
    c.f[3] = ld32((c.r[17].w[0] + 120u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.f[5] = ld32((c.r[17].w[0] + 96u));
    set32(c.r[2], 0u + 1u);
    c.f[6] = ld32((c.r[17].w[0] + 100u));
    c.f[7] = ld32((c.r[17].w[0] + 104u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);  if (t) { goto L_0043EA90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[2].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    c.budget -= 7;
L_0043EA90:
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0043EAAC; } }
    c.f[3] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043EAC8; } }
L_0043EAAC:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_0043EAC8:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);  if (t) { goto L_0043EAE0; } }
    c.f[3] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043EAFC; } }
L_0043EAE0:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_0043EAFC:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);  if (t) { goto L_0043EB14; } }
    c.f[3] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043EB30; } }
L_0043EB14:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_0043EB30:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[2].w[0] + 1296u), c.f[0]);
    st32((c.r[2].w[0] + 1300u), c.f[1]);
    st32((c.r[2].w[0] + 1304u), c.f[2]);
    st32((c.r[2].w[0] + 1308u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    st8((c.r[2].w[0] + 1280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EB68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 274u, depth + 1u); else { c.pc = 0x0043F9F0u; return; } if (c.pc != 0x0043EB68u) [[unlikely]] return; }
L_0043EB68:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], 0u + 211u);
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0043EB78:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043E964u | kUnwind; return; } goto L_0043E964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043EB98; } }
L_0043EB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043EB78u | kUnwind; return; } goto L_0043EB78; } }
L_0043EB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0043EBC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 9;
L_0043EBE4:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EBF4u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0095(c, 337u, depth + 1u); else { c.pc = 0x004574D0u; return; } if (c.pc != 0x0043EBF4u) [[unlikely]] return; }
L_0043EBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043EE10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);  if (t) { goto L_0043EC44; } }
    c.f[3] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043EC60; } }
L_0043EC44:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_0043EC60:
    c.f[3] = ld32((c.r[17].w[0] + 112u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);  if (t) { goto L_0043EC7C; } }
    c.f[3] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043EC98; } }
L_0043EC7C:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_0043EC98:
    c.f[3] = ld32((c.r[17].w[0] + 116u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);  if (t) { goto L_0043ECB4; } }
    c.f[3] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043ECD0; } }
L_0043ECB4:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_0043ECD0:
    c.f[3] = ld32((c.r[17].w[0] + 120u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.f[5] = ld32((c.r[17].w[0] + 96u));
    set32(c.r[2], 0u + 1u);
    c.f[6] = ld32((c.r[17].w[0] + 100u));
    c.f[7] = ld32((c.r[17].w[0] + 104u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);  if (t) { goto L_0043ED10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[2].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    c.budget -= 7;
L_0043ED10:
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0043ED2C; } }
    c.f[3] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043ED48; } }
L_0043ED2C:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_0043ED48:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);  if (t) { goto L_0043ED60; } }
    c.f[3] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043ED7C; } }
L_0043ED60:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_0043ED7C:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);  if (t) { goto L_0043ED94; } }
    c.f[3] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0043EDB0; } }
L_0043ED94:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_0043EDB0:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[2].w[0] + 1296u), c.f[0]);
    st32((c.r[2].w[0] + 1300u), c.f[1]);
    st32((c.r[2].w[0] + 1304u), c.f[2]);
    st32((c.r[2].w[0] + 1308u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    st8((c.r[2].w[0] + 1280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EDE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 274u, depth + 1u); else { c.pc = 0x0043F9F0u; return; } if (c.pc != 0x0043EDE8u) [[unlikely]] return; }
L_0043EDE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], 0u + 211u);
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0043EDF8:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043EBE4u | kUnwind; return; } goto L_0043EBE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043EE18; } }
L_0043EE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043EDF8u | kUnwind; return; } goto L_0043EDF8; } }
L_0043EE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0043EE40:
    set32(c.r[29], c.r[29].w[0] - 128u);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043EE88; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0043EEA4; } }
L_0043EE88:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0043EEA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.f[24] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
L_0043EEBC:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EECCu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0095(c, 337u, depth + 1u); else { c.pc = 0x004574D0u; return; } if (c.pc != 0x0043EECCu) [[unlikely]] return; }
L_0043EECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043F004; } }
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.f[22] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[3], 0u + 1u);
    c.f[23] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.f[21] = ld32((c.r[17].w[0] + 80u));  if (t) { goto L_0043EEF0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0043EEF0:
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] >> 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull | 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[24], c.f[2]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 120u), c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[25] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EF74u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0043EF74u) [[unlikely]] return; }
L_0043EF74:
    c.f[12] = c.f[25];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EF80u); c.f[25] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0043EF80u) [[unlikely]] return; }
L_0043EF80:
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[25]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[3], 0u + 1u);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[25]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1296u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[2].w[0] + 1300u), c.f[4]);
    st32((c.r[2].w[0] + 1304u), c.f[2]);
    st32((c.r[2].w[0] + 1308u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st8((c.r[2].w[0] + 1280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFDCu); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_008F(c, 274u, depth + 1u); else { c.pc = 0x0043F9F0u; return; } if (c.pc != 0x0043EFDCu) [[unlikely]] return; }
L_0043EFDC:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], 0u + 211u);
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0043EFEC:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043EEBCu | kUnwind; return; } goto L_0043EEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043F00C; } }
L_0043F004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043EFECu | kUnwind; return; } goto L_0043EFEC; } }
L_0043F00C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0043F040:
    set32(c.r[29], c.r[29].w[0] - 128u);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043F088; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0043F0A4; } }
L_0043F088:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0043F0A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.f[24] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
L_0043F0BC:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F0CCu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0095(c, 337u, depth + 1u); else { c.pc = 0x004574D0u; return; } if (c.pc != 0x0043F0CCu) [[unlikely]] return; }
L_0043F0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043F0F0; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0043F0D8:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F0BCu | kUnwind; return; } goto L_0043F0BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043F218; } }
L_0043F0F0:
    c.f[22] = ld32((c.r[17].w[0] + 84u));
    c.f[23] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] < 0; c.f[21] = ld32((c.r[17].w[0] + 80u));  if (t) { goto L_0043F10C; } }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0043F128; } }
L_0043F10C:
    set32(c.r[3], c.r[18].w[0] >> 1);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0043F128:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[2], c.f[2]);
    c.f[0] = 0u;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[25] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.f[12] = c.f[25];
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F19Cu); st32((c.r[29].w[0] + 120u), c.f[25]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0043F19Cu) [[unlikely]] return; }
L_0043F19C:
    c.f[12] = c.f[25];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F1A8u); c.f[25] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0043F1A8u) [[unlikely]] return; }
L_0043F1A8:
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[25]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[3], 0u + 1u);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[25]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 1296u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[2].w[0] + 1300u), c.f[4]);
    st32((c.r[2].w[0] + 1304u), c.f[2]);
    st32((c.r[2].w[0] + 1308u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st8((c.r[2].w[0] + 1280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F204u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_008F(c, 274u, depth + 1u); else { c.pc = 0x0043F9F0u; return; } if (c.pc != 0x0043F204u) [[unlikely]] return; }
L_0043F204:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], 0u + 211u);
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F0D8u | kUnwind; return; } goto L_0043F0D8; } }
L_0043F218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0043F250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043F374; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 149u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0043F364; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0043F354; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0043F2F8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043F29C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043F36C; } }
L_0043F29C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 149u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0043F37C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043F2BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0043F2C0; } }
L_0043F2BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F2C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043F384; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043F2E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F2DCu);  if (depth < kMaxDepth) unit_008F(c, 241u, depth + 1u); else { c.pc = 0x0043F040u; return; } if (c.pc != 0x0043F2DCu) [[unlikely]] return; }
L_0043F2DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0043F2F0; } }
L_0043F2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F2ECu);  if (depth < kMaxDepth) unit_008F(c, 234u, depth + 1u); else { c.pc = 0x0043EE40u; return; } if (c.pc != 0x0043F2ECu) [[unlikely]] return; }
L_0043F2EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0043F2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043F3A0; } }
L_0043F2F8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 149u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0043F38C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043F318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0043F31C; } }
L_0043F318:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F31C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043F394; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043F340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F338u);  if (depth < kMaxDepth) unit_008F(c, 229u, depth + 1u); else { c.pc = 0x0043EBC0u; return; } if (c.pc != 0x0043F338u) [[unlikely]] return; }
L_0043F338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0043F34C; } }
L_0043F340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F348u);  if (depth < kMaxDepth) unit_008F(c, 224u, depth + 1u); else { c.pc = 0x0043E940u; return; } if (c.pc != 0x0043F348u) [[unlikely]] return; }
L_0043F348:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0043F34C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043F39C; } }
L_0043F354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F35Cu);  if (depth < kMaxDepth) unit_008F(c, 214u, depth + 1u); else { c.pc = 0x0043E750u; return; } if (c.pc != 0x0043F35Cu) [[unlikely]] return; }
L_0043F35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043F39C; } }
L_0043F364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0043F39C; } }
L_0043F36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043F39C; } }
L_0043F374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043F39C; } }
L_0043F37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F2C0u | kUnwind; return; } goto L_0043F2C0; } }
L_0043F384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F2F0u | kUnwind; return; } goto L_0043F2F0; } }
L_0043F38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F31Cu | kUnwind; return; } goto L_0043F31C; } }
L_0043F394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F34Cu | kUnwind; return; } goto L_0043F34C; } }
L_0043F39C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043F3A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 148u));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043F568; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0043F410; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0043F400; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043F400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043F5B8; } }
L_0043F400:
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.f[13]);  if (t) { goto L_0043F5B8; } }
L_0043F410:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0043F434; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F434:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043F45C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0043F45C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F45C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0043F5C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFC20000u);
    c.r[3].d[0] = c.r[3].d[0] | 43381ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0043F484; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F484:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043F4AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFCF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 30273ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0043F4AC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F4AC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0043F5D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FCF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 30273ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0043F4D4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F4D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043F4FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC20000u);
    c.r[3].d[0] = c.r[3].d[0] | 43381ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0043F4FC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F4FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0043F5EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x404C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17166ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0043F524; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F524:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043F54C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40450000u);
    c.r[3].d[0] = c.r[3].d[0] | 56488ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0043F54C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043F54C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043F604; } }
    st32((c.r[16].w[0] + 80u), 0u);
    c.f[0] = c.f[13] ^ fp::kSign;
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { goto L_0043F5B8; } }
L_0043F568:
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), c.f[13]);
    c.f[20] = ld32((c.r[16].w[0] + 56u));
    c.f[21] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F584u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0043F584u) [[unlikely]] return; }
L_0043F584:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F590u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0043F590u) [[unlikely]] return; }
L_0043F590:
    c.f[2] = ld32((c.r[16].w[0] + 88u));
    c.f[3] = ld32((c.r[16].w[0] + 80u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.budget -= 10;
L_0043F5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0043F658; } }
L_0043F5C0:
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.f[13]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F5B8u | kUnwind; return; } goto L_0043F5B8; } }
L_0043F5D0:
    c.f[0] = c.f[12] ^ fp::kSign;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F5B8u | kUnwind; return; } goto L_0043F5B8; } }
L_0043F5EC:
    st32((c.r[16].w[0] + 80u), c.f[12]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F5B8u | kUnwind; return; } goto L_0043F5B8; } }
L_0043F604:
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), c.f[13]);
    c.f[20] = ld32((c.r[16].w[0] + 56u));
    c.f[21] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F620u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0043F620u) [[unlikely]] return; }
L_0043F620:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F62Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0043F62Cu) [[unlikely]] return; }
L_0043F62C:
    c.f[2] = ld32((c.r[16].w[0] + 88u));
    c.f[3] = ld32((c.r[16].w[0] + 80u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F5B8u | kUnwind; return; } goto L_0043F5B8; } }
L_0043F658:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043F670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 63u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[22] = c.f[12];
    c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[22]);
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(0u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[22]);
    c.f[12] = c.f[21];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F6B4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_008F(c, 258u, depth + 1u); else { c.pc = 0x0043F3B0u; return; } if (c.pc != 0x0043F6B4u) [[unlikely]] return; }
L_0043F6B4:
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[22]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 96u), c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 112u), c.f[1]);
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.budget -= 44;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043F79C; } }
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_0043F7D0; } }
L_0043F79C:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 13;
L_0043F7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0043F7F4; } }
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043F7F4; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 2;
L_0043F7F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043F820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043F854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 144u));  if (t) { goto L_0043F85C; } }
L_0043F854:
    c.f[1] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.budget -= 2;
L_0043F85C:
    set32(c.r[3], 0u + 3u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 149u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0043F988; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0043F96C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0043F954; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0043F89C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 148u));  if (t) { goto L_0043F98C; } }
L_0043F89C:
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.f[20] = ld32((c.r[16].w[0] + 56u));
    c.f[21] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F8BCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0043F8BCu) [[unlikely]] return; }
L_0043F8BC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F8C8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0043F8C8u) [[unlikely]] return; }
L_0043F8C8:
    c.f[6] = ld32((c.r[16].w[0] + 88u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.f[7] = ld32((c.r[16].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[3] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.f[0] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[20]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[1] = c.r[3].w[0];
    c.f[5] = 0u;
    c.f[2] = c.r[4].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[4]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), 0u);  if (t) { goto L_0043F988; } }
L_0043F954:
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.f[12] = ld32((c.r[16].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 264u, depth + 1u); else { c.pc = 0x0043F670u; return; } if (c.pc != 0x0043F964u) [[unlikely]] return; }
L_0043F964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043F988; } }
L_0043F96C:
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F988u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008F(c, 264u, depth + 1u); else { c.pc = 0x0043F670u; return; } if (c.pc != 0x0043F988u) [[unlikely]] return; }
L_0043F988:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 148u));
    c.budget -= 1;
L_0043F98C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0043F9A0; } }
L_0043F998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0043F9D8; } }
L_0043F9A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F9B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F9B4u) [[unlikely]] return; }
L_0043F9B4:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F9D0u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x0043F9D0u) [[unlikely]] return; }
L_0043F9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F998u | kUnwind; return; } goto L_0043F998; } }
L_0043F9D8:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043F9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 148u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043FA74; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043FA74; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0043FA4C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0043FA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043FA7C; } }
L_0043FA38:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043FA84; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.f[0]);  if (t) { goto L_0043FA7C; } }
L_0043FA4C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0043FAA8; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.f[0]);  if (t) { goto L_0043FA7C; } }
L_0043FA74:
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[16].w[0] + 1312u), c.f[0]);
    c.budget -= 2;
L_0043FA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043FACC; } }
L_0043FA84:
    c.f[3] = ld32((c.r[16].w[0] + 1296u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[16].w[0] + 1304u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAA0u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x0043FAA0u) [[unlikely]] return; }
L_0043FAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FA7Cu | kUnwind; return; } goto L_0043FA7C; } }
L_0043FAA8:
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 1296u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 1304u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAC4u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x0043FAC4u) [[unlikely]] return; }
L_0043FAC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FA7Cu | kUnwind; return; } goto L_0043FA7C; } }
L_0043FACC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FAE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0095(c, 339u, depth); }
L_0043FAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 149u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0043FB54; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1280u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043FB44; } }
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 1296u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[5].w[0] + 1300u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[5].w[0] + 1304u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[5].w[0] + 1308u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 104u));
    st32((c.r[5].w[0] + 1312u), c.f[0]);
    st8((c.r[5].w[0] + 1280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_0043FB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB4Cu);  if (depth < kMaxDepth) unit_0095(c, 341u, depth + 1u); else { c.pc = 0x004575D0u; return; } if (c.pc != 0x0043FB4Cu) [[unlikely]] return; }
L_0043FB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043FB68; } }
L_0043FB54:
    st8((c.r[5].w[0] + 1280u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FB44u | kUnwind; return; } goto L_0043FB44; } }
L_0043FB68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043FB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_0043FB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0043FBF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 11984u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043FBDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043FBDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0043FBDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0043FBDC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0043FBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FBF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0043FBF4u) [[unlikely]] return; }
L_0043FBF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FC34u); set32(c.r[4], c.r[2].w[0] + 60u);  if (depth < kMaxDepth) unit_0095(c, 345u, depth + 1u); else { c.pc = 0x004576D0u; return; } if (c.pc != 0x0043FC34u) [[unlikely]] return; }
L_0043FC34:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FC48u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_008F(c, 278u, depth + 1u); else { c.pc = 0x0043FAE0u; return; } if (c.pc != 0x0043FC48u) [[unlikely]] return; }
L_0043FC48:
    set32(c.r[9], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], 0u - 5u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0] + 1360u)));
    set32(c.r[10], ld32((c.r[9].w[0] + 260u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 112u));
    c.r[4].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 112u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 112u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[10].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x0043FCA0u) [[unlikely]] return; }
L_0043FCA0:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 8912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCB4u); set32(c.r[5], c.r[16].w[0] + 1072u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x0043FCB4u) [[unlikely]] return; }
L_0043FCB4:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCC8u); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x0043FCC8u) [[unlikely]] return; }
L_0043FCC8:
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
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 42;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043FD78; } }
L_0043FD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0043FD88; } }
L_0043FD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FD80u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0043FD80u) [[unlikely]] return; }
L_0043FD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FD70u | kUnwind; return; } goto L_0043FD70; } }
L_0043FD88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043FDA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0043FDD0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043FDEC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0043FDEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0043FDEC; } }
L_0043FDD0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043FDEC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0043FDEC; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0043FDEC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0043FDFC; } }
L_0043FDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043FE1C; } }
L_0043FDFC:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FE14u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x0043FE14u) [[unlikely]] return; }
L_0043FE14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FDF4u | kUnwind; return; } goto L_0043FDF4; } }
L_0043FE1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043FE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0043FF40; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 1360u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043FE88; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0043FFDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0043FE8C; } }
L_0043FE88:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 1;
L_0043FE8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FE9Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0043FE9Cu) [[unlikely]] return; }
L_0043FE9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.budget -= 5;
L_0043FEB0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043FECC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 84u)));  if (t) { goto L_0043FED8; } }
L_0043FECC:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 120u)));
    c.budget -= 3;
L_0043FED8:
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 140u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 144u), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 3u, depth); } }
L_0043FEF8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0043FF2C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0043FF30; } }
L_0043FF2C:
    set32(c.r[16], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 1;
L_0043FF30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 7u, depth); } }
L_0043FF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[16].w[0]);  if (t) { goto L_0043FFD4; } }
L_0043FF40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0043FF7C; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0043FF7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 10u, depth); } }
L_0043FF84:
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 1;
L_0043FF88:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0090(c, 16u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 16u, depth); } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FFC0u); st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0043FFC0u) [[unlikely]] return; }
L_0043FFC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.budget -= 5;
L_0043FFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { [[clang::musttail]] return unit_0090(c, 17u, depth); } }
L_0043FFDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FFE8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0043FFE8u) [[unlikely]] return; }
L_0043FFE8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FFF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043FFF8u) [[unlikely]] return; }
L_0043FFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FE8Cu | kUnwind; return; } goto L_0043FE8C; } }
    [[clang::musttail]] return unit_0090(c, 1u, depth);
}

}

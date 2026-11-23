#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003A[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182,
    0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E8000;
    case 2u: goto L_002E8010;
    case 3u: goto L_002E802C;
    case 4u: goto L_002E8040;
    case 5u: goto L_002E8064;
    case 6u: goto L_002E80A0;
    case 7u: goto L_002E80BC;
    case 8u: goto L_002E80CC;
    case 9u: goto L_002E80DC;
    case 10u: goto L_002E8114;
    case 11u: goto L_002E8144;
    case 12u: goto L_002E8150;
    case 13u: goto L_002E816C;
    case 14u: goto L_002E8194;
    case 15u: goto L_002E81C0;
    case 16u: goto L_002E81E4;
    case 17u: goto L_002E8200;
    case 18u: goto L_002E8210;
    case 19u: goto L_002E8228;
    case 20u: goto L_002E8248;
    case 21u: goto L_002E8340;
    case 22u: goto L_002E8360;
    case 23u: goto L_002E83B0;
    case 24u: goto L_002E83C8;
    case 25u: goto L_002E8404;
    case 26u: goto L_002E8418;
    case 27u: goto L_002E8420;
    case 28u: goto L_002E8434;
    case 29u: goto L_002E8460;
    case 30u: goto L_002E84A0;
    case 31u: goto L_002E84A8;
    case 32u: goto L_002E84BC;
    case 33u: goto L_002E84CC;
    case 34u: goto L_002E84E0;
    case 35u: goto L_002E8554;
    case 36u: goto L_002E855C;
    case 37u: goto L_002E8580;
    case 38u: goto L_002E8590;
    case 39u: goto L_002E8598;
    case 40u: goto L_002E85D8;
    case 41u: goto L_002E8600;
    case 42u: goto L_002E8608;
    case 43u: goto L_002E8628;
    case 44u: goto L_002E8650;
    case 45u: goto L_002E8670;
    case 46u: goto L_002E86FC;
    case 47u: goto L_002E8740;
    case 48u: goto L_002E8770;
    case 49u: goto L_002E8780;
    case 50u: goto L_002E8794;
    case 51u: goto L_002E87B4;
    case 52u: goto L_002E8870;
    case 53u: goto L_002E88BC;
    case 54u: goto L_002E88E4;
    case 55u: goto L_002E88FC;
    case 56u: goto L_002E894C;
    case 57u: goto L_002E8958;
    case 58u: goto L_002E8968;
    case 59u: goto L_002E897C;
    case 60u: goto L_002E899C;
    case 61u: goto L_002E89F8;
    case 62u: goto L_002E8A04;
    case 63u: goto L_002E8A14;
    case 64u: goto L_002E8A28;
    case 65u: goto L_002E8A48;
    case 66u: goto L_002E8AA4;
    case 67u: goto L_002E8AB0;
    case 68u: goto L_002E8B40;
    case 69u: goto L_002E8B6C;
    case 70u: goto L_002E8B80;
    case 71u: goto L_002E8BA0;
    case 72u: goto L_002E8BB0;
    case 73u: goto L_002E8BC4;
    case 74u: goto L_002E8BE4;
    case 75u: goto L_002E8CA4;
    case 76u: goto L_002E8CF0;
    case 77u: goto L_002E8D00;
    case 78u: goto L_002E8D14;
    case 79u: goto L_002E8D44;
    case 80u: goto L_002E8DB0;
    case 81u: goto L_002E9040;
    case 82u: goto L_002E9050;
    case 83u: goto L_002E9060;
    case 84u: goto L_002E9074;
    case 85u: goto L_002E9090;
    case 86u: goto L_002E90A0;
    case 87u: goto L_002E90BC;
    case 88u: goto L_002E90D0;
    case 89u: goto L_002E90EC;
    case 90u: goto L_002E9104;
    case 91u: goto L_002E9120;
    case 92u: goto L_002E9134;
    case 93u: goto L_002E9150;
    case 94u: goto L_002E9160;
    case 95u: goto L_002E917C;
    case 96u: goto L_002E9194;
    case 97u: goto L_002E91B0;
    case 98u: goto L_002E91C0;
    case 99u: goto L_002E91DC;
    case 100u: goto L_002E91EC;
    case 101u: goto L_002E9208;
    case 102u: goto L_002E9218;
    case 103u: goto L_002E9234;
    case 104u: goto L_002E9244;
    case 105u: goto L_002E9260;
    case 106u: goto L_002E9278;
    case 107u: goto L_002E9294;
    case 108u: goto L_002E92A4;
    case 109u: goto L_002E92C0;
    case 110u: goto L_002E92D8;
    case 111u: goto L_002E92F4;
    case 112u: goto L_002E930C;
    case 113u: goto L_002E9328;
    case 114u: goto L_002E9344;
    case 115u: goto L_002E9360;
    case 116u: goto L_002E937C;
    case 117u: goto L_002E9398;
    case 118u: goto L_002E93B4;
    case 119u: goto L_002E93D0;
    case 120u: goto L_002E93EC;
    case 121u: goto L_002E9408;
    case 122u: goto L_002E9424;
    case 123u: goto L_002E9440;
    case 124u: goto L_002E9458;
    case 125u: goto L_002E9478;
    case 126u: goto L_002E9490;
    case 127u: goto L_002E94DC;
    case 128u: goto L_002E94FC;
    case 129u: goto L_002E950C;
    case 130u: goto L_002E952C;
    case 131u: goto L_002E9570;
    case 132u: goto L_002E959C;
    case 133u: goto L_002E95C8;
    case 134u: goto L_002E9630;
    case 135u: goto L_002E9680;
    case 136u: goto L_002E96CC;
    case 137u: goto L_002E96E4;
    case 138u: goto L_002E9734;
    case 139u: goto L_002E9748;
    case 140u: goto L_002E9774;
    case 141u: goto L_002E97BC;
    case 142u: goto L_002E97E8;
    case 143u: goto L_002E97F8;
    case 144u: goto L_002E9850;
    case 145u: goto L_002E9898;
    case 146u: goto L_002E98B0;
    case 147u: goto L_002E9900;
    case 148u: goto L_002E9910;
    case 149u: goto L_002E993C;
    case 150u: goto L_002E9984;
    case 151u: goto L_002E99C0;
    case 152u: goto L_002E99EC;
    case 153u: goto L_002E9A54;
    case 154u: goto L_002E9AC0;
    case 155u: goto L_002E9AE4;
    case 156u: goto L_002E9B00;
    case 157u: goto L_002E9B10;
    case 158u: goto L_002E9B28;
    case 159u: goto L_002E9B48;
    case 160u: goto L_002E9C14;
    case 161u: goto L_002E9C28;
    case 162u: goto L_002E9C30;
    case 163u: goto L_002E9C38;
    case 164u: goto L_002E9C40;
    case 165u: goto L_002E9C48;
    case 166u: goto L_002E9C54;
    case 167u: goto L_002E9CC0;
    case 168u: goto L_002E9CEC;
    case 169u: goto L_002E9D10;
    case 170u: goto L_002E9D40;
    case 171u: goto L_002E9E10;
    case 172u: goto L_002E9E84;
    case 173u: goto L_002E9EA0;
    case 174u: goto L_002E9EFC;
    case 175u: goto L_002E9F1C;
    case 176u: goto L_002E9F2C;
    case 177u: goto L_002E9F90;
    case 178u: goto L_002E9FBC;
    case 179u: goto L_002E9FD4;
    case 180u: goto L_002E9FE4;
    case 181u: goto L_002E9FEC;
    case 182u: goto L_002E9FFC;
    case 183u: goto L_002EA00C;
    case 184u: goto L_002EA01C;
    case 185u: goto L_002EA02C;
    case 186u: goto L_002EA050;
    case 187u: goto L_002EA074;
    case 188u: goto L_002EA084;
    case 189u: goto L_002EA08C;
    case 190u: goto L_002EA09C;
    case 191u: goto L_002EA0B4;
    case 192u: goto L_002EA0C4;
    case 193u: goto L_002EA0D4;
    case 194u: goto L_002EA0F0;
    case 195u: goto L_002EA134;
    case 196u: goto L_002EA180;
    case 197u: goto L_002EA1A0;
    case 198u: goto L_002EA1C0;
    case 199u: goto L_002EA1E4;
    case 200u: goto L_002EA200;
    case 201u: goto L_002EA234;
    case 202u: goto L_002EA254;
    case 203u: goto L_002EA270;
    case 204u: goto L_002EA298;
    case 205u: goto L_002EA2B0;
    case 206u: goto L_002EA350;
    case 207u: goto L_002EA38C;
    case 208u: goto L_002EA3E0;
    case 209u: goto L_002EA41C;
    case 210u: goto L_002EA430;
    case 211u: goto L_002EA474;
    case 212u: goto L_002EA4A4;
    case 213u: goto L_002EA4D8;
    case 214u: goto L_002EA4EC;
    case 215u: goto L_002EA530;
    case 216u: goto L_002EA5A0;
    case 217u: goto L_002EA648;
    case 218u: goto L_002EA684;
    case 219u: goto L_002EA6D8;
    case 220u: goto L_002EA714;
    case 221u: goto L_002EA728;
    case 222u: goto L_002EA770;
    case 223u: goto L_002EA7A0;
    case 224u: goto L_002EA7D4;
    case 225u: goto L_002EA7E8;
    case 226u: goto L_002EA830;
    case 227u: goto L_002EA8A0;
    case 228u: goto L_002EA950;
    case 229u: goto L_002EA98C;
    case 230u: goto L_002EA9E0;
    case 231u: goto L_002EAA1C;
    case 232u: goto L_002EAAC0;
    case 233u: goto L_002EAACC;
    case 234u: goto L_002EAAD4;
    case 235u: goto L_002EAAEC;
    case 236u: goto L_002EAB38;
    case 237u: goto L_002EAB98;
    case 238u: goto L_002EACD0;
    case 239u: goto L_002EACF4;
    case 240u: goto L_002EAD08;
    case 241u: goto L_002EAD10;
    case 242u: goto L_002EAD18;
    case 243u: goto L_002EAD48;
    case 244u: goto L_002EADB0;
    case 245u: goto L_002EAEFC;
    case 246u: goto L_002EAF50;
    case 247u: goto L_002EAFF8;
    case 248u: goto L_002EB034;
    case 249u: goto L_002EB088;
    case 250u: goto L_002EB0C4;
    case 251u: goto L_002EB0D8;
    case 252u: goto L_002EB120;
    case 253u: goto L_002EB150;
    case 254u: goto L_002EB184;
    case 255u: goto L_002EB198;
    case 256u: goto L_002EB1E0;
    case 257u: goto L_002EB250;
    case 258u: goto L_002EB270;
    case 259u: goto L_002EB28C;
    case 260u: goto L_002EB310;
    case 261u: goto L_002EB330;
    case 262u: goto L_002EB364;
    case 263u: goto L_002EB40C;
    case 264u: goto L_002EB440;
    case 265u: goto L_002EB464;
    case 266u: goto L_002EB480;
    case 267u: goto L_002EB510;
    case 268u: goto L_002EB540;
    case 269u: goto L_002EB600;
    case 270u: goto L_002EB63C;
    case 271u: goto L_002EB690;
    case 272u: goto L_002EB6CC;
    case 273u: goto L_002EB6EC;
    case 274u: goto L_002EB738;
    case 275u: goto L_002EB740;
    case 276u: goto L_002EB754;
    case 277u: goto L_002EB7C0;
    case 278u: goto L_002EB7D4;
    case 279u: goto L_002EB820;
    case 280u: goto L_002EB838;
    case 281u: goto L_002EB8E0;
    case 282u: goto L_002EB99C;
    case 283u: goto L_002EB9D8;
    case 284u: goto L_002EBA2C;
    case 285u: goto L_002EBA68;
    case 286u: goto L_002EBA88;
    case 287u: goto L_002EBAD0;
    case 288u: goto L_002EBAD8;
    case 289u: goto L_002EBAEC;
    case 290u: goto L_002EBB58;
    case 291u: goto L_002EBB6C;
    case 292u: goto L_002EBBB4;
    case 293u: goto L_002EBBD0;
    case 294u: goto L_002EBC80;
    case 295u: goto L_002EBD28;
    case 296u: goto L_002EBD64;
    case 297u: goto L_002EBDB8;
    case 298u: goto L_002EBDF4;
    case 299u: goto L_002EBE08;
    case 300u: goto L_002EBE50;
    case 301u: goto L_002EBE80;
    case 302u: goto L_002EBEB4;
    case 303u: goto L_002EBEC8;
    case 304u: goto L_002EBF10;
    case 305u: goto L_002EBF80;
    default: bad_entry(c, 0x002E8000u); return;
    }
L_002E8000:
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8010u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 168u, depth + 1u); else { c.pc = 0x00396A80u; return; } if (c.pc != 0x002E8010u) [[unlikely]] return; }
L_002E8010:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7FECu | kUnwind; return; } [[clang::musttail]] return unit_0039(c, 250u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7FE4u | kUnwind; return; } [[clang::musttail]] return unit_0039(c, 249u, depth); } }
L_002E802C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E8120; } }
L_002E8064:
    set32(c.r[2], ld32((c.r[28].w[0] - 29640u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E810C; } }
L_002E80A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8064u | kUnwind; return; } goto L_002E8064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8120; } }
L_002E80BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E80D4; } }
L_002E80CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E80D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80DCu);  if (depth < kMaxDepth) unit_0066(c, 254u, depth + 1u); else { c.pc = 0x0039AC20u; return; } if (c.pc != 0x002E80DCu) [[unlikely]] return; }
L_002E80DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E80FC; } }
    c.r[4].d[0] = 0ull | 51200ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0] + 224u), c.r[4].d[0]);  if (t) { goto L_002E8104; } }
L_002E80FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[3].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E8104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002E8140; } }
L_002E810C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8114u);  if (depth < kMaxDepth) unit_0020(c, 307u, depth + 1u); else { c.pc = 0x00283E40u; return; } if (c.pc != 0x002E8114u) [[unlikely]] return; }
L_002E8114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E80A0u | kUnwind; return; } goto L_002E80A0; } }
    c.budget -= 1;
L_002E8120:
    set32(c.r[3], ld32((c.r[28].w[0] - 29640u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 29640u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E80CCu | kUnwind; return; } goto L_002E80CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E80BCu | kUnwind; return; } goto L_002E80BC; } }
L_002E8140:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_002E8144:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1220u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E81A0; } }
L_002E816C:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 540u)));  if (t) { goto L_002E8198; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002E8198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8194u); set32(c.r[4], ld32((c.r[4].w[0] + 1356u)));  if (depth < kMaxDepth) unit_00A2(c, 17u, depth + 1u); else { c.pc = 0x004882F0u; return; } if (c.pc != 0x002E8194u) [[unlikely]] return; }
L_002E8194:
    c.budget -= 1;
L_002E8198:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E816Cu | kUnwind; return; } goto L_002E816C; } }
L_002E81A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E81C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 1220u)));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E82F8; } }
L_002E81E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1188u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 540u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 1188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 220u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8200u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 127u, depth + 1u); else { c.pc = 0x002818B0u; return; } if (c.pc != 0x002E8200u) [[unlikely]] return; }
L_002E8200:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8210u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 205u, depth + 1u); else { c.pc = 0x00467200u; return; } if (c.pc != 0x002E8210u) [[unlikely]] return; }
L_002E8210:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8308; } }
    c.budget -= 1;
L_002E8228:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8248u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8248u) [[unlikely]] return; }
L_002E8248:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x91A20000u);
    c.r[3].d[0] = c.r[3].d[0] | 46021ull;
    set32(c.r[6], c.r[18].w[0] - c.r[4].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].d[0] = ld16((c.r[19].w[0] + 1190u));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 11));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E82D0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1208u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E82A8; } }
    st32((c.r[19].w[0] + 1212u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 1208u), c.r[18].w[0]);
    st32((c.r[18].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1548u), 0u);  if (t) { goto L_002E82C0; } }
    c.budget -= 1;
L_002E82A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 1212u)));
    st32((c.r[3].w[0] + 1552u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 1212u)));
    st32((c.r[18].w[0] + 1548u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 1552u), 0u);
    st32((c.r[19].w[0] + 1212u), c.r[18].w[0]);
    c.budget -= 6;
L_002E82C0:
    set32(c.r[3], ld32((c.r[19].w[0] + 1216u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 4;
L_002E82D0:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 529u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 5u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E81E4u | kUnwind; return; } goto L_002E81E4; } }
    c.budget -= 1;
L_002E82F8:
    set32(c.r[3], c.r[19].w[0] + 1220u);
    st32((c.r[19].w[0] + 1224u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1220u), 0u);  if (t) { goto L_002E8318; } }
L_002E8308:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 1198u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1198u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8228u | kUnwind; return; } goto L_002E8228; } }
L_002E8318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E8340:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1188u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1216u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_002E8360:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] + 168u);
    set32(c.r[2], ld32((c.r[2].w[0] + 168u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E83B8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83B0u); set32(c.r[4], ld32((c.r[2].w[0] + 168u)));  if (depth < kMaxDepth) unit_0041(c, 176u, depth + 1u); else { c.pc = 0x00305780u; return; } if (c.pc != 0x002E83B0u) [[unlikely]] return; }
L_002E83B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002E843C; } }
L_002E83B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[19], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83C8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 27u, depth + 1u); else { c.pc = 0x003F4240u; return; } if (c.pc != 0x002E83C8u) [[unlikely]] return; }
L_002E83C8:
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[4] = 0u;
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8404u); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_007C(c, 197u, depth + 1u); else { c.pc = 0x003F36A0u; return; } if (c.pc != 0x002E8404u) [[unlikely]] return; }
L_002E8404:
    set32(c.r[4], ld32((c.r[18].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8418u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8418u) [[unlikely]] return; }
L_002E8418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8420u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 259u, depth + 1u); else { c.pc = 0x002835C0u; return; } if (c.pc != 0x002E8420u) [[unlikely]] return; }
L_002E8420:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8434u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8434u) [[unlikely]] return; }
L_002E8434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E83B0u | kUnwind; return; } goto L_002E83B0; } }
L_002E843C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E8460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 220u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 76u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E84C4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E84A0u) [[unlikely]] return; }
L_002E84A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 259u, depth + 1u); else { c.pc = 0x002835C0u; return; } if (c.pc != 0x002E84A8u) [[unlikely]] return; }
L_002E84A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E84BCu) [[unlikely]] return; }
L_002E84BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002E84D0; } }
L_002E84C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84CCu);  if (depth < kMaxDepth) unit_0041(c, 177u, depth + 1u); else { c.pc = 0x00305790u; return; } if (c.pc != 0x002E84CCu) [[unlikely]] return; }
L_002E84CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E84D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E84E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002E85E0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8554u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8554u) [[unlikely]] return; }
L_002E8554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E855Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 259u, depth + 1u); else { c.pc = 0x002835C0u; return; } if (c.pc != 0x002E855Cu) [[unlikely]] return; }
L_002E855C:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8580u); set32(c.r[18], c.r[2].w[0] + 168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8580u) [[unlikely]] return; }
L_002E8580:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8590u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 276u, depth + 1u); else { c.pc = 0x002838C0u; return; } if (c.pc != 0x002E8590u) [[unlikely]] return; }
L_002E8590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8598u); set32(c.r[4], c.r[17].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 168u, depth + 1u); else { c.pc = 0x00396A80u; return; } if (c.pc != 0x002E8598u) [[unlikely]] return; }
L_002E8598:
    set32(c.r[4], ld32((c.r[17].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 82u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E85C8; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002E85C8:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    st16((c.r[17].w[0] + 762u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002E85D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002E8630; } }
L_002E85E0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8600u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8600u) [[unlikely]] return; }
L_002E8600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8608u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 259u, depth + 1u); else { c.pc = 0x002835C0u; return; } if (c.pc != 0x002E8608u) [[unlikely]] return; }
L_002E8608:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8628u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8628u) [[unlikely]] return; }
L_002E8628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E85D8u | kUnwind; return; } goto L_002E85D8; } }
L_002E8630:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E8650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1190u));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E871C; } }
L_002E8670:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x91A20000u);
    c.r[3].d[0] = c.r[3].d[0] | 46021ull;
    set32(c.r[6], c.r[16].w[0] - c.r[4].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1190u));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 11));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E8728; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 529u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E8728; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1188u)));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[17].w[0] + 1188u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 1198u));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[17].w[0] + 1198u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 529u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86FCu); st32((c.r[16].w[0] + 224u), 0u);  if (depth < kMaxDepth) unit_0020(c, 293u, depth + 1u); else { c.pc = 0x00283BC0u; return; } if (c.pc != 0x002E86FCu) [[unlikely]] return; }
L_002E86FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1224u)));
    set32(c.r[3], c.r[16].w[0] + 540u);
    st32((c.r[4].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 1224u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 540u), 0u);
    st32((c.r[16].w[0] + 516u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002E872C; } }
L_002E871C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1190u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8670u | kUnwind; return; } goto L_002E8670; } }
L_002E8728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002E872C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8770u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 127u, depth + 1u); else { c.pc = 0x002818B0u; return; } if (c.pc != 0x002E8770u) [[unlikely]] return; }
L_002E8770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8780u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 205u, depth + 1u); else { c.pc = 0x00467200u; return; } if (c.pc != 0x002E8780u) [[unlikely]] return; }
L_002E8780:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8844; } }
L_002E8794:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E87B4u) [[unlikely]] return; }
L_002E87B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E8854; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x91A20000u);
    c.r[3].d[0] = c.r[3].d[0] | 46021ull;
    set32(c.r[6], c.r[18].w[0] - c.r[4].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].d[0] = ld16((c.r[19].w[0] + 1190u));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 11));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E8854; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1208u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E8818; } }
    st32((c.r[19].w[0] + 1212u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 1208u), c.r[18].w[0]);
    st32((c.r[18].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1548u), 0u);  if (t) { goto L_002E8830; } }
L_002E8818:
    set32(c.r[3], ld32((c.r[19].w[0] + 1212u)));
    st32((c.r[3].w[0] + 1552u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 1212u)));
    st32((c.r[18].w[0] + 1548u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 1552u), 0u);
    st32((c.r[19].w[0] + 1212u), c.r[18].w[0]);
    c.budget -= 6;
L_002E8830:
    set32(c.r[3], ld32((c.r[19].w[0] + 1216u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002E8858; } }
L_002E8844:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 1198u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1198u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8794u | kUnwind; return; } goto L_002E8794; } }
L_002E8854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002E8858:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E8870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], ld32((c.r[6].w[0] + 40u)));
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E8904; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002E88BC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E8B18; } }
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E88E4u) [[unlikely]] return; }
L_002E88E4:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 1198u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[19].w[0] + 1198u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 216u, depth + 1u); else { c.pc = 0x0041FCA0u; return; } if (c.pc != 0x002E88FCu) [[unlikely]] return; }
L_002E88FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E8B1C; } }
L_002E8904:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 1198u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1188u)));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 1194u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E89B8; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 1220u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E89B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    st32((c.r[19].w[0] + 1220u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1188u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 1188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 1220u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8AC8; } }
L_002E894C:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8958u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 127u, depth + 1u); else { c.pc = 0x002818B0u; return; } if (c.pc != 0x002E8958u) [[unlikely]] return; }
L_002E8958:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8968u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 205u, depth + 1u); else { c.pc = 0x00467200u; return; } if (c.pc != 0x002E8968u) [[unlikely]] return; }
L_002E8968:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8AD4; } }
L_002E897C:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E899Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E899Cu) [[unlikely]] return; }
L_002E899C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002E89B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E88BCu | kUnwind; return; } goto L_002E88BC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8A6C; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 1220u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E88BCu | kUnwind; return; } goto L_002E88BC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    st32((c.r[19].w[0] + 1220u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1188u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 1188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 1220u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8AE4; } }
L_002E89F8:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 127u, depth + 1u); else { c.pc = 0x002818B0u; return; } if (c.pc != 0x002E8A04u) [[unlikely]] return; }
L_002E8A04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A14u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 205u, depth + 1u); else { c.pc = 0x00467200u; return; } if (c.pc != 0x002E8A14u) [[unlikely]] return; }
L_002E8A14:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8AF0; } }
L_002E8A28:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8A48u) [[unlikely]] return; }
L_002E8A48:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E88BCu | kUnwind; return; } goto L_002E88BC; } }
L_002E8A6C:
    set32(c.r[17], ld32((c.r[19].w[0] + 1208u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 1548u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8A84; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1552u)));
    st32((c.r[3].w[0] + 1552u), c.r[2].w[0]);
    c.budget -= 2;
L_002E8A84:
    set32(c.r[3], ld32((c.r[17].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8A98; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1548u)));
    st32((c.r[3].w[0] + 1548u), c.r[2].w[0]);
    c.budget -= 2;
L_002E8A98:
    set32(c.r[2], ld32((c.r[19].w[0] + 1208u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8B00; } }
L_002E8AA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 1212u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002E8B0C; } }
L_002E8AB0:
    st32((c.r[17].w[0] + 1552u), 0u);
    st32((c.r[17].w[0] + 1548u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 1216u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1216u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E88BCu | kUnwind; return; } goto L_002E88BC; } }
L_002E8AC8:
    set32(c.r[2], c.r[19].w[0] + 1220u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1224u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E894Cu | kUnwind; return; } goto L_002E894C; } }
L_002E8AD4:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 1198u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1198u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E897Cu | kUnwind; return; } goto L_002E897C; } }
L_002E8AE4:
    set32(c.r[2], c.r[19].w[0] + 1220u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1224u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E89F8u | kUnwind; return; } goto L_002E89F8; } }
L_002E8AF0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 1198u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1198u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8A28u | kUnwind; return; } goto L_002E8A28; } }
L_002E8B00:
    set32(c.r[2], ld32((c.r[17].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1208u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8AA4u | kUnwind; return; } goto L_002E8AA4; } }
L_002E8B0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1212u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8AB0u | kUnwind; return; } goto L_002E8AB0; } }
L_002E8B18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E8B1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E8B40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 1220u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 1220u);  if (t) { goto L_002E8C98; } }
L_002E8B6C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002E8C88; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8CAC; } }
L_002E8B80:
    set32(c.r[2], ld32((c.r[17].w[0] + 540u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1188u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 1188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 220u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 127u, depth + 1u); else { c.pc = 0x002818B0u; return; } if (c.pc != 0x002E8BA0u) [[unlikely]] return; }
L_002E8BA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BB0u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 205u, depth + 1u); else { c.pc = 0x00467200u; return; } if (c.pc != 0x002E8BB0u) [[unlikely]] return; }
L_002E8BB0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8CB4; } }
L_002E8BC4:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BE4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8BE4u) [[unlikely]] return; }
L_002E8BE4:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x91A20000u);
    c.r[2].d[0] = c.r[2].d[0] | 46021ull;
    set32(c.r[5], c.r[17].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = ld16((c.r[18].w[0] + 1190u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8C64; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E8C40; } }
    st32((c.r[18].w[0] + 1212u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 1208u), c.r[17].w[0]);
    st32((c.r[17].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1548u), 0u);  if (t) { goto L_002E8C58; } }
L_002E8C40:
    set32(c.r[2], ld32((c.r[18].w[0] + 1212u)));
    st32((c.r[2].w[0] + 1552u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1212u)));
    st32((c.r[17].w[0] + 1548u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1552u), 0u);
    st32((c.r[18].w[0] + 1212u), c.r[17].w[0]);
    c.budget -= 6;
L_002E8C58:
    set32(c.r[2], ld32((c.r[18].w[0] + 1216u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 3;
L_002E8C64:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 5u);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 529u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E8C98; } }
L_002E8C88:
    set32(c.r[5], c.r[3].w[0] + 540u);
    set32(c.r[3], ld32((c.r[3].w[0] + 540u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8B6Cu | kUnwind; return; } goto L_002E8B6C; } }
L_002E8C98:
    set32(c.r[3], ld32((c.r[18].w[0] + 1220u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8CC4; } }
L_002E8CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002E8CD0; } }
L_002E8CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1224u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8B80u | kUnwind; return; } goto L_002E8B80; } }
L_002E8CB4:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 1198u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1198u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8BC4u | kUnwind; return; } goto L_002E8BC4; } }
L_002E8CC4:
    set32(c.r[3], c.r[18].w[0] + 1220u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1224u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8CA4u | kUnwind; return; } goto L_002E8CA4; } }
L_002E8CD0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E8CF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 1220u)));
    set32(c.r[7], c.r[4].w[0] + 1220u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002E8D38; } }
L_002E8D00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002E8D24; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8D90; } }
L_002E8D14:
    set32(c.r[3], ld32((c.r[5].w[0] + 540u)));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_002E8D38; } }
L_002E8D24:
    set32(c.r[7], c.r[3].w[0] + 540u);
    set32(c.r[3], ld32((c.r[3].w[0] + 540u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8D00u | kUnwind; return; } goto L_002E8D00; } }
    c.budget -= 1;
L_002E8D38:
    set32(c.r[3], ld32((c.r[4].w[0] + 1220u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8D98; } }
L_002E8D44:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002E8DA4; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 1220u)));
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], c.r[4].w[0] + 1220u);
    st32((c.r[5].w[0] + 540u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 1220u), c.r[5].w[0]);
    c.r[8].d[0] = ld8((c.r[5].w[0] + 530u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 530u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 1224u)));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002E8DA4; } }
    set32(c.r[3], c.r[5].w[0] + 540u);
    st32((c.r[4].w[0] + 1224u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8DA4; } }
L_002E8D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1224u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8D14u | kUnwind; return; } goto L_002E8D14; } }
L_002E8D98:
    set32(c.r[3], c.r[4].w[0] + 1220u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1224u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E8D44u | kUnwind; return; } goto L_002E8D44; } }
L_002E8DA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E8DB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E954C; } }
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], 0u + 71u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9438; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9400; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9400; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9400; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E93C8; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E93C8; } }
    set32(c.r[3], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9390; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9358; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9320; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9320; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9320; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E92EC; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E92B8; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E928C; } }
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9258; } }
    set32(c.r[3], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E922C; } }
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9200; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E91D4; } }
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E91A8; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9174; } }
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9174; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9148; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9118; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E90E4; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E90B4; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9088; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9058; } }
    set32(c.r[3], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9058; } }
    set32(c.r[3], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9058; } }
    set32(c.r[3], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9058; } }
    set32(c.r[3], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9058; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E9058; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 104u);  if (t) { goto L_002E9470; } }
L_002E9038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9040u); set32(c.r[4], 0u + 1176u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9040u) [[unlikely]] return; }
L_002E9040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9050u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 108u, depth + 1u); else { c.pc = 0x002FCE00u; return; } if (c.pc != 0x002E9050u) [[unlikely]] return; }
L_002E9050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9060u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9060u) [[unlikely]] return; }
L_002E9060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9074; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9074u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 159u, depth + 1u); else { c.pc = 0x002F9500u; return; } if (c.pc != 0x002E9074u) [[unlikely]] return; }
L_002E9074:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9090u); set32(c.r[4], 0u + 152u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9090u) [[unlikely]] return; }
L_002E9090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E90A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 19u, depth + 1u); else { c.pc = 0x002F8270u; return; } if (c.pc != 0x002E90A0u) [[unlikely]] return; }
L_002E90A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E90B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90BCu); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E90BCu) [[unlikely]] return; }
L_002E90BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E90D0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90D0u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_003E(c, 224u, depth + 1u); else { c.pc = 0x002F9D20u; return; } if (c.pc != 0x002E90D0u) [[unlikely]] return; }
L_002E90D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E90E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90ECu); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E90ECu) [[unlikely]] return; }
L_002E90EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9104; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9104u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 265u, depth + 1u); else { c.pc = 0x002FA3E0u; return; } if (c.pc != 0x002E9104u) [[unlikely]] return; }
L_002E9104:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9120u); set32(c.r[4], 0u + 252u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9120u) [[unlikely]] return; }
L_002E9120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9134; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9134u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x002F79E0u; return; } if (c.pc != 0x002E9134u) [[unlikely]] return; }
L_002E9134:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9150u); set32(c.r[4], 0u + 212u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9150u) [[unlikely]] return; }
L_002E9150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9160u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 344u, depth + 1u); else { c.pc = 0x002F73B0u; return; } if (c.pc != 0x002E9160u) [[unlikely]] return; }
L_002E9160:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E917Cu); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E917Cu) [[unlikely]] return; }
L_002E917C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9194; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9194u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 124u, depth + 1u); else { c.pc = 0x002F8FD0u; return; } if (c.pc != 0x002E9194u) [[unlikely]] return; }
L_002E9194:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E91A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91B0u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E91B0u) [[unlikely]] return; }
L_002E91B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E91C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 250u, depth + 1u); else { c.pc = 0x002F67D0u; return; } if (c.pc != 0x002E91C0u) [[unlikely]] return; }
L_002E91C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E91D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91DCu); set32(c.r[4], 0u + 472u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E91DCu) [[unlikely]] return; }
L_002E91DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E91EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 409u, depth + 1u); else { c.pc = 0x002FB4F0u; return; } if (c.pc != 0x002E91ECu) [[unlikely]] return; }
L_002E91EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9208u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9208u) [[unlikely]] return; }
L_002E9208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9218u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 485u, depth + 1u); else { c.pc = 0x002FBF70u; return; } if (c.pc != 0x002E9218u) [[unlikely]] return; }
L_002E9218:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E922C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9234u); set32(c.r[4], 0u + 392u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9234u) [[unlikely]] return; }
L_002E9234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9244u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 326u, depth + 1u); else { c.pc = 0x002FAA90u; return; } if (c.pc != 0x002E9244u) [[unlikely]] return; }
L_002E9244:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9260u); set32(c.r[4], 0u + 500u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9260u) [[unlikely]] return; }
L_002E9260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9278; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9278u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 156u, depth + 1u); else { c.pc = 0x002F5E90u; return; } if (c.pc != 0x002E9278u) [[unlikely]] return; }
L_002E9278:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E928C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9294u); set32(c.r[4], 0u + 188u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9294u) [[unlikely]] return; }
L_002E9294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E92A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 63u, depth + 1u); else { c.pc = 0x002F8770u; return; } if (c.pc != 0x002E92A4u) [[unlikely]] return; }
L_002E92A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E92B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92C0u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E92C0u) [[unlikely]] return; }
L_002E92C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E92D8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92D8u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_003E(c, 265u, depth + 1u); else { c.pc = 0x002FA3E0u; return; } if (c.pc != 0x002E92D8u) [[unlikely]] return; }
L_002E92D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E92EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92F4u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E92F4u) [[unlikely]] return; }
L_002E92F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E930C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E930Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003E(c, 265u, depth + 1u); else { c.pc = 0x002FA3E0u; return; } if (c.pc != 0x002E930Cu) [[unlikely]] return; }
L_002E930C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9328u); set32(c.r[4], 0u + 268u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9328u) [[unlikely]] return; }
L_002E9328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9344; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9344u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003D(c, 99u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x002E9344u) [[unlikely]] return; }
L_002E9344:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9360u); set32(c.r[4], 0u + 316u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9360u) [[unlikely]] return; }
L_002E9360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E937C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E937Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003D(c, 42u, depth + 1u); else { c.pc = 0x002F51D0u; return; } if (c.pc != 0x002E937Cu) [[unlikely]] return; }
L_002E937C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9398u); set32(c.r[4], 0u + 268u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9398u) [[unlikely]] return; }
L_002E9398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E93B4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 99u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x002E93B4u) [[unlikely]] return; }
L_002E93B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E93C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93D0u); set32(c.r[4], 0u + 268u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E93D0u) [[unlikely]] return; }
L_002E93D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E93EC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 99u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x002E93ECu) [[unlikely]] return; }
L_002E93EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9408u); set32(c.r[4], 0u + 268u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9408u) [[unlikely]] return; }
L_002E9408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9424; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9424u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 99u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x002E9424u) [[unlikely]] return; }
L_002E9424:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
L_002E9438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9440u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9440u) [[unlikely]] return; }
L_002E9440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9458; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9458u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 265u, depth + 1u); else { c.pc = 0x002FA3E0u; return; } if (c.pc != 0x002E9458u) [[unlikely]] return; }
L_002E9458:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002E94A0; } }
    set32(c.r[4], 0u + 104u);
    c.budget -= 1;
L_002E9470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9478u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E9478u) [[unlikely]] return; }
L_002E9478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9490; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9490u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 265u, depth + 1u); else { c.pc = 0x002FA3E0u; return; } if (c.pc != 0x002E9490u) [[unlikely]] return; }
L_002E9490:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_002E94A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    st32((c.r[3].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 508u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94DCu); set32(c.r[17], c.r[3].w[0] + 168u);  if (depth < kMaxDepth) unit_0021(c, 344u, depth + 1u); else { c.pc = 0x00287AF0u; return; } if (c.pc != 0x002E94DCu) [[unlikely]] return; }
L_002E94DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 40u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002E9504; } }
L_002E94FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002E9550; } }
L_002E9504:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] + 168u);
    c.budget -= 2;
L_002E950C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E952Cu); set32(c.r[4], c.r[4].w[0] - 2464u);  if (depth < kMaxDepth) unit_0011(c, 296u, depth + 1u); else { c.pc = 0x002467C0u; return; } if (c.pc != 0x002E952Cu) [[unlikely]] return; }
L_002E952C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 40u));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E950Cu | kUnwind; return; } goto L_002E950C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E94FCu | kUnwind; return; } goto L_002E94FC; } }
L_002E954C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002E9550:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E9570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1192u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E9648; } }
L_002E959C:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E9650; } }
    c.budget -= 1;
L_002E95C8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9630; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9630; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9630; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1388u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E9620; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1396u)));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
L_002E9620:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9630u);  if (depth < kMaxDepth) unit_0020(c, 309u, depth + 1u); else { c.pc = 0x00283E90u; return; } if (c.pc != 0x002E9630u) [[unlikely]] return; }
L_002E9630:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1192u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E959Cu | kUnwind; return; } goto L_002E959C; } }
    c.budget -= 1;
L_002E9648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9660; } }
L_002E9650:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9630u | kUnwind; return; } goto L_002E9630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E95C8u | kUnwind; return; } goto L_002E95C8; } }
L_002E9660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E9680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002E9764; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E96D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E96C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E97D8; } }
L_002E96C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 389u, depth + 1u); else { c.pc = 0x0027FE70u; return; } if (c.pc != 0x002E96CCu) [[unlikely]] return; }
L_002E96CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E97D8; } }
L_002E96D4:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1192u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E97D8; } }
L_002E96E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9748; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9748; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9734u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9734u) [[unlikely]] return; }
L_002E9734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9748; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 389u, depth + 1u); else { c.pc = 0x0027FE70u; return; } if (c.pc != 0x002E9748u) [[unlikely]] return; }
L_002E9748:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1192u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E96E4u | kUnwind; return; } goto L_002E96E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E97D8; } }
L_002E9764:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1192u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E97D8; } }
L_002E9774:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E97C0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E97C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 389u, depth + 1u); else { c.pc = 0x0027FE70u; return; } if (c.pc != 0x002E97BCu) [[unlikely]] return; }
L_002E97BC:
    c.budget -= 1;
L_002E97C0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1192u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9774u | kUnwind; return; } goto L_002E9774; } }
    c.budget -= 1;
L_002E97D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22911u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9800; } }
L_002E97E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22926u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9824; } }
L_002E97F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002E9834; } }
L_002E9800:
    set32(c.r[6], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 811u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E97E8u | kUnwind; return; } goto L_002E97E8; } }
L_002E9824:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 808u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E97F8u | kUnwind; return; } goto L_002E97F8; } }
L_002E9834:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E9850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002E992C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E98A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E99A0; } }
L_002E9890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9898u); set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_001F(c, 391u, depth + 1u); else { c.pc = 0x0027FED0u; return; } if (c.pc != 0x002E9898u) [[unlikely]] return; }
L_002E9898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E99A0; } }
L_002E98A0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1192u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E99A0; } }
L_002E98B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9910; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9910; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9900u) [[unlikely]] return; }
L_002E9900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9910u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 391u, depth + 1u); else { c.pc = 0x0027FED0u; return; } if (c.pc != 0x002E9910u) [[unlikely]] return; }
L_002E9910:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1192u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E98B0u | kUnwind; return; } goto L_002E98B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E99A0; } }
L_002E992C:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1192u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E99A0; } }
L_002E993C:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9988; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E9988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9984u);  if (depth < kMaxDepth) unit_001F(c, 391u, depth + 1u); else { c.pc = 0x0027FED0u; return; } if (c.pc != 0x002E9984u) [[unlikely]] return; }
L_002E9984:
    c.budget -= 1;
L_002E9988:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1192u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E993Cu | kUnwind; return; } goto L_002E993C; } }
    c.budget -= 1;
L_002E99A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E99C0:
    st32((c.r[4].w[0] + 1220u), 0u);
    set32(c.r[3], c.r[4].w[0] + 1220u);
    st32((c.r[4].w[0] + 1224u), c.r[3].w[0]);
    st16((c.r[4].w[0] + 1188u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 1212u), 0u);
    st32((c.r[4].w[0] + 1208u), 0u);
    st32((c.r[4].w[0] + 1216u), 0u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1192u));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002E9A30; } }
L_002E99EC:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 1552u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 1548u), 0u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1192u));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E99ECu | kUnwind; return; } goto L_002E99EC; } }
    c.budget -= 1;
L_002E9A30:
    c.r[7].d[0] = ld16((c.r[4].w[0] + 1190u));
    c.r[1].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E9AB0; } }
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] << 4);
    c.budget -= 5;
L_002E9A54:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1208u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_002E9A78; } }
    st32((c.r[4].w[0] + 1212u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 1208u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1548u), 0u);  if (t) { goto L_002E9A90; } }
L_002E9A78:
    set32(c.r[3], ld32((c.r[4].w[0] + 1212u)));
    st32((c.r[3].w[0] + 1552u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1212u)));
    st32((c.r[5].w[0] + 1548u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[4].w[0] + 1212u), c.r[5].w[0]);
    c.budget -= 6;
L_002E9A90:
    set32(c.r[3], ld32((c.r[4].w[0] + 1216u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 1216u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1192u));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 3600u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9A54u | kUnwind; return; } goto L_002E9A54; } }
L_002E9AB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9AC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 1220u)));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E9BF8; } }
L_002E9AE4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1188u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 540u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 1188u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 220u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 127u, depth + 1u); else { c.pc = 0x002818B0u; return; } if (c.pc != 0x002E9B00u) [[unlikely]] return; }
L_002E9B00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B10u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 205u, depth + 1u); else { c.pc = 0x00467200u; return; } if (c.pc != 0x002E9B10u) [[unlikely]] return; }
L_002E9B10:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9C90; } }
    c.budget -= 1;
L_002E9B28:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B48u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9B48u) [[unlikely]] return; }
L_002E9B48:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x91A20000u);
    c.r[2].d[0] = c.r[2].d[0] | 46021ull;
    set32(c.r[5], c.r[18].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = ld16((c.r[19].w[0] + 1190u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E9BD0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E9BA8; } }
    st32((c.r[19].w[0] + 1212u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 1208u), c.r[18].w[0]);
    st32((c.r[18].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1548u), 0u);  if (t) { goto L_002E9BC0; } }
    c.budget -= 1;
L_002E9BA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 1212u)));
    st32((c.r[2].w[0] + 1552u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 1212u)));
    st32((c.r[18].w[0] + 1548u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 1552u), 0u);
    st32((c.r[19].w[0] + 1212u), c.r[18].w[0]);
    c.budget -= 6;
L_002E9BC0:
    set32(c.r[2], ld32((c.r[19].w[0] + 1216u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 4;
L_002E9BD0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 529u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 5u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9AE4u | kUnwind; return; } goto L_002E9AE4; } }
    c.budget -= 1;
L_002E9BF8:
    set32(c.r[2], c.r[19].w[0] + 1220u);
    st32((c.r[19].w[0] + 1224u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[19].w[0] + 1220u), 0u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C14u); st16((c.r[19].w[0] + 1198u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 185u, depth + 1u); else { c.pc = 0x002BD7B0u; return; } if (c.pc != 0x002E9C14u) [[unlikely]] return; }
L_002E9C14:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C28u); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_003A(c, 203u, depth + 1u); else { c.pc = 0x002EA270u; return; } if (c.pc != 0x002E9C28u) [[unlikely]] return; }
L_002E9C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C30u); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_0031(c, 124u, depth + 1u); else { c.pc = 0x002C5090u; return; } if (c.pc != 0x002E9C30u) [[unlikely]] return; }
L_002E9C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 167u, depth + 1u); else { c.pc = 0x002E9CC0u; return; } if (c.pc != 0x002E9C38u) [[unlikely]] return; }
L_002E9C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C40u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 160u, depth + 1u); else { c.pc = 0x00286390u; return; } if (c.pc != 0x002E9C40u) [[unlikely]] return; }
L_002E9C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C48u); set32(c.r[4], c.r[28].w[0] - 29264u);  if (depth < kMaxDepth) unit_003A(c, 198u, depth + 1u); else { c.pc = 0x002EA1C0u; return; } if (c.pc != 0x002E9C48u) [[unlikely]] return; }
L_002E9C48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C54u); set32(c.r[4], c.r[4].w[0] - 2464u);  if (depth < kMaxDepth) unit_0011(c, 283u, depth + 1u); else { c.pc = 0x00246560u; return; } if (c.pc != 0x002E9C54u) [[unlikely]] return; }
L_002E9C54:
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 29112u), 0u);
    st8((c.r[28].w[0] - 29108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[19].w[0] + 1220u);
    st32((c.r[19].w[0] + 1220u), 0u);
    st32((c.r[19].w[0] + 1224u), c.r[3].w[0]);
    st16((c.r[19].w[0] + 1188u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 1212u), 0u);
    st32((c.r[19].w[0] + 1208u), 0u);
    st32((c.r[19].w[0] + 1216u), 0u);
    st32((c.r[28].w[0] - 29808u), 0u);
    st16((c.r[19].w[0] + 1190u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 1192u), static_cast<std::uint16_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1194u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002E9CA0; } }
L_002E9C90:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 1198u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1198u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9B28u | kUnwind; return; } goto L_002E9B28; } }
L_002E9CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E9CC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E9D30; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002E9CEC:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9D18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E9D10; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9D10u) [[unlikely]] return; }
L_002E9D10:
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 2;
L_002E9D18:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9CECu | kUnwind; return; } goto L_002E9CEC; } }
    c.budget -= 1;
L_002E9D30:
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002E9D40:
    st32((c.r[4].w[0] + 168u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 508u), 0u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(77ll) ? 1ull : 0ull;
    st32((c.r[4].w[0] + 848u), 0u);
    st32((c.r[4].w[0] + 172u), 0u);
    st32((c.r[4].w[0] + 512u), 0u);
    st32((c.r[4].w[0] + 852u), 0u);
    st32((c.r[4].w[0] + 176u), 0u);
    st32((c.r[4].w[0] + 516u), 0u);
    st32((c.r[4].w[0] + 856u), 0u);
    st32((c.r[4].w[0] + 180u), 0u);
    st32((c.r[4].w[0] + 520u), 0u);
    st32((c.r[4].w[0] + 860u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 524u), 0u);
    st32((c.r[4].w[0] + 864u), 0u);
    st32((c.r[4].w[0] + 188u), 0u);
    st32((c.r[4].w[0] + 528u), 0u);
    st32((c.r[4].w[0] + 868u), 0u);
    st32((c.r[4].w[0] + 192u), 0u);
    st32((c.r[4].w[0] + 532u), 0u);
    st32((c.r[4].w[0] + 872u), 0u);
    st32((c.r[4].w[0] + 196u), 0u);
    st32((c.r[4].w[0] + 536u), 0u);
    st32((c.r[4].w[0] + 876u), 0u);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9D40u | kUnwind; return; } goto L_002E9D40; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 168u), 0u);
    st32((c.r[3].w[0] + 508u), 0u);
    st32((c.r[3].w[0] + 848u), 0u);
    st32((c.r[3].w[0] + 172u), 0u);
    st32((c.r[3].w[0] + 512u), 0u);
    st32((c.r[3].w[0] + 852u), 0u);
    st32((c.r[3].w[0] + 176u), 0u);
    st32((c.r[3].w[0] + 516u), 0u);
    st32((c.r[3].w[0] + 856u), 0u);
    st32((c.r[3].w[0] + 180u), 0u);
    st32((c.r[3].w[0] + 520u), 0u);
    st32((c.r[3].w[0] + 860u), 0u);
    st32((c.r[3].w[0] + 184u), 0u);
    st32((c.r[3].w[0] + 524u), 0u);
    st32((c.r[3].w[0] + 864u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E9E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E9E84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] - 15024u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15016u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15004u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14992u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14980u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14968u);
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002E9E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E84u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E9E84u) [[unlikely]] return; }
L_002E9E84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] + 1200u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24088u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[4].w[0] + 1204u), c.f[0]);
    st16((c.r[4].w[0] + 1198u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EFCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 413u, depth + 1u); else { c.pc = 0x002C1600u; return; } if (c.pc != 0x002E9EFCu) [[unlikely]] return; }
L_002E9EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] - 20360u)));
    st32((c.r[28].w[0] - 29808u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1192u));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F1Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002E9F1Cu) [[unlikely]] return; }
L_002E9F1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002E9F70; } }
L_002E9F2C:
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9F2Cu | kUnwind; return; } goto L_002E9F2C; } }
    c.budget -= 1;
L_002E9F70:
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 29112u), 0u);
    st8((c.r[28].w[0] - 29108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E9F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[4].w[0] + 1192u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 1190u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; st16((c.r[4].w[0] + 1198u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002EA034; } }
    st16((c.r[16].w[0] + 1194u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002E9FBC:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st16((c.r[16].w[0] + 1196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FD4u); set32(c.r[4], c.r[4].w[0] - 2464u);  if (depth < kMaxDepth) unit_0011(c, 288u, depth + 1u); else { c.pc = 0x00246600u; return; } if (c.pc != 0x002E9FD4u) [[unlikely]] return; }
L_002E9FD4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1192u));
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 200u, depth + 1u); else { c.pc = 0x002EA200u; return; } if (c.pc != 0x002E9FE4u) [[unlikely]] return; }
L_002E9FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FECu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0021(c, 81u, depth + 1u); else { c.pc = 0x002853B0u; return; } if (c.pc != 0x002E9FECu) [[unlikely]] return; }
L_002E9FEC:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1192u));
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x002C5050u; return; } if (c.pc != 0x002E9FFCu) [[unlikely]] return; }
L_002E9FFC:
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA00Cu); st32((c.r[16].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_003A(c, 151u, depth + 1u); else { c.pc = 0x002E99C0u; return; } if (c.pc != 0x002EA00Cu) [[unlikely]] return; }
L_002EA00C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1192u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA01Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 158u, depth + 1u); else { c.pc = 0x00286350u; return; } if (c.pc != 0x002EA01Cu) [[unlikely]] return; }
L_002EA01C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1192u));
    set32(c.r[4], c.r[28].w[0] - 29264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA02Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 196u, depth + 1u); else { c.pc = 0x002EA180u; return; } if (c.pc != 0x002EA02Cu) [[unlikely]] return; }
L_002EA02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002EA040; } }
L_002EA034:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1192u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1194u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9FBCu | kUnwind; return; } goto L_002E9FBC; } }
L_002EA040:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EA050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002EA0B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA074u);  if (depth < kMaxDepth) unit_003A(c, 154u, depth + 1u); else { c.pc = 0x002E9AC0u; return; } if (c.pc != 0x002EA074u) [[unlikely]] return; }
L_002EA074:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA0BC; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_002EA084:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA0CC; } }
L_002EA08C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EA09C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA09Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 160u, depth + 1u); else { c.pc = 0x00286390u; return; } if (c.pc != 0x002EA09Cu) [[unlikely]] return; }
L_002EA09C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002EA0B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002EA0B4u) [[unlikely]] return; }
L_002EA0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002EA0DC; } }
L_002EA0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0C4u);  if (depth < kMaxDepth) unit_0031(c, 124u, depth + 1u); else { c.pc = 0x002C5090u; return; } if (c.pc != 0x002EA0C4u) [[unlikely]] return; }
L_002EA0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA084u | kUnwind; return; } goto L_002EA084; } }
L_002EA0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0D4u);  if (depth < kMaxDepth) unit_003A(c, 203u, depth + 1u); else { c.pc = 0x002EA270u; return; } if (c.pc != 0x002EA0D4u) [[unlikely]] return; }
L_002EA0D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA08Cu | kUnwind; return; } goto L_002EA08C; } }
L_002EA0DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EA0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 164u), 0u);
    st16((c.r[4].w[0] + 1188u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 1212u), 0u);
    st32((c.r[4].w[0] + 1208u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA134u); st32((c.r[4].w[0] + 1216u), 0u);  if (depth < kMaxDepth) unit_003A(c, 167u, depth + 1u); else { c.pc = 0x002E9CC0u; return; } if (c.pc != 0x002EA134u) [[unlikely]] return; }
L_002EA134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], c.r[16].w[0] + 1220u);
    st32((c.r[16].w[0] + 1228u), c.r[3].w[0]);
    set32(c.r[4], 0u + 10u);
    st32((c.r[16].w[0] + 1220u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 1224u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 1190u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 1192u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1194u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1198u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 1196u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 29108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[28].w[0] - 29112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EA180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1A0u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002EA1A0u) [[unlikely]] return; }
L_002EA1A0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EA1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EA1E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1E4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002EA1E4u) [[unlikely]] return; }
L_002EA1E4:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EA200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA234u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002EA234u) [[unlikely]] return; }
L_002EA234:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21600u);
    set32(c.r[6], c.r[6].w[0] + 20880u);
    set32(c.r[7], 0u + 3600u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA254u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002EA254u) [[unlikely]] return; }
L_002EA254:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EA270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EA298; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA298u); set32(c.r[5], c.r[5].w[0] + 20880u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002EA298u) [[unlikely]] return; }
L_002EA298:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EA2B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[6] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 136u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 128u), c.f[2]);
    c.budget -= 31;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002EA4B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA350; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
L_002EA350:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA4C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA38C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EA38C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 152u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_002EA4C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA3E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EA3E0:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA4D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA41C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EA41C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 220u);
    set32(c.r[6], c.r[29].w[0] + 216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA430u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 277u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002EA430u) [[unlikely]] return; }
L_002EA430:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA474u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 108u, depth + 1u); else { c.pc = 0x002F3040u; return; } if (c.pc != 0x002EA474u) [[unlikely]] return; }
L_002EA474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA494; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EA48C; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002EA48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EA56C; } }
L_002EA494:
    c.r[2].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA4D8; } }
L_002EA4A4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EA4B0; } }
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_002EA4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EA56C; } }
L_002EA4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA350u | kUnwind; return; } goto L_002EA350; } }
L_002EA4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA38Cu | kUnwind; return; } goto L_002EA38C; } }
L_002EA4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA3E0u | kUnwind; return; } goto L_002EA3E0; } }
L_002EA4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA41Cu | kUnwind; return; } goto L_002EA41C; } }
L_002EA4D8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 220u);
    set32(c.r[6], c.r[29].w[0] + 216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA4ECu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_002E(c, 274u, depth + 1u); else { c.pc = 0x002BB7F0u; return; } if (c.pc != 0x002EA4ECu) [[unlikely]] return; }
L_002EA4EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA530u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 108u, depth + 1u); else { c.pc = 0x002F3040u; return; } if (c.pc != 0x002EA530u) [[unlikely]] return; }
L_002EA530:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA554; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EA54C; } }
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_002EA54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EA56C; } }
L_002EA554:
    c.r[2].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA4D8u | kUnwind; return; } goto L_002EA4D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA4A4u | kUnwind; return; } goto L_002EA4A4; } }
L_002EA56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002EA5A0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[6] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 152u);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 144u), c.f[2]);
    c.budget -= 33;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002EA7B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA648; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
L_002EA648:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA7BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA684; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EA684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 168u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_002EA7C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA6D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EA6D8:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA7CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA714; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EA714:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 236u);
    set32(c.r[6], c.r[29].w[0] + 232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA728u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 277u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002EA728u) [[unlikely]] return; }
L_002EA728:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA770u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 89u, depth + 1u); else { c.pc = 0x002F0FD0u; return; } if (c.pc != 0x002EA770u) [[unlikely]] return; }
L_002EA770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA790; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EA788; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002EA788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EA86C; } }
L_002EA790:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA7D4; } }
L_002EA7A0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EA7AC; } }
    st32((c.r[22].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002EA7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EA86C; } }
L_002EA7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA648u | kUnwind; return; } goto L_002EA648; } }
L_002EA7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA684u | kUnwind; return; } goto L_002EA684; } }
L_002EA7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA6D8u | kUnwind; return; } goto L_002EA6D8; } }
L_002EA7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA714u | kUnwind; return; } goto L_002EA714; } }
L_002EA7D4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 236u);
    set32(c.r[6], c.r[29].w[0] + 232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA7E8u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_002E(c, 274u, depth + 1u); else { c.pc = 0x002BB7F0u; return; } if (c.pc != 0x002EA7E8u) [[unlikely]] return; }
L_002EA7E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA830u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 89u, depth + 1u); else { c.pc = 0x002F0FD0u; return; } if (c.pc != 0x002EA830u) [[unlikely]] return; }
L_002EA830:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA854; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EA84C; } }
    st32((c.r[22].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002EA84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EA86C; } }
L_002EA854:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA7D4u | kUnwind; return; } goto L_002EA7D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA7A0u | kUnwind; return; } goto L_002EA7A0; } }
L_002EA86C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002EA8A0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[6] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[29].w[0] + 248u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 204u), c.r[8].w[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 240u), c.f[2]);
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002EAB00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA950; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 3;
L_002EA950:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EAB08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA98C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EA98C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 264u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_002EAB10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EA9E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EA9E0:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EAB18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EAA1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EAA1C:
    c.f[2] = ld32((c.r[20].w[0]));
    set32(c.r[30], c.r[29].w[0] + 212u);
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[18], 0u + 1u);
    c.f[5] = ld32((c.r[20].w[0] + 4u));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[3] = ld32((c.r[19].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[4] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 236u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[2].w[0]), c.f[5]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    st32((c.r[2].w[0]), c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 220u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 208u), c.f[3]);
    c.budget -= 28;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0]), c.f[2]);  if (t) { goto L_002EAAAC; } }
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EAAAC; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002EAAAC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 332u);
    set32(c.r[6], c.r[29].w[0] + 328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAAC0u); c.r[23].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_002E(c, 277u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002EAAC0u) [[unlikely]] return; }
L_002EAAC0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_002EAB20; } }
L_002EAACC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002EAC8C; } }
L_002EAAD4:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EACF4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_002EAAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EAAF8; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002EAAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAF18; } }
L_002EAB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA950u | kUnwind; return; } goto L_002EA950; } }
L_002EAB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA98Cu | kUnwind; return; } goto L_002EA98C; } }
L_002EAB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA9E0u | kUnwind; return; } goto L_002EA9E0; } }
L_002EAB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAA1Cu | kUnwind; return; } goto L_002EAA1C; } }
L_002EAB20:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB38u); set32(c.r[8], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_002E(c, 270u, depth + 1u); else { c.pc = 0x002BB380u; return; } if (c.pc != 0x002EAB38u) [[unlikely]] return; }
L_002EAB38:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.f[4] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_002EABA0; } }
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EABA0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EAB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAACCu | kUnwind; return; } goto L_002EAACC; } }
L_002EABA0:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EABD0; } }
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EABD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAB98u | kUnwind; return; } goto L_002EAB98; } }
L_002EABD0:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = ld32((c.r[29].w[0] + 224u));  if (t) { goto L_002EAC00; } }
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EAC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAB98u | kUnwind; return; } goto L_002EAB98; } }
L_002EAC00:
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAC2C; } }
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAC2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAB98u | kUnwind; return; } goto L_002EAB98; } }
L_002EAC2C:
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAC58; } }
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAB98u | kUnwind; return; } goto L_002EAB98; } }
L_002EAC58:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAC84; } }
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAC84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAB98u | kUnwind; return; } goto L_002EAB98; } }
L_002EAC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAB98u | kUnwind; return; } goto L_002EAB98; } }
L_002EAC8C:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACD0u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 102u, depth + 1u); else { c.pc = 0x002F2510u; return; } if (c.pc != 0x002EACD0u) [[unlikely]] return; }
L_002EACD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAAD4u | kUnwind; return; } goto L_002EAAD4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EACEC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002EACEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EAF18; } }
L_002EACF4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 332u);
    set32(c.r[6], c.r[29].w[0] + 328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD08u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_002E(c, 274u, depth + 1u); else { c.pc = 0x002BB7F0u; return; } if (c.pc != 0x002EAD08u) [[unlikely]] return; }
L_002EAD08:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002EAD30; } }
L_002EAD10:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002EAEB8; } }
L_002EAD18:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EACF4u | kUnwind; return; } goto L_002EACF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAAECu | kUnwind; return; } goto L_002EAAEC; } }
L_002EAD30:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD48u); set32(c.r[8], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_002E(c, 270u, depth + 1u); else { c.pc = 0x002BB380u; return; } if (c.pc != 0x002EAD48u) [[unlikely]] return; }
L_002EAD48:
    set32(c.r[2], c.r[29].w[0] + 228u);
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.f[4] = ld32((c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    set32(c.r[4], c.r[2].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 32u);  if (t) { goto L_002EADB8; } }
    c.f[0] = ld32((c.r[30].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EADB8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002EADB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAD10u | kUnwind; return; } goto L_002EAD10; } }
L_002EADB8:
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EADF0; } }
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EADF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EADB0u | kUnwind; return; } goto L_002EADB0; } }
L_002EADF0:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = ld32((c.r[29].w[0] + 224u));  if (t) { goto L_002EAE20; } }
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EAE20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EADB0u | kUnwind; return; } goto L_002EADB0; } }
L_002EAE20:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAE50; } }
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EADB0u | kUnwind; return; } goto L_002EADB0; } }
L_002EAE50:
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAE80; } }
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EADB0u | kUnwind; return; } goto L_002EADB0; } }
    c.budget -= 1;
L_002EAE80:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAEB0; } }
    c.f[0] = ld32((c.r[30].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EAEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EADB0u | kUnwind; return; } goto L_002EADB0; } }
    c.budget -= 1;
L_002EAEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EADB0u | kUnwind; return; } goto L_002EADB0; } }
L_002EAEB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAEFCu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 102u, depth + 1u); else { c.pc = 0x002F2510u; return; } if (c.pc != 0x002EAEFCu) [[unlikely]] return; }
L_002EAEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAD18u | kUnwind; return; } goto L_002EAD18; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EAF14; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002EAF14:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EAF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002EAF50:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[6] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 152u);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 144u), c.f[2]);
    c.budget -= 33;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002EB164; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EAFF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
L_002EAFF8:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB16C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB034; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EB034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 168u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_002EB174; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB088; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EB088:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB17C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB0C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EB0C4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 236u);
    set32(c.r[6], c.r[29].w[0] + 232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB0D8u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 277u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002EB0D8u) [[unlikely]] return; }
L_002EB0D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB120u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 112u, depth + 1u); else { c.pc = 0x002F3610u; return; } if (c.pc != 0x002EB120u) [[unlikely]] return; }
L_002EB120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB140; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EB138; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002EB138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EB21C; } }
L_002EB140:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB184; } }
L_002EB150:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EB15C; } }
    st32((c.r[22].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002EB15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EB21C; } }
L_002EB164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAFF8u | kUnwind; return; } goto L_002EAFF8; } }
L_002EB16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB034u | kUnwind; return; } goto L_002EB034; } }
L_002EB174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB088u | kUnwind; return; } goto L_002EB088; } }
L_002EB17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB0C4u | kUnwind; return; } goto L_002EB0C4; } }
L_002EB184:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 236u);
    set32(c.r[6], c.r[29].w[0] + 232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB198u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_002E(c, 274u, depth + 1u); else { c.pc = 0x002BB7F0u; return; } if (c.pc != 0x002EB198u) [[unlikely]] return; }
L_002EB198:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1E0u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 112u, depth + 1u); else { c.pc = 0x002F3610u; return; } if (c.pc != 0x002EB1E0u) [[unlikely]] return; }
L_002EB1E0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB204; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EB1FC; } }
    st32((c.r[22].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002EB1FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EB21C; } }
L_002EB204:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB184u | kUnwind; return; } goto L_002EB184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB150u | kUnwind; return; } goto L_002EB150; } }
L_002EB21C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002EB250:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 108u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB270u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 178u, depth + 1u); else { c.pc = 0x002A63A0u; return; } if (c.pc != 0x002EB270u) [[unlikely]] return; }
L_002EB270:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.f[12] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EB294; } }
L_002EB28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 108u));  if (t) { goto L_002EB31C; } }
L_002EB294:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[8], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.f[12]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    st32((c.r[29].w[0] + 88u), c.f[12]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB310u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 166u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x002EB310u) [[unlikely]] return; }
L_002EB310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB28Cu | kUnwind; return; } goto L_002EB28C; } }
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 1;
L_002EB31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EB330:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 100u), c.f[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB364u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0029(c, 176u, depth + 1u); else { c.pc = 0x002A6280u; return; } if (c.pc != 0x002EB364u) [[unlikely]] return; }
L_002EB364:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[9], c.r[29].w[0] + 84u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[12] = 0u;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[9].w[0]), c.f[3]);
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[3], c.r[2].w[0] >> 4);
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[4]);
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[2], c.f[0]);
    set32(c.r[3], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    st32((c.r[29].w[0] + 92u), c.f[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB40Cu); st32((c.r[9].w[0]), c.f[2]);  if (depth < kMaxDepth) unit_0000(c, 166u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x002EB40Cu) [[unlikely]] return; }
L_002EB40C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB41C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 52u));  if (t) { goto L_002EB420; } }
L_002EB41C:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 1;
L_002EB420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EB440:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 124u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB464u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0029(c, 178u, depth + 1u); else { c.pc = 0x002A63A0u; return; } if (c.pc != 0x002EB464u) [[unlikely]] return; }
L_002EB464:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.f[12] = 0u;
    c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EB494; } }
L_002EB480:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = c.f[20];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_002EB528; } }
L_002EB494:
    c.f[0] = c.f[20] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[29].w[0] + 96u), c.f[12]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 104u), c.f[12]);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[8], 0u + 3u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB510u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 166u, depth + 1u); else { c.pc = 0x00203940u; return; } if (c.pc != 0x002EB510u) [[unlikely]] return; }
L_002EB510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB480u | kUnwind; return; } goto L_002EB480; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB480u | kUnwind; return; } goto L_002EB480; } }
L_002EB528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002EB540:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[5] = ld32((c.r[6].w[0]));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[29].w[0] + 248u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[29].w[0] + 224u)));
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 232u)));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 200u), c.r[9].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 240u), c.f[2]);
    c.budget -= 39;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002EB774; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB600; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 3;
L_002EB600:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB77C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB63C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EB63C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 264u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_002EB784; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB690; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EB690:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB78C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB6CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EB6CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 332u);
    set32(c.r[6], c.r[29].w[0] + 328u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6ECu); st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 277u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002EB6ECu) [[unlikely]] return; }
L_002EB6EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[29].w[0] + 207u));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB738u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 85u, depth + 1u); else { c.pc = 0x002F08D0u; return; } if (c.pc != 0x002EB738u) [[unlikely]] return; }
L_002EB738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB794; } }
L_002EB740:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB7C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_002EB754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB760; } }
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_002EB760:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EB8A4; } }
L_002EB774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB600u | kUnwind; return; } goto L_002EB600; } }
L_002EB77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB63Cu | kUnwind; return; } goto L_002EB63C; } }
L_002EB784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB690u | kUnwind; return; } goto L_002EB690; } }
L_002EB78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB6CCu | kUnwind; return; } goto L_002EB6CC; } }
L_002EB794:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    ld128((c.r[21].w[0]) & ~15u, c.r[3]);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[21] = ld32((c.r[21].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 16u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 236u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB740u | kUnwind; return; } goto L_002EB740; } }
L_002EB7C0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 332u);
    set32(c.r[6], c.r[29].w[0] + 328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7D4u); set32(c.r[20], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_002E(c, 274u, depth + 1u); else { c.pc = 0x002BB7F0u; return; } if (c.pc != 0x002EB7D4u) [[unlikely]] return; }
L_002EB7D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[29].w[0] + 207u));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB820u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 85u, depth + 1u); else { c.pc = 0x002F08D0u; return; } if (c.pc != 0x002EB820u) [[unlikely]] return; }
L_002EB820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB840; } }
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB858; } }
L_002EB838:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002EB840:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB7C0u | kUnwind; return; } goto L_002EB7C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 200u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB754u | kUnwind; return; } goto L_002EB754; } }
L_002EB858:
    ld128((c.r[21].w[0]) & ~15u, c.r[2]);
    c.f[21] = ld32((c.r[21].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 16u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[29].w[0] + 236u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB838u | kUnwind; return; } goto L_002EB838; } }
L_002EB880:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 236u)));
    set32(c.r[2], 0u + 1u);
    st128((c.r[21].w[0]) & ~15u, c.r[4]);
    st32((c.r[21].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 20u), c.f[21]);
    st16((c.r[21].w[0] + 24u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[21].w[0] + 26u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st8((c.r[21].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_002EB8A4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002EB8E0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[5] = ld32((c.r[6].w[0]));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[29].w[0] + 248u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[29].w[0] + 224u)));
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 232u)));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 204u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 240u), c.f[2]);
    c.budget -= 38;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002EBB0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB99C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 3;
L_002EB99C:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBB14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB9D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EB9D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 264u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_002EBB1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBA2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EBA2C:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBB24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBA68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EBA68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 332u);
    set32(c.r[6], c.r[29].w[0] + 328u);
    set32(c.r[20], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA88u); st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 277u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002EBA88u) [[unlikely]] return; }
L_002EBA88:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAD0u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 93u, depth + 1u); else { c.pc = 0x002F15C0u; return; } if (c.pc != 0x002EBAD0u) [[unlikely]] return; }
L_002EBAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EBB2C; } }
L_002EBAD8:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EBB58; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_002EBAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EBAF8; } }
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_002EBAF8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EBC18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBC3C; } }
L_002EBB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB99Cu | kUnwind; return; } goto L_002EB99C; } }
L_002EBB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB9D8u | kUnwind; return; } goto L_002EB9D8; } }
L_002EBB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBA2Cu | kUnwind; return; } goto L_002EBA2C; } }
L_002EBB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBA68u | kUnwind; return; } goto L_002EBA68; } }
L_002EBB2C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    ld128((c.r[21].w[0]) & ~15u, c.r[3]);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[21] = ld32((c.r[21].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 16u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 236u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBAD8u | kUnwind; return; } goto L_002EBAD8; } }
L_002EBB58:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 332u);
    set32(c.r[6], c.r[29].w[0] + 328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB6Cu); set32(c.r[20], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_002E(c, 274u, depth + 1u); else { c.pc = 0x002BB7F0u; return; } if (c.pc != 0x002EBB6Cu) [[unlikely]] return; }
L_002EBB6C:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBB4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 93u, depth + 1u); else { c.pc = 0x002F15C0u; return; } if (c.pc != 0x002EBBB4u) [[unlikely]] return; }
L_002EBBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EBBD8; } }
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBBF0; } }
    c.budget -= 1;
L_002EBBD0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002EBBD8:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBB58u | kUnwind; return; } goto L_002EBB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBAECu | kUnwind; return; } goto L_002EBAEC; } }
L_002EBBF0:
    ld128((c.r[21].w[0]) & ~15u, c.r[2]);
    c.f[21] = ld32((c.r[21].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 16u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[29].w[0] + 236u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBBD0u | kUnwind; return; } goto L_002EBBD0; } }
L_002EBC18:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 236u)));
    set32(c.r[2], 0u + 1u);
    st128((c.r[21].w[0]) & ~15u, c.r[4]);
    st32((c.r[21].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 20u), c.f[21]);
    st16((c.r[21].w[0] + 24u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[21].w[0] + 26u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st8((c.r[21].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_002EBC3C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002EBC80:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[6] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 152u);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 144u), c.f[2]);
    c.budget -= 33;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002EBE94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBD28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
L_002EBD28:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBE9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBD64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EBD64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 168u);
    c.f[0] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_002EBEA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBDB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EBDB8:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBEAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EBDF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002EBDF4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 236u);
    set32(c.r[6], c.r[29].w[0] + 232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE08u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 277u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002EBE08u) [[unlikely]] return; }
L_002EBE08:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE50u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 105u, depth + 1u); else { c.pc = 0x002F2A60u; return; } if (c.pc != 0x002EBE50u) [[unlikely]] return; }
L_002EBE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EBE70; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EBE68; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002EBE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EBF4C; } }
L_002EBE70:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EBEB4; } }
L_002EBE80:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EBE8C; } }
    st32((c.r[22].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002EBE8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBF4C; } }
L_002EBE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBD28u | kUnwind; return; } goto L_002EBD28; } }
L_002EBE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBD64u | kUnwind; return; } goto L_002EBD64; } }
L_002EBEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBDB8u | kUnwind; return; } goto L_002EBDB8; } }
L_002EBEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBDF4u | kUnwind; return; } goto L_002EBDF4; } }
L_002EBEB4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 236u);
    set32(c.r[6], c.r[29].w[0] + 232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBEC8u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_002E(c, 274u, depth + 1u); else { c.pc = 0x002BB7F0u; return; } if (c.pc != 0x002EBEC8u) [[unlikely]] return; }
L_002EBEC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF10u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 105u, depth + 1u); else { c.pc = 0x002F2A60u; return; } if (c.pc != 0x002EBF10u) [[unlikely]] return; }
L_002EBF10:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EBF34; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002EBF2C; } }
    st32((c.r[22].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002EBF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EBF4C; } }
L_002EBF34:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBEB4u | kUnwind; return; } goto L_002EBEB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBE80u | kUnwind; return; } goto L_002EBE80; } }
L_002EBF4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002EBF80:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = ld32((c.r[6].w[0]));
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[3] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[29].w[0] + 136u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[20] = c.f[12];
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 128u), c.f[2]);  if (t) { [[clang::musttail]] return unit_003B(c, 10u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_003B(c, 3u, depth); } }
    [[clang::musttail]] return unit_003B(c, 2u, depth);
}

}

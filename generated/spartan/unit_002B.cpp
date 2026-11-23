#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002B[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 149, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 206, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 210, 211, 0, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 215, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 228, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 239, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 246, 247, 0, 0, 0, 0, 0, 248, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 266, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 307, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 310, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 314, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0,
    347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
};

void unit_002B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002AC000;
    case 2u: goto L_002AC00C;
    case 3u: goto L_002AC020;
    case 4u: goto L_002AC050;
    case 5u: goto L_002AC080;
    case 6u: goto L_002AC094;
    case 7u: goto L_002AC0A8;
    case 8u: goto L_002AC0B0;
    case 9u: goto L_002AC110;
    case 10u: goto L_002AC138;
    case 11u: goto L_002AC144;
    case 12u: goto L_002AC158;
    case 13u: goto L_002AC178;
    case 14u: goto L_002AC188;
    case 15u: goto L_002AC1AC;
    case 16u: goto L_002AC1B4;
    case 17u: goto L_002AC1CC;
    case 18u: goto L_002AC1D8;
    case 19u: goto L_002AC20C;
    case 20u: goto L_002AC23C;
    case 21u: goto L_002AC250;
    case 22u: goto L_002AC27C;
    case 23u: goto L_002AC2AC;
    case 24u: goto L_002AC2D8;
    case 25u: goto L_002AC300;
    case 26u: goto L_002AC314;
    case 27u: goto L_002AC334;
    case 28u: goto L_002AC340;
    case 29u: goto L_002AC34C;
    case 30u: goto L_002AC394;
    case 31u: goto L_002AC39C;
    case 32u: goto L_002AC3A4;
    case 33u: goto L_002AC3B0;
    case 34u: goto L_002AC3C4;
    case 35u: goto L_002AC3CC;
    case 36u: goto L_002AC3F8;
    case 37u: goto L_002AC404;
    case 38u: goto L_002AC420;
    case 39u: goto L_002AC450;
    case 40u: goto L_002AC470;
    case 41u: goto L_002AC490;
    case 42u: goto L_002AC4B0;
    case 43u: goto L_002AC4D0;
    case 44u: goto L_002AC4F0;
    case 45u: goto L_002AC510;
    case 46u: goto L_002AC534;
    case 47u: goto L_002AC550;
    case 48u: goto L_002AC570;
    case 49u: goto L_002AC5D0;
    case 50u: goto L_002AC5F4;
    case 51u: goto L_002AC614;
    case 52u: goto L_002AC630;
    case 53u: goto L_002AC65C;
    case 54u: goto L_002AC664;
    case 55u: goto L_002AC674;
    case 56u: goto L_002AC68C;
    case 57u: goto L_002AC69C;
    case 58u: goto L_002AC6AC;
    case 59u: goto L_002AC6D0;
    case 60u: goto L_002AC700;
    case 61u: goto L_002AC724;
    case 62u: goto L_002AC740;
    case 63u: goto L_002AC764;
    case 64u: goto L_002AC780;
    case 65u: goto L_002AC7A4;
    case 66u: goto L_002AC7C0;
    case 67u: goto L_002AC800;
    case 68u: goto L_002AC854;
    case 69u: goto L_002AC870;
    case 70u: goto L_002AC880;
    case 71u: goto L_002AC890;
    case 72u: goto L_002AC8A0;
    case 73u: goto L_002AC8F4;
    case 74u: goto L_002AC910;
    case 75u: goto L_002AC930;
    case 76u: goto L_002AC96C;
    case 77u: goto L_002AC978;
    case 78u: goto L_002AC998;
    case 79u: goto L_002ACA44;
    case 80u: goto L_002ACA6C;
    case 81u: goto L_002ACA90;
    case 82u: goto L_002ACAA0;
    case 83u: goto L_002ACAC8;
    case 84u: goto L_002ACAD8;
    case 85u: goto L_002ACAE8;
    case 86u: goto L_002ACAF0;
    case 87u: goto L_002ACB20;
    case 88u: goto L_002ACB54;
    case 89u: goto L_002ACB64;
    case 90u: goto L_002ACBE0;
    case 91u: goto L_002ACBF0;
    case 92u: goto L_002ACC10;
    case 93u: goto L_002ACD34;
    case 94u: goto L_002ACD50;
    case 95u: goto L_002ACD60;
    case 96u: goto L_002ACE1C;
    case 97u: goto L_002ACE20;
    case 98u: goto L_002ACE88;
    case 99u: goto L_002ACEB8;
    case 100u: goto L_002ACEC0;
    case 101u: goto L_002ACEF0;
    case 102u: goto L_002ACFA4;
    case 103u: goto L_002ACFCC;
    case 104u: goto L_002ACFD4;
    case 105u: goto L_002AD004;
    case 106u: goto L_002AD048;
    case 107u: goto L_002AD050;
    case 108u: goto L_002AD080;
    case 109u: goto L_002AD0E0;
    case 110u: goto L_002AD0F0;
    case 111u: goto L_002AD110;
    case 112u: goto L_002AD120;
    case 113u: goto L_002AD150;
    case 114u: goto L_002AD160;
    case 115u: goto L_002AD170;
    case 116u: goto L_002AD270;
    case 117u: goto L_002AD2E4;
    case 118u: goto L_002AD314;
    case 119u: goto L_002AD31C;
    case 120u: goto L_002AD34C;
    case 121u: goto L_002AD390;
    case 122u: goto L_002AD3A0;
    case 123u: goto L_002AD3B0;
    case 124u: goto L_002AD3C0;
    case 125u: goto L_002AD3D0;
    case 126u: goto L_002AD4D0;
    case 127u: goto L_002AD538;
    case 128u: goto L_002AD540;
    case 129u: goto L_002AD570;
    case 130u: goto L_002AD588;
    case 131u: goto L_002AD5C0;
    case 132u: goto L_002AD5E0;
    case 133u: goto L_002AD5FC;
    case 134u: goto L_002AD614;
    case 135u: goto L_002AD634;
    case 136u: goto L_002AD660;
    case 137u: goto L_002AD68C;
    case 138u: goto L_002AD694;
    case 139u: goto L_002AD6A4;
    case 140u: goto L_002AD6B4;
    case 141u: goto L_002AD6D0;
    case 142u: goto L_002AD6F0;
    case 143u: goto L_002AD718;
    case 144u: goto L_002AD72C;
    case 145u: goto L_002AD73C;
    case 146u: goto L_002AD750;
    case 147u: goto L_002AD760;
    case 148u: goto L_002AD7AC;
    case 149u: goto L_002AD7B0;
    case 150u: goto L_002AD7B4;
    case 151u: goto L_002AD7CC;
    case 152u: goto L_002AD80C;
    case 153u: goto L_002AD820;
    case 154u: goto L_002AD83C;
    case 155u: goto L_002AD860;
    case 156u: goto L_002AD868;
    case 157u: goto L_002AD898;
    case 158u: goto L_002AD8C0;
    case 159u: goto L_002AD8F8;
    case 160u: goto L_002AD914;
    case 161u: goto L_002AD934;
    case 162u: goto L_002AD968;
    case 163u: goto L_002AD978;
    case 164u: goto L_002AD9A8;
    case 165u: goto L_002AD9D0;
    case 166u: goto L_002ADAF0;
    case 167u: goto L_002ADB2C;
    case 168u: goto L_002ADB40;
    case 169u: goto L_002ADB5C;
    case 170u: goto L_002ADB80;
    case 171u: goto L_002ADB90;
    case 172u: goto L_002ADBF8;
    case 173u: goto L_002ADC34;
    case 174u: goto L_002ADC48;
    case 175u: goto L_002ADC7C;
    case 176u: goto L_002ADD0C;
    case 177u: goto L_002ADDB0;
    case 178u: goto L_002ADDC0;
    case 179u: goto L_002ADDEC;
    case 180u: goto L_002ADDFC;
    case 181u: goto L_002ADE0C;
    case 182u: goto L_002ADEC8;
    case 183u: goto L_002ADF58;
    case 184u: goto L_002ADF64;
    case 185u: goto L_002ADF90;
    case 186u: goto L_002AE020;
    case 187u: goto L_002AE02C;
    case 188u: goto L_002AE04C;
    case 189u: goto L_002AE098;
    case 190u: goto L_002AE0CC;
    case 191u: goto L_002AE0D8;
    case 192u: goto L_002AE0F4;
    case 193u: goto L_002AE174;
    case 194u: goto L_002AE180;
    case 195u: goto L_002AE1BC;
    case 196u: goto L_002AE23C;
    case 197u: goto L_002AE248;
    case 198u: goto L_002AE2A0;
    case 199u: goto L_002AE2D4;
    case 200u: goto L_002AE318;
    case 201u: goto L_002AE35C;
    case 202u: goto L_002AE370;
    case 203u: goto L_002AE39C;
    case 204u: goto L_002AE3A8;
    case 205u: goto L_002AE414;
    case 206u: goto L_002AE418;
    case 207u: goto L_002AE41C;
    case 208u: goto L_002AE434;
    case 209u: goto L_002AE65C;
    case 210u: goto L_002AE660;
    case 211u: goto L_002AE664;
    case 212u: goto L_002AE67C;
    case 213u: goto L_002AE72C;
    case 214u: goto L_002AE7A0;
    case 215u: goto L_002AE7A4;
    case 216u: goto L_002AE7A8;
    case 217u: goto L_002AE7B8;
    case 218u: goto L_002AE7CC;
    case 219u: goto L_002AE800;
    case 220u: goto L_002AE82C;
    case 221u: goto L_002AE864;
    case 222u: goto L_002AE898;
    case 223u: goto L_002AE8E0;
    case 224u: goto L_002AE930;
    case 225u: goto L_002AE980;
    case 226u: goto L_002AE9C8;
    case 227u: goto L_002AE9F4;
    case 228u: goto L_002AEA08;
    case 229u: goto L_002AEA0C;
    case 230u: goto L_002AEA28;
    case 231u: goto L_002AEA40;
    case 232u: goto L_002AEA58;
    case 233u: goto L_002AEA74;
    case 234u: goto L_002AEA88;
    case 235u: goto L_002AEAA8;
    case 236u: goto L_002AEABC;
    case 237u: goto L_002AEAE0;
    case 238u: goto L_002AEB10;
    case 239u: goto L_002AEB14;
    case 240u: goto L_002AEB18;
    case 241u: goto L_002AEB24;
    case 242u: goto L_002AEB40;
    case 243u: goto L_002AEB5C;
    case 244u: goto L_002AEB74;
    case 245u: goto L_002AEBAC;
    case 246u: goto L_002AEBB0;
    case 247u: goto L_002AEBB4;
    case 248u: goto L_002AEBCC;
    case 249u: goto L_002AEBD0;
    case 250u: goto L_002AEC54;
    case 251u: goto L_002AEC68;
    case 252u: goto L_002AECA0;
    case 253u: goto L_002AECA4;
    case 254u: goto L_002AECC0;
    case 255u: goto L_002AECD4;
    case 256u: goto L_002AECEC;
    case 257u: goto L_002AECFC;
    case 258u: goto L_002AED1C;
    case 259u: goto L_002AED2C;
    case 260u: goto L_002AED3C;
    case 261u: goto L_002AED54;
    case 262u: goto L_002AED84;
    case 263u: goto L_002AEDB8;
    case 264u: goto L_002AEDE4;
    case 265u: goto L_002AEE1C;
    case 266u: goto L_002AEE20;
    case 267u: goto L_002AEE24;
    case 268u: goto L_002AEE50;
    case 269u: goto L_002AEE60;
    case 270u: goto L_002AEECC;
    case 271u: goto L_002AEF98;
    case 272u: goto L_002AF028;
    case 273u: goto L_002AF034;
    case 274u: goto L_002AF060;
    case 275u: goto L_002AF0F0;
    case 276u: goto L_002AF0FC;
    case 277u: goto L_002AF11C;
    case 278u: goto L_002AF168;
    case 279u: goto L_002AF19C;
    case 280u: goto L_002AF1A8;
    case 281u: goto L_002AF1B0;
    case 282u: goto L_002AF1C4;
    case 283u: goto L_002AF1D0;
    case 284u: goto L_002AF1F8;
    case 285u: goto L_002AF234;
    case 286u: goto L_002AF2B4;
    case 287u: goto L_002AF2C0;
    case 288u: goto L_002AF2FC;
    case 289u: goto L_002AF37C;
    case 290u: goto L_002AF388;
    case 291u: goto L_002AF3E4;
    case 292u: goto L_002AF40C;
    case 293u: goto L_002AF43C;
    case 294u: goto L_002AF458;
    case 295u: goto L_002AF464;
    case 296u: goto L_002AF48C;
    case 297u: goto L_002AF504;
    case 298u: goto L_002AF52C;
    case 299u: goto L_002AF554;
    case 300u: goto L_002AF55C;
    case 301u: goto L_002AF58C;
    case 302u: goto L_002AF5E0;
    case 303u: goto L_002AF608;
    case 304u: goto L_002AF61C;
    case 305u: goto L_002AF62C;
    case 306u: goto L_002AF668;
    case 307u: goto L_002AF66C;
    case 308u: goto L_002AF678;
    case 309u: goto L_002AF6B0;
    case 310u: goto L_002AF6B4;
    case 311u: goto L_002AF6B8;
    case 312u: goto L_002AF6C8;
    case 313u: goto L_002AF704;
    case 314u: goto L_002AF708;
    case 315u: goto L_002AF70C;
    case 316u: goto L_002AF71C;
    case 317u: goto L_002AF728;
    case 318u: goto L_002AF738;
    case 319u: goto L_002AF74C;
    case 320u: goto L_002AF758;
    case 321u: goto L_002AF76C;
    case 322u: goto L_002AF7D0;
    case 323u: goto L_002AF7E0;
    case 324u: goto L_002AF7F4;
    case 325u: goto L_002AF820;
    case 326u: goto L_002AF838;
    case 327u: goto L_002AF860;
    case 328u: goto L_002AF8A8;
    case 329u: goto L_002AF8F0;
    case 330u: goto L_002AF984;
    case 331u: goto L_002AF9C4;
    case 332u: goto L_002AF9CC;
    case 333u: goto L_002AF9EC;
    case 334u: goto L_002AFA08;
    case 335u: goto L_002AFA24;
    case 336u: goto L_002AFA40;
    case 337u: goto L_002AFA50;
    case 338u: goto L_002AFAFC;
    case 339u: goto L_002AFB08;
    case 340u: goto L_002AFB4C;
    case 341u: goto L_002AFB54;
    case 342u: goto L_002AFB84;
    case 343u: goto L_002AFBB4;
    case 344u: goto L_002AFBC4;
    case 345u: goto L_002AFBD0;
    case 346u: goto L_002AFBF8;
    case 347u: goto L_002AFC00;
    case 348u: goto L_002AFC14;
    case 349u: goto L_002AFC34;
    case 350u: goto L_002AFC70;
    case 351u: goto L_002AFCBC;
    case 352u: goto L_002AFD30;
    case 353u: goto L_002AFD38;
    case 354u: goto L_002AFD68;
    case 355u: goto L_002AFDB0;
    case 356u: goto L_002AFF90;
    case 357u: goto L_002AFFA8;
    case 358u: goto L_002AFFB8;
    case 359u: goto L_002AFFD0;
    case 360u: goto L_002AFFFC;
    default: bad_entry(c, 0x002AC000u); return;
    }
L_002AC000:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC00Cu); set32(c.r[6], c.r[6].w[0] - 20496u);  if (depth < kMaxDepth) unit_002B(c, 39u, depth + 1u); else { c.pc = 0x002AC450u; return; } if (c.pc != 0x002AC00Cu) [[unlikely]] return; }
L_002AC00C:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AC040; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AC020:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC020u | kUnwind; return; } goto L_002AC020; } }
L_002AC040:
    set32(c.r[20], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ABE78u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 276u, depth); } }
    c.budget -= 1;
L_002AC050:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_002AC080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC094u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 246u, depth + 1u); else { c.pc = 0x002ABAC0u; return; } if (c.pc != 0x002AC094u) [[unlikely]] return; }
L_002AC094:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 5;
L_002AC0A8:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_002AC0B0:
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AC0C8; } }
    c.f[1] = c.f[0];
    c.budget -= 2;
L_002AC0C8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC0B0u | kUnwind; return; } goto L_002AC0B0; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC0A8u | kUnwind; return; } goto L_002AC0A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 2048u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC110:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC138u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 185u, depth + 1u); else { c.pc = 0x002A6540u; return; } if (c.pc != 0x002AC138u) [[unlikely]] return; }
L_002AC138:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC144u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002AC144u) [[unlikely]] return; }
L_002AC144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC3B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002AC158:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC158u | kUnwind; return; } goto L_002AC158; } }
    c.budget -= 1;
L_002AC178:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC188u); set32(c.r[5], c.r[5].w[0] - 20384u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002AC188u) [[unlikely]] return; }
L_002AC188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 404u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC1ACu); st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002AC1ACu) [[unlikely]] return; }
L_002AC1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC1B4u); set32(c.r[4], c.r[29].w[0] + 404u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002AC1B4u) [[unlikely]] return; }
L_002AC1B4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC1CCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC1CCu) [[unlikely]] return; }
L_002AC1CC:
    set32(c.r[4], c.r[29].w[0] + 404u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC1D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002AC1D8u) [[unlikely]] return; }
L_002AC1D8:
    set32(c.r[20], c.r[29].w[0] + 132u);
    set32(c.r[18], c.r[29].w[0] + 120u);
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AC244; } }
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[29].w[0] + 412u);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC20Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002AC20Cu) [[unlikely]] return; }
L_002AC20C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_002AC25C; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC23Cu); set32(c.r[5], c.r[2].w[0] + 412u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC23Cu) [[unlikely]] return; }
L_002AC23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 412u)));  if (t) { goto L_002AC260; } }
L_002AC244:
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC250u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002AC250u) [[unlikely]] return; }
L_002AC250:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002AC25C:
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    c.budget -= 1;
L_002AC260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AC3F0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], c.r[2].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC27Cu); st32((c.r[29].w[0] + 412u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002AC27Cu) [[unlikely]] return; }
L_002AC27C:
    st32((c.r[29].w[0] + 408u), c.r[2].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_002AC40C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AC40C; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002AC2AC:
    set32(c.r[19], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 408u)));  if (t) { goto L_002AC308; } }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC2D8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002AC2D8u) [[unlikely]] return; }
L_002AC2D8:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[17].d[0]; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_002AC320; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC300u); set32(c.r[6], c.r[19].w[0] - c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC300u) [[unlikely]] return; }
L_002AC300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 408u)));  if (t) { goto L_002AC324; } }
L_002AC308:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC314u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002AC314u) [[unlikely]] return; }
L_002AC314:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002AC320:
    set32(c.r[2], ld32((c.r[29].w[0] + 408u)));
    c.budget -= 1;
L_002AC324:
    set32(c.r[20], 0u - 1u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 408u), c.r[2].w[0]);
    c.budget -= 4;
L_002AC334:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_002AC340:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC34Cu); set32(c.r[5], c.r[29].w[0] + 408u);  if (depth < kMaxDepth) unit_0032(c, 65u, depth + 1u); else { c.pc = 0x002CB400u; return; } if (c.pc != 0x002AC34Cu) [[unlikely]] return; }
L_002AC34C:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002AC360; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002AC360:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC340u | kUnwind; return; } goto L_002AC340; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC334u | kUnwind; return; } goto L_002AC334; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 29576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC394u); set32(c.r[6], c.r[6].w[0] - 20361u);  if (depth < kMaxDepth) unit_002B(c, 45u, depth + 1u); else { c.pc = 0x002AC510u; return; } if (c.pc != 0x002AC394u) [[unlikely]] return; }
L_002AC394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC39Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002AC39Cu) [[unlikely]] return; }
L_002AC39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3A4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002AC3A4u) [[unlikely]] return; }
L_002AC3A4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002AC3B0u) [[unlikely]] return; }
L_002AC3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002AC42C; } }
L_002AC3B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3C4u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002AC3C4u) [[unlikely]] return; }
L_002AC3C4:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_002AC3CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC3CCu | kUnwind; return; } goto L_002AC3CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC178u | kUnwind; return; } goto L_002AC178; } }
L_002AC3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC3F8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002AC3F8u) [[unlikely]] return; }
L_002AC3F8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC404u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002AC404u) [[unlikely]] return; }
L_002AC404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC428; } }
L_002AC40C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC420u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AC420u) [[unlikely]] return; }
L_002AC420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC2ACu | kUnwind; return; } goto L_002AC2AC; } }
L_002AC428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002AC42C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_002AC450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC470u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002AC470u) [[unlikely]] return; }
L_002AC470:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC4B0u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002AC4B0u) [[unlikely]] return; }
L_002AC4B0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC4F0u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002AC4F0u) [[unlikely]] return; }
L_002AC4F0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC534u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002AC534u) [[unlikely]] return; }
L_002AC534:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14992u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC550u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002AC550u) [[unlikely]] return; }
L_002AC550:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC570:
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[9].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], 0u - 2u);
    c.r[10].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], c.r[9].w[0] << 1);
    set32(c.r[3], 0u - 5u);
    set32(c.r[5], c.r[9].w[0] << 2);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002AC5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC5F4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002AC5F4u) [[unlikely]] return; }
L_002AC5F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14640u);
    set32(c.r[6], c.r[6].w[0] - 14800u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC614u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002AC614u) [[unlikely]] return; }
L_002AC614:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AC68C; } }
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AC694; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_002AC65C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AC6A4; } }
L_002AC664:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002AC674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC674u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 64u, depth + 1u); else { c.pc = 0x002AC780u; return; } if (c.pc != 0x002AC674u) [[unlikely]] return; }
L_002AC674:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AC68C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC68Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002AC68Cu) [[unlikely]] return; }
L_002AC68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002AC6B4; } }
L_002AC694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC69Cu);  if (depth < kMaxDepth) unit_002B(c, 60u, depth + 1u); else { c.pc = 0x002AC700u; return; } if (c.pc != 0x002AC69Cu) [[unlikely]] return; }
L_002AC69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC65Cu | kUnwind; return; } goto L_002AC65C; } }
L_002AC6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC6ACu);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x002AC6ACu) [[unlikely]] return; }
L_002AC6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC664u | kUnwind; return; } goto L_002AC664; } }
L_002AC6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC6D0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002AC700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AC724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC724u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002AC724u) [[unlikely]] return; }
L_002AC724:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AC764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC764u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002AC764u) [[unlikely]] return; }
L_002AC764:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AC7A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC7A4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002AC7A4u) [[unlikely]] return; }
L_002AC7A4:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AC7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AC854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[2], c.r[2].w[0] - 26848u);
    set32(c.r[4], c.r[16].w[0] + 84u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 24336u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC800u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002AC800u) [[unlikely]] return; }
L_002AC800:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002AC83C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002AC83C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002AC83C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_002AC83C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AC854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002AC854u) [[unlikely]] return; }
L_002AC854:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AC870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002AC880:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AC890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002AC8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AC8D8; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002AC8D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC8F4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 544u);  if (t) { goto L_002AC8F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AC8F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x002AC8F4u) [[unlikely]] return; }
L_002AC8F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 124u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002AC9B8; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002AC910:
    set32(c.r[3], ld32((c.r[6].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC9A0; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[6].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AC9A8; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_002AC930:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AC948; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 762u)));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002AC948:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 124u)));
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC910u | kUnwind; return; } goto L_002AC910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AC9B8; } }
L_002AC96C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002AC978; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002AC978:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACA34; } }
    c.r[1].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ACA74; } }
    st16((c.r[4].w[0] + 762u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 1;
L_002AC998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002ACA78; } }
L_002AC9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC930u | kUnwind; return; } goto L_002AC930; } }
L_002AC9A8:
    st32((c.r[6].w[0] + 84u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC930u | kUnwind; return; } goto L_002AC930; } }
    c.budget -= 1;
L_002AC9B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[8].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ACA0C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACA24; } }
L_002ACA0C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 6;
L_002ACA24:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC978u | kUnwind; return; } goto L_002AC978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC96Cu | kUnwind; return; } goto L_002AC96C; } }
L_002ACA34:
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002ACA44u) [[unlikely]] return; }
L_002ACA44:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ACA74; } }
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACA6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 360u, depth + 1u); else { c.pc = 0x0028B750u; return; } if (c.pc != 0x002ACA6Cu) [[unlikely]] return; }
L_002ACA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC998u | kUnwind; return; } goto L_002AC998; } }
L_002ACA74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002ACA78:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ACA90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ACAA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 124u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[4].w[0] + 128u), 0u);
    c.budget -= 10;
L_002ACAC8:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACAD8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002ACAD8u) [[unlikely]] return; }
L_002ACAD8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACAE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACAE8u) [[unlikely]] return; }
L_002ACAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ACB44; } }
L_002ACAF0:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACAC8u | kUnwind; return; } goto L_002ACAC8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 124u)));
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ACBC8; } }
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002ACB20:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACB20u | kUnwind; return; } goto L_002ACB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ACBC8; } }
L_002ACB44:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB54u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002ACB54u) [[unlikely]] return; }
L_002ACB54:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACB64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ACB64u) [[unlikely]] return; }
L_002ACB64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 84u);  if (t) { goto L_002ACB88; } }
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002ACB88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 124u)));
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 124u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACAF0u | kUnwind; return; } goto L_002ACAF0; } }
L_002ACBC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002ACBE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ACBF0:
    st8((c.r[4].w[0] + 124u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[8].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), c.r[9].w[0]);  c.pc = t; return; }
L_002ACC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[13], c.r[5].w[0] << 2);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 2u);
    c.r[17].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[24], 0u - 3u);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[15], c.r[15].w[0] - 27952u);
    set32(c.r[14], 0u + 74u);
    set32(c.r[12], 0u - 5u);
    set32(c.r[11], c.r[11].w[0] - 16688u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[10], c.r[10].w[0] - 26848u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12976u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] + 24336u);
    c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];
    set32(c.r[7], 0u + 8u);
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[8], 0u + 5u);
    c.r[17].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[24].d[0] = c.r[17].d[0] & c.r[24].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[24].w[0]));
    st32((c.r[4].w[0]), c.r[15].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[14].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0]), c.r[11].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    c.budget -= 73;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACD34u); set32(c.r[4], c.r[16].w[0] + 84u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002ACD34u) [[unlikely]] return; }
L_002ACD34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ACD50:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002ACD60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 76u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ACE90; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[8].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002ACDC4; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACDC4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ACDC4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ACE1C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 26u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002ACF14; } }
    c.r[6].d[0] = ld8((c.r[8].w[0] + 552u));
    set32(c.r[3], 0u + 101u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[8].w[0] + 544u);  if (t) { goto L_002ACE1C; } }
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACE0C; } }
    c.r[3].d[0] = ld16((c.r[8].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002ACE0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ACE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACE1Cu);  if (depth < kMaxDepth) unit_0022(c, 194u, depth + 1u); else { c.pc = 0x0028A080u; return; } if (c.pc != 0x002ACE1Cu) [[unlikely]] return; }
L_002ACE1C:
    set32(c.r[7], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_002ACE20:
    set32(c.r[3], ld32((c.r[7].w[0] + 216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 26u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002AD0C0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 101u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002AD0C0; } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 552u));
    set32(c.r[3], 0u + 102u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[7].w[0] + 544u);  if (t) { goto L_002AD0C0; } }
    c.r[6].d[0] = ld16((c.r[7].w[0] + 544u));
    c.r[3].d[0] = c.r[6].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ACE78; } }
    c.r[3].d[0] = c.r[6].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002ACE78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACE88u);  if (depth < kMaxDepth) unit_0022(c, 191u, depth + 1u); else { c.pc = 0x0028A020u; return; } if (c.pc != 0x002ACE88u) [[unlikely]] return; }
L_002ACE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002AD0C4; } }
L_002ACE90:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002ACEF8; } }
L_002ACEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACEC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002ACEC0u) [[unlikely]] return; }
L_002ACEC0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE1Cu | kUnwind; return; } goto L_002ACE1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE1Cu | kUnwind; return; } goto L_002ACE1C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACEF0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002ACEF0u) [[unlikely]] return; }
L_002ACEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 68u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE20u | kUnwind; return; } goto L_002ACE20; } }
L_002ACEF8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACEB8u | kUnwind; return; } goto L_002ACEB8; } }
L_002ACF14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 72u), c.f[1]);  if (t) { goto L_002AD00C; } }
    set32(c.r[9], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD00C; } }
    c.r[8].d[0] = ld16((c.r[9].w[0] + 544u));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
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
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACFA4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 272u, depth + 1u); else { c.pc = 0x0028AB40u; return; } if (c.pc != 0x002ACFA4u) [[unlikely]] return; }
L_002ACFA4:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002AD088; } }
L_002ACFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ACFD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002ACFD4u) [[unlikely]] return; }
L_002ACFD4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE1Cu | kUnwind; return; } goto L_002ACE1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE1Cu | kUnwind; return; } goto L_002ACE1C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD004u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002AD004u) [[unlikely]] return; }
L_002AD004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE1Cu | kUnwind; return; } goto L_002ACE1C; } }
L_002AD00C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE1Cu | kUnwind; return; } goto L_002ACE1C; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002AD0A4; } }
L_002AD048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD050u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002AD050u) [[unlikely]] return; }
L_002AD050:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE1Cu | kUnwind; return; } goto L_002ACE1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE1Cu | kUnwind; return; } goto L_002ACE1C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD080u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002AD080u) [[unlikely]] return; }
L_002AD080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACE1Cu | kUnwind; return; } goto L_002ACE1C; } }
L_002AD088:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ACFCCu | kUnwind; return; } goto L_002ACFCC; } }
L_002AD0A4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD048u | kUnwind; return; } goto L_002AD048; } }
L_002AD0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AD0C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AD0E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD110u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AD110u) [[unlikely]] return; }
L_002AD110:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD120u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD120u) [[unlikely]] return; }
L_002AD120:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 26u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AD150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_002AD170:
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
    set32(c.r[9], 0u + 73u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 26480u);
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
L_002AD270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AD2AC; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002AD2AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD370; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 552u));
    set32(c.r[2], 0u + 210u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[5].w[0] + 544u);  if (t) { goto L_002AD2EC; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 220u));
    c.r[2].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD2EC; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD2E4u); set32(c.r[5], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0022(c, 176u, depth + 1u); else { c.pc = 0x00289E20u; return; } if (c.pc != 0x002AD2E4u) [[unlikely]] return; }
L_002AD2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD34C; } }
L_002AD2EC:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002AD354; } }
L_002AD314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD31Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002AD31Cu) [[unlikely]] return; }
L_002AD31C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AD370; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002AD370; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD34Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002AD34Cu) [[unlikely]] return; }
L_002AD34C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002AD374; } }
L_002AD354:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD314u | kUnwind; return; } goto L_002AD314; } }
L_002AD370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AD374:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AD390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD3A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002AD3C0:
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[7].w[0]));  c.pc = t; return; }
L_002AD3D0:
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
    set32(c.r[9], 0u + 72u);
    set32(c.r[7], 0u - 5u);
    set32(c.r[6], c.r[6].w[0] - 16688u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 26144u);
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
L_002AD4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD5AC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[2], 0u + 193u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AD578; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002AD590; } }
L_002AD538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD540u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002AD540u) [[unlikely]] return; }
L_002AD540:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AD5AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002AD5AC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD570u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002AD570u) [[unlikely]] return; }
L_002AD570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AD588; } }
L_002AD578:
    c.f[12] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[6], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD588u); set32(c.r[5], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0022(c, 173u, depth + 1u); else { c.pc = 0x00289DA0u; return; } if (c.pc != 0x002AD588u) [[unlikely]] return; }
L_002AD588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002AD5B0; } }
L_002AD590:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD538u | kUnwind; return; } goto L_002AD538; } }
L_002AD5AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AD5B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AD5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD5E0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AD5E0u) [[unlikely]] return; }
L_002AD5E0:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AD604; } }
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_002AD5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002AD64C; } }
L_002AD604:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD614u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AD614u) [[unlikely]] return; }
L_002AD614:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AD63C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD634u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD634u) [[unlikely]] return; }
L_002AD634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD648; } }
L_002AD63C:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD5FCu | kUnwind; return; } goto L_002AD5FC; } }
L_002AD648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002AD64C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AD660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 107u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + 544u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AD69C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_002AD68C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AD6AC; } }
L_002AD694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002AD6BC; } }
L_002AD69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6A4u);  if (depth < kMaxDepth) unit_0022(c, 280u, depth + 1u); else { c.pc = 0x0028AC20u; return; } if (c.pc != 0x002AD6A4u) [[unlikely]] return; }
L_002AD6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 76u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD68Cu | kUnwind; return; } goto L_002AD68C; } }
L_002AD6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6B4u); set32(c.r[4], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002AD6B4u) [[unlikely]] return; }
L_002AD6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD694u | kUnwind; return; } goto L_002AD694; } }
L_002AD6BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AD6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD6F0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 282u, depth + 1u); else { c.pc = 0x0028AC50u; return; } if (c.pc != 0x002AD6F0u) [[unlikely]] return; }
L_002AD6F0:
    c.f[0] = ld32((c.r[28].w[0] - 32380u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 95u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD718u); st32((c.r[16].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_00A0(c, 200u, depth + 1u); else { c.pc = 0x00482BC0u; return; } if (c.pc != 0x002AD718u) [[unlikely]] return; }
L_002AD718:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AD73C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD72Cu); set32(c.r[4], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002AD72Cu) [[unlikely]] return; }
L_002AD72C:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD73Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002AD73Cu) [[unlikely]] return; }
L_002AD73C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AD750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), 0u);  c.pc = t; return; }
L_002AD760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AD7CC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD8A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AD8E0; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD8A8; } }
L_002AD7AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AD7B0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AD7B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD7CC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD7CCu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002AD7CCu) [[unlikely]] return; }
L_002AD7CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 704u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD8E8; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AD8E8; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 32u));
    c.budget -= 1;
L_002AD80C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AD8F0; } }
L_002AD820:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 107u);
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AD970; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.budget -= 1;
L_002AD83C:
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002AD980; } }
L_002AD860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD868u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002AD868u) [[unlikely]] return; }
L_002AD868:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AD9B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002AD9B8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD898u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002AD898u) [[unlikely]] return; }
L_002AD898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002AD9BC; } }
L_002AD8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD7B4u | kUnwind; return; } goto L_002AD7B4; } }
L_002AD8A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD7ACu | kUnwind; return; } goto L_002AD7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD8C0u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002AD8C0u) [[unlikely]] return; }
L_002AD8C0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD7B0u | kUnwind; return; } goto L_002AD7B0; } }
L_002AD8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD7B4u | kUnwind; return; } goto L_002AD7B4; } }
L_002AD8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD80Cu | kUnwind; return; } goto L_002AD80C; } }
L_002AD8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD8F8u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00AB(c, 331u, depth + 1u); else { c.pc = 0x004AF610u; return; } if (c.pc != 0x002AD8F8u) [[unlikely]] return; }
L_002AD8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD820u | kUnwind; return; } goto L_002AD820; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD914u); set32(c.r[5], ld32((c.r[17].w[0] + 28u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AD914u) [[unlikely]] return; }
L_002AD914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD820u | kUnwind; return; } goto L_002AD820; } }
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AD99C; } }
L_002AD934:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 107u);
    set32(c.r[4], c.r[5].w[0] + 544u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AD9B8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AD9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD968u); set32(c.r[5], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0022(c, 282u, depth + 1u); else { c.pc = 0x0028AC50u; return; } if (c.pc != 0x002AD968u) [[unlikely]] return; }
L_002AD968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD898u | kUnwind; return; } goto L_002AD898; } }
L_002AD970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD978u);  if (depth < kMaxDepth) unit_0022(c, 280u, depth + 1u); else { c.pc = 0x0028AC20u; return; } if (c.pc != 0x002AD978u) [[unlikely]] return; }
L_002AD978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD83Cu | kUnwind; return; } goto L_002AD83C; } }
L_002AD980:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD860u | kUnwind; return; } goto L_002AD860; } }
L_002AD99C:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AD9A8u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00AB(c, 307u, depth + 1u); else { c.pc = 0x004AF2A0u; return; } if (c.pc != 0x002AD9A8u) [[unlikely]] return; }
L_002AD9A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AD934u | kUnwind; return; } goto L_002AD934; } }
L_002AD9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AD9BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AD9D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[11].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 2u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[14], 0u - 3u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[24].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[13], c.r[13].w[0] - 27952u);
    set32(c.r[12], 0u + 64u);
    set32(c.r[9], 0u - 5u);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] - 16688u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] - 25472u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[24].d[0] = c.r[24].d[0] & c.r[3].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[24].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[14].d[0] = c.r[24].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[4].w[0]), c.r[13].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[9].d[0] = c.r[12].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 80u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 70;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_002ADAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 88u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002ADB34; } }
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 1;
L_002ADB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002ADB64; } }
L_002ADB34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB40u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002ADB40u) [[unlikely]] return; }
L_002ADB40:
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002ADB50; } }
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_002ADB50:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADB5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 210u, depth + 1u); else { c.pc = 0x0046E4A0u; return; } if (c.pc != 0x002ADB5Cu) [[unlikely]] return; }
L_002ADB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ADB2Cu | kUnwind; return; } goto L_002ADB2C; } }
L_002ADB64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ADB80:
    st32((c.r[4].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 116u), c.f[12]);  c.pc = t; return; }
L_002ADB90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.f[24] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = ld32((c.r[29].w[0] + 124u));  if (t) { goto L_002AE26C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ADC20; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 484u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADBF8u); set32(c.r[16], c.r[2].w[0] + 416u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ADBF8u) [[unlikely]] return; }
L_002ADBF8:
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[23] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_002ADC70; } }
L_002ADC20:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ADC34u) [[unlikely]] return; }
L_002ADC34:
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC48u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ADC48u) [[unlikely]] return; }
L_002ADC48:
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[24] = c.f[20];
    c.f[21] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[23] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
L_002ADC70:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADC7Cu); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002ADC7Cu) [[unlikely]] return; }
L_002ADC7C:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
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
    c.f[4] = ld32((c.r[3].w[0] + 384u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[13] = c.f[22];
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
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[23]);
    c.f[12] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADD0Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002ADD0Cu) [[unlikely]] return; }
L_002ADD0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[5] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[4].w[0] + 388u));
    c.f[3] = c.r[2].w[0];
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 64053ull;
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    set32(c.r[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[4] = c.r[5].w[0];
    c.f[6] = c.f[20] & fp::kAbs;
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 36;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[4]);  if (t) { goto L_002ADDC8; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ADDB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADDB0u);  if (depth < kMaxDepth) unit_0089(c, 85u, depth + 1u); else { c.pc = 0x004257D0u; return; } if (c.pc != 0x002ADDB0u) [[unlikely]] return; }
L_002ADDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0D8; } }
L_002ADDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADDC0u);  if (depth < kMaxDepth) unit_0089(c, 83u, depth + 1u); else { c.pc = 0x004257A0u; return; } if (c.pc != 0x002ADDC0u) [[unlikely]] return; }
L_002ADDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0D8; } }
L_002ADDC8:
    c.f[3] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ADE04; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ADDF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADDECu);  if (depth < kMaxDepth) unit_0089(c, 81u, depth + 1u); else { c.pc = 0x00425700u; return; } if (c.pc != 0x002ADDECu) [[unlikely]] return; }
L_002ADDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0D8; } }
L_002ADDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADDFCu);  if (depth < kMaxDepth) unit_0089(c, 82u, depth + 1u); else { c.pc = 0x00425750u; return; } if (c.pc != 0x002ADDFCu) [[unlikely]] return; }
L_002ADDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0D8; } }
L_002ADE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADE0Cu);  if (depth < kMaxDepth) unit_0089(c, 73u, depth + 1u); else { c.pc = 0x00425550u; return; } if (c.pc != 0x002ADE0Cu) [[unlikely]] return; }
L_002ADE0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE26C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ADE3C; } }
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AE26C; } }
L_002ADE3C:
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[23]);
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 108u), c.f[24]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[3]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[22], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[21] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AE0E0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 76u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AE04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADEC8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002ADEC8u) [[unlikely]] return; }
L_002ADEC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[3].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[1] = c.r[3].w[0];
    c.f[21] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
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
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF58u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002ADF58u) [[unlikely]] return; }
L_002ADF58:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF64u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002ADF64u) [[unlikely]] return; }
L_002ADF64:
    c.f[2] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ADF90u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002ADF90u) [[unlikely]] return; }
L_002ADF90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[3].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[1] = c.r[3].w[0];
    c.f[21] = ld32((c.r[16].w[0]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
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
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE020u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002AE020u) [[unlikely]] return; }
L_002AE020:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE02Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002AE02Cu) [[unlikely]] return; }
L_002AE02C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 8;
L_002AE04C:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[8], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_002AE0A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 72u)));  if (t) { goto L_002AE0D0; } }
L_002AE070:
    set32(c.r[2], ld32((c.r[3].w[0] + 484u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] - 13328u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE098u); set32(c.r[5], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_0091(c, 121u, depth + 1u); else { c.pc = 0x00445A60u; return; } if (c.pc != 0x002AE098u) [[unlikely]] return; }
L_002AE098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AE0CC; } }
L_002AE0A0:
    set32(c.r[2], ld32((c.r[3].w[0] + 484u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] - 13328u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0CCu); set32(c.r[5], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_0091(c, 121u, depth + 1u); else { c.pc = 0x00445A60u; return; } if (c.pc != 0x002AE0CCu) [[unlikely]] return; }
L_002AE0CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_002AE0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0D8u);  if (depth < kMaxDepth) unit_0089(c, 61u, depth + 1u); else { c.pc = 0x00425250u; return; } if (c.pc != 0x002AE0D8u) [[unlikely]] return; }
L_002AE0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002AE270; } }
L_002AE0E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE0F4u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002AE0F4u) [[unlikely]] return; }
L_002AE0F4:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[4].d[0] = c.r[2].d[0] | 55050ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.f[1] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE174u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002AE174u) [[unlikely]] return; }
L_002AE174:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE180u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002AE180u) [[unlikely]] return; }
L_002AE180:
    c.f[2] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[20] = c.r[2].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[21] = ld32((c.r[18].w[0] + 116u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE1BCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002AE1BCu) [[unlikely]] return; }
L_002AE1BC:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[4].d[0] = c.r[2].d[0] | 55050ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.f[1] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[21] = ld32((c.r[16].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE23Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002AE23Cu) [[unlikely]] return; }
L_002AE23C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE248u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002AE248u) [[unlikely]] return; }
L_002AE248:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE04Cu | kUnwind; return; } goto L_002AE04C; } }
L_002AE26C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002AE270:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002AE2A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[4], c.r[4].w[0] - 20368u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE2D4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0039(c, 226u, depth + 1u); else { c.pc = 0x002E7BF0u; return; } if (c.pc != 0x002AE2D4u) [[unlikely]] return; }
L_002AE2D4:
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[24] = ld32((c.r[3].w[0] + 352u));  if (t) { goto L_002AE81C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBBA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AE81C; } }
L_002AE318:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.r[2].d[0] = ld8((c.r[2].w[0] - 15877u));
    c.f[23] = ld32((c.r[16].w[0] + 12u));
    c.f[21] = ld32((c.r[3].w[0] + 292u));
    c.f[20] = ld32((c.r[3].w[0] + 296u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[22] = c.f[12];  if (t) { goto L_002AE340; } }
    c.f[23] = c.f[23] ^ fp::kSign;
    c.budget -= 1;
L_002AE340:
    c.f[1] = c.f[12] & fp::kAbs;
    c.f[0] = c.f[23] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AE364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE35Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0075(c, 77u, depth + 1u); else { c.pc = 0x003D5530u; return; } if (c.pc != 0x002AE35Cu) [[unlikely]] return; }
L_002AE35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  if (t) { goto L_002AE374; } }
L_002AE364:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE370u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0075(c, 77u, depth + 1u); else { c.pc = 0x003D5530u; return; } if (c.pc != 0x002AE370u) [[unlikely]] return; }
L_002AE370:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002AE374:
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AE3A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AE3A8; } }
    set32(c.r[4], 0u + 34u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE39Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 54u, depth + 1u); else { c.pc = 0x003DCAB0u; return; } if (c.pc != 0x002AE39Cu) [[unlikely]] return; }
L_002AE39C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE3A8u); set32(c.r[4], c.r[17].w[0] + 244u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002AE3A8u) [[unlikely]] return; }
L_002AE3A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[24], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.f[23] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[22] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002AE608; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE434; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 252u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE878; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE8B8; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AE880; } }
L_002AE414:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AE418:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AE41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AE434; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + 244u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE434u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002AE434u) [[unlikely]] return; }
L_002AE434:
    c.f[1] = ld32((c.r[28].w[0] - 32388u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.r[7].d[0] = 0ull | 0ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[20], c.f[22]);
    c.f[4] = c.r[2].w[0];
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    set32(c.r[2], 0u + 2u);
    c.f[3] = c.r[5].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 36;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[1]);  if (t) { goto L_002AE604; } }
    c.f[5] = ld32((c.r[4].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[2].d[0] = c.r[2].d[0] | 52196ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[20], c.f[5]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[6] = c.r[3].w[0];
    c.f[6] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[6] = fp::cvt_w_s(c.f[6]);
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.f[6] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[6]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AE578; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[1]);
    c.budget -= 19;
L_002AE578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0160000u);
    c.r[2].d[0] = c.r[2].d[0] | 52196ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AE604; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 52196ull;
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = 0ull | 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[3] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 28;
L_002AE604:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AE608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[23] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AE730; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE67C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 252u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE8C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE900; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AE8C8; } }
L_002AE65C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AE660:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AE664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AE67C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + 244u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE67Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002AE67Cu) [[unlikely]] return; }
L_002AE67C:
    c.f[2] = ld32((c.r[28].w[0] - 32384u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.r[5].d[0] = 0ull | 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[23], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[23] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[21], c.f[23]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EC90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = 0u;
    set32(c.r[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 36;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AE908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEC90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AE72C; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_002AE72C:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002AE730:
    st32((c.r[17].w[0] + 124u), c.f[22]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 128u), c.f[23]);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[3].w[0] + 292u), c.f[21]);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[3].w[0] + 296u), c.f[20]);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AE7B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002AE7B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE7B8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 252u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE910; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE950; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AE918; } }
L_002AE7A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AE7A4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AE7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AE7B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE7B8u); set32(c.r[4], c.r[17].w[0] + 244u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002AE7B8u) [[unlikely]] return; }
L_002AE7B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE7CCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0089(c, 136u, depth + 1u); else { c.pc = 0x00426530u; return; } if (c.pc != 0x002AE7CCu) [[unlikely]] return; }
L_002AE7CC:
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[6], c.r[29].w[0] + 124u);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 80u), c.f[3]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE800u); set32(c.r[7], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0089(c, 131u, depth + 1u); else { c.pc = 0x00426440u; return; } if (c.pc != 0x002AE800u) [[unlikely]] return; }
L_002AE800:
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[3].w[0] + 284u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 288u), c.f[0]);  if (t) { goto L_002AE958; } }
L_002AE81C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE82Cu);  if (depth < kMaxDepth) unit_006F(c, 32u, depth + 1u); else { c.pc = 0x003BC720u; return; } if (c.pc != 0x002AE82Cu) [[unlikely]] return; }
L_002AE82C:
    c.f[24] = fp::ee::sub(c.fcr31, c.f[24], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AE870; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AE864; } }
    c.f[24] = c.f[0];
    c.budget -= 1;
L_002AE864:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 352u), c.f[24]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE318u | kUnwind; return; } goto L_002AE318; } }
L_002AE870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[24] = c.f[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE864u | kUnwind; return; } goto L_002AE864; } }
L_002AE878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE41Cu | kUnwind; return; } goto L_002AE41C; } }
L_002AE880:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 244u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE414u | kUnwind; return; } goto L_002AE414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE898u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002AE898u) [[unlikely]] return; }
L_002AE898:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE418u | kUnwind; return; } goto L_002AE418; } }
L_002AE8B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE41Cu | kUnwind; return; } goto L_002AE41C; } }
L_002AE8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE664u | kUnwind; return; } goto L_002AE664; } }
L_002AE8C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 244u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE65Cu | kUnwind; return; } goto L_002AE65C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE8E0u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002AE8E0u) [[unlikely]] return; }
L_002AE8E0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE660u | kUnwind; return; } goto L_002AE660; } }
L_002AE900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE664u | kUnwind; return; } goto L_002AE664; } }
L_002AE908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE72Cu | kUnwind; return; } goto L_002AE72C; } }
L_002AE910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE7A8u | kUnwind; return; } goto L_002AE7A8; } }
L_002AE918:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 244u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE7A0u | kUnwind; return; } goto L_002AE7A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE930u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002AE930u) [[unlikely]] return; }
L_002AE930:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE7A4u | kUnwind; return; } goto L_002AE7A4; } }
L_002AE950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE7A8u | kUnwind; return; } goto L_002AE7A8; } }
L_002AE958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002AE980:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[20] = ld32((c.r[29].w[0] + 140u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AF5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AE9C8u);  if (depth < kMaxDepth) unit_002B(c, 198u, depth + 1u); else { c.pc = 0x002AE2A0u; return; } if (c.pc != 0x002AE9C8u) [[unlikely]] return; }
L_002AE9C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 704u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AECDC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AECDC; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 42u));
    c.budget -= 1;
L_002AE9F4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AECE4; } }
L_002AEA08:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002AEA0C:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AED04; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AED04; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 32u));
    c.budget -= 1;
L_002AEA28:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 49;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEA40u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0089(c, 72u, depth + 1u); else { c.pc = 0x00425540u; return; } if (c.pc != 0x002AEA40u) [[unlikely]] return; }
L_002AEA40:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AED0C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002AEA58:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AED44; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AED44; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 42u));
    c.budget -= 1;
L_002AEA74:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 49;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AED4C; } }
L_002AEA88:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AEDA8; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AEDA8; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 32u));
    c.budget -= 1;
L_002AEAA8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 49;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AEDB0; } }
L_002AEABC:
    st32((c.r[17].w[0] + 260u), 0u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AEBCC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEAE0u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 183u, depth + 1u); else { c.pc = 0x004778B0u; return; } if (c.pc != 0x002AEAE0u) [[unlikely]] return; }
L_002AEAE0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF3EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF42C; } }
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AF3F4; } }
L_002AEB10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AEB14:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AEB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF434; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002AEB24:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AF444; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002AF444; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 32u));
    c.budget -= 1;
L_002AEB40:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 49;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEBCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEB5Cu); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0089(c, 73u, depth + 1u); else { c.pc = 0x00425550u; return; } if (c.pc != 0x002AEB5Cu) [[unlikely]] return; }
L_002AEB5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AEBCC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF44C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 232u)));
    c.budget -= 1;
L_002AEB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEBCC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 236u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF46C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF4AC; } }
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 228u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AF474; } }
L_002AEBAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AEBB0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AEBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AEBCC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + 228u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEBCCu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002AEBCCu) [[unlikely]] return; }
L_002AEBCC:
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.budget -= 1;
L_002AEBD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AEC0C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002AEC28; } }
L_002AEC0C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_002AEC28:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[5].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002AEC48; } }
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002AEC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC54u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x002AEC54u) [[unlikely]] return; }
L_002AEC54:
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEC68u); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008A(c, 148u, depth + 1u); else { c.pc = 0x0042A5B0u; return; } if (c.pc != 0x002AEC68u) [[unlikely]] return; }
L_002AEC68:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AF4B4; } }
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AF4F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.budget -= 5;
L_002AECA0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002AECA4:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF50C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002AF50C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_002AECC0:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AF514; } }
L_002AECD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002AF5B4; } }
L_002AECDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AE9F4u | kUnwind; return; } goto L_002AE9F4; } }
L_002AECE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECECu); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0089(c, 75u, depth + 1u); else { c.pc = 0x004255D0u; return; } if (c.pc != 0x002AECECu) [[unlikely]] return; }
L_002AECEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA08u | kUnwind; return; } goto L_002AEA08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AECFCu); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0089(c, 76u, depth + 1u); else { c.pc = 0x00425600u; return; } if (c.pc != 0x002AECFCu) [[unlikely]] return; }
L_002AECFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA0Cu | kUnwind; return; } goto L_002AEA0C; } }
L_002AED04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA28u | kUnwind; return; } goto L_002AEA28; } }
L_002AED0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + 212u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED1Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x002AED1Cu) [[unlikely]] return; }
L_002AED1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + 228u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED2Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x002AED2Cu) [[unlikely]] return; }
L_002AED2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + 244u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED3Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x002AED3Cu) [[unlikely]] return; }
L_002AED3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA58u | kUnwind; return; } goto L_002AEA58; } }
L_002AED44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA74u | kUnwind; return; } goto L_002AEA74; } }
L_002AED4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED54u); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0089(c, 73u, depth + 1u); else { c.pc = 0x00425550u; return; } if (c.pc != 0x002AED54u) [[unlikely]] return; }
L_002AED54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA88u | kUnwind; return; } goto L_002AEA88; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA88u | kUnwind; return; } goto L_002AEA88; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], 0u + 35u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AED84u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x002AED84u) [[unlikely]] return; }
L_002AED84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 260u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEA88u | kUnwind; return; } goto L_002AEA88; } }
L_002AEDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEAA8u | kUnwind; return; } goto L_002AEAA8; } }
L_002AEDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEDB8u); set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0089(c, 73u, depth + 1u); else { c.pc = 0x00425550u; return; } if (c.pc != 0x002AEDB8u) [[unlikely]] return; }
L_002AEDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEABCu | kUnwind; return; } goto L_002AEABC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002AEE60; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF1B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 1;
L_002AEDE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AEE60; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF1D8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF218; } }
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AF1E0; } }
L_002AEE1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AEE20:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AEE24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AEE60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20416u));
    c.f[0] = ld32((c.r[17].w[0] + 260u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002AEE60; } }
    set32(c.r[4], c.r[17].w[0] + 212u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE50u); st32((c.r[17].w[0] + 260u), 0u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002AEE50u) [[unlikely]] return; }
L_002AEE50:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + 212u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEE60u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002AEE60u) [[unlikely]] return; }
L_002AEE60:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    c.f[0] = ld32((c.r[2].w[0] + 336u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 340u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 344u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 348u));
    st32((c.r[29].w[0] + 172u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.f[5] = ld32((c.r[2].w[0] + 344u));
    c.f[4] = ld32((c.r[2].w[0] + 328u));
    c.f[3] = ld32((c.r[2].w[0] + 340u));
    c.f[2] = ld32((c.r[2].w[0] + 324u));
    c.f[1] = ld32((c.r[2].w[0] + 336u));
    c.f[0] = ld32((c.r[2].w[0] + 320u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[4]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEECCu); st32((c.r[29].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 134u, depth + 1u); else { c.pc = 0x002A5280u; return; } if (c.pc != 0x002AEECCu) [[unlikely]] return; }
L_002AEECC:
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[4] = ld32((c.r[29].w[0] + 180u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    c.f[6] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[4], ld32((c.r[5].w[0] + 484u)));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[5] = ld32((c.r[4].w[0] + 420u));
    set32(c.r[5], c.r[4].w[0] + 416u);
    c.f[7] = ld32((c.r[4].w[0] + 416u));
    c.f[3] = ld32((c.r[4].w[0] + 424u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[7]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 32;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);  if (t) { goto L_002AF3AC; } }
    set32(c.r[18], c.r[29].w[0] + 100u);
    set32(c.r[19], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st32((c.r[18].w[0]), c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    c.f[21] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002AF220; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 76u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AEF98u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002AEF98u) [[unlikely]] return; }
L_002AEF98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[3].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[1] = c.r[3].w[0];
    c.f[21] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
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
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF028u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002AF028u) [[unlikely]] return; }
L_002AF028:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF034u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002AF034u) [[unlikely]] return; }
L_002AF034:
    c.f[2] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF060u); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002AF060u) [[unlikely]] return; }
L_002AF060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[3].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[1] = c.r[3].w[0];
    c.f[21] = ld32((c.r[18].w[0]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
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
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF0F0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002AF0F0u) [[unlikely]] return; }
L_002AF0F0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF0FCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002AF0FCu) [[unlikely]] return; }
L_002AF0FC:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[19].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 8;
L_002AF11C:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[8], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_002AF170; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (t) { goto L_002AF1A0; } }
L_002AF140:
    set32(c.r[2], ld32((c.r[3].w[0] + 484u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] - 13328u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF168u); set32(c.r[5], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_0091(c, 121u, depth + 1u); else { c.pc = 0x00445A60u; return; } if (c.pc != 0x002AF168u) [[unlikely]] return; }
L_002AF168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AF19C; } }
L_002AF170:
    set32(c.r[2], ld32((c.r[3].w[0] + 484u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] - 13328u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF19Cu); set32(c.r[5], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_0091(c, 121u, depth + 1u); else { c.pc = 0x00445A60u; return; } if (c.pc != 0x002AF19Cu) [[unlikely]] return; }
L_002AF19C:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002AF1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1A8u);  if (depth < kMaxDepth) unit_0089(c, 61u, depth + 1u); else { c.pc = 0x00425250u; return; } if (c.pc != 0x002AF1A8u) [[unlikely]] return; }
L_002AF1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1B0u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x002AF1B0u) [[unlikely]] return; }
L_002AF1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[17].w[0] + 112u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEBD0u | kUnwind; return; } goto L_002AEBD0; } }
L_002AF1B8:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 54u, depth + 1u); else { c.pc = 0x003DCAB0u; return; } if (c.pc != 0x002AF1C4u) [[unlikely]] return; }
L_002AF1C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1D0u); set32(c.r[4], c.r[17].w[0] + 212u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002AF1D0u) [[unlikely]] return; }
L_002AF1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 216u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEDE4u | kUnwind; return; } goto L_002AEDE4; } }
L_002AF1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEE24u | kUnwind; return; } goto L_002AEE24; } }
L_002AF1E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEE1Cu | kUnwind; return; } goto L_002AEE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF1F8u); c.r[4].d[0] = ld8((c.r[18].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002AF1F8u) [[unlikely]] return; }
L_002AF1F8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEE20u | kUnwind; return; } goto L_002AEE20; } }
L_002AF218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEE24u | kUnwind; return; } goto L_002AEE24; } }
L_002AF220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF234u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002AF234u) [[unlikely]] return; }
L_002AF234:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[4].d[0] = c.r[2].d[0] | 55050ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.f[1] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF2B4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002AF2B4u) [[unlikely]] return; }
L_002AF2B4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF2C0u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002AF2C0u) [[unlikely]] return; }
L_002AF2C0:
    c.f[2] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[20] = c.r[2].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[21] = ld32((c.r[17].w[0] + 116u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF2FCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002AF2FCu) [[unlikely]] return; }
L_002AF2FC:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[4].d[0] = c.r[2].d[0] | 55050ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.f[1] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[21] = ld32((c.r[18].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF37Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002AF37Cu) [[unlikely]] return; }
L_002AF37C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF388u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002AF388u) [[unlikely]] return; }
L_002AF388:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[19].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF11Cu | kUnwind; return; } goto L_002AF11C; } }
L_002AF3AC:
    st32((c.r[29].w[0] + 112u), c.f[7]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + 19136u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF3E4u); set32(c.r[8], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_009D(c, 185u, depth + 1u); else { c.pc = 0x004778E0u; return; } if (c.pc != 0x002AF3E4u) [[unlikely]] return; }
L_002AF3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF19Cu | kUnwind; return; } goto L_002AF19C; } }
L_002AF3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEB18u | kUnwind; return; } goto L_002AEB18; } }
L_002AF3F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEB10u | kUnwind; return; } goto L_002AEB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF40Cu); c.r[4].d[0] = ld8((c.r[18].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002AF40Cu) [[unlikely]] return; }
L_002AF40C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEB14u | kUnwind; return; } goto L_002AEB14; } }
L_002AF42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEB18u | kUnwind; return; } goto L_002AEB18; } }
L_002AF434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF43Cu); set32(c.r[4], c.r[17].w[0] + 212u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002AF43Cu) [[unlikely]] return; }
L_002AF43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEB24u | kUnwind; return; } goto L_002AEB24; } }
L_002AF444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEB40u | kUnwind; return; } goto L_002AEB40; } }
L_002AF44C:
    set32(c.r[4], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF458u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 54u, depth + 1u); else { c.pc = 0x003DCAB0u; return; } if (c.pc != 0x002AF458u) [[unlikely]] return; }
L_002AF458:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF464u); set32(c.r[4], c.r[17].w[0] + 228u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x002AF464u) [[unlikely]] return; }
L_002AF464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 232u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEB74u | kUnwind; return; } goto L_002AEB74; } }
L_002AF46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEBB4u | kUnwind; return; } goto L_002AEBB4; } }
L_002AF474:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 228u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEBACu | kUnwind; return; } goto L_002AEBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF48Cu); c.r[4].d[0] = ld8((c.r[18].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002AF48Cu) [[unlikely]] return; }
L_002AF48C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEBB0u | kUnwind; return; } goto L_002AEBB0; } }
L_002AF4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AEBB4u | kUnwind; return; } goto L_002AEBB4; } }
L_002AF4B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[3] = ld32((c.r[3].w[0] - 20412u));
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.f[4] = c.r[4].w[0];
    c.f[1] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[4].d[0] | 52429ull;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 112u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AECA0u | kUnwind; return; } goto L_002AECA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AECA0u | kUnwind; return; } goto L_002AECA0; } }
L_002AF4F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF504u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x002AF504u) [[unlikely]] return; }
L_002AF504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AECA4u | kUnwind; return; } goto L_002AECA4; } }
L_002AF50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AECC0u | kUnwind; return; } goto L_002AECC0; } }
L_002AF514:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 260u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF52Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF52Cu) [[unlikely]] return; }
L_002AF52C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002AF594; } }
L_002AF554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF55Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002AF55Cu) [[unlikely]] return; }
L_002AF55C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AF5B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002AF5B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF58Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002AF58Cu) [[unlikely]] return; }
L_002AF58C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AECD4u | kUnwind; return; } goto L_002AECD4; } }
L_002AF594:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF554u | kUnwind; return; } goto L_002AF554; } }
L_002AF5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002AF5B4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002AF5E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 76u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002AF740; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_002AF608:
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 64u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AF760; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 1;
L_002AF61C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002AF634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF62Cu); set32(c.r[5], ld32((c.r[18].w[0] + 28u)));  if (depth < kMaxDepth) unit_009B(c, 198u, depth + 1u); else { c.pc = 0x0046E240u; return; } if (c.pc != 0x002AF62Cu) [[unlikely]] return; }
L_002AF62C:
    st32((c.r[18].w[0] + 92u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    c.budget -= 2;
L_002AF634:
    set32(c.r[9], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[9].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF774; } }
    c.r[2].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[9].w[0] + 544u);  if (t) { goto L_002AF668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF668u); set32(c.r[5], ld32((c.r[18].w[0] + 72u)));  if (depth < kMaxDepth) unit_0022(c, 288u, depth + 1u); else { c.pc = 0x0028AD10u; return; } if (c.pc != 0x002AF668u) [[unlikely]] return; }
L_002AF668:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 76u));
    c.budget -= 1;
L_002AF66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AF7E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 1;
L_002AF678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF6C8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF840; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF880; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AF848; } }
L_002AF6B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AF6B4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AF6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF6C8u); set32(c.r[4], c.r[18].w[0] + 212u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002AF6C8u) [[unlikely]] return; }
L_002AF6C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF71C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 252u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF888; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF8C8; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 244u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002AF890; } }
L_002AF704:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002AF708:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002AF70C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AF71C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF71Cu); set32(c.r[4], c.r[18].w[0] + 244u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002AF71Cu) [[unlikely]] return; }
L_002AF71C:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF728u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 102u, depth + 1u); else { c.pc = 0x00425EC0u; return; } if (c.pc != 0x002AF728u) [[unlikely]] return; }
L_002AF728:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF738u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF738u) [[unlikely]] return; }
L_002AF738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002AF8D0; } }
L_002AF740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF74Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x002AF74Cu) [[unlikely]] return; }
L_002AF74C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF758u);  if (depth < kMaxDepth) unit_008A(c, 148u, depth + 1u); else { c.pc = 0x0042A5B0u; return; } if (c.pc != 0x002AF758u) [[unlikely]] return; }
L_002AF758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 72u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF608u | kUnwind; return; } goto L_002AF608; } }
L_002AF760:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF76Cu); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 183u, depth + 1u); else { c.pc = 0x004778B0u; return; } if (c.pc != 0x002AF76Cu) [[unlikely]] return; }
L_002AF76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF61Cu | kUnwind; return; } goto L_002AF61C; } }
L_002AF774:
    c.r[8].d[0] = ld16((c.r[9].w[0] + 544u));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
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
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF7D0u) [[unlikely]] return; }
L_002AF7D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7E0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 369u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x002AF7E0u) [[unlikely]] return; }
L_002AF7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 76u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF66Cu | kUnwind; return; } goto L_002AF66C; } }
L_002AF7E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF7F4u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 73u, depth + 1u); else { c.pc = 0x003BD410u; return; } if (c.pc != 0x002AF7F4u) [[unlikely]] return; }
L_002AF7F4:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    set32(c.r[5], ld32((c.r[4].w[0] + 212u)));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF820u); set32(c.r[4], ld32((c.r[18].w[0] + 72u)));  if (depth < kMaxDepth) unit_0089(c, 60u, depth + 1u); else { c.pc = 0x00425220u; return; } if (c.pc != 0x002AF820u) [[unlikely]] return; }
L_002AF820:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF838u); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 119u, depth + 1u); else { c.pc = 0x0031D460u; return; } if (c.pc != 0x002AF838u) [[unlikely]] return; }
L_002AF838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 216u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF678u | kUnwind; return; } goto L_002AF678; } }
L_002AF840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF6B8u | kUnwind; return; } goto L_002AF6B8; } }
L_002AF848:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[18].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF6B0u | kUnwind; return; } goto L_002AF6B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF860u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002AF860u) [[unlikely]] return; }
L_002AF860:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF6B4u | kUnwind; return; } goto L_002AF6B4; } }
L_002AF880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF6B8u | kUnwind; return; } goto L_002AF6B8; } }
L_002AF888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF70Cu | kUnwind; return; } goto L_002AF70C; } }
L_002AF890:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[18].w[0] + 244u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF704u | kUnwind; return; } goto L_002AF704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF8A8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002AF8A8u) [[unlikely]] return; }
L_002AF8A8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF708u | kUnwind; return; } goto L_002AF708; } }
L_002AF8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF70Cu | kUnwind; return; } goto L_002AF70C; } }
L_002AF8D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AF8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 40u)));
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 46u));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 41u)));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 48u));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 42u)));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 50u));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 43u)));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 52u));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 44u)));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 54u));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 45u)));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 56u));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 37;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF984u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AF984u) [[unlikely]] return; }
L_002AF984:
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 76u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AF9F0; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 80u), 0u);
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 100u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002AF9FC; } }
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 1;
L_002AF9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF9CCu); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0089(c, 60u, depth + 1u); else { c.pc = 0x00425220u; return; } if (c.pc != 0x002AF9CCu) [[unlikely]] return; }
L_002AF9CC:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AF9ECu); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 122u, depth + 1u); else { c.pc = 0x0031D4B0u; return; } if (c.pc != 0x002AF9ECu) [[unlikely]] return; }
L_002AF9EC:
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 1;
L_002AF9F0:
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), 0u);  if (t) { goto L_002AFA2C; } }
L_002AF9FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA08u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002AFA08u) [[unlikely]] return; }
L_002AFA08:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002AFA18; } }
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_002AFA18:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFA24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 210u, depth + 1u); else { c.pc = 0x0046E4A0u; return; } if (c.pc != 0x002AFA24u) [[unlikely]] return; }
L_002AFA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF9C4u | kUnwind; return; } goto L_002AF9C4; } }
L_002AFA2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AFA40:
    st32((c.r[4].w[0] + 260u), 0u);
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), 0u);  c.pc = t; return; }
L_002AFA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AFB8C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AFAC4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002AFA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AFC00; } }
L_002AFA90:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AFC08; } }
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AFD98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 72u)));  if (t) { goto L_002AFC0C; } }
L_002AFAC4:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 185u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 552u)));
    set32(c.r[4], c.r[5].w[0] + 544u);
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AFB14; } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002AFB14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFAFCu); set32(c.r[5], ld32((c.r[17].w[0] + 72u)));  if (depth < kMaxDepth) unit_0022(c, 285u, depth + 1u); else { c.pc = 0x0028ACB0u; return; } if (c.pc != 0x002AFAFCu) [[unlikely]] return; }
L_002AFAFC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 76u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AFC20; } }
L_002AFB08:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002AFC00; } }
L_002AFB14:
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], 0u + 185u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002AFD98; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002AFCEC; } }
L_002AFB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002AFB54u) [[unlikely]] return; }
L_002AFB54:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AFD98; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002AFD98; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFB84u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002AFB84u) [[unlikely]] return; }
L_002AFB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002AFC00; } }
L_002AFB8C:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 187u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002AFD8C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 76u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFBBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBB4u);  if (depth < kMaxDepth) unit_002B(c, 225u, depth + 1u); else { c.pc = 0x002AE980u; return; } if (c.pc != 0x002AFBB4u) [[unlikely]] return; }
L_002AFBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  if (t) { goto L_002AFBC8; } }
L_002AFBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBC4u);  if (depth < kMaxDepth) unit_002B(c, 171u, depth + 1u); else { c.pc = 0x002ADB90u; return; } if (c.pc != 0x002AFBC4u) [[unlikely]] return; }
L_002AFBC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002AFBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBD0u);  if (depth < kMaxDepth) unit_0089(c, 74u, depth + 1u); else { c.pc = 0x00425580u; return; } if (c.pc != 0x002AFBD0u) [[unlikely]] return; }
L_002AFBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002AFD08; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002AFD98; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFBF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002AFBF8u) [[unlikely]] return; }
L_002AFBF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002AFD08; } }
L_002AFC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002AFD9C; } }
L_002AFC08:
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_002AFC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC14u);  if (depth < kMaxDepth) unit_0022(c, 291u, depth + 1u); else { c.pc = 0x0028AD70u; return; } if (c.pc != 0x002AFC14u) [[unlikely]] return; }
L_002AFC14:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFC00u | kUnwind; return; } goto L_002AFC00; } }
L_002AFC20:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC34u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 89u, depth + 1u); else { c.pc = 0x003BD700u; return; } if (c.pc != 0x002AFC34u) [[unlikely]] return; }
L_002AFC34:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[17].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 145u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[3].w[0] + 336u));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 340u));
    st32((c.r[17].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 344u));
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 348u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFC70u); st32((c.r[17].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 88u, depth + 1u); else { c.pc = 0x003D5A30u; return; } if (c.pc != 0x002AFC70u) [[unlikely]] return; }
L_002AFC70:
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[4].d[0] = c.r[4].d[0] | 39322ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 196u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = ld32((c.r[17].w[0] + 196u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[17].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 208u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002AFCE4; } }
L_002AFCBC:
    st32((c.r[17].w[0] + 204u), 0u);
    set32(c.r[3], 0u - 5u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[6], ld32((c.r[5].w[0] + 212u)));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFB08u | kUnwind; return; } goto L_002AFB08; } }
L_002AFCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 208u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFCBCu | kUnwind; return; } goto L_002AFCBC; } }
L_002AFCEC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFB4Cu | kUnwind; return; } goto L_002AFB4C; } }
L_002AFD08:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_002AFD70; } }
L_002AFD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x002AFD38u) [[unlikely]] return; }
L_002AFD38:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002AFD98; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002AFD98; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1372u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFD68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x002AFD68u) [[unlikely]] return; }
L_002AFD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFC00u | kUnwind; return; } goto L_002AFC00; } }
L_002AFD70:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 529u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 529u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFD30u | kUnwind; return; } goto L_002AFD30; } }
L_002AFD8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFC00u | kUnwind; return; } goto L_002AFC00; } }
L_002AFD98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002AFD9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002AFDB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[10].d[0] = c.r[2].d[0] | 55050ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 2u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[17], 0u - 3u);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[16], c.r[16].w[0] - 27952u);
    set32(c.r[25], 0u + 65u);
    set32(c.r[15], 0u - 5u);
    set32(c.r[24], c.r[3].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] - 16688u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[13], c.r[13].w[0] - 26512u);
    set32(c.r[12], c.r[12].w[0] - 25136u);
    c.r[19].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[19].d[0] = c.r[19].d[0] | c.r[7].d[0];
    c.r[9].d[0] = c.r[2].d[0] | 26214ull;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[11], c.r[11].w[0] - 24804u);
    c.r[19].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[19].d[0] & c.r[17].d[0];
    c.r[17].d[0] = c.r[17].d[0] | c.r[18].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[4].w[0]), c.r[16].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[25].d[0] = c.r[25].d[0] & c.r[6].d[0];
    c.r[7].d[0] = c.r[25].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[15].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[14].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 64u), c.r[13].w[0]);
    st32((c.r[4].w[0]), c.r[12].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 184u), c.r[10].w[0]);
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 145u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 192u), 0u);
    st32((c.r[4].w[0] + 196u), 0u);
    st32((c.r[4].w[0] + 200u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 204u), 0u);
    st32((c.r[4].w[0] + 208u), 0u);
    st32((c.r[4].w[0] + 212u), 0u);
    st32((c.r[4].w[0] + 216u), 0u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 220u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 220u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 224u), 0u);
    st32((c.r[4].w[0] + 228u), 0u);
    st32((c.r[4].w[0] + 232u), 0u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 236u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 236u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 240u), 0u);
    st32((c.r[4].w[0] + 244u), 0u);
    st32((c.r[4].w[0] + 248u), 0u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 252u));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 252u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 256u), 0u);
    st32((c.r[4].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 260u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 118;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002AFF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 72u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002AFFB0; } }
L_002AFFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002AFFC0; } }
L_002AFFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002AFFB8u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00AB(c, 232u, depth + 1u); else { c.pc = 0x004AE110u; return; } if (c.pc != 0x002AFFB8u) [[unlikely]] return; }
L_002AFFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFFA8u | kUnwind; return; } goto L_002AFFA8; } }
L_002AFFC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002AFFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 211u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    st8((c.r[5].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 681u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_002C(c, 2u, depth); } }
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 1;
L_002AFFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_002C(c, 6u, depth); } }
    [[clang::musttail]] return unit_002C(c, 2u, depth);
}

}

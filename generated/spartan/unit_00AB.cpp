#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AB[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    8, 0, 0, 9, 0, 10, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209,
    0, 0, 0, 0, 210, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 224, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 321, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0,
    0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0,
};

void unit_00AB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004AC000;
    case 2u: goto L_004AC004;
    case 3u: goto L_004AC048;
    case 4u: goto L_004AC068;
    case 5u: goto L_004AC088;
    case 6u: goto L_004AC0BC;
    case 7u: goto L_004AC0F8;
    case 8u: goto L_004AC100;
    case 9u: goto L_004AC10C;
    case 10u: goto L_004AC114;
    case 11u: goto L_004AC118;
    case 12u: goto L_004AC130;
    case 13u: goto L_004AC174;
    case 14u: goto L_004AC190;
    case 15u: goto L_004AC1D0;
    case 16u: goto L_004AC200;
    case 17u: goto L_004AC20C;
    case 18u: goto L_004AC260;
    case 19u: goto L_004AC2E4;
    case 20u: goto L_004AC2F8;
    case 21u: goto L_004AC308;
    case 22u: goto L_004AC320;
    case 23u: goto L_004AC350;
    case 24u: goto L_004AC364;
    case 25u: goto L_004AC380;
    case 26u: goto L_004AC458;
    case 27u: goto L_004AC464;
    case 28u: goto L_004AC4B4;
    case 29u: goto L_004AC4DC;
    case 30u: goto L_004AC500;
    case 31u: goto L_004AC564;
    case 32u: goto L_004AC57C;
    case 33u: goto L_004AC58C;
    case 34u: goto L_004AC5A4;
    case 35u: goto L_004AC5C0;
    case 36u: goto L_004AC6A0;
    case 37u: goto L_004AC6B0;
    case 38u: goto L_004AC6C0;
    case 39u: goto L_004AC6D0;
    case 40u: goto L_004AC6E0;
    case 41u: goto L_004AC6F0;
    case 42u: goto L_004AC700;
    case 43u: goto L_004AC710;
    case 44u: goto L_004AC730;
    case 45u: goto L_004AC740;
    case 46u: goto L_004AC750;
    case 47u: goto L_004AC760;
    case 48u: goto L_004AC770;
    case 49u: goto L_004AC780;
    case 50u: goto L_004AC790;
    case 51u: goto L_004AC7A0;
    case 52u: goto L_004AC7B8;
    case 53u: goto L_004AC7C8;
    case 54u: goto L_004AC7E0;
    case 55u: goto L_004AC7F0;
    case 56u: goto L_004AC810;
    case 57u: goto L_004AC824;
    case 58u: goto L_004AC850;
    case 59u: goto L_004AC860;
    case 60u: goto L_004AC884;
    case 61u: goto L_004AC894;
    case 62u: goto L_004AC8BC;
    case 63u: goto L_004AC8E0;
    case 64u: goto L_004AC974;
    case 65u: goto L_004AC98C;
    case 66u: goto L_004AC9B0;
    case 67u: goto L_004AC9C4;
    case 68u: goto L_004AC9E0;
    case 69u: goto L_004ACA00;
    case 70u: goto L_004ACA28;
    case 71u: goto L_004ACA30;
    case 72u: goto L_004ACA38;
    case 73u: goto L_004ACA60;
    case 74u: goto L_004ACA70;
    case 75u: goto L_004ACA98;
    case 76u: goto L_004ACB30;
    case 77u: goto L_004ACB38;
    case 78u: goto L_004ACB50;
    case 79u: goto L_004ACB6C;
    case 80u: goto L_004ACB98;
    case 81u: goto L_004ACBBC;
    case 82u: goto L_004ACBD4;
    case 83u: goto L_004ACBDC;
    case 84u: goto L_004ACBE4;
    case 85u: goto L_004ACBF4;
    case 86u: goto L_004ACC10;
    case 87u: goto L_004ACC40;
    case 88u: goto L_004ACC6C;
    case 89u: goto L_004ACC74;
    case 90u: goto L_004ACC90;
    case 91u: goto L_004ACCE8;
    case 92u: goto L_004ACCF0;
    case 93u: goto L_004ACD18;
    case 94u: goto L_004ACD20;
    case 95u: goto L_004ACD2C;
    case 96u: goto L_004ACD34;
    case 97u: goto L_004ACD44;
    case 98u: goto L_004ACD58;
    case 99u: goto L_004ACD64;
    case 100u: goto L_004ACD80;
    case 101u: goto L_004ACDA4;
    case 102u: goto L_004ACDD0;
    case 103u: goto L_004ACDE0;
    case 104u: goto L_004ACDF0;
    case 105u: goto L_004ACE00;
    case 106u: goto L_004ACE10;
    case 107u: goto L_004ACE54;
    case 108u: goto L_004ACE74;
    case 109u: goto L_004ACE84;
    case 110u: goto L_004ACE94;
    case 111u: goto L_004ACEC0;
    case 112u: goto L_004ACEC4;
    case 113u: goto L_004ACEDC;
    case 114u: goto L_004ACEFC;
    case 115u: goto L_004ACF18;
    case 116u: goto L_004ACF7C;
    case 117u: goto L_004ACFF0;
    case 118u: goto L_004AD00C;
    case 119u: goto L_004AD01C;
    case 120u: goto L_004AD04C;
    case 121u: goto L_004AD064;
    case 122u: goto L_004AD084;
    case 123u: goto L_004AD094;
    case 124u: goto L_004AD0D0;
    case 125u: goto L_004AD134;
    case 126u: goto L_004AD14C;
    case 127u: goto L_004AD154;
    case 128u: goto L_004AD15C;
    case 129u: goto L_004AD16C;
    case 130u: goto L_004AD188;
    case 131u: goto L_004AD1C0;
    case 132u: goto L_004AD248;
    case 133u: goto L_004AD260;
    case 134u: goto L_004AD2A0;
    case 135u: goto L_004AD2E8;
    case 136u: goto L_004AD300;
    case 137u: goto L_004AD310;
    case 138u: goto L_004AD34C;
    case 139u: goto L_004AD388;
    case 140u: goto L_004AD3A8;
    case 141u: goto L_004AD3DC;
    case 142u: goto L_004AD42C;
    case 143u: goto L_004AD440;
    case 144u: goto L_004AD454;
    case 145u: goto L_004AD480;
    case 146u: goto L_004AD4A0;
    case 147u: goto L_004AD4E0;
    case 148u: goto L_004AD544;
    case 149u: goto L_004AD558;
    case 150u: goto L_004AD564;
    case 151u: goto L_004AD574;
    case 152u: goto L_004AD5A0;
    case 153u: goto L_004AD620;
    case 154u: goto L_004AD670;
    case 155u: goto L_004AD678;
    case 156u: goto L_004AD6E8;
    case 157u: goto L_004AD704;
    case 158u: goto L_004AD714;
    case 159u: goto L_004AD758;
    case 160u: goto L_004AD774;
    case 161u: goto L_004AD784;
    case 162u: goto L_004AD7C8;
    case 163u: goto L_004AD7E0;
    case 164u: goto L_004AD7F0;
    case 165u: goto L_004AD804;
    case 166u: goto L_004AD840;
    case 167u: goto L_004AD854;
    case 168u: goto L_004AD890;
    case 169u: goto L_004AD8A4;
    case 170u: goto L_004AD8E0;
    case 171u: goto L_004AD91C;
    case 172u: goto L_004AD924;
    case 173u: goto L_004AD934;
    case 174u: goto L_004AD94C;
    case 175u: goto L_004AD980;
    case 176u: goto L_004AD9A4;
    case 177u: goto L_004AD9BC;
    case 178u: goto L_004AD9E0;
    case 179u: goto L_004AD9F0;
    case 180u: goto L_004ADA00;
    case 181u: goto L_004ADA30;
    case 182u: goto L_004ADA48;
    case 183u: goto L_004ADA58;
    case 184u: goto L_004ADA70;
    case 185u: goto L_004ADA80;
    case 186u: goto L_004ADA90;
    case 187u: goto L_004ADAA0;
    case 188u: goto L_004ADAC8;
    case 189u: goto L_004ADAE4;
    case 190u: goto L_004ADAF4;
    case 191u: goto L_004ADB34;
    case 192u: goto L_004ADB50;
    case 193u: goto L_004ADB90;
    case 194u: goto L_004ADBC0;
    case 195u: goto L_004ADBF4;
    case 196u: goto L_004ADCA0;
    case 197u: goto L_004ADCB0;
    case 198u: goto L_004ADCF4;
    case 199u: goto L_004ADD24;
    case 200u: goto L_004ADD44;
    case 201u: goto L_004ADD54;
    case 202u: goto L_004ADD64;
    case 203u: goto L_004ADD84;
    case 204u: goto L_004ADD90;
    case 205u: goto L_004ADDA0;
    case 206u: goto L_004ADDD0;
    case 207u: goto L_004ADDE0;
    case 208u: goto L_004ADDEC;
    case 209u: goto L_004ADDFC;
    case 210u: goto L_004ADE10;
    case 211u: goto L_004ADE14;
    case 212u: goto L_004ADE1C;
    case 213u: goto L_004ADE40;
    case 214u: goto L_004ADE4C;
    case 215u: goto L_004ADE64;
    case 216u: goto L_004ADEB0;
    case 217u: goto L_004ADEC4;
    case 218u: goto L_004ADEDC;
    case 219u: goto L_004ADF34;
    case 220u: goto L_004ADF60;
    case 221u: goto L_004ADF8C;
    case 222u: goto L_004ADFEC;
    case 223u: goto L_004AE004;
    case 224u: goto L_004AE014;
    case 225u: goto L_004AE018;
    case 226u: goto L_004AE024;
    case 227u: goto L_004AE050;
    case 228u: goto L_004AE088;
    case 229u: goto L_004AE098;
    case 230u: goto L_004AE0B4;
    case 231u: goto L_004AE0D8;
    case 232u: goto L_004AE110;
    case 233u: goto L_004AE140;
    case 234u: goto L_004AE154;
    case 235u: goto L_004AE180;
    case 236u: goto L_004AE198;
    case 237u: goto L_004AE334;
    case 238u: goto L_004AE3E0;
    case 239u: goto L_004AE42C;
    case 240u: goto L_004AE430;
    case 241u: goto L_004AE4A4;
    case 242u: goto L_004AE5C8;
    case 243u: goto L_004AE6F0;
    case 244u: goto L_004AE800;
    case 245u: goto L_004AE8D0;
    case 246u: goto L_004AE928;
    case 247u: goto L_004AE984;
    case 248u: goto L_004AE990;
    case 249u: goto L_004AEA50;
    case 250u: goto L_004AEA60;
    case 251u: goto L_004AEA70;
    case 252u: goto L_004AEA80;
    case 253u: goto L_004AEA90;
    case 254u: goto L_004AEADC;
    case 255u: goto L_004AEAF8;
    case 256u: goto L_004AEB24;
    case 257u: goto L_004AEB34;
    case 258u: goto L_004AEB44;
    case 259u: goto L_004AEB50;
    case 260u: goto L_004AEB68;
    case 261u: goto L_004AEB84;
    case 262u: goto L_004AEBA0;
    case 263u: goto L_004AEBB0;
    case 264u: goto L_004AEC10;
    case 265u: goto L_004AEC18;
    case 266u: goto L_004AEC38;
    case 267u: goto L_004AEC48;
    case 268u: goto L_004AEC50;
    case 269u: goto L_004AEC5C;
    case 270u: goto L_004AEC6C;
    case 271u: goto L_004AECC4;
    case 272u: goto L_004AECFC;
    case 273u: goto L_004AED10;
    case 274u: goto L_004AED1C;
    case 275u: goto L_004AED28;
    case 276u: goto L_004AEDA0;
    case 277u: goto L_004AEDE0;
    case 278u: goto L_004AEE3C;
    case 279u: goto L_004AEE4C;
    case 280u: goto L_004AEE70;
    case 281u: goto L_004AEF20;
    case 282u: goto L_004AEF34;
    case 283u: goto L_004AEF54;
    case 284u: goto L_004AEF70;
    case 285u: goto L_004AEF80;
    case 286u: goto L_004AEFB0;
    case 287u: goto L_004AF004;
    case 288u: goto L_004AF020;
    case 289u: goto L_004AF090;
    case 290u: goto L_004AF0A0;
    case 291u: goto L_004AF0B0;
    case 292u: goto L_004AF0E0;
    case 293u: goto L_004AF128;
    case 294u: goto L_004AF130;
    case 295u: goto L_004AF13C;
    case 296u: goto L_004AF144;
    case 297u: goto L_004AF168;
    case 298u: goto L_004AF178;
    case 299u: goto L_004AF190;
    case 300u: goto L_004AF1A0;
    case 301u: goto L_004AF1AC;
    case 302u: goto L_004AF1BC;
    case 303u: goto L_004AF1CC;
    case 304u: goto L_004AF1E8;
    case 305u: goto L_004AF1F8;
    case 306u: goto L_004AF210;
    case 307u: goto L_004AF2A0;
    case 308u: goto L_004AF2C8;
    case 309u: goto L_004AF300;
    case 310u: goto L_004AF318;
    case 311u: goto L_004AF334;
    case 312u: goto L_004AF3C0;
    case 313u: goto L_004AF3D0;
    case 314u: goto L_004AF3E4;
    case 315u: goto L_004AF3F0;
    case 316u: goto L_004AF42C;
    case 317u: goto L_004AF43C;
    case 318u: goto L_004AF450;
    case 319u: goto L_004AF458;
    case 320u: goto L_004AF460;
    case 321u: goto L_004AF46C;
    case 322u: goto L_004AF474;
    case 323u: goto L_004AF498;
    case 324u: goto L_004AF4A8;
    case 325u: goto L_004AF4C0;
    case 326u: goto L_004AF4D0;
    case 327u: goto L_004AF4DC;
    case 328u: goto L_004AF4F4;
    case 329u: goto L_004AF504;
    case 330u: goto L_004AF5E4;
    case 331u: goto L_004AF610;
    case 332u: goto L_004AF620;
    case 333u: goto L_004AF638;
    case 334u: goto L_004AF650;
    case 335u: goto L_004AF660;
    case 336u: goto L_004AF674;
    case 337u: goto L_004AF698;
    case 338u: goto L_004AF6A8;
    case 339u: goto L_004AF6C0;
    case 340u: goto L_004AF6D0;
    case 341u: goto L_004AF6DC;
    case 342u: goto L_004AF6F4;
    case 343u: goto L_004AF704;
    case 344u: goto L_004AF720;
    case 345u: goto L_004AF734;
    case 346u: goto L_004AF758;
    case 347u: goto L_004AF768;
    case 348u: goto L_004AF780;
    case 349u: goto L_004AF790;
    case 350u: goto L_004AF79C;
    case 351u: goto L_004AF7B4;
    case 352u: goto L_004AF7C4;
    case 353u: goto L_004AF7D4;
    case 354u: goto L_004AF7F0;
    case 355u: goto L_004AF864;
    case 356u: goto L_004AF8D0;
    case 357u: goto L_004AF8EC;
    case 358u: goto L_004AF918;
    case 359u: goto L_004AF934;
    case 360u: goto L_004AFA04;
    case 361u: goto L_004AFA2C;
    case 362u: goto L_004AFA34;
    case 363u: goto L_004AFAA0;
    case 364u: goto L_004AFAC4;
    case 365u: goto L_004AFAE4;
    case 366u: goto L_004AFB00;
    case 367u: goto L_004AFB18;
    case 368u: goto L_004AFB30;
    case 369u: goto L_004AFB48;
    case 370u: goto L_004AFB60;
    case 371u: goto L_004AFB70;
    case 372u: goto L_004AFB88;
    case 373u: goto L_004AFB90;
    case 374u: goto L_004AFBA4;
    case 375u: goto L_004AFBAC;
    case 376u: goto L_004AFBD0;
    case 377u: goto L_004AFBE0;
    case 378u: goto L_004AFBF8;
    case 379u: goto L_004AFC08;
    case 380u: goto L_004AFD40;
    case 381u: goto L_004AFD5C;
    case 382u: goto L_004AFD74;
    case 383u: goto L_004AFD84;
    case 384u: goto L_004AFDA0;
    case 385u: goto L_004AFDD0;
    case 386u: goto L_004AFE20;
    case 387u: goto L_004AFE6C;
    case 388u: goto L_004AFEB0;
    case 389u: goto L_004AFED0;
    case 390u: goto L_004AFF7C;
    case 391u: goto L_004AFF90;
    case 392u: goto L_004AFFB0;
    case 393u: goto L_004AFFC4;
    case 394u: goto L_004AFFD4;
    case 395u: goto L_004AFFE4;
    default: bad_entry(c, 0x004AC000u); return;
    }
L_004AC000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004AC004:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 217u));
    set32(c.r[2], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AC050; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABFCCu | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 504u, depth); } }
    st64((c.r[29].w[0]), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[11].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 217u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 192u);
    set32(c.r[8], 0u + 10u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC048u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x004AC048u) [[unlikely]] return; }
L_004AC048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABFD0u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 505u, depth); } }
L_004AC050:
    set32(c.r[3], ld32((c.r[28].w[0] - 28304u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004AC0C4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AC078; } }
L_004AC068:
    set32(c.r[2], ld32((c.r[28].w[0] - 28304u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28304u), c.r[2].w[0]);  if (t) { goto L_004AC0C4; } }
L_004AC078:
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004AC088u) [[unlikely]] return; }
L_004AC088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC068u | kUnwind; return; } goto L_004AC068; } }
    st64((c.r[29].w[0]), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[11].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 217u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 192u);
    set32(c.r[8], 0u + 10u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC0BCu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x004AC0BCu) [[unlikely]] return; }
L_004AC0BC:
    st32((c.r[28].w[0] - 28304u), 0u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_004AC0C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABFCCu | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 504u, depth); } }
    st64((c.r[29].w[0]), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[11].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 192u);
    set32(c.r[7], 0u + 14u);
    set32(c.r[8], 0u + 10u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC0F8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x004AC0F8u) [[unlikely]] return; }
L_004AC0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABFCCu | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 504u, depth); } }
L_004AC100:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31084u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC10Cu); st8((c.r[17].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004AC10Cu) [[unlikely]] return; }
L_004AC10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABFFCu | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 507u, depth); } }
L_004AC114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004AC118:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004AC130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 10336u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC174u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004AC174u) [[unlikely]] return; }
L_004AC174:
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 216u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AC1D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC190u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004AC190u) [[unlikely]] return; }
L_004AC190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AC1BC; } }
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 9;
L_004AC1BC:
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[5], 0u + 59u);
    set32(c.r[4], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC1D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 148u, depth + 1u); else { c.pc = 0x00416AD0u; return; } if (c.pc != 0x004AC1D0u) [[unlikely]] return; }
L_004AC1D0:
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[16].w[0] + 144u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0] + 128u) & ~15u, c.vu0.vf[3]);
    st128((c.r[16].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    st128((c.r[16].w[0] + 112u) & ~15u, c.vu0.vf[2]);
    c.f[20] = ld32((c.r[16].w[0] + 208u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC200u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004AC200u) [[unlikely]] return; }
L_004AC200:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC20Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004AC20Cu) [[unlikely]] return; }
L_004AC20C:
    st32((c.r[16].w[0] + 96u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[3], c.r[16].w[0] + 96u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 136u), c.f[20]);
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.f[3] = 0u;
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    c.budget -= 21;
L_004AC260:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[16].w[0] + 192u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 196u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 200u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC260u | kUnwind; return; } goto L_004AC260; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AC2C4; } }
    set32(c.r[8], c.r[16].w[0] + 84u);
    c.budget -= 1;
L_004AC2C4:
    set32(c.r[5], ld32((c.r[16].w[0] + 228u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[4], c.r[4].w[0] + 23936u);
    set32(c.r[9], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC2E4u); set32(c.r[10], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004AC2E4u) [[unlikely]] return; }
L_004AC2E4:
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 216u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AC310; } }
L_004AC2F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004AC358; } }
    st32((c.r[16].w[0] + 292u), 0u);
    c.budget -= 1;
L_004AC308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004AC36C; } }
L_004AC310:
    set32(c.r[5], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC320u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004AC320u) [[unlikely]] return; }
L_004AC320:
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AC330; } }
    set32(c.r[8], c.r[16].w[0] + 84u);
    c.budget -= 1;
L_004AC330:
    set32(c.r[5], ld32((c.r[16].w[0] + 236u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 232u)));
    set32(c.r[4], c.r[4].w[0] + 23936u);
    set32(c.r[9], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC350u); set32(c.r[10], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004AC350u) [[unlikely]] return; }
L_004AC350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 280u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC2F8u | kUnwind; return; } goto L_004AC2F8; } }
L_004AC358:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC364u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004AC364u) [[unlikely]] return; }
L_004AC364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC308u | kUnwind; return; } goto L_004AC308; } }
L_004AC36C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AC380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 24u)));
    st32((c.r[29].w[0]), c.f[20]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 25u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0] + 28u)));
    st128((c.r[16].w[0] + 192u) & ~15u, c.r[2]);
    st32((c.r[4].w[0] + 208u), c.f[1]);
    set32(c.r[7], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[4].w[0] + 212u), c.f[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 36u)));
    st8((c.r[4].w[0] + 216u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 217u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 220u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[4].w[0] + 224u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 228u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 52u)));
    st32((c.r[4].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[4].w[0] + 236u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 240u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 244u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    st32((c.r[4].w[0] + 248u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 252u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 256u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[4].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    st32((c.r[4].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[4].w[0] + 172u), c.f[0]);
    c.f[20] = ld32((c.r[4].w[0] + 208u));
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC458u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004AC458u) [[unlikely]] return; }
L_004AC458:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC464u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004AC464u) [[unlikely]] return; }
L_004AC464:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFA60000u);
    set32(c.r[4], 0u + 96u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = 0u;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC4B4u); st32((c.r[16].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004AC4B4u) [[unlikely]] return; }
L_004AC4B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AC4E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AC4CC; } }
    set32(c.r[7], c.r[16].w[0] + 80u);
    c.budget -= 1;
L_004AC4CC:
    c.f[12] = ld32((c.r[16].w[0] + 208u));
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC4DCu); set32(c.r[6], 0u + 282u);  if (depth < kMaxDepth) unit_002C(c, 238u, depth + 1u); else { c.pc = 0x002B3AB0u; return; } if (c.pc != 0x004AC4DCu) [[unlikely]] return; }
L_004AC4DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004AC4E0:
    st32((c.r[16].w[0] + 296u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 296u)));
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AC500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AC5A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 26784u);
    set32(c.r[3], c.r[3].w[0] + 27140u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27164u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 296u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AC568; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AC564; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC564u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AC564u) [[unlikely]] return; }
L_004AC564:
    st32((c.r[17].w[0] + 296u), 0u);
    c.budget -= 1;
L_004AC568:
    set32(c.r[4], ld32((c.r[17].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AC580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC57Cu);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AC57Cu) [[unlikely]] return; }
L_004AC57C:
    st32((c.r[17].w[0] + 308u), 0u);
    c.budget -= 1;
L_004AC580:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC58Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 292u, depth + 1u); else { c.pc = 0x004AA500u; return; } if (c.pc != 0x004AC58Cu) [[unlikely]] return; }
L_004AC58C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004AC5A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC5A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AC5A4u) [[unlikely]] return; }
L_004AC5A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AC5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[13], 0u - 2u);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[11], 0u - 3u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[10], c.r[10].w[0] - 12672u);
    set32(c.r[9], c.r[9].w[0] + 26048u);
    set32(c.r[8], c.r[8].w[0] + 24528u);
    set32(c.r[7], c.r[7].w[0] + 24504u);
    set32(c.r[6], c.r[6].w[0] + 26784u);
    set32(c.r[5], c.r[5].w[0] + 27140u);
    set32(c.r[3], c.r[3].w[0] + 27164u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 296u), 0u);
    st32((c.r[4].w[0] + 292u), 0u);
    st32((c.r[4].w[0] + 308u), 0u);
    st32((c.r[4].w[0] + 288u), 0u);
    st32((c.r[4].w[0] + 284u), 0u);
    c.budget -= 53;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 292u), 0u);  c.pc = t; return; }
L_004AC6A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB490u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 404u, depth); }
L_004AC6B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB4A0u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 405u, depth); }
L_004AC6C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB4B0u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 406u, depth); }
L_004AC6D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABD40u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 482u, depth); }
L_004AC6E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 84u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABF80u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 501u, depth); }
L_004AC6F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 176u);  c.pc = t; return; }
L_004AC700:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AC710:
    c.f[1] = ld32((c.r[4].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  c.pc = t; return; }
L_004AC730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_004AC740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004AC750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004AC760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004AC770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  c.pc = t; return; }
L_004AC780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 64u)));  c.pc = t; return; }
L_004AC790:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004AC000u < 16384u) { entry = entries_00AB[(t - 0x004AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004AC7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC7B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AC7B8u) [[unlikely]] return; }
L_004AC7B8:
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC7C8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AC7C8u) [[unlikely]] return; }
L_004AC7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AC7E0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004AC000u < 16384u) { entry = entries_00AB[(t - 0x004AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004AC7F0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 152u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 156u)));
    c.budget -= 5;
    { set32(c.r[4], c.r[28].w[0] - 29280u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00345A30u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 117u, depth); }
L_004AC810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC824u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AC824u) [[unlikely]] return; }
L_004AC824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AC850; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004AC850; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC850u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AC850u) [[unlikely]] return; }
L_004AC850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AC860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AC884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC884u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004AC884u) [[unlikely]] return; }
L_004AC884:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004AC8AC; } }
L_004AC894:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 5796u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 5796u), c.r[4].w[0]);  if (t) { goto L_004AC8C4; } }
L_004AC8AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC8BCu); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 153u, depth + 1u); else { c.pc = 0x0049EA50u; return; } if (c.pc != 0x004AC8BCu) [[unlikely]] return; }
L_004AC8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC894u | kUnwind; return; } goto L_004AC894; } }
L_004AC8C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AC8E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004AC98C; } }
    c.f[1] = ld32((c.r[16].w[0] + 200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004AC98C; } }
    c.f[3] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    set32(c.r[6], 0u + 12u);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[7], 0u - 1u);
    c.f[4] = 0u;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    set32(c.r[4], c.r[2].w[0] + 528u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC974u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004AC974u) [[unlikely]] return; }
L_004AC974:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AC98C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC98Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x004AC98Cu) [[unlikely]] return; }
L_004AC98C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 5796u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 5796u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004AC9B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC9C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x004AC9C4u) [[unlikely]] return; }
L_004AC9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACB40; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AC9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC9E0u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x004AC9E0u) [[unlikely]] return; }
L_004AC9E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 205u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004ACAA0; } }
L_004ACA00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004ACA7C; } }
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.f[0] = ld32((c.r[16].w[0] + 200u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004ACA7C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 144u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACA28u); set32(c.r[4], ld32((c.r[16].w[0] + 192u)));  if (depth < kMaxDepth) unit_0038(c, 418u, depth + 1u); else { c.pc = 0x002E2DC0u; return; } if (c.pc != 0x004ACA28u) [[unlikely]] return; }
L_004ACA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACA30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 137u, depth + 1u); else { c.pc = 0x004AD310u; return; } if (c.pc != 0x004ACA30u) [[unlikely]] return; }
L_004ACA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACA38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x004ACA38u) [[unlikely]] return; }
L_004ACA38:
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004ACA60; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 204u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ACA60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACA60u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004ACA60u) [[unlikely]] return; }
L_004ACA60:
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACA70u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004ACA70u) [[unlikely]] return; }
L_004ACA70:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 205u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004ACA98; } }
L_004ACA7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ACB40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACA98u); set32(c.r[5], c.r[16].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACA98u) [[unlikely]] return; }
L_004ACA98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004ACB44; } }
L_004ACAA0:
    c.f[1] = ld32((c.r[16].w[0] + 200u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 196u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACA00u | kUnwind; return; } goto L_004ACA00; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACB30; } }
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[4] = ld32((c.r[16].w[0] + 120u));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.f[5] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[8], 0u + 10u);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 56u), c.f[4]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st64((c.r[29].w[0]), 0ull);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 160u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACB30u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x004ACB30u) [[unlikely]] return; }
L_004ACB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACB38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004ACB38u) [[unlikely]] return; }
L_004ACB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACA98u | kUnwind; return; } goto L_004ACA98; } }
L_004ACB40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004ACB44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004ACB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACB6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004ACB6Cu) [[unlikely]] return; }
L_004ACB6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACC28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004ACC28; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004ACBA0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACB98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACB98u) [[unlikely]] return; }
L_004ACB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004ACBA4; } }
L_004ACBA0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004ACBA4:
    st32((c.r[17].w[0] + 208u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 64u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACBBCu); st32((c.r[17].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004ACBBCu) [[unlikely]] return; }
L_004ACBBC:
    c.f[1] = ld32((c.r[17].w[0] + 200u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004ACBFC; } }
L_004ACBD4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004ACC18; } }
L_004ACBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACBE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004ACBE4u) [[unlikely]] return; }
L_004ACBE4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACBF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACBF4u) [[unlikely]] return; }
L_004ACBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004ACC2C; } }
L_004ACBFC:
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC10u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004ACC10u) [[unlikely]] return; }
L_004ACC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACBD4u | kUnwind; return; } goto L_004ACBD4; } }
L_004ACC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 200u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACBDCu | kUnwind; return; } goto L_004ACBDC; } }
L_004ACC28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004ACC2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004ACC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ACC6C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC6Cu); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 153u, depth + 1u); else { c.pc = 0x0049EA50u; return; } if (c.pc != 0x004ACC6Cu) [[unlikely]] return; }
L_004ACC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004ACC74u) [[unlikely]] return; }
L_004ACC74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ACC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[4].w[0] + 200u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACCE8u); set32(c.r[4], ld32((c.r[4].w[0] + 192u)));  if (depth < kMaxDepth) unit_0038(c, 421u, depth + 1u); else { c.pc = 0x002E2E30u; return; } if (c.pc != 0x004ACCE8u) [[unlikely]] return; }
L_004ACCE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACCF0u); set32(c.r[4], ld32((c.r[16].w[0] + 192u)));  if (depth < kMaxDepth) unit_0038(c, 419u, depth + 1u); else { c.pc = 0x002E2DF0u; return; } if (c.pc != 0x004ACCF0u) [[unlikely]] return; }
L_004ACCF0:
    st8((c.r[16].w[0] + 204u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 205u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 208u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ACD4C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACD18u) [[unlikely]] return; }
L_004ACD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004ACD50; } }
L_004ACD20:
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD2Cu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004ACD2Cu) [[unlikely]] return; }
L_004ACD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ACD44; } }
L_004ACD34:
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD44u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004ACD44u) [[unlikely]] return; }
L_004ACD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004ACD74; } }
L_004ACD4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004ACD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004ACD58u) [[unlikely]] return; }
L_004ACD58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD64u); st32((c.r[16].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004ACD64u) [[unlikely]] return; }
L_004ACD64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACD34u | kUnwind; return; } goto L_004ACD34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 152u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACD20u | kUnwind; return; } goto L_004ACD20; } }
L_004ACD74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ACD80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ACDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACDA4u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004ACDA4u) [[unlikely]] return; }
L_004ACDA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004ACDA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACDBC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_004ACDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ACDD0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2B80u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 404u, depth); }
L_004ACDE0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2C00u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 405u, depth); }
L_004ACDF0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2C20u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 406u, depth); }
L_004ACE00:
    st32((c.r[4].w[0] + 200u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 208u), c.r[5].w[0]);  c.pc = t; return; }
L_004ACE10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AD054; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004ACE64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 308u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACE54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACE54u) [[unlikely]] return; }
L_004ACE54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ACE84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AD0A8; } }
L_004ACE64:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACE74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACE74u) [[unlikely]] return; }
L_004ACE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ACE84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AD0A8; } }
L_004ACE84:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACE94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACE94u) [[unlikely]] return; }
L_004ACE94:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004ACEA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 20u);  if (t) { goto L_004ACEC4; } }
L_004ACEA4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004AD074; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[6], c.r[29].w[0] + 95u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACEC0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x002D8920u; return; } if (c.pc != 0x004ACEC0u) [[unlikely]] return; }
L_004ACEC0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004ACEC4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACEDCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACEDCu) [[unlikely]] return; }
L_004ACEDC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004ACF18; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004ACF18; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD07C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 1;
L_004ACEFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ACF18; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACF18u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACF18u) [[unlikely]] return; }
L_004ACF18:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD04C; } }
    st32((c.r[18].w[0] + 200u), 0u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 208u), c.r[16].w[0]);  if (t) { goto L_004ACF64; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACF64; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004ACF64:
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AD04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACF7Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 182u, depth + 1u); else { c.pc = 0x00486780u; return; } if (c.pc != 0x004ACF7Cu) [[unlikely]] return; }
L_004ACF7C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AD04C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 5816u));
    c.r[2].d[0] = ld16((c.r[2].w[0] - 4180u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004ACFC0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004ACFDC; } }
L_004ACFC0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004ACFDC:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004AD004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACFF0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 182u, depth + 1u); else { c.pc = 0x00486780u; return; } if (c.pc != 0x004ACFF0u) [[unlikely]] return; }
L_004ACFF0:
    c.r[1].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AD004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_004AD01C; } }
L_004AD004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD00Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 182u, depth + 1u); else { c.pc = 0x00486780u; return; } if (c.pc != 0x004AD00Cu) [[unlikely]] return; }
L_004AD00C:
    c.r[1].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AD08C; } }
    set32(c.r[16], 0u + 7u);
    c.budget -= 1;
L_004AD01C:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD04C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 112u);
    set32(c.r[8], 0u + 10u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD04Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 120u, depth + 1u); else { c.pc = 0x002BCC70u; return; } if (c.pc != 0x004AD04Cu) [[unlikely]] return; }
L_004AD04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004AD0A8; } }
L_004AD054:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD064u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AD064u) [[unlikely]] return; }
L_004AD064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACE84u | kUnwind; return; } goto L_004ACE84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AD0A8; } }
L_004AD074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACEC4u | kUnwind; return; } goto L_004ACEC4; } }
L_004AD07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD084u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x004AD084u) [[unlikely]] return; }
L_004AD084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 68u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACEFCu | kUnwind; return; } goto L_004ACEFC; } }
L_004AD08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD094u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 182u, depth + 1u); else { c.pc = 0x00486780u; return; } if (c.pc != 0x004AD094u) [[unlikely]] return; }
L_004AD094:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD01Cu | kUnwind; return; } goto L_004AD01C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD01Cu | kUnwind; return; } goto L_004AD01C; } }
L_004AD0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004AD0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AD1A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AD1A0; } }
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AD114; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_004AD16C; } }
L_004AD114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 208u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD134u); st32((c.r[16].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AD134u) [[unlikely]] return; }
L_004AD134:
    c.f[1] = ld32((c.r[16].w[0] + 200u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004AD174; } }
L_004AD14C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004AD190; } }
L_004AD154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD15Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004AD15Cu) [[unlikely]] return; }
L_004AD15C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD16Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AD16Cu) [[unlikely]] return; }
L_004AD16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004AD1A4; } }
L_004AD174:
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD188u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004AD188u) [[unlikely]] return; }
L_004AD188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD14Cu | kUnwind; return; } goto L_004AD14C; } }
L_004AD190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 200u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD154u | kUnwind; return; } goto L_004AD154; } }
L_004AD1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004AD1A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AD1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 552u));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 62u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AD27C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AD27C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AD27C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004AD27C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 252u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD248u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AD248u) [[unlikely]] return; }
L_004AD248:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD260u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AD260u) [[unlikely]] return; }
L_004AD260:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD27C; } }
    st32((c.r[17].w[0] + 200u), 0u);
    st32((c.r[17].w[0] + 208u), c.r[16].w[0]);
    c.budget -= 2;
L_004AD27C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AD2A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004AD2E0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_004AD2F0; } }
L_004AD2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD2E8u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AD2E8u) [[unlikely]] return; }
L_004AD2E8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_004AD2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AD300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AD310:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AD3E4; } }
L_004AD34C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[18], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_004AD374; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AD378; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_004AD378; } }
L_004AD374:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AD378:
    set32(c.r[4], 0u + 11u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD388u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004AD388u) [[unlikely]] return; }
L_004AD388:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD3A8u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 103u, depth + 1u); else { c.pc = 0x004A53A0u; return; } if (c.pc != 0x004AD3A8u) [[unlikely]] return; }
L_004AD3A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 48u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[9], ld32((c.r[17].w[0] + 208u)));
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD3DCu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 190u, depth + 1u); else { c.pc = 0x002A65C0u; return; } if (c.pc != 0x004AD3DCu) [[unlikely]] return; }
L_004AD3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004AD460; } }
L_004AD3E4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 204u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD34Cu | kUnwind; return; } goto L_004AD34C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AD448; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AD434; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AD420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD3DCu | kUnwind; return; } goto L_004AD3DC; } }
L_004AD420:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD42Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 105u, depth + 1u); else { c.pc = 0x004A13D0u; return; } if (c.pc != 0x004AD42Cu) [[unlikely]] return; }
L_004AD42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD3DCu | kUnwind; return; } goto L_004AD3DC; } }
L_004AD434:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD440u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 85u, depth + 1u); else { c.pc = 0x004A0FC0u; return; } if (c.pc != 0x004AD440u) [[unlikely]] return; }
L_004AD440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD3DCu | kUnwind; return; } goto L_004AD3DC; } }
L_004AD448:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD454u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00A8(c, 101u, depth + 1u); else { c.pc = 0x004A1310u; return; } if (c.pc != 0x004AD454u) [[unlikely]] return; }
L_004AD454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD3DCu | kUnwind; return; } goto L_004AD3DC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004AD460:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004AD480:
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_004AD4A0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] >> 8);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] >> 16);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004AD4E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AD54C; } }
L_004AD544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 4u);  if (t) { goto L_004AD580; } }
L_004AD54C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 144u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD558u); set32(c.r[4], ld32((c.r[17].w[0] + 192u)));  if (depth < kMaxDepth) unit_0038(c, 418u, depth + 1u); else { c.pc = 0x002E2DC0u; return; } if (c.pc != 0x004AD558u) [[unlikely]] return; }
L_004AD558:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD564u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AD564u) [[unlikely]] return; }
L_004AD564:
    set32(c.r[5], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD574u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AD574u) [[unlikely]] return; }
L_004AD574:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 205u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD544u | kUnwind; return; } goto L_004AD544; } }
L_004AD580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AD5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[4].w[0] + 96u), c.r[7].w[0]);
    set32(c.r[11], c.r[16].w[0] + 112u);
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    st128((c.r[16].w[0] + 112u) & ~15u, c.r[2]);
    st32((c.r[4].w[0] + 128u), c.f[2]);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 48u));
    st32((c.r[4].w[0] + 132u), c.f[1]);
    set32(c.r[8], ld32((c.r[5].w[0] + 52u)));
    st32((c.r[4].w[0] + 136u), c.f[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 56u)));
    st32((c.r[4].w[0] + 140u), c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 64u)));
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 148u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 152u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 156u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD620u); c.r[5].d[0] = c.r[11].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 291u, depth + 1u); else { c.pc = 0x004AA4D0u; return; } if (c.pc != 0x004AD620u) [[unlikely]] return; }
L_004AD620:
    c.f[5] = ld32((c.r[16].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[6] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[16].w[0] + 120u));
    c.f[4] = ld32((c.r[16].w[0] + 116u));
    c.f[5] = fp::ee::div(c.fcr31, c.f[5], c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[16].w[0] + 176u), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 180u), c.f[4]);
    st32((c.r[16].w[0] + 184u), c.f[2]);
    st32((c.r[16].w[0] + 188u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD670u); set32(c.r[4], ld32((c.r[16].w[0] + 192u)));  if (depth < kMaxDepth) unit_0038(c, 421u, depth + 1u); else { c.pc = 0x002E2E30u; return; } if (c.pc != 0x004AD670u) [[unlikely]] return; }
L_004AD670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD678u); set32(c.r[4], ld32((c.r[16].w[0] + 192u)));  if (depth < kMaxDepth) unit_0038(c, 419u, depth + 1u); else { c.pc = 0x002E2DF0u; return; } if (c.pc != 0x004AD678u) [[unlikely]] return; }
L_004AD678:
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[5].w[0] + 54u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    st32((c.r[5].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AD77C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AD760; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AD70C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_004AD6F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AD6D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  if (t) { goto L_004AD7CC; } }
L_004AD6D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[16].w[0] + 68u);
    set32(c.r[4], c.r[4].w[0] - 26160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD6E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004AD6E8u) [[unlikely]] return; }
L_004AD6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AD7C8; } }
L_004AD6F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[16].w[0] + 68u);
    set32(c.r[4], c.r[4].w[0] - 26139u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD704u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004AD704u) [[unlikely]] return; }
L_004AD704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AD7C8; } }
L_004AD70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD714u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004AD714u) [[unlikely]] return; }
L_004AD714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD740; } }
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 9;
L_004AD740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 26120u);
    set32(c.r[5], c.r[16].w[0] + 68u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD758u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004AD758u) [[unlikely]] return; }
L_004AD758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AD7C8; } }
L_004AD760:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[16].w[0] + 68u);
    set32(c.r[4], c.r[4].w[0] - 26090u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD774u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004AD774u) [[unlikely]] return; }
L_004AD774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AD7C8; } }
L_004AD77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD784u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004AD784u) [[unlikely]] return; }
L_004AD784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD7B0; } }
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 9;
L_004AD7B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 26064u);
    set32(c.r[5], c.r[16].w[0] + 68u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD7C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004AD7C8u) [[unlikely]] return; }
L_004AD7C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 1;
L_004AD7CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AD7E0; } }
    set32(c.r[5], 0u + 59u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD7E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 148u, depth + 1u); else { c.pc = 0x00416AD0u; return; } if (c.pc != 0x004AD7E0u) [[unlikely]] return; }
L_004AD7E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AD7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 289u, depth + 1u); else { c.pc = 0x004AA490u; return; } if (c.pc != 0x004AD804u) [[unlikely]] return; }
L_004AD804:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD830; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 22u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
L_004AD830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AD840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 289u, depth + 1u); else { c.pc = 0x004AA490u; return; } if (c.pc != 0x004AD854u) [[unlikely]] return; }
L_004AD854:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD880; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
L_004AD880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AD890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD8A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 289u, depth + 1u); else { c.pc = 0x004AA490u; return; } if (c.pc != 0x004AD8A4u) [[unlikely]] return; }
L_004AD8A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD8D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28296u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
L_004AD8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AD8E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AD94C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 27200u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AD928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD91Cu);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004AD91Cu) [[unlikely]] return; }
L_004AD91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD924u); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AD924u) [[unlikely]] return; }
L_004AD924:
    st32((c.r[17].w[0] + 212u), 0u);
    c.budget -= 1;
L_004AD928:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD934u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 292u, depth + 1u); else { c.pc = 0x004AA500u; return; } if (c.pc != 0x004AD934u) [[unlikely]] return; }
L_004AD934:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004AD94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD94Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AD94Cu) [[unlikely]] return; }
L_004AD94C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AD980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AD9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD9A4u);  if (depth < kMaxDepth) unit_00AB(c, 178u, depth + 1u); else { c.pc = 0x004AD9E0u; return; } if (c.pc != 0x004AD9A4u) [[unlikely]] return; }
L_004AD9A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004AD9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD9BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AD9BCu) [[unlikely]] return; }
L_004AD9BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AD9E0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_004AD9F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004ADA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 416u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ADA30; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADA30u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADA30u) [[unlikely]] return; }
L_004ADA30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADA48u); st32((c.r[16].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x004ADA48u) [[unlikely]] return; }
L_004ADA48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADA58u); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004ADA58u) [[unlikely]] return; }
L_004ADA58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ADA70:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_004ADA80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004ADA90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004ADAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 97u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADAC8u); st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004ADAC8u) [[unlikely]] return; }
L_004ADAC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ADAE4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADAE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADAE4u) [[unlikely]] return; }
L_004ADAE4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 97u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004ADB20; } }
L_004ADAF4:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 368u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 97u));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADAF4u | kUnwind; return; } goto L_004ADAF4; } }
    c.budget -= 1;
L_004ADB20:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004ADB68; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004ADB34:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004ADB70; } }
L_004ADB50:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADB34u | kUnwind; return; } goto L_004ADB34; } }
    c.budget -= 1;
L_004ADB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ADB80; } }
L_004ADB70:
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADB50u | kUnwind; return; } goto L_004ADB50; } }
    c.budget -= 1;
L_004ADB80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ADB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20416u));
    c.f[2] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_004ADBB4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004ADBB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004ADBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 97u));
    c.f[0] = 0u;
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(12ll);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004ADC68; } }
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.f[4] = ld32((c.r[5].w[0]));
    set32(c.r[3], 0u + 12u);
    c.budget -= 6;
L_004ADBF4:
    c.r[5].d[0] = c.r[9].d[0] & 255ull;
    c.r[2].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 132u));
    c.f[1] = ld32((c.r[5].w[0] + 128u));
    c.f[3] = ld32((c.r[5].w[0] + 136u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0]), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    st32((c.r[8].w[0]), c.f[2]);
    st32((c.r[7].w[0]), c.f[3]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);  if (t) { goto L_004ADC48; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004ADC50; } }
    c.budget -= 1;
L_004ADC48:
    c.r[10].d[0] = c.r[9].d[0] & 255ull;
    c.f[0] = c.f[1];
    c.budget -= 2;
L_004ADC50:
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 97u));
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADBF4u | kUnwind; return; } goto L_004ADBF4; } }
L_004ADC68:
    c.r[2].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[6].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[6].w[0] + 12u), c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004ADCA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004ADCB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004ADD04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADCF4u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004ADCF4u) [[unlikely]] return; }
L_004ADCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ADD04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004ADF3C; } }
L_004ADD04:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004ADE54; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004ADD34; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 308u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADD24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADD24u) [[unlikely]] return; }
L_004ADD24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ADD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004ADF3C; } }
L_004ADD34:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADD44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADD44u) [[unlikely]] return; }
L_004ADD44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ADD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004ADF3C; } }
L_004ADD54:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADD64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADD64u) [[unlikely]] return; }
L_004ADD64:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004ADDA8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004ADE9C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004ADE74; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_004ADD84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ADE88; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004ADD90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ADDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004ADE14; } }
L_004ADDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 20u);  if (t) { goto L_004ADE14; } }
L_004ADDA8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004ADF14; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ADDD0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADDD0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADDD0u) [[unlikely]] return; }
L_004ADDD0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004ADEEC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_004ADDE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ADF00; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004ADDEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ADDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004ADE14; } }
L_004ADDFC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], c.r[29].w[0] + 111u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE10u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x002D8920u; return; } if (c.pc != 0x004ADE10u) [[unlikely]] return; }
L_004ADE10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004ADE14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004ADF1C; } }
L_004ADE1C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004ADE4C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004ADE40; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ADE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE40u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x004ADE40u) [[unlikely]] return; }
L_004ADE40:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE4Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 109u, depth + 1u); else { c.pc = 0x004A14A0u; return; } if (c.pc != 0x004ADE4Cu) [[unlikely]] return; }
L_004ADE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004ADF3C; } }
L_004ADE54:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADE64u) [[unlikely]] return; }
L_004ADE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADD54u | kUnwind; return; } goto L_004ADD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004ADF3C; } }
L_004ADE74:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADDA0u | kUnwind; return; } goto L_004ADDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADD84u | kUnwind; return; } goto L_004ADD84; } }
L_004ADE88:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADDA0u | kUnwind; return; } goto L_004ADDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADD90u | kUnwind; return; } goto L_004ADD90; } }
L_004ADE9C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ADECC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    c.budget -= 1;
L_004ADEB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ADEC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADE14u | kUnwind; return; } goto L_004ADE14; } }
L_004ADEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADE14u | kUnwind; return; } goto L_004ADE14; } }
L_004ADECC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADEDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADEDCu) [[unlikely]] return; }
L_004ADEDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADEC4u | kUnwind; return; } goto L_004ADEC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADEB0u | kUnwind; return; } goto L_004ADEB0; } }
L_004ADEEC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADDFCu | kUnwind; return; } goto L_004ADDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADDE0u | kUnwind; return; } goto L_004ADDE0; } }
L_004ADF00:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADDFCu | kUnwind; return; } goto L_004ADDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADDECu | kUnwind; return; } goto L_004ADDEC; } }
L_004ADF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADE14u | kUnwind; return; } goto L_004ADE14; } }
L_004ADF1C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADF34u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADF34u) [[unlikely]] return; }
L_004ADF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADE1Cu | kUnwind; return; } goto L_004ADE1C; } }
L_004ADF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004ADF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004ADFBC; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ADFA8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_004ADF8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004ADFBC; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004ADFBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AE0F8; } }
L_004ADFA8:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004AE0F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ADF8Cu | kUnwind; return; } goto L_004ADF8C; } }
L_004ADFBC:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AE070; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 416u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ADFEC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADFECu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ADFECu) [[unlikely]] return; }
L_004ADFEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE004u); st32((c.r[18].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x004AE004u) [[unlikely]] return; }
L_004AE004:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE014u); st32((c.r[18].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AE014u) [[unlikely]] return; }
L_004AE014:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 1;
L_004AE018:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004AE068; } }
L_004AE024:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE0BC; } }
L_004AE050:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE024u | kUnwind; return; } goto L_004AE024; } }
L_004AE068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AE0F8; } }
L_004AE070:
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE088u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004AE088u) [[unlikely]] return; }
L_004AE088:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE098u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AE098u) [[unlikely]] return; }
L_004AE098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE014u | kUnwind; return; } goto L_004AE014; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE0B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004AE0B4u) [[unlikely]] return; }
L_004AE0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 104u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE018u | kUnwind; return; } goto L_004AE018; } }
L_004AE0BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE0D8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004AE0D8u) [[unlikely]] return; }
L_004AE0D8:
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE050u | kUnwind; return; } goto L_004AE050; } }
    c.budget -= 1;
L_004AE0F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004AE110:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 368u), 0u);  c.pc = t; return; }
L_004AE140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 96u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AE208; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AE154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE2D0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 97u));
    c.f[7] = 0u;
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(12ll);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_004AE1B0; } }
    set32(c.r[9], c.r[29].w[0] + 36u);
    set32(c.r[8], c.r[29].w[0] + 40u);
    c.f[0] = c.f[7];
    c.budget -= 3;
L_004AE180:
    c.r[3].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 368u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE264; } }
L_004AE198:
    set32(c.r[2], c.r[10].w[0] + 1u);
    c.r[10].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 97u));
    c.r[2].d[0] = c.r[10].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE180u | kUnwind; return; } goto L_004AE180; } }
L_004AE1B0:
    c.r[9].d[0] = c.r[11].d[0] & 255ull;
    set32(c.r[2], c.r[9].w[0] << 4);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[9], c.r[10].w[0] - 1u);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 128u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 132u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 136u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 140u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 320u));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 368u), c.r[7].w[0]);  if (t) { goto L_004AE3D8; } }
L_004AE208:
    c.f[4] = ld32((c.r[4].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = ld32((c.r[7].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[7].w[0] + 32u));
    c.f[6] = ld32((c.r[4].w[0] + 56u));
    c.f[5] = ld32((c.r[7].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    set32(c.r[2], 0u + 1u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 56u), c.f[5]);
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 52u), c.f[3]);  if (t) { goto L_004AE25C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AE25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE154u | kUnwind; return; } goto L_004AE154; } }
L_004AE264:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[2].w[0] + 132u));
    c.f[3] = ld32((c.r[7].w[0] + 36u));
    c.f[2] = ld32((c.r[2].w[0] + 128u));
    c.f[1] = ld32((c.r[7].w[0] + 32u));
    c.f[6] = ld32((c.r[2].w[0] + 136u));
    c.f[5] = ld32((c.r[7].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[7]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    st32((c.r[9].w[0]), c.f[3]);
    st32((c.r[8].w[0]), c.f[5]);
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);  if (t) { goto L_004AE2C0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE198u | kUnwind; return; } goto L_004AE198; } }
    c.budget -= 1;
L_004AE2C0:
    c.r[11].d[0] = c.r[10].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[7] = c.f[1];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE198u | kUnwind; return; } goto L_004AE198; } }
    c.budget -= 1;
L_004AE2D0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 97u));
    c.f[1] = ld32((c.r[4].w[0] + 132u));
    c.r[10].d[0] = 0ull + 0ull;
    c.f[4] = ld32((c.r[7].w[0] + 36u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[3] = ld32((c.r[7].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 136u));
    c.f[5] = ld32((c.r[7].w[0] + 40u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 20;
    { const bool t = c.r[1].d[0] != 0ull; c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);  if (t) { goto L_004AE398; } }
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004AE398; } }
    set32(c.r[8], c.r[29].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    c.budget -= 2;
L_004AE334:
    c.r[3].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    st32((c.r[8].w[0]), c.f[1]);
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[7].w[0]), c.f[2]);  if (t) { goto L_004AE380; } }
    c.f[6] = c.f[0];
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004AE380:
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 97u));
    c.r[2].d[0] = c.r[9].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE334u | kUnwind; return; } goto L_004AE334; } }
L_004AE398:
    c.r[2].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = ld32((c.r[7].w[0] + 128u));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 132u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 136u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 140u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 320u));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 16;
L_004AE3D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004AE3E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[3].d[0] | 13107ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[7].w[0];
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.f[3] = c.r[6].w[0];
    c.f[12] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[13], c.f[0]);
    c.f[7] = fp::ee::div(c.fcr31, c.f[12], c.f[3]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[6] = fp::ee::div(c.fcr31, c.f[13], c.f[3]);
    c.f[2] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[7]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);  if (t) { goto L_004AE7B4; } }
L_004AE42C:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 1;
L_004AE430:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AE558; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE558; } }
    c.f[8] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[8], c.r[6].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    st32((c.r[8].w[0] + 128u), c.f[8]);
    c.f[3] = c.r[7].w[0];
    c.f[9] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    st32((c.r[8].w[0] + 132u), c.f[0]);
    st32((c.r[8].w[0] + 136u), c.f[9]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[13]));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 320u), c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_004AE558; } }
    c.f[5] = c.r[3].w[0];
    c.budget -= 1;
L_004AE4A4:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[7].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE558; } }
    set32(c.r[8], c.r[7].w[0] << 4);
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    c.f[3] = c.r[7].w[0];
    st32((c.r[8].w[0] + 128u), c.f[8]);
    c.f[4] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[9], c.f[4]);
    st32((c.r[8].w[0] + 132u), c.f[0]);
    st32((c.r[8].w[0] + 136u), c.f[3]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 320u), c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[7].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE558; } }
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], c.r[7].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], c.r[6].w[0] << 1);
    st32((c.r[8].w[0] + 128u), c.f[8]);
    c.f[3] = c.r[7].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[9], c.f[4]);
    st32((c.r[8].w[0] + 132u), c.f[0]);
    st32((c.r[8].w[0] + 136u), c.f[4]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 320u), c.f[5]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[13]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE4A4u | kUnwind; return; } goto L_004AE4A4; } }
    c.budget -= 1;
L_004AE558:
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AE680; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE680; } }
    c.f[7] = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    st32((c.r[8].w[0] + 128u), c.f[7]);
    c.f[3] = c.r[7].w[0];
    st32((c.r[8].w[0] + 132u), c.f[0]);
    st32((c.r[8].w[0] + 136u), c.f[2]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[12]));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 320u), c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_004AE680; } }
    c.f[4] = c.r[3].w[0];
    c.budget -= 1;
L_004AE5C8:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[7].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE680; } }
    set32(c.r[8], c.r[7].w[0] << 4);
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    c.f[3] = c.r[7].w[0];
    c.f[5] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[7], c.f[5]);
    st32((c.r[8].w[0] + 128u), c.f[3]);
    st32((c.r[8].w[0] + 132u), c.f[0]);
    st32((c.r[8].w[0] + 136u), c.f[2]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 320u), c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[7].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE680; } }
    c.f[3] = fp::ee::sub(c.fcr31, c.f[7], c.f[5]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], c.r[7].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], c.r[6].w[0] << 1);
    st32((c.r[8].w[0] + 128u), c.f[3]);
    c.f[3] = c.r[7].w[0];
    st32((c.r[8].w[0] + 132u), c.f[0]);
    st32((c.r[8].w[0] + 136u), c.f[2]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 320u), c.f[4]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[12]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE5C8u | kUnwind; return; } goto L_004AE5C8; } }
    c.budget -= 1;
L_004AE680:
    c.r[3].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AE7A8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE7A8; } }
    c.f[5] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40960000u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] | 52196ull;
    st32((c.r[7].w[0] + 128u), c.f[1]);
    c.f[2] = c.r[6].w[0];
    st32((c.r[7].w[0] + 132u), c.f[0]);
    st32((c.r[7].w[0] + 136u), c.f[5]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[13]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 320u), c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_004AE7A8; } }
    c.f[4] = c.r[3].w[0];
    c.budget -= 1;
L_004AE6F0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE7A8; } }
    set32(c.r[7], c.r[6].w[0] << 4);
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    c.f[2] = c.r[6].w[0];
    st32((c.r[7].w[0] + 128u), c.f[1]);
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[7].w[0] + 132u), c.f[0]);
    st32((c.r[7].w[0] + 136u), c.f[2]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 320u), c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AE7A8; } }
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[6].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[6], c.r[5].w[0] << 1);
    st32((c.r[7].w[0] + 128u), c.f[1]);
    c.f[2] = c.r[6].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[7].w[0] + 132u), c.f[0]);
    st32((c.r[7].w[0] + 136u), c.f[3]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 320u), c.f[4]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[13]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE6F0u | kUnwind; return; } goto L_004AE6F0; } }
    c.budget -= 1;
L_004AE7A8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004AE8BC; } }
L_004AE7B4:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    c.f[9] = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[8] = fp::ee::add(c.fcr31, c.f[2], c.f[13]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 128u), c.f[9]);
    st32((c.r[6].w[0] + 132u), c.f[0]);
    st32((c.r[6].w[0] + 136u), c.f[8]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[12]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 320u), 0u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE42Cu | kUnwind; return; } goto L_004AE42C; } }
    c.f[4] = 0u;
    c.budget -= 1;
L_004AE800:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE42Cu | kUnwind; return; } goto L_004AE42C; } }
    set32(c.r[7], c.r[6].w[0] << 4);
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    c.f[3] = c.r[6].w[0];
    c.f[5] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[9], c.f[5]);
    st32((c.r[7].w[0] + 128u), c.f[3]);
    st32((c.r[7].w[0] + 132u), c.f[0]);
    st32((c.r[7].w[0] + 136u), c.f[8]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 320u), 0u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[1].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE42Cu | kUnwind; return; } goto L_004AE42C; } }
    c.f[3] = fp::ee::sub(c.fcr31, c.f[9], c.f[5]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[7], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[6], c.r[3].w[0] << 1);
    st32((c.r[7].w[0] + 128u), c.f[3]);
    c.f[3] = c.r[6].w[0];
    st32((c.r[7].w[0] + 132u), c.f[0]);
    st32((c.r[7].w[0] + 136u), c.f[8]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 320u), c.f[4]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[12]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE800u | kUnwind; return; } goto L_004AE800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & 2ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE430u | kUnwind; return; } goto L_004AE430; } }
L_004AE8BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AE8D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.f[23] = c.f[12];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[4].d[0] = c.r[4].d[0] | 13107ull;
    c.f[1] = c.r[4].w[0];
    c.f[22] = c.f[14];
    c.f[23] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[21] = fp::ee::div(c.fcr31, c.f[0], c.f[23]);
    c.f[20] = c.f[13];
    c.budget -= 22;
L_004AE928:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004AE938; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AE938:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004AEA18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AEA18; } }
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 128u), 0u);
    c.f[12] = c.f[20];
    st32((c.r[2].w[0] + 132u), 0u);
    st32((c.r[2].w[0] + 136u), c.f[23]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[25] = ld32((c.r[2].w[0] + 128u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE984u); set32(c.r[17], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004AE984u) [[unlikely]] return; }
L_004AE984:
    c.f[24] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE990u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004AE990u) [[unlikely]] return; }
L_004AE990:
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[24]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[25], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 320u), c.f[20]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[21]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AE928u | kUnwind; return; } goto L_004AE928; } }
L_004AEA18:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004AEA50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 92u)));  c.pc = t; return; }
L_004AEA60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA490u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 289u, depth); }
L_004AEA70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA490u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 289u, depth); }
L_004AEA80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA490u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 289u, depth); }
L_004AEA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AEB68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 27568u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 416u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AEAE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AEADC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEADCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AEADCu) [[unlikely]] return; }
L_004AEADC:
    st32((c.r[17].w[0] + 416u), 0u);
    c.budget -= 1;
L_004AEAE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 28288u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_004AEB1C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_004AEB70; } }
L_004AEAF8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AEAF8u | kUnwind; return; } goto L_004AEAF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 420u)));  if (t) { goto L_004AEB74; } }
L_004AEB1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 420u)));
    st32((c.r[28].w[0] - 28288u), c.r[2].w[0]);
    c.budget -= 2;
L_004AEB24:
    set32(c.r[4], c.r[17].w[0] + 108u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004AEB7C; } }
    set32(c.r[4], c.r[17].w[0] + 100u);
    c.budget -= 1;
L_004AEB34:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AEB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEB44u);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x004AEB44u) [[unlikely]] return; }
L_004AEB44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEB50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 292u, depth + 1u); else { c.pc = 0x004AA500u; return; } if (c.pc != 0x004AEB50u) [[unlikely]] return; }
L_004AEB50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004AEB68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEB68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AEB68u) [[unlikely]] return; }
L_004AEB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004AEB8C; } }
L_004AEB70:
    set32(c.r[2], ld32((c.r[17].w[0] + 420u)));
    c.budget -= 1;
L_004AEB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 420u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AEB24u | kUnwind; return; } goto L_004AEB24; } }
L_004AEB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEB84u);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x004AEB84u) [[unlikely]] return; }
L_004AEB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AEB34u | kUnwind; return; } goto L_004AEB34; } }
L_004AEB8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AEBA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AEBB0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[5], c.r[20].w[0] + 68u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004AEC10u) [[unlikely]] return; }
L_004AEC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004AEC18u) [[unlikely]] return; }
L_004AEC18:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AEC48; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[5].w[0] - 25776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC38u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004AEC38u) [[unlikely]] return; }
L_004AEC38:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[20].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004AEC48u) [[unlikely]] return; }
L_004AEC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 189u, depth + 1u); else { c.pc = 0x003D70F0u; return; } if (c.pc != 0x004AEC50u) [[unlikely]] return; }
L_004AEC50:
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC5Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 264u, depth + 1u); else { c.pc = 0x002EB440u; return; } if (c.pc != 0x004AEC5Cu) [[unlikely]] return; }
L_004AEC5C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 291u, depth + 1u); else { c.pc = 0x004AA4D0u; return; } if (c.pc != 0x004AEC6Cu) [[unlikely]] return; }
L_004AEC6C:
    st32((c.r[20].w[0] + 80u), c.r[23].w[0]);
    st32((c.r[20].w[0] + 64u), c.r[22].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] < 0; st32((c.r[20].w[0] + 92u), c.r[22].w[0]);  if (t) { goto L_004AEC88; } }
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004AECA4; } }
L_004AEC88:
    set32(c.r[3], c.r[19].w[0] >> 1);
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004AECA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[20].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[20].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 8;
L_004AECC4:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AECD8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_004AECD8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AECC4u | kUnwind; return; } goto L_004AECC4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[20].w[0] + 100u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AECFCu); set32(c.r[6], c.r[6].w[0] - 25765u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x004AECFCu) [[unlikely]] return; }
L_004AECFC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AED10u); set32(c.r[6], c.r[6].w[0] - 25734u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x004AED10u) [[unlikely]] return; }
L_004AED10:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004AED1C:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004AED44; } }
L_004AED28:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AED1Cu | kUnwind; return; } goto L_004AED1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AED70; } }
L_004AED44:
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AED28u | kUnwind; return; } goto L_004AED28; } }
    c.budget -= 1;
L_004AED70:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004AEDA0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] >> 8);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] >> 16);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004AEDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AEE44; } }
L_004AEE3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 4u);  if (t) { goto L_004AEE54; } }
L_004AEE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEE4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AEE4Cu) [[unlikely]] return; }
L_004AEE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AEE3Cu | kUnwind; return; } goto L_004AEE3C; } }
L_004AEE54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AEE70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], 0u - 2u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[7], 0u - 3u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[6].w[0] - 12672u);
    c.r[11].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[5], c.r[5].w[0] + 26048u);
    set32(c.r[3], c.r[3].w[0] + 27568u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 28288u)));
    st32((c.r[4].w[0] + 420u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 28288u), c.r[4].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 416u), 0u);  c.pc = t; return; }
L_004AEF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEF34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004AEF34u) [[unlikely]] return; }
L_004AEF34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AEF54; } }
    c.r[6].d[0] = ld16((c.r[16].w[0] + 4u));
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEF54u); set32(c.r[4], c.r[4].w[0] + 25088u);  if (depth < kMaxDepth) unit_00A1(c, 9u, depth + 1u); else { c.pc = 0x004842A0u; return; } if (c.pc != 0x004AEF54u) [[unlikely]] return; }
L_004AEF54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AEF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AEF80:
    ld128((c.r[5].w[0]) & ~15u, c.r[8]);
    c.f[0] = ld32((c.r[5].w[0] + 64u));
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[3]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.f[0]);  c.pc = t; return; }
L_004AEFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004AF004; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 27936u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004AEFEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004AEFEC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004AF004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF004u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AF004u) [[unlikely]] return; }
L_004AF004:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AF020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 27936u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004AF090:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AF0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AF0B0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] - 2u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 92u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 92u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004AF0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st16((c.r[4].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 92u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 92u));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AF1B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF128u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0038(c, 421u, depth + 1u); else { c.pc = 0x002E2E30u; return; } if (c.pc != 0x004AF128u) [[unlikely]] return; }
L_004AF128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF130u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0038(c, 419u, depth + 1u); else { c.pc = 0x002E2DF0u; return; } if (c.pc != 0x004AF130u) [[unlikely]] return; }
L_004AF130:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF13Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 416u, depth + 1u); else { c.pc = 0x002E2D80u; return; } if (c.pc != 0x004AF13Cu) [[unlikely]] return; }
L_004AF13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF144u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AF144u) [[unlikely]] return; }
L_004AF144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF1D8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF180; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF168u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AF168u) [[unlikely]] return; }
L_004AF168:
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF178u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF178u) [[unlikely]] return; }
L_004AF178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004AF1A4; } }
L_004AF180:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF190u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF190u) [[unlikely]] return; }
L_004AF190:
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1A0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AF1A0u) [[unlikely]] return; }
L_004AF1A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AF1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1ACu);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004AF1ACu) [[unlikely]] return; }
L_004AF1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 2u);  if (t) { goto L_004AF1D0; } }
L_004AF1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1BCu);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AF1BCu) [[unlikely]] return; }
L_004AF1BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF1CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004AF1CCu) [[unlikely]] return; }
L_004AF1CC:
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_004AF1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004AF200; } }
L_004AF1D8:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1E8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF1E8u) [[unlikely]] return; }
L_004AF1E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1F8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF1F8u) [[unlikely]] return; }
L_004AF1F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF1A0u | kUnwind; return; } goto L_004AF1A0; } }
L_004AF200:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AF210:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF288; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AF258; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AF23C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004AF280; } }
L_004AF23C:
    set32(c.r[2], ld32((c.r[5].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 762u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AF27C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AF294; } }
L_004AF258:
    set32(c.r[2], ld32((c.r[5].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF290; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AF27C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AF294; } }
L_004AF27C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004AF280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AF294; } }
L_004AF288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AF294; } }
L_004AF290:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AF294:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AF2A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF2C8u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF2C8u) [[unlikely]] return; }
L_004AF2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF5EC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AF308; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AF2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[18].w[0] + 92u));  if (t) { goto L_004AF31C; } }
L_004AF2F0:
    set32(c.r[4], 0u + 55u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF300u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004AF300u) [[unlikely]] return; }
L_004AF300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AF318; } }
L_004AF308:
    set32(c.r[4], 0u + 56u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF318u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004AF318u) [[unlikely]] return; }
L_004AF318:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 92u));
    c.budget -= 1;
L_004AF31C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 92u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF3D8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 48u));
    c.budget -= 1;
L_004AF334:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AF348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];  if (t) { goto L_004AF34C; } }
L_004AF348:
    set32(c.r[16], 0u + 7u);
    c.budget -= 1;
L_004AF34C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004AF364; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[4] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[18].w[0] + 36u));  if (t) { goto L_004AF370; } }
L_004AF364:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[4] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.budget -= 3;
L_004AF370:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = 0u;
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF3C0u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x004AF3C0u) [[unlikely]] return; }
L_004AF3C0:
    set32(c.r[6], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_004AF50C; } }
L_004AF3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004AF5F0; } }
L_004AF3D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF3E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x004AF3E4u) [[unlikely]] return; }
L_004AF3E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF3F0u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_007D(c, 25u, depth + 1u); else { c.pc = 0x003F4210u; return; } if (c.pc != 0x004AF3F0u) [[unlikely]] return; }
L_004AF3F0:
    c.f[3] = ld32((c.r[18].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[4] = 0u;
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF42Cu); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_007C(c, 213u, depth + 1u); else { c.pc = 0x003F3970u; return; } if (c.pc != 0x004AF42Cu) [[unlikely]] return; }
L_004AF42C:
    set32(c.r[4], 0u + 63u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF43Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004AF43Cu) [[unlikely]] return; }
L_004AF43C:
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF450u); set32(c.r[4], c.r[18].w[0] + 96u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004AF450u) [[unlikely]] return; }
L_004AF450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF458u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0038(c, 421u, depth + 1u); else { c.pc = 0x002E2E30u; return; } if (c.pc != 0x004AF458u) [[unlikely]] return; }
L_004AF458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF460u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0038(c, 419u, depth + 1u); else { c.pc = 0x002E2DF0u; return; } if (c.pc != 0x004AF460u) [[unlikely]] return; }
L_004AF460:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF46Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 416u, depth + 1u); else { c.pc = 0x002E2D80u; return; } if (c.pc != 0x004AF46Cu) [[unlikely]] return; }
L_004AF46C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF474u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AF474u) [[unlikely]] return; }
L_004AF474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF4E4; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF4B0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF498u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AF498u) [[unlikely]] return; }
L_004AF498:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF4A8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF4A8u) [[unlikely]] return; }
L_004AF4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004AF4D4; } }
L_004AF4B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF4C0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF4C0u) [[unlikely]] return; }
L_004AF4C0:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF4D0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AF4D0u) [[unlikely]] return; }
L_004AF4D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004AF4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF4DCu);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004AF4DCu) [[unlikely]] return; }
L_004AF4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF334u | kUnwind; return; } goto L_004AF334; } }
L_004AF4E4:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF4F4u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF4F4u) [[unlikely]] return; }
L_004AF4F4:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF504u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF504u) [[unlikely]] return; }
L_004AF504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF4D0u | kUnwind; return; } goto L_004AF4D0; } }
L_004AF50C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004AF524; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004AF540; } }
L_004AF524:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004AF540:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 94u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004AF558; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004AF574; } }
L_004AF558:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004AF574:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
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
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF5E4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 103u, depth + 1u); else { c.pc = 0x00499880u; return; } if (c.pc != 0x004AF5E4u) [[unlikely]] return; }
L_004AF5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF3D0u | kUnwind; return; } goto L_004AF3D0; } }
L_004AF5EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004AF5F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004AF610:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 92u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_004AF620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004AF640; } }
L_004AF638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004AF658; } }
L_004AF640:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[4].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF650u); set32(c.r[4], c.r[2].w[0] + 512u);  if (depth < kMaxDepth) unit_00A6(c, 93u, depth + 1u); else { c.pc = 0x004994E0u; return; } if (c.pc != 0x004AF650u) [[unlikely]] return; }
L_004AF650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF638u | kUnwind; return; } goto L_004AF638; } }
L_004AF658:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AF660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF674u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AF674u) [[unlikely]] return; }
L_004AF674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF6E4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF6B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF698u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AF698u) [[unlikely]] return; }
L_004AF698:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF6A8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF6A8u) [[unlikely]] return; }
L_004AF6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AF6D4; } }
L_004AF6B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF6C0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF6C0u) [[unlikely]] return; }
L_004AF6C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF6D0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AF6D0u) [[unlikely]] return; }
L_004AF6D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004AF6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF6DCu);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004AF6DCu) [[unlikely]] return; }
L_004AF6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AF70C; } }
L_004AF6E4:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF6F4u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF6F4u) [[unlikely]] return; }
L_004AF6F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF704u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF704u) [[unlikely]] return; }
L_004AF704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF6D0u | kUnwind; return; } goto L_004AF6D0; } }
L_004AF70C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AF720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF734u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AF734u) [[unlikely]] return; }
L_004AF734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF7A4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AF770; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF758u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AF758u) [[unlikely]] return; }
L_004AF758:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF768u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF768u) [[unlikely]] return; }
L_004AF768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 92u));  if (t) { goto L_004AF794; } }
L_004AF770:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF780u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF780u) [[unlikely]] return; }
L_004AF780:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF790u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AF790u) [[unlikely]] return; }
L_004AF790:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 92u));
    c.budget -= 1;
L_004AF794:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004AF7CC; } }
L_004AF79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AF7DC; } }
L_004AF7A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF7B4u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF7B4u) [[unlikely]] return; }
L_004AF7B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF7C4u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AF7C4u) [[unlikely]] return; }
L_004AF7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF790u | kUnwind; return; } goto L_004AF790; } }
L_004AF7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF7D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004AF7D4u) [[unlikely]] return; }
L_004AF7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF79Cu | kUnwind; return; } goto L_004AF79C; } }
L_004AF7DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AF7F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[4] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[5] = 0u;
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.f[6] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    c.f[7] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[4].w[0] + 40u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.r[3].d[0] = ~(c.r[6].d[0] | 0ull);
    c.f[2] = ld32((c.r[5].w[0] + 40u));
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[7]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    st32((c.r[29].w[0] + 56u), c.f[2]);
    c.budget -= 29;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 52u), c.f[1]);  if (t) { goto L_004AFA3C; } }
L_004AF864:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AFA0C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004AFA0C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004AFA0C; } }
    st32((c.r[29].w[0] + 64u), c.f[7]);
    set32(c.r[3], c.r[29].w[0] + 68u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AF8F4; } }
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 51u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF8D0u); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004AF8D0u) [[unlikely]] return; }
L_004AF8D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AF934; } }
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[5], 0u + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF8ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 148u, depth + 1u); else { c.pc = 0x00416AD0u; return; } if (c.pc != 0x004AF8ECu) [[unlikely]] return; }
L_004AF8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[16].w[0] + 92u));  if (t) { goto L_004AF938; } }
L_004AF8F4:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 53u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF918u); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004AF918u) [[unlikely]] return; }
L_004AF918:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AF934; } }
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[5], 0u + 54u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF934u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 148u, depth + 1u); else { c.pc = 0x00416AD0u; return; } if (c.pc != 0x004AF934u) [[unlikely]] return; }
L_004AF934:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 92u));
    c.budget -= 1;
L_004AF938:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004AF94C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004AF968; } }
L_004AF94C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004AF968:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 94u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004AF980; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004AF99C; } }
L_004AF980:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004AF99C:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
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
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFA04u); set32(c.r[4], c.r[2].w[0] + 512u);  if (depth < kMaxDepth) unit_00A6(c, 107u, depth + 1u); else { c.pc = 0x004998E0u; return; } if (c.pc != 0x004AFA04u) [[unlikely]] return; }
L_004AFA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004AFA34; } }
L_004AFA0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AFA8C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_004AFA8C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFA2Cu); set32(c.r[4], c.r[2].w[0] + 512u);  if (depth < kMaxDepth) unit_00A6(c, 93u, depth + 1u); else { c.pc = 0x004994E0u; return; } if (c.pc != 0x004AFA2Cu) [[unlikely]] return; }
L_004AFA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFA34u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004AFA34u) [[unlikely]] return; }
L_004AFA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AFA90; } }
L_004AFA3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 3652u)));
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[7]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    st32((c.r[29].w[0] + 40u), c.f[3]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 32u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF864u | kUnwind; return; } goto L_004AF864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF864u | kUnwind; return; } goto L_004AF864; } }
L_004AFA8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004AFA90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004AFAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFAC4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AFAC4u) [[unlikely]] return; }
L_004AFAC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004AFB18; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFAE4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AFAE4u) [[unlikely]] return; }
L_004AFAE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AFB18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFB00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AFB00u) [[unlikely]] return; }
L_004AFB00:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFB18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x004AFB18u) [[unlikely]] return; }
L_004AFB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AFB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004AFB50; } }
L_004AFB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004AFB68; } }
L_004AFB50:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[4].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFB60u); set32(c.r[4], c.r[2].w[0] + 512u);  if (depth < kMaxDepth) unit_00A6(c, 88u, depth + 1u); else { c.pc = 0x004993E0u; return; } if (c.pc != 0x004AFB60u) [[unlikely]] return; }
L_004AFB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AFB48u | kUnwind; return; } goto L_004AFB48; } }
L_004AFB68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AFB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFB88u); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_0038(c, 421u, depth + 1u); else { c.pc = 0x002E2E30u; return; } if (c.pc != 0x004AFB88u) [[unlikely]] return; }
L_004AFB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFB90u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0038(c, 419u, depth + 1u); else { c.pc = 0x002E2DF0u; return; } if (c.pc != 0x004AFB90u) [[unlikely]] return; }
L_004AFB90:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AFBA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFBA4u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004AFBA4u) [[unlikely]] return; }
L_004AFBA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFBACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AFBACu) [[unlikely]] return; }
L_004AFBAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AFD64; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AFBE8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFBD0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AFBD0u) [[unlikely]] return; }
L_004AFBD0:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFBE0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AFBE0u) [[unlikely]] return; }
L_004AFBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 48u));  if (t) { goto L_004AFC0C; } }
L_004AFBE8:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFBF8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AFBF8u) [[unlikely]] return; }
L_004AFBF8:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFC08u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AFC08u) [[unlikely]] return; }
L_004AFC08:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 1;
L_004AFC0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AFCA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 4243u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004AFC30; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004AFC4C; } }
L_004AFC30:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004AFC4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43050000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st16((c.r[16].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 94u));
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004AFD38; } }
L_004AFCA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 4237u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004AFCC4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004AFCE0; } }
L_004AFCC4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004AFCE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st16((c.r[16].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 94u));
    st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 22;
L_004AFD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFD40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AFD40u) [[unlikely]] return; }
L_004AFD40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AFD8C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 92u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AFD8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFD5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004AFD5Cu) [[unlikely]] return; }
L_004AFD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AFD90; } }
L_004AFD64:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFD74u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AFD74u) [[unlikely]] return; }
L_004AFD74:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFD84u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AFD84u) [[unlikely]] return; }
L_004AFD84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AFC08u | kUnwind; return; } goto L_004AFC08; } }
L_004AFD8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004AFD90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AFDA0:
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 10336u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  c.pc = t; return; }
L_004AFDD0:
    ld128((c.r[5].w[0]) & ~15u, c.r[11]);
    set32(c.r[3], 0u - 1u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 32u)));
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[11]);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 52u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[4].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  c.pc = t; return; }
L_004AFE20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AFEB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 28224u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AFE6C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AFE6C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFE6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AFE6Cu) [[unlikely]] return; }
L_004AFE6C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004AFE98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004AFE98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004AFE98:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004AFEB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFEB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AFEB0u) [[unlikely]] return; }
L_004AFEB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AFED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[9], 0u - 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], 0u - 3u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 12672u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[2], c.r[2].w[0] + 28224u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFF7Cu); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004AFF7Cu) [[unlikely]] return; }
L_004AFF7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AFF90; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFF90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 165u, depth + 1u); else { c.pc = 0x002AD9D0u; return; } if (c.pc != 0x004AFF90u) [[unlikely]] return; }
L_004AFF90:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AFFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFFC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AFFC4u) [[unlikely]] return; }
L_004AFFC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AFFDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFFD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004AFFD4u) [[unlikely]] return; }
L_004AFFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_004AFFE8; } }
L_004AFFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFFE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004AFFE4u) [[unlikely]] return; }
L_004AFFE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_004AFFE8:
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
}

}

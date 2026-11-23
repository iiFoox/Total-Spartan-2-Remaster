#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B8[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98,
    0, 0, 0, 99, 0, 0, 0, 100, 101, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156,
    0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0,
    0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004E0000;
    case 2u: goto L_004E0008;
    case 3u: goto L_004E0010;
    case 4u: goto L_004E00A0;
    case 5u: goto L_004E00BC;
    case 6u: goto L_004E00C4;
    case 7u: goto L_004E00D8;
    case 8u: goto L_004E0190;
    case 9u: goto L_004E01C8;
    case 10u: goto L_004E01D0;
    case 11u: goto L_004E02B0;
    case 12u: goto L_004E02D8;
    case 13u: goto L_004E02EC;
    case 14u: goto L_004E030C;
    case 15u: goto L_004E0330;
    case 16u: goto L_004E0354;
    case 17u: goto L_004E035C;
    case 18u: goto L_004E036C;
    case 19u: goto L_004E0490;
    case 20u: goto L_004E04A8;
    case 21u: goto L_004E04B0;
    case 22u: goto L_004E0580;
    case 23u: goto L_004E0598;
    case 24u: goto L_004E05B8;
    case 25u: goto L_004E05D0;
    case 26u: goto L_004E05E8;
    case 27u: goto L_004E05F0;
    case 28u: goto L_004E06C0;
    case 29u: goto L_004E06D8;
    case 30u: goto L_004E06F8;
    case 31u: goto L_004E0710;
    case 32u: goto L_004E072C;
    case 33u: goto L_004E0740;
    case 34u: goto L_004E0750;
    case 35u: goto L_004E0770;
    case 36u: goto L_004E0788;
    case 37u: goto L_004E0790;
    case 38u: goto L_004E0820;
    case 39u: goto L_004E0838;
    case 40u: goto L_004E0840;
    case 41u: goto L_004E08E0;
    case 42u: goto L_004E0910;
    case 43u: goto L_004E0934;
    case 44u: goto L_004E0948;
    case 45u: goto L_004E0960;
    case 46u: goto L_004E0990;
    case 47u: goto L_004E09C0;
    case 48u: goto L_004E09DC;
    case 49u: goto L_004E09F0;
    case 50u: goto L_004E0A08;
    case 51u: goto L_004E0A1C;
    case 52u: goto L_004E0A30;
    case 53u: goto L_004E0A4C;
    case 54u: goto L_004E0A54;
    case 55u: goto L_004E0A64;
    case 56u: goto L_004E0A8C;
    case 57u: goto L_004E0B0C;
    case 58u: goto L_004E0B1C;
    case 59u: goto L_004E0B28;
    case 60u: goto L_004E0B50;
    case 61u: goto L_004E0B74;
    case 62u: goto L_004E0B88;
    case 63u: goto L_004E0BA0;
    case 64u: goto L_004E0BC4;
    case 65u: goto L_004E0BD4;
    case 66u: goto L_004E0BF0;
    case 67u: goto L_004E0C0C;
    case 68u: goto L_004E0C20;
    case 69u: goto L_004E0C48;
    case 70u: goto L_004E0C60;
    case 71u: goto L_004E0C84;
    case 72u: goto L_004E0C98;
    case 73u: goto L_004E0D18;
    case 74u: goto L_004E0D24;
    case 75u: goto L_004E0D50;
    case 76u: goto L_004E0D74;
    case 77u: goto L_004E0D88;
    case 78u: goto L_004E0D90;
    case 79u: goto L_004E0DA0;
    case 80u: goto L_004E0DA8;
    case 81u: goto L_004E0DBC;
    case 82u: goto L_004E0E28;
    case 83u: goto L_004E0E50;
    case 84u: goto L_004E0E74;
    case 85u: goto L_004E0E88;
    case 86u: goto L_004E0E98;
    case 87u: goto L_004E0EBC;
    case 88u: goto L_004E0ECC;
    case 89u: goto L_004E0EF0;
    case 90u: goto L_004E0F14;
    case 91u: goto L_004E0F1C;
    case 92u: goto L_004E0F48;
    case 93u: goto L_004E0F64;
    case 94u: goto L_004E0F7C;
    case 95u: goto L_004E0FB0;
    case 96u: goto L_004E0FD8;
    case 97u: goto L_004E0FF4;
    case 98u: goto L_004E0FFC;
    case 99u: goto L_004E100C;
    case 100u: goto L_004E101C;
    case 101u: goto L_004E1020;
    case 102u: goto L_004E1024;
    case 103u: goto L_004E103C;
    case 104u: goto L_004E104C;
    case 105u: goto L_004E105C;
    case 106u: goto L_004E1068;
    case 107u: goto L_004E1078;
    case 108u: goto L_004E1088;
    case 109u: goto L_004E10A0;
    case 110u: goto L_004E10D0;
    case 111u: goto L_004E10E0;
    case 112u: goto L_004E1104;
    case 113u: goto L_004E1108;
    case 114u: goto L_004E1118;
    case 115u: goto L_004E1138;
    case 116u: goto L_004E1148;
    case 117u: goto L_004E1154;
    case 118u: goto L_004E1180;
    case 119u: goto L_004E11AC;
    case 120u: goto L_004E11C0;
    case 121u: goto L_004E11E0;
    case 122u: goto L_004E11F0;
    case 123u: goto L_004E11FC;
    case 124u: goto L_004E1214;
    case 125u: goto L_004E1250;
    case 126u: goto L_004E1268;
    case 127u: goto L_004E127C;
    case 128u: goto L_004E1290;
    case 129u: goto L_004E12AC;
    case 130u: goto L_004E12E8;
    case 131u: goto L_004E1300;
    case 132u: goto L_004E1310;
    case 133u: goto L_004E1330;
    case 134u: goto L_004E134C;
    case 135u: goto L_004E1360;
    case 136u: goto L_004E1444;
    case 137u: goto L_004E147C;
    case 138u: goto L_004E14B0;
    case 139u: goto L_004E14D0;
    case 140u: goto L_004E14F4;
    case 141u: goto L_004E1510;
    case 142u: goto L_004E1538;
    case 143u: goto L_004E1548;
    case 144u: goto L_004E1570;
    case 145u: goto L_004E1594;
    case 146u: goto L_004E15B0;
    case 147u: goto L_004E15D0;
    case 148u: goto L_004E15E0;
    case 149u: goto L_004E1600;
    case 150u: goto L_004E162C;
    case 151u: goto L_004E1634;
    case 152u: goto L_004E16EC;
    case 153u: goto L_004E170C;
    case 154u: goto L_004E17B0;
    case 155u: goto L_004E17E0;
    case 156u: goto L_004E17FC;
    case 157u: goto L_004E1804;
    case 158u: goto L_004E1818;
    case 159u: goto L_004E18A0;
    case 160u: goto L_004E18BC;
    case 161u: goto L_004E18C4;
    case 162u: goto L_004E1900;
    case 163u: goto L_004E1990;
    case 164u: goto L_004E19AC;
    case 165u: goto L_004E19B4;
    case 166u: goto L_004E19C4;
    case 167u: goto L_004E1A40;
    case 168u: goto L_004E1A64;
    case 169u: goto L_004E1A78;
    case 170u: goto L_004E1A88;
    case 171u: goto L_004E1AA8;
    case 172u: goto L_004E1AB8;
    case 173u: goto L_004E1AE0;
    case 174u: goto L_004E1B04;
    case 175u: goto L_004E1B18;
    case 176u: goto L_004E1B28;
    case 177u: goto L_004E1B48;
    case 178u: goto L_004E1B58;
    case 179u: goto L_004E1B80;
    case 180u: goto L_004E1BA4;
    case 181u: goto L_004E1BB8;
    case 182u: goto L_004E1BF8;
    case 183u: goto L_004E1C1C;
    case 184u: goto L_004E1C2C;
    case 185u: goto L_004E1C50;
    case 186u: goto L_004E1C6C;
    case 187u: goto L_004E1C80;
    case 188u: goto L_004E1CA4;
    case 189u: goto L_004E1CC0;
    case 190u: goto L_004E1CE4;
    case 191u: goto L_004E1D00;
    case 192u: goto L_004E1D20;
    case 193u: goto L_004E1D40;
    case 194u: goto L_004E1D70;
    case 195u: goto L_004E1D84;
    case 196u: goto L_004E1D94;
    case 197u: goto L_004E1DC0;
    case 198u: goto L_004E1DEC;
    case 199u: goto L_004E1E58;
    case 200u: goto L_004E1E80;
    case 201u: goto L_004E1E90;
    case 202u: goto L_004E1E98;
    case 203u: goto L_004E1F10;
    case 204u: goto L_004E1F2C;
    case 205u: goto L_004E1F40;
    case 206u: goto L_004E1F5C;
    case 207u: goto L_004E1F80;
    case 208u: goto L_004E1FA4;
    case 209u: goto L_004E1FB8;
    case 210u: goto L_004E1FE0;
    case 211u: goto L_004E2010;
    case 212u: goto L_004E202C;
    case 213u: goto L_004E2034;
    case 214u: goto L_004E2040;
    case 215u: goto L_004E20E0;
    case 216u: goto L_004E2104;
    case 217u: goto L_004E2118;
    case 218u: goto L_004E2144;
    case 219u: goto L_004E2160;
    case 220u: goto L_004E218C;
    case 221u: goto L_004E2194;
    case 222u: goto L_004E2228;
    case 223u: goto L_004E2240;
    case 224u: goto L_004E2340;
    case 225u: goto L_004E2350;
    case 226u: goto L_004E237C;
    case 227u: goto L_004E2384;
    case 228u: goto L_004E23B8;
    case 229u: goto L_004E23CC;
    case 230u: goto L_004E24A0;
    case 231u: goto L_004E24CC;
    case 232u: goto L_004E25B0;
    case 233u: goto L_004E25D0;
    case 234u: goto L_004E25F4;
    case 235u: goto L_004E2618;
    case 236u: goto L_004E2640;
    case 237u: goto L_004E2650;
    case 238u: goto L_004E2670;
    case 239u: goto L_004E2694;
    case 240u: goto L_004E269C;
    case 241u: goto L_004E26B0;
    case 242u: goto L_004E26C4;
    case 243u: goto L_004E26DC;
    case 244u: goto L_004E27C0;
    case 245u: goto L_004E27DC;
    case 246u: goto L_004E27E4;
    case 247u: goto L_004E27F4;
    case 248u: goto L_004E2870;
    case 249u: goto L_004E28CC;
    case 250u: goto L_004E28D8;
    case 251u: goto L_004E28E4;
    case 252u: goto L_004E29A0;
    case 253u: goto L_004E29E0;
    case 254u: goto L_004E29FC;
    case 255u: goto L_004E2A10;
    case 256u: goto L_004E2A2C;
    case 257u: goto L_004E2A50;
    case 258u: goto L_004E2A70;
    case 259u: goto L_004E2A88;
    case 260u: goto L_004E2A94;
    case 261u: goto L_004E2AA4;
    case 262u: goto L_004E2AD0;
    case 263u: goto L_004E2AEC;
    case 264u: goto L_004E2B00;
    case 265u: goto L_004E2B0C;
    case 266u: goto L_004E2B30;
    case 267u: goto L_004E2B54;
    case 268u: goto L_004E2B70;
    case 269u: goto L_004E2B90;
    case 270u: goto L_004E2BA0;
    case 271u: goto L_004E2BC0;
    case 272u: goto L_004E2BEC;
    case 273u: goto L_004E2C00;
    case 274u: goto L_004E2C58;
    case 275u: goto L_004E2C74;
    case 276u: goto L_004E2CC0;
    case 277u: goto L_004E2CD8;
    case 278u: goto L_004E2D10;
    case 279u: goto L_004E2D34;
    case 280u: goto L_004E2D3C;
    case 281u: goto L_004E2D58;
    case 282u: goto L_004E2DF0;
    case 283u: goto L_004E2E14;
    case 284u: goto L_004E2E28;
    case 285u: goto L_004E2E48;
    case 286u: goto L_004E2E58;
    case 287u: goto L_004E2E80;
    case 288u: goto L_004E2EA4;
    case 289u: goto L_004E2EBC;
    case 290u: goto L_004E2EE4;
    case 291u: goto L_004E2F00;
    case 292u: goto L_004E2F14;
    case 293u: goto L_004E2F30;
    case 294u: goto L_004E2F4C;
    case 295u: goto L_004E2F60;
    case 296u: goto L_004E2F70;
    case 297u: goto L_004E2F90;
    case 298u: goto L_004E2FC8;
    case 299u: goto L_004E2FDC;
    case 300u: goto L_004E3000;
    case 301u: goto L_004E3028;
    case 302u: goto L_004E303C;
    case 303u: goto L_004E3080;
    case 304u: goto L_004E309C;
    case 305u: goto L_004E30B0;
    case 306u: goto L_004E30D8;
    case 307u: goto L_004E30F0;
    case 308u: goto L_004E3114;
    case 309u: goto L_004E311C;
    case 310u: goto L_004E3160;
    case 311u: goto L_004E3178;
    case 312u: goto L_004E3250;
    case 313u: goto L_004E3300;
    case 314u: goto L_004E3358;
    case 315u: goto L_004E33B8;
    case 316u: goto L_004E3410;
    case 317u: goto L_004E3468;
    case 318u: goto L_004E34C0;
    case 319u: goto L_004E351C;
    case 320u: goto L_004E3530;
    case 321u: goto L_004E3554;
    case 322u: goto L_004E3568;
    case 323u: goto L_004E3588;
    case 324u: goto L_004E35B0;
    case 325u: goto L_004E35CC;
    case 326u: goto L_004E35E0;
    case 327u: goto L_004E35F0;
    case 328u: goto L_004E3610;
    case 329u: goto L_004E3634;
    case 330u: goto L_004E3648;
    case 331u: goto L_004E36BC;
    case 332u: goto L_004E36E0;
    case 333u: goto L_004E373C;
    case 334u: goto L_004E3750;
    case 335u: goto L_004E3774;
    case 336u: goto L_004E377C;
    case 337u: goto L_004E3818;
    case 338u: goto L_004E38D0;
    case 339u: goto L_004E38EC;
    case 340u: goto L_004E38F4;
    case 341u: goto L_004E3908;
    case 342u: goto L_004E39A0;
    case 343u: goto L_004E39C4;
    case 344u: goto L_004E39D8;
    case 345u: goto L_004E39E8;
    case 346u: goto L_004E3A04;
    case 347u: goto L_004E3A14;
    case 348u: goto L_004E3A30;
    case 349u: goto L_004E3A90;
    case 350u: goto L_004E3AAC;
    case 351u: goto L_004E3ACC;
    case 352u: goto L_004E3B54;
    case 353u: goto L_004E3B5C;
    case 354u: goto L_004E3B64;
    case 355u: goto L_004E3B70;
    case 356u: goto L_004E3B88;
    case 357u: goto L_004E3C80;
    case 358u: goto L_004E3CA0;
    case 359u: goto L_004E3CA8;
    case 360u: goto L_004E3D40;
    case 361u: goto L_004E3D5C;
    case 362u: goto L_004E3D70;
    case 363u: goto L_004E3DA8;
    case 364u: goto L_004E3DC0;
    case 365u: goto L_004E3DEC;
    case 366u: goto L_004E3E00;
    case 367u: goto L_004E3EB8;
    case 368u: goto L_004E3EE0;
    case 369u: goto L_004E3F20;
    case 370u: goto L_004E3F28;
    case 371u: goto L_004E3F74;
    case 372u: goto L_004E3F88;
    case 373u: goto L_004E3F98;
    case 374u: goto L_004E3FD0;
    case 375u: goto L_004E3FE0;
    default: bad_entry(c, 0x004E0000u); return;
    }
L_004E0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0008u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0008u) [[unlikely]] return; }
L_004E0008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E0018; } }
L_004E0010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004E0088; } }
L_004E0018:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[9], ld32((c.r[16].w[0] + 56u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], c.r[8].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], c.r[3].w[0] + 32416u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[9].w[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0010u | kUnwind; return; } goto L_004E0010; } }
L_004E0088:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E00A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 60u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E00BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E00BCu) [[unlikely]] return; }
L_004E00BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E00E0; } }
L_004E00C4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E00D8u); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_009C(c, 235u, depth + 1u); else { c.pc = 0x00472380u; return; } if (c.pc != 0x004E00D8u) [[unlikely]] return; }
L_004E00D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E0170; } }
L_004E00E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u - 3u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] - 12672u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 18352u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 36;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E00C4u | kUnwind; return; } goto L_004E00C4; } }
L_004E0170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E0190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[23] = ld32((c.r[29].w[0] + 60u));
    c.f[22] = ld32((c.r[16].w[0] + 12u));
    c.f[21] = ld32((c.r[16].w[0] + 16u));
    c.f[20] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E01C8u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E01C8u) [[unlikely]] return; }
L_004E01C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E01D8; } }
L_004E01D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004E0294; } }
L_004E01D8:
    set32(c.r[13], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[12], ld32((c.r[16].w[0] + 72u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[11], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[10], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[9], c.r[9].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 3u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], c.r[4].w[0] - 12672u);
    set32(c.r[3], c.r[3].w[0] + 16032u);
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 48u), c.f[22]);
    st32((c.r[2].w[0] + 52u), c.f[21]);
    st32((c.r[2].w[0] + 56u), c.f[20]);
    st32((c.r[2].w[0] + 60u), c.f[23]);
    st32((c.r[2].w[0] + 64u), c.r[10].w[0]);
    st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[2].w[0] + 72u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 96u), c.f[0]);
    st8((c.r[2].w[0] + 100u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[2].w[0] + 76u), 0u);
    st32((c.r[2].w[0] + 80u), 0u);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 101u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E01D0u | kUnwind; return; } goto L_004E01D0; } }
L_004E0294:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E02B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 88u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E02D8u); c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E02D8u) [[unlikely]] return; }
L_004E02D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E02F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E02ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 345u, depth + 1u); else { c.pc = 0x00473200u; return; } if (c.pc != 0x004E02ECu) [[unlikely]] return; }
L_004E02EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E02F0:
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 268u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E030Cu); set32(c.r[6], c.r[16].w[0] + 164u);  if (depth < kMaxDepth) unit_009C(c, 325u, depth + 1u); else { c.pc = 0x00472F60u; return; } if (c.pc != 0x004E030Cu) [[unlikely]] return; }
L_004E030C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E0330:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0354u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0354u) [[unlikely]] return; }
L_004E0354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E0374; } }
L_004E035C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E036Cu); set32(c.r[6], c.r[16].w[0] + 116u);  if (depth < kMaxDepth) unit_007A(c, 342u, depth + 1u); else { c.pc = 0x003EBFF0u; return; } if (c.pc != 0x004E036Cu) [[unlikely]] return; }
L_004E036C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E0470; } }
L_004E0374:
    set32(c.r[10], ld32((c.r[16].w[0] + 88u)));
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[9], ld32((c.r[16].w[0] + 80u)));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[8], ld32((c.r[16].w[0] + 72u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[11].d[0] = 0ull & 1ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[19], c.r[19].w[0] - 16352u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[14], c.r[11].w[0] << 2);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[25], 0u - 3u);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[24], c.r[24].w[0] - 27952u);
    set32(c.r[15], 0u + 55u);
    set32(c.r[13], 0u - 5u);
    set32(c.r[12], c.r[12].w[0] - 2848u);
    st32((c.r[17].w[0]), c.r[19].w[0]);
    set32(c.r[11], c.r[11].w[0] - 24080u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[19].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[19].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[25].d[0] = c.r[19].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[18].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st32((c.r[17].w[0]), c.r[24].w[0]);
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = c.r[15].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 25u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[14].d[0];
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0]), c.r[12].w[0]);
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0]), c.r[11].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 70u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[17].w[0] + 71u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[17].w[0] + 80u), c.f[1]);
    c.budget -= 63;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 77u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E035Cu | kUnwind; return; } goto L_004E035C; } }
L_004E0470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E0490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E04A8u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E04A8u) [[unlikely]] return; }
L_004E04A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E04B8; } }
L_004E04B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004E0574; } }
L_004E04B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 41u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 24384u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E04B0u | kUnwind; return; } goto L_004E04B0; } }
L_004E0574:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E0580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0598u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0598u) [[unlikely]] return; }
L_004E0598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E05B8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E05B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 333u, depth + 1u); else { c.pc = 0x003EBD50u; return; } if (c.pc != 0x004E05B8u) [[unlikely]] return; }
L_004E05B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E05D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E05E8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E05E8u) [[unlikely]] return; }
L_004E05E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E05F8; } }
L_004E05F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004E06B4; } }
L_004E05F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 38u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 24688u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E05F0u | kUnwind; return; } goto L_004E05F0; } }
L_004E06B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E06C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E06D8u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E06D8u) [[unlikely]] return; }
L_004E06D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E06F8; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 116u));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E06F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 338u, depth + 1u); else { c.pc = 0x003EBED0u; return; } if (c.pc != 0x004E06F8u) [[unlikely]] return; }
L_004E06F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E0710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E072Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E072Cu) [[unlikely]] return; }
L_004E072C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E0744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 304u, depth + 1u); else { c.pc = 0x004B2D80u; return; } if (c.pc != 0x004E0740u) [[unlikely]] return; }
L_004E0740:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E0744:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0750u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 299u, depth + 1u); else { c.pc = 0x004B2CD0u; return; } if (c.pc != 0x004E0750u) [[unlikely]] return; }
L_004E0750:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E0770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0788u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0788u) [[unlikely]] return; }
L_004E0788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E07A8; } }
L_004E0790:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_004E0810; } }
L_004E07A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 3u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 31552u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0790u | kUnwind; return; } goto L_004E0790; } }
L_004E0810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E0820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0838u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0838u) [[unlikely]] return; }
L_004E0838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E0860; } }
L_004E0840:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_004E08C8; } }
L_004E0860:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 3u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 31840u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0840u | kUnwind; return; } goto L_004E0840; } }
L_004E08C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E08E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[4], 0u + 32u);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0910u); c.r[19].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0910u) [[unlikely]] return; }
L_004E0910:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004E0964; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0934u); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 85u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x004E0934u) [[unlikely]] return; }
L_004E0934:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0948u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004E0948u) [[unlikely]] return; }
L_004E0948:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0960u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 397u, depth + 1u); else { c.pc = 0x00473800u; return; } if (c.pc != 0x004E0960u) [[unlikely]] return; }
L_004E0960:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E0964:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E0990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E09C0u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E09C0u) [[unlikely]] return; }
L_004E09C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E09DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E09DCu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0074(c, 16u, depth + 1u); else { c.pc = 0x003D0350u; return; } if (c.pc != 0x004E09DCu) [[unlikely]] return; }
L_004E09DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E09F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0A08u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0A08u) [[unlikely]] return; }
L_004E0A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E0A1C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0A1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 32u, depth + 1u); else { c.pc = 0x003D0640u; return; } if (c.pc != 0x004E0A1Cu) [[unlikely]] return; }
L_004E0A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E0A30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0A4Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0A4Cu) [[unlikely]] return; }
L_004E0A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E0A94; } }
L_004E0A54:
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[17].w[0])));  if (t) { goto L_004E0B04; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_004E0A64:
    set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0A8Cu); set32(c.r[7], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0074(c, 236u, depth + 1u); else { c.pc = 0x003D35A0u; return; } if (c.pc != 0x004E0A8Cu) [[unlikely]] return; }
L_004E0A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E0B30; } }
L_004E0A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u - 3u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] - 29024u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 24992u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0A54u | kUnwind; return; } goto L_004E0A54; } }
L_004E0B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0B0Cu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0B0Cu) [[unlikely]] return; }
L_004E0B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E0B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0B1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x004E0B1Cu) [[unlikely]] return; }
L_004E0B1C:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0B28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x004E0B28u) [[unlikely]] return; }
L_004E0B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 12u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0A64u | kUnwind; return; } goto L_004E0A64; } }
L_004E0B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E0B50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0B74u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0B74u) [[unlikely]] return; }
L_004E0B74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E0B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0B88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 122u, depth + 1u); else { c.pc = 0x002B1B20u; return; } if (c.pc != 0x004E0B88u) [[unlikely]] return; }
L_004E0B88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E0B8C:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0BA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 121u, depth + 1u); else { c.pc = 0x002B1B10u; return; } if (c.pc != 0x004E0BA0u) [[unlikely]] return; }
L_004E0BA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0BC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E0BC4u) [[unlikely]] return; }
L_004E0BC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0BD4u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E0BD4u) [[unlikely]] return; }
L_004E0BD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E0BF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0C0Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0C0Cu) [[unlikely]] return; }
L_004E0C0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E0C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0C20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 335u, depth + 1u); else { c.pc = 0x004B32B0u; return; } if (c.pc != 0x004E0C20u) [[unlikely]] return; }
L_004E0C20:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E0C24:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0C48u); st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 331u, depth + 1u); else { c.pc = 0x004B3210u; return; } if (c.pc != 0x004E0C48u) [[unlikely]] return; }
L_004E0C48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E0C60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0C84u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0C84u) [[unlikely]] return; }
L_004E0C84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E0C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0C98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 323u, depth + 1u); else { c.pc = 0x004FEDC0u; return; } if (c.pc != 0x004E0C98u) [[unlikely]] return; }
L_004E0C98:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E0C9C:
    set32(c.r[7], c.r[29].w[0] + 68u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[3], c.r[29].w[0] + 73u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[7].w[0]), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st8((c.r[29].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0D18u); set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 314u, depth + 1u); else { c.pc = 0x004FEC40u; return; } if (c.pc != 0x004E0D18u) [[unlikely]] return; }
L_004E0D18:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E0D2C; } }
L_004E0D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E0D34; } }
L_004E0D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 16092u), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0D24u | kUnwind; return; } goto L_004E0D24; } }
L_004E0D34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E0D50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 432u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0D74u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0D74u) [[unlikely]] return; }
L_004E0D74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E0DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0D88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 280u, depth + 1u); else { c.pc = 0x004AEE70u; return; } if (c.pc != 0x004E0D88u) [[unlikely]] return; }
L_004E0D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E0DC8; } }
L_004E0D90:
    c.f[13] = ld32((c.r[16].w[0] + 84u));
    c.f[14] = ld32((c.r[16].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0DA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 245u, depth + 1u); else { c.pc = 0x004AE8D0u; return; } if (c.pc != 0x004E0DA0u) [[unlikely]] return; }
L_004E0DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E0DC0; } }
L_004E0DA8:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.f[12] = ld32((c.r[16].w[0] + 68u));
    c.f[13] = ld32((c.r[16].w[0] + 76u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0DBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 238u, depth + 1u); else { c.pc = 0x004AE3E0u; return; } if (c.pc != 0x004E0DBCu) [[unlikely]] return; }
L_004E0DBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E0DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004E0E3C; } }
L_004E0DC8:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[10], c.r[16].w[0] + 140u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 92u));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0E28u); set32(c.r[11], c.r[16].w[0] + 100u);  if (depth < kMaxDepth) unit_00AB(c, 263u, depth + 1u); else { c.pc = 0x004AEBB0u; return; } if (c.pc != 0x004E0E28u) [[unlikely]] return; }
L_004E0E28:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0DA8u | kUnwind; return; } goto L_004E0DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0D90u | kUnwind; return; } goto L_004E0D90; } }
L_004E0E3C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004E0E50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0E74u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0E74u) [[unlikely]] return; }
L_004E0E74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E0E8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0E88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 53u, depth + 1u); else { c.pc = 0x002B0B60u; return; } if (c.pc != 0x004E0E88u) [[unlikely]] return; }
L_004E0E88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E0E8C:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0E98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 52u, depth + 1u); else { c.pc = 0x002B0B50u; return; } if (c.pc != 0x004E0E98u) [[unlikely]] return; }
L_004E0E98:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0EBCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E0EBCu) [[unlikely]] return; }
L_004E0EBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0ECCu); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E0ECCu) [[unlikely]] return; }
L_004E0ECC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E0EF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0F14u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0F14u) [[unlikely]] return; }
L_004E0F14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E0F6C; } }
L_004E0F1C:
    c.f[2] = ld32((c.r[17].w[0] + 76u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    set32(c.r[6], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0F48u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002C(c, 82u, depth + 1u); else { c.pc = 0x002B1200u; return; } if (c.pc != 0x004E0F48u) [[unlikely]] return; }
L_004E0F48:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0F64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E0F64u) [[unlikely]] return; }
L_004E0F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E0F8C; } }
L_004E0F6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 35u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0F7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x004E0F7Cu) [[unlikely]] return; }
L_004E0F7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 24416u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0F1Cu | kUnwind; return; } goto L_004E0F1C; } }
L_004E0F8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E0FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004E1044; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_004E0FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E1070; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E1004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0FF4u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E0FF4u) [[unlikely]] return; }
L_004E0FF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E1090; } }
L_004E0FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_004E1024; } }
L_004E1004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E100Cu); set32(c.r[4], 0u + 976u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E100Cu) [[unlikely]] return; }
L_004E100C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E101C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E101Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 2u, depth + 1u); else { c.pc = 0x003D00A0u; return; } if (c.pc != 0x004E101Cu) [[unlikely]] return; }
L_004E101C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1020:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_004E1024:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E103Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E103Cu) [[unlikely]] return; }
L_004E103C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E10B4; } }
L_004E1044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E104Cu); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E104Cu) [[unlikely]] return; }
L_004E104C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E105C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E105Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x004E105Cu) [[unlikely]] return; }
L_004E105C:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1068u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x004E1068u) [[unlikely]] return; }
L_004E1068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0FD8u | kUnwind; return; } goto L_004E0FD8; } }
L_004E1070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1078u); set32(c.r[4], 0u + 992u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1078u) [[unlikely]] return; }
L_004E1078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E1088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1088u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 165u, depth + 1u); else { c.pc = 0x003C9E50u; return; } if (c.pc != 0x004E1088u) [[unlikely]] return; }
L_004E1088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1020u | kUnwind; return; } goto L_004E1020; } }
L_004E1090:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E10A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x004E10A0u) [[unlikely]] return; }
L_004E10A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 6976u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E0FFCu | kUnwind; return; } goto L_004E0FFC; } }
L_004E10B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E10D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004E10E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[5].w[0])));  if (t) { goto L_004E1130; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 1;
L_004E1104:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E1108:
    set32(c.r[6], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1118u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 233u, depth + 1u); else { c.pc = 0x003D3550u; return; } if (c.pc != 0x004E1118u) [[unlikely]] return; }
L_004E1118:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1108u | kUnwind; return; } goto L_004E1108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E115C; } }
L_004E1130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1138u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1138u) [[unlikely]] return; }
L_004E1138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E1148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1148u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x004E1148u) [[unlikely]] return; }
L_004E1148:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1154u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x004E1154u) [[unlikely]] return; }
L_004E1154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 29096u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1104u | kUnwind; return; } goto L_004E1104; } }
L_004E115C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E1180:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E11ACu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E11ACu) [[unlikely]] return; }
L_004E11AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004E11C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E11C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 380u, depth + 1u); else { c.pc = 0x003FFD70u; return; } if (c.pc != 0x004E11C0u) [[unlikely]] return; }
L_004E11C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E11C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 144u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 140u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E11E0u); c.r[7].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_007F(c, 374u, depth + 1u); else { c.pc = 0x003FFC80u; return; } if (c.pc != 0x004E11E0u) [[unlikely]] return; }
L_004E11E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004E11F8; } }
L_004E11F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004E1230; } }
L_004E11F8:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004E11FC:
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1214u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 373u, depth + 1u); else { c.pc = 0x003FFC60u; return; } if (c.pc != 0x004E1214u) [[unlikely]] return; }
L_004E1214:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E11FCu | kUnwind; return; } goto L_004E11FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E11F0u | kUnwind; return; } goto L_004E11F0; } }
L_004E1230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004E1250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1268u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1268u) [[unlikely]] return; }
L_004E1268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E127C; } }
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E127Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 409u, depth + 1u); else { c.pc = 0x004B3F00u; return; } if (c.pc != 0x004E127Cu) [[unlikely]] return; }
L_004E127C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E1290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_004E12C8; } }
L_004E12AC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E12ACu | kUnwind; return; } goto L_004E12AC; } }
L_004E12C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], 0u + 28u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E12E8u); st8((c.r[29].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E12E8u) [[unlikely]] return; }
L_004E12E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E1300; } }
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1300u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 413u, depth + 1u); else { c.pc = 0x004B3FF0u; return; } if (c.pc != 0x004E1300u) [[unlikely]] return; }
L_004E1300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E1310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1330u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1330u) [[unlikely]] return; }
L_004E1330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E134C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E134Cu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x004FEEE0u; return; } if (c.pc != 0x004E134Cu) [[unlikely]] return; }
L_004E134C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E1360:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.f[4] = ld32((c.r[16].w[0] + 60u));
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[5].w[0] + 112u), c.f[2]);
    st32((c.r[5].w[0] + 116u), c.f[4]);
    st32((c.r[5].w[0] + 120u), c.f[3]);
    st32((c.r[5].w[0] + 124u), c.f[1]);
    c.f[3] = ld32((c.r[16].w[0] + 72u));
    c.f[2] = ld32((c.r[16].w[0] + 76u));
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[5].w[0] + 128u), c.f[1]);
    st32((c.r[5].w[0] + 132u), c.f[3]);
    st32((c.r[5].w[0] + 136u), c.f[2]);
    st32((c.r[5].w[0] + 140u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    st8((c.r[5].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 145u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 146u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    st8((c.r[5].w[0] + 147u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 148u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 149u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    st8((c.r[5].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 151u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 152u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 153u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    st8((c.r[5].w[0] + 164u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 165u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 166u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 167u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[5], c.r[28].w[0] - 30888u);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1444u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 250u, depth + 1u); else { c.pc = 0x00246180u; return; } if (c.pc != 0x004E1444u) [[unlikely]] return; }
L_004E1444:
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 152u)));
    st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 177u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 178u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 179u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[13] = ld32((c.r[16].w[0] + 176u));
    c.f[14] = ld32((c.r[16].w[0] + 180u));
    c.f[15] = ld32((c.r[16].w[0] + 184u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E147Cu); c.f[12] = ld32((c.r[16].w[0] + 172u));  if (depth < kMaxDepth) unit_0061(c, 434u, depth + 1u); else { c.pc = 0x00387F00u; return; } if (c.pc != 0x004E147Cu) [[unlikely]] return; }
L_004E147C:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 30881u));
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    st8((c.r[18].w[0] + 16096u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 16097u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 16098u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 16099u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E14B0u); set32(c.r[4], c.r[3].w[0] + 528u);  if (depth < kMaxDepth) unit_0049(c, 101u, depth + 1u); else { c.pc = 0x00325120u; return; } if (c.pc != 0x004E14B0u) [[unlikely]] return; }
L_004E14B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004E14D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E14F4u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E14F4u) [[unlikely]] return; }
L_004E14F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E1514; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1510u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 61u, depth + 1u); else { c.pc = 0x002B8D70u; return; } if (c.pc != 0x004E1510u) [[unlikely]] return; }
L_004E1510:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1514:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1538u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E1538u) [[unlikely]] return; }
L_004E1538:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1548u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E1548u) [[unlikely]] return; }
L_004E1548:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E1570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1594u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1594u) [[unlikely]] return; }
L_004E1594:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E15B4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E15B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 24u, depth + 1u); else { c.pc = 0x002B8530u; return; } if (c.pc != 0x004E15B0u) [[unlikely]] return; }
L_004E15B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E15B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E15D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E15D0u) [[unlikely]] return; }
L_004E15D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E15E0u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E15E0u) [[unlikely]] return; }
L_004E15E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E1600:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E162Cu); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E162Cu) [[unlikely]] return; }
L_004E162C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E1714; } }
L_004E1634:
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 92u), c.f[20]);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 145u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    st8((c.r[29].w[0] + 146u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E16ECu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004E16ECu) [[unlikely]] return; }
L_004E16EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E17A0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E170Cu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x004A81A0u; return; } if (c.pc != 0x004E170Cu) [[unlikely]] return; }
L_004E170C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E17B8; } }
L_004E1714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u - 2u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[5], 0u - 3u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 24504u);
    c.r[9].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[3], c.r[3].w[0] + 24560u);
    set32(c.r[2], c.r[2].w[0] + 24848u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 164u), 0u);
    st32((c.r[17].w[0] + 168u), 0u);
    st32((c.r[17].w[0] + 172u), 0u);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1634u | kUnwind; return; } goto L_004E1634; } }
L_004E17A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E17B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x004A81A0u; return; } if (c.pc != 0x004E17B0u) [[unlikely]] return; }
L_004E17B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E170Cu | kUnwind; return; } goto L_004E170C; } }
L_004E17B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004E17E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E17FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E17FCu) [[unlikely]] return; }
L_004E17FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E1820; } }
L_004E1804:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 405u, depth + 1u); else { c.pc = 0x004B3E70u; return; } if (c.pc != 0x004E1818u) [[unlikely]] return; }
L_004E1818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E1884; } }
L_004E1820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 3u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] - 31664u);
    st32((c.r[16].w[0] + 12u), 0u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1804u | kUnwind; return; } goto L_004E1804; } }
L_004E1884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E18A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E18BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E18BCu) [[unlikely]] return; }
L_004E18BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E1908; } }
L_004E18C4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    c.f[12] = ld32((c.r[2].w[0] + 24u));
    set32(c.r[6], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1900u); set32(c.r[7], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_009A(c, 88u, depth + 1u); else { c.pc = 0x00469320u; return; } if (c.pc != 0x004E1900u) [[unlikely]] return; }
L_004E1900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E1978; } }
L_004E1908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u - 3u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] - 29024u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 15104u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E18C4u | kUnwind; return; } goto L_004E18C4; } }
L_004E1978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E1990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E19ACu); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E19ACu) [[unlikely]] return; }
L_004E19AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E19CC; } }
L_004E19B4:
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    c.f[13] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E19C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 194u, depth + 1u); else { c.pc = 0x003FDF00u; return; } if (c.pc != 0x004E19C4u) [[unlikely]] return; }
L_004E19C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E1A2C; } }
L_004E19CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 3u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 976u);
    st32((c.r[17].w[0] + 12u), 0u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E19B4u | kUnwind; return; } goto L_004E19B4; } }
L_004E1A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E1A40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1A64u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1A64u) [[unlikely]] return; }
L_004E1A64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E1A7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1A78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 333u, depth + 1u); else { c.pc = 0x004FEFF0u; return; } if (c.pc != 0x004E1A78u) [[unlikely]] return; }
L_004E1A78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1A7C:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1A88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 85u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x004E1A88u) [[unlikely]] return; }
L_004E1A88:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1AA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004E1AA8u) [[unlikely]] return; }
L_004E1AA8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1AB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 330u, depth + 1u); else { c.pc = 0x004FEF70u; return; } if (c.pc != 0x004E1AB8u) [[unlikely]] return; }
L_004E1AB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E1AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1B04u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1B04u) [[unlikely]] return; }
L_004E1B04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E1B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1B18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 347u, depth + 1u); else { c.pc = 0x004FF200u; return; } if (c.pc != 0x004E1B18u) [[unlikely]] return; }
L_004E1B18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1B1C:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1B28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 85u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x004E1B28u) [[unlikely]] return; }
L_004E1B28:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1B48u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004E1B48u) [[unlikely]] return; }
L_004E1B48:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1B58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 341u, depth + 1u); else { c.pc = 0x004FF110u; return; } if (c.pc != 0x004E1B58u) [[unlikely]] return; }
L_004E1B58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E1B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 104u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1BA4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1BA4u) [[unlikely]] return; }
L_004E1BA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E1BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1BB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 33u, depth + 1u); else { c.pc = 0x00440470u; return; } if (c.pc != 0x004E1BB8u) [[unlikely]] return; }
L_004E1BB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1BBC:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[10].d[0] = ld8((c.r[16].w[0] + 124u));
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.r[2].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[9].d[0] = c.r[6].d[0] ^ 0ull;
    c.r[8].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[7].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1BF8u); c.r[7].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0090(c, 32u, depth + 1u); else { c.pc = 0x00440450u; return; } if (c.pc != 0x004E1BF8u) [[unlikely]] return; }
L_004E1BF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1C1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E1C1Cu) [[unlikely]] return; }
L_004E1C1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1C2Cu); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E1C2Cu) [[unlikely]] return; }
L_004E1C2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E1C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1C6Cu); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1C6Cu) [[unlikely]] return; }
L_004E1C6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E1C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1C80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 134u, depth + 1u); else { c.pc = 0x004B5350u; return; } if (c.pc != 0x004E1C80u) [[unlikely]] return; }
L_004E1C80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1C84:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    c.r[6].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1CA4u); c.r[8].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00AD(c, 131u, depth + 1u); else { c.pc = 0x004B52B0u; return; } if (c.pc != 0x004E1CA4u) [[unlikely]] return; }
L_004E1CA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E1CC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1CE4u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1CE4u) [[unlikely]] return; }
L_004E1CE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E1D04; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.f[12] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1D00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 92u, depth + 1u); else { c.pc = 0x002B1390u; return; } if (c.pc != 0x004E1D00u) [[unlikely]] return; }
L_004E1D00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1D04:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1D20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E1D20u) [[unlikely]] return; }
L_004E1D20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E1D40:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1D70u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1D70u) [[unlikely]] return; }
L_004E1D70:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004E1D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1D84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 274u, depth + 1u); else { c.pc = 0x004FE7B0u; return; } if (c.pc != 0x004E1D84u) [[unlikely]] return; }
L_004E1D84:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1D88:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1D94u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 85u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x004E1D94u) [[unlikely]] return; }
L_004E1D94:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = ld8((c.r[17].w[0] + 80u));  if (t) { goto L_004E1DC8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1DC0u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004E1DC0u) [[unlikely]] return; }
L_004E1DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E1DCC; } }
L_004E1DC8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E1DCC:
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1DECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004E1DECu) [[unlikely]] return; }
L_004E1DEC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    st64((c.r[29].w[0] + 48u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[9], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[11], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1E58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 264u, depth + 1u); else { c.pc = 0x004FE5D0u; return; } if (c.pc != 0x004E1E58u) [[unlikely]] return; }
L_004E1E58:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004E1E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1E90u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1E90u) [[unlikely]] return; }
L_004E1E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E1EA0; } }
L_004E1E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004E1F00; } }
L_004E1EA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 3u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 12368u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1E98u | kUnwind; return; } goto L_004E1E98; } }
L_004E1F00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E1F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1F2Cu); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1F2Cu) [[unlikely]] return; }
L_004E1F2C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E1F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1F40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 83u, depth + 1u); else { c.pc = 0x004B4AB0u; return; } if (c.pc != 0x004E1F40u) [[unlikely]] return; }
L_004E1F40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1F44:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1F5Cu); c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00AD(c, 80u, depth + 1u); else { c.pc = 0x004B4A30u; return; } if (c.pc != 0x004E1F5Cu) [[unlikely]] return; }
L_004E1F5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E1F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 68u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1FA4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E1FA4u) [[unlikely]] return; }
L_004E1FA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E1FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1FB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 160u, depth + 1u); else { c.pc = 0x004A9370u; return; } if (c.pc != 0x004E1FB8u) [[unlikely]] return; }
L_004E1FB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E1FBC:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1FE0u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 141u, depth + 1u); else { c.pc = 0x004A9120u; return; } if (c.pc != 0x004E1FE0u) [[unlikely]] return; }
L_004E1FE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E2010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E202Cu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E202Cu) [[unlikely]] return; }
L_004E202C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E2048; } }
L_004E2034:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 391u, depth + 1u); else { c.pc = 0x003FFEF0u; return; } if (c.pc != 0x004E2040u) [[unlikely]] return; }
L_004E2040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E20C8; } }
L_004E2048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u - 3u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] - 12672u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 3888u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E2034u | kUnwind; return; } goto L_004E2034; } }
L_004E20C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E20E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2104u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2104u) [[unlikely]] return; }
L_004E2104:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E211C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 234u, depth + 1u); else { c.pc = 0x004A9C80u; return; } if (c.pc != 0x004E2118u) [[unlikely]] return; }
L_004E2118:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E211C:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 68u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 72u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2144u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 215u, depth + 1u); else { c.pc = 0x004A99C0u; return; } if (c.pc != 0x004E2144u) [[unlikely]] return; }
L_004E2144:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E2160:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E218Cu); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E218Cu) [[unlikely]] return; }
L_004E218C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E2248; } }
L_004E2194:
    set32(c.r[11], c.r[29].w[0] + 88u);
    set32(c.r[10], c.r[29].w[0] + 84u);
    set32(c.r[9], c.r[29].w[0] + 92u);
    set32(c.r[3], c.r[29].w[0] + 94u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 100u);
    set32(c.r[8], c.r[29].w[0] + 93u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[11].w[0]), 0u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[10].w[0]), 0u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[7].w[0]), 0u);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[11].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2228u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 376u, depth + 1u); else { c.pc = 0x0046FF00u; return; } if (c.pc != 0x004E2228u) [[unlikely]] return; }
L_004E2228:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2240u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004E2240u) [[unlikely]] return; }
L_004E2240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E2318; } }
L_004E2248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u - 2u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[6], 0u - 3u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 12672u);
    c.r[10].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[4], c.r[4].w[0] + 16976u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] + 16656u);
    set32(c.r[11], 0u + 1u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 73u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[17].w[0] + 74u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 52;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E2194u | kUnwind; return; } goto L_004E2194; } }
L_004E2318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004E2340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004E2350:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E237Cu); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E237Cu) [[unlikely]] return; }
L_004E237C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E23D4; } }
L_004E2384:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E23B8u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_007F(c, 272u, depth + 1u); else { c.pc = 0x003FEDA0u; return; } if (c.pc != 0x004E23B8u) [[unlikely]] return; }
L_004E23B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E23CCu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 329u, depth + 1u); else { c.pc = 0x00412FD0u; return; } if (c.pc != 0x004E23CCu) [[unlikely]] return; }
L_004E23CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E247C; } }
L_004E23D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[9], 0u - 2u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[7], 0u - 3u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 12672u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[2], c.r[2].w[0] + 1856u);
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[6].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 42;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E2384u | kUnwind; return; } goto L_004E2384; } }
L_004E247C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004E24A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E24CCu); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E24CCu) [[unlikely]] return; }
L_004E24CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E2548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u - 2u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[5], 0u - 3u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 24504u);
    c.r[9].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[3], c.r[3].w[0] + 23840u);
    set32(c.r[2], c.r[2].w[0] + 24128u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 29;
L_004E2548:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[6].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 92u), c.f[20]);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E25B0u); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 182u, depth + 1u); else { c.pc = 0x004A62A0u; return; } if (c.pc != 0x004E25B0u) [[unlikely]] return; }
L_004E25B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004E25D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E25F4u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E25F4u) [[unlikely]] return; }
L_004E25F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E261C; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 116u));
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 90u, depth + 1u); else { c.pc = 0x00470CA0u; return; } if (c.pc != 0x004E2618u) [[unlikely]] return; }
L_004E2618:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E261C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2640u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E2640u) [[unlikely]] return; }
L_004E2640:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2650u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E2650u) [[unlikely]] return; }
L_004E2650:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E2670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2694u); set32(c.r[4], 0u + 2816u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2694u) [[unlikely]] return; }
L_004E2694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E26E4; } }
L_004E269C:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 8704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E26B0u); set32(c.r[6], 0u + 85u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x00314110u; return; } if (c.pc != 0x004E26B0u) [[unlikely]] return; }
L_004E26B0:
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    c.f[12] = ld32((c.r[16].w[0] + 76u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E26C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 310u, depth + 1u); else { c.pc = 0x0046F560u; return; } if (c.pc != 0x004E26C4u) [[unlikely]] return; }
L_004E26C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E26DCu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004E26DCu) [[unlikely]] return; }
L_004E26DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E27A8; } }
L_004E26E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], 0u - 2u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[8], 0u - 3u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], c.r[7].w[0] - 12672u);
    c.r[12].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[6], c.r[6].w[0] + 16976u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + 16336u);
    set32(c.r[3], c.r[17].w[0] + 80u);
    set32(c.r[2], c.r[17].w[0] + 768u);
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[17].w[0]), c.r[7].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[6].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 42u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0] + 760u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 764u), 0u);
    st32((c.r[17].w[0] + 2808u), c.r[2].w[0]);
    c.budget -= 49;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2812u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E269Cu | kUnwind; return; } goto L_004E269C; } }
L_004E27A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E27C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E27DCu); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E27DCu) [[unlikely]] return; }
L_004E27DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E27FC; } }
L_004E27E4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E27F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 96u, depth + 1u); else { c.pc = 0x004B4CB0u; return; } if (c.pc != 0x004E27F4u) [[unlikely]] return; }
L_004E27F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E285C; } }
L_004E27FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 3u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] - 30192u);
    st32((c.r[16].w[0] + 12u), 0u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E27E4u | kUnwind; return; } goto L_004E27E4; } }
L_004E285C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E2870:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[4], 0u + 96u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[24] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[23] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.f[22] = ld32((c.r[16].w[0] + 16u));
    c.f[21] = ld32((c.r[16].w[0] + 20u));
    c.f[20] = ld32((c.r[16].w[0] + 64u));
    c.r[19].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E28CCu); c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E28CCu) [[unlikely]] return; }
L_004E28CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E28EC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_004E28D8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E28E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 283u, depth + 1u); else { c.pc = 0x003072D0u; return; } if (c.pc != 0x004E28E4u) [[unlikely]] return; }
L_004E28E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E29A8; } }
L_004E28EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[2].w[0] << 1);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[7], 0u - 3u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[10].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[5], c.r[5].w[0] - 12672u);
    set32(c.r[2], c.r[2].w[0] - 12976u);
    c.r[6].d[0] = c.r[10].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.f[23]);
    st32((c.r[17].w[0] + 36u), c.f[22]);
    st32((c.r[17].w[0] + 40u), c.f[21]);
    st32((c.r[17].w[0] + 44u), c.f[24]);
    st32((c.r[17].w[0] + 68u), c.f[20]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 76u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 45;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E29A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E29A0u) [[unlikely]] return; }
L_004E29A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E28D8u | kUnwind; return; } goto L_004E28D8; } }
L_004E29A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004E29E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E29FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E29FCu) [[unlikely]] return; }
L_004E29FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E2A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2A10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 348u, depth + 1u); else { c.pc = 0x004B34A0u; return; } if (c.pc != 0x004E2A10u) [[unlikely]] return; }
L_004E2A10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E2A14:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 56u));
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2A2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 345u, depth + 1u); else { c.pc = 0x004B3420u; return; } if (c.pc != 0x004E2A2Cu) [[unlikely]] return; }
L_004E2A2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E2A50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2A70u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2A70u) [[unlikely]] return; }
L_004E2A70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E2A8C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2A88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 108u, depth + 1u); else { c.pc = 0x004B4E50u; return; } if (c.pc != 0x004E2A88u) [[unlikely]] return; }
L_004E2A88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E2A8C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_004E2A94:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 60u));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2AA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 97u, depth + 1u); else { c.pc = 0x004B4CC0u; return; } if (c.pc != 0x004E2AA4u) [[unlikely]] return; }
L_004E2AA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(18ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E2A94u | kUnwind; return; } goto L_004E2A94; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E2AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2AECu); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2AECu) [[unlikely]] return; }
L_004E2AEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E2B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2B00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 294u, depth + 1u); else { c.pc = 0x00407940u; return; } if (c.pc != 0x004E2B00u) [[unlikely]] return; }
L_004E2B00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E2B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2B0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 282u, depth + 1u); else { c.pc = 0x00407830u; return; } if (c.pc != 0x004E2B0Cu) [[unlikely]] return; }
L_004E2B0C:
    st32((c.r[17].w[0] + 16100u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E2B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2B54u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2B54u) [[unlikely]] return; }
L_004E2B54:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E2B74; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2B70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 147u, depth + 1u); else { c.pc = 0x002B22C0u; return; } if (c.pc != 0x004E2B70u) [[unlikely]] return; }
L_004E2B70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E2B74:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2B90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E2B90u) [[unlikely]] return; }
L_004E2B90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2BA0u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E2BA0u) [[unlikely]] return; }
L_004E2BA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E2BC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2BECu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2BECu) [[unlikely]] return; }
L_004E2BEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E2C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 235u, depth + 1u); else { c.pc = 0x0046BCB0u; return; } if (c.pc != 0x004E2C00u) [[unlikely]] return; }
L_004E2C00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E2C04:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C58u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 85u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x004E2C58u) [[unlikely]] return; }
L_004E2C58:
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C74u); set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004E2C74u) [[unlikely]] return; }
L_004E2C74:
    c.f[13] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 68u)));
    set32(c.r[10], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2CC0u); set32(c.r[8], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_009A(c, 228u, depth + 1u); else { c.pc = 0x0046B840u; return; } if (c.pc != 0x004E2CC0u) [[unlikely]] return; }
L_004E2CC0:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2CD8u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004E2CD8u) [[unlikely]] return; }
L_004E2CD8:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004E2D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2D34u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2D34u) [[unlikely]] return; }
L_004E2D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E2D60; } }
L_004E2D3C:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 68u));
    set32(c.r[7], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2D58u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0080(c, 3u, depth + 1u); else { c.pc = 0x00400020u; return; } if (c.pc != 0x004E2D58u) [[unlikely]] return; }
L_004E2D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E2DD4; } }
L_004E2D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u - 3u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 25296u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E2D3Cu | kUnwind; return; } goto L_004E2D3C; } }
L_004E2DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E2DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2E14u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2E14u) [[unlikely]] return; }
L_004E2E14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E2E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2E28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 194u, depth + 1u); else { c.pc = 0x004869C0u; return; } if (c.pc != 0x004E2E28u) [[unlikely]] return; }
L_004E2E28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E2E2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2E48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E2E48u) [[unlikely]] return; }
L_004E2E48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2E58u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E2E58u) [[unlikely]] return; }
L_004E2E58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E2E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2EA4u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2EA4u) [[unlikely]] return; }
L_004E2EA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E2EC0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2EBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 157u, depth + 1u); else { c.pc = 0x002B2670u; return; } if (c.pc != 0x004E2EBCu) [[unlikely]] return; }
L_004E2EBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E2EC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2EE4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E2EE4u) [[unlikely]] return; }
L_004E2EE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E2F00:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 96u);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E2F1C; } }
L_004E2F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E2F28; } }
L_004E2F1C:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 84u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E2F14u | kUnwind; return; } goto L_004E2F14; } }
L_004E2F28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E2F30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2F4Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2F4Cu) [[unlikely]] return; }
L_004E2F4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E2F64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2F60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 16u, depth + 1u); else { c.pc = 0x00400170u; return; } if (c.pc != 0x004E2F60u) [[unlikely]] return; }
L_004E2F60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E2F64:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2F70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 13u, depth + 1u); else { c.pc = 0x004000F0u; return; } if (c.pc != 0x004E2F70u) [[unlikely]] return; }
L_004E2F70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E2F90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2FC8u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E2FC8u) [[unlikely]] return; }
L_004E2FC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E2FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2FDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 46u, depth + 1u); else { c.pc = 0x004004B0u; return; } if (c.pc != 0x004E2FDCu) [[unlikely]] return; }
L_004E2FDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E2FE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[22], ld32((c.r[19].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_004E3030; } }
L_004E3000:
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3028u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 39u, depth + 1u); else { c.pc = 0x004003D0u; return; } if (c.pc != 0x004E3028u) [[unlikely]] return; }
L_004E3028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E304C; } }
L_004E3030:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E303Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 300u, depth + 1u); else { c.pc = 0x002BBF60u; return; } if (c.pc != 0x004E303Cu) [[unlikely]] return; }
L_004E303C:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 88u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E3000u | kUnwind; return; } goto L_004E3000; } }
L_004E304C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004E3080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E309Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E309Cu) [[unlikely]] return; }
L_004E309C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E30B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 69u, depth + 1u); else { c.pc = 0x004008E0u; return; } if (c.pc != 0x004E30B0u) [[unlikely]] return; }
L_004E30B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E30B4:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30D8u); st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 66u, depth + 1u); else { c.pc = 0x00400840u; return; } if (c.pc != 0x004E30D8u) [[unlikely]] return; }
L_004E30D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E30F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3114u); set32(c.r[4], 0u + 244u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E3114u) [[unlikely]] return; }
L_004E3114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E3180; } }
L_004E311C:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st8((c.r[29].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3160u); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 54u, depth + 1u); else { c.pc = 0x004B4770u; return; } if (c.pc != 0x004E3160u) [[unlikely]] return; }
L_004E3160:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3178u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004E3178u) [[unlikely]] return; }
L_004E3178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E322C; } }
L_004E3180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u - 2u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[6], 0u - 3u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 12672u);
    c.r[10].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[4], c.r[4].w[0] + 16976u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] - 30800u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E311Cu | kUnwind; return; } goto L_004E311C; } }
L_004E322C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004E3250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E34CC; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 84u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[5], ld32((c.r[2].w[0] + 76u)));
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004E3470; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004E3418; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004E3360; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004E32A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E34C4; } }
L_004E32A8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004E3308; } }
    set32(c.r[9], ld32((c.r[2].w[0] + 56u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3300u); set32(c.r[4], c.r[2].w[0] + 120u);  if (depth < kMaxDepth) unit_00B9(c, 141u, depth + 1u); else { c.pc = 0x004E5630u; return; } if (c.pc != 0x004E3300u) [[unlikely]] return; }
L_004E3300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E34C0; } }
L_004E3308:
    set32(c.r[9], ld32((c.r[2].w[0] + 56u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3358u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_00B9(c, 142u, depth + 1u); else { c.pc = 0x004E5640u; return; } if (c.pc != 0x004E3358u) [[unlikely]] return; }
L_004E3358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E34C0; } }
L_004E3360:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004E33C0; } }
    set32(c.r[9], ld32((c.r[2].w[0] + 56u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E33B8u); set32(c.r[4], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_00B9(c, 141u, depth + 1u); else { c.pc = 0x004E5630u; return; } if (c.pc != 0x004E33B8u) [[unlikely]] return; }
L_004E33B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E34C0; } }
L_004E33C0:
    set32(c.r[9], ld32((c.r[2].w[0] + 56u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3410u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_00B9(c, 142u, depth + 1u); else { c.pc = 0x004E5640u; return; } if (c.pc != 0x004E3410u) [[unlikely]] return; }
L_004E3410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E34C0; } }
L_004E3418:
    set32(c.r[9], ld32((c.r[2].w[0] + 56u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3468u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_00B9(c, 142u, depth + 1u); else { c.pc = 0x004E5640u; return; } if (c.pc != 0x004E3468u) [[unlikely]] return; }
L_004E3468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E34C0; } }
L_004E3470:
    set32(c.r[9], ld32((c.r[2].w[0] + 56u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E34C0u); set32(c.r[4], c.r[2].w[0] + 152u);  if (depth < kMaxDepth) unit_00B9(c, 142u, depth + 1u); else { c.pc = 0x004E5640u; return; } if (c.pc != 0x004E34C0u) [[unlikely]] return; }
L_004E34C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E34C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004E3524; } }
L_004E34CC:
    set32(c.r[9], ld32((c.r[2].w[0] + 56u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[2].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[9].w[0] << 8);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E351Cu); set32(c.r[4], c.r[2].w[0] + 84u);  if (depth < kMaxDepth) unit_00B9(c, 143u, depth + 1u); else { c.pc = 0x004E5650u; return; } if (c.pc != 0x004E351Cu) [[unlikely]] return; }
L_004E351C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E34C0u | kUnwind; return; } goto L_004E34C0; } }
L_004E3524:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E3530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3554u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E3554u) [[unlikely]] return; }
L_004E3554:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E356C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 79u, depth + 1u); else { c.pc = 0x00400AA0u; return; } if (c.pc != 0x004E3568u) [[unlikely]] return; }
L_004E3568:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E356C:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 56u));
    set32(c.r[7], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3588u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0080(c, 76u, depth + 1u); else { c.pc = 0x00400A10u; return; } if (c.pc != 0x004E3588u) [[unlikely]] return; }
L_004E3588:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E35B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E35CCu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E35CCu) [[unlikely]] return; }
L_004E35CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E35E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E35E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 134u, depth + 1u); else { c.pc = 0x00400E50u; return; } if (c.pc != 0x004E35E0u) [[unlikely]] return; }
L_004E35E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E35E4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E35F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 131u, depth + 1u); else { c.pc = 0x00400DD0u; return; } if (c.pc != 0x004E35F0u) [[unlikely]] return; }
L_004E35F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E3610:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3634u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E3634u) [[unlikely]] return; }
L_004E3634:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E364C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3648u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 121u, depth + 1u); else { c.pc = 0x004B5110u; return; } if (c.pc != 0x004E3648u) [[unlikely]] return; }
L_004E3648:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E364C:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[8], c.r[29].w[0] + 104u);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[7], 0u + 1u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[6], c.r[29].w[0] + 108u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[20]);
    set32(c.r[9], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[29].w[0] + 96u), c.r[9].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[6].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E36BCu); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AD(c, 118u, depth + 1u); else { c.pc = 0x004B5060u; return; } if (c.pc != 0x004E36BCu) [[unlikely]] return; }
L_004E36BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004E36E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[9], ld32((c.r[6].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 68u)));
    set32(c.r[4], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] - c.r[9].w[0]);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[6].w[0] + 72u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E373Cu); set32(c.r[4], c.r[2].w[0] + 76u);  if (depth < kMaxDepth) unit_00B9(c, 144u, depth + 1u); else { c.pc = 0x004E5660u; return; } if (c.pc != 0x004E373Cu) [[unlikely]] return; }
L_004E373C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E3750:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3774u); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E3774u) [[unlikely]] return; }
L_004E3774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E3820; } }
L_004E377C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 10336u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[11], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 88u)));
    c.r[10].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[11].w[0]);
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[29].w[0] + 132u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[7].w[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3818u); st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AB(c, 152u, depth + 1u); else { c.pc = 0x004AD5A0u; return; } if (c.pc != 0x004E3818u) [[unlikely]] return; }
L_004E3818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E38AC; } }
L_004E3820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u - 2u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[5], 0u - 3u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 12672u);
    c.r[9].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[3], c.r[3].w[0] + 26048u);
    set32(c.r[2], c.r[2].w[0] + 27200u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E377Cu | kUnwind; return; } goto L_004E377C; } }
L_004E38AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004E38D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E38ECu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E38ECu) [[unlikely]] return; }
L_004E38EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E3910; } }
L_004E38F4:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 64u));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 160u, depth + 1u); else { c.pc = 0x00401120u; return; } if (c.pc != 0x004E3908u) [[unlikely]] return; }
L_004E3908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E398C; } }
L_004E3910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u - 3u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 5648u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[9], 0u + 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 3u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E38F4u | kUnwind; return; } goto L_004E38F4; } }
L_004E398C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E39A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E39C4u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E39C4u) [[unlikely]] return; }
L_004E39C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E39DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E39D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 39u, depth + 1u); else { c.pc = 0x002B4820u; return; } if (c.pc != 0x004E39D8u) [[unlikely]] return; }
L_004E39D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E39DC:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E39E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 38u, depth + 1u); else { c.pc = 0x002B4810u; return; } if (c.pc != 0x004E39E8u) [[unlikely]] return; }
L_004E39E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3A04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004E3A04u) [[unlikely]] return; }
L_004E3A04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3A14u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004E3A14u) [[unlikely]] return; }
L_004E3A14:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E3A30:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.f[21] = ld32((c.r[29].w[0] + 108u));
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    st8((c.r[29].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 124u));
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3A90u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 85u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x004E3A90u) [[unlikely]] return; }
L_004E3A90:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3AACu); set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004E3AACu) [[unlikely]] return; }
L_004E3AAC:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E3B90; } }
L_004E3ACC:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[21]);
    c.f[2] = ld32((c.r[17].w[0] + 136u));
    c.f[1] = ld32((c.r[17].w[0] + 140u));
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    st8((c.r[29].w[0] + 184u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 34;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E3B9C; } }
L_004E3B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3B5Cu); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E3B5Cu) [[unlikely]] return; }
L_004E3B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E3BA8; } }
L_004E3B64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3B70u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0098(c, 39u, depth + 1u); else { c.pc = 0x00460530u; return; } if (c.pc != 0x004E3B70u) [[unlikely]] return; }
L_004E3B70:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3B88u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004E3B88u) [[unlikely]] return; }
L_004E3B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E3C54; } }
L_004E3B90:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E3ACCu | kUnwind; return; } goto L_004E3ACC; } }
L_004E3B9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E3B54u | kUnwind; return; } goto L_004E3B54; } }
L_004E3BA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u - 2u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[6], 0u - 3u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 12672u);
    c.r[10].d[0] = ld8((c.r[16].w[0] + 18u));
    set32(c.r[4], c.r[4].w[0] + 16976u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] + 14624u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0]), c.r[5].w[0]);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E3B64u | kUnwind; return; } goto L_004E3B64; } }
L_004E3C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004E3C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3CA0u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E3CA0u) [[unlikely]] return; }
L_004E3CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3CC8; } }
L_004E3CA8:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 44u), c.f[20]);  if (t) { goto L_004E3D28; } }
L_004E3CC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 3u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 1264u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E3CA8u | kUnwind; return; } goto L_004E3CA8; } }
L_004E3D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E3D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3D5Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E3D5Cu) [[unlikely]] return; }
L_004E3D5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E3D74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3D70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 139u, depth + 1u); else { c.pc = 0x004A59B0u; return; } if (c.pc != 0x004E3D70u) [[unlikely]] return; }
L_004E3D70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E3D74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 10336u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[5], c.r[7].w[0] << 3);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3DA8u); c.r[7].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00A9(c, 135u, depth + 1u); else { c.pc = 0x004A58E0u; return; } if (c.pc != 0x004E3DA8u) [[unlikely]] return; }
L_004E3DA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E3DC0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3DECu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E3DECu) [[unlikely]] return; }
L_004E3DEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E3E04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3E00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 257u, depth + 1u); else { c.pc = 0x004A6FB0u; return; } if (c.pc != 0x004E3E00u) [[unlikely]] return; }
L_004E3E00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E3E04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 56u)));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 68u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[20]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 76u)));
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 84u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 88u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 92u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 96u)));
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 100u)));
    st8((c.r[29].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 104u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 108u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 116u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3EB8u); st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 252u, depth + 1u); else { c.pc = 0x004A6E40u; return; } if (c.pc != 0x004E3EB8u) [[unlikely]] return; }
L_004E3EB8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004E3EE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 72u)));
    c.f[20] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3F20u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0082(c, 202u, depth + 1u); else { c.pc = 0x00409AF0u; return; } if (c.pc != 0x004E3F20u) [[unlikely]] return; }
L_004E3F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3FA0; } }
L_004E3F28:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[4], 0u + 320u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 124u), 0u);
    st8((c.r[29].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3F74u); st8((c.r[29].w[0] + 129u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E3F74u) [[unlikely]] return; }
L_004E3F74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E3F8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3F88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 179u, depth + 1u); else { c.pc = 0x00409910u; return; } if (c.pc != 0x004E3F88u) [[unlikely]] return; }
L_004E3F88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E3F8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3F98u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0082(c, 166u, depth + 1u); else { c.pc = 0x004095F0u; return; } if (c.pc != 0x004E3F98u) [[unlikely]] return; }
L_004E3F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E3FB0; } }
L_004E3FA0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29200u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E3F28u | kUnwind; return; } goto L_004E3F28; } }
L_004E3FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004E3FD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004E3FE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 76u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4004u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004E4004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00B9(c, 2u, depth);
}

}

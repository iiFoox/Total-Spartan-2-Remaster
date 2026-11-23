#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0,
    0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54,
    0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 109, 0,
    0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    286, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295,
    296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0,
    0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0,
    331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0,
    0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 367, 0,
    0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 372, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0,
    0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0,
};

void unit_000F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0023C000;
    case 2u: goto L_0023C070;
    case 3u: goto L_0023C0C0;
    case 4u: goto L_0023C0F8;
    case 5u: goto L_0023C11C;
    case 6u: goto L_0023C158;
    case 7u: goto L_0023C180;
    case 8u: goto L_0023C1A0;
    case 9u: goto L_0023C1B8;
    case 10u: goto L_0023C1D8;
    case 11u: goto L_0023C1EC;
    case 12u: goto L_0023C1F8;
    case 13u: goto L_0023C208;
    case 14u: goto L_0023C224;
    case 15u: goto L_0023C230;
    case 16u: goto L_0023C244;
    case 17u: goto L_0023C260;
    case 18u: goto L_0023C270;
    case 19u: goto L_0023C27C;
    case 20u: goto L_0023C28C;
    case 21u: goto L_0023C2D0;
    case 22u: goto L_0023C2E8;
    case 23u: goto L_0023C2F8;
    case 24u: goto L_0023C304;
    case 25u: goto L_0023C30C;
    case 26u: goto L_0023C314;
    case 27u: goto L_0023C328;
    case 28u: goto L_0023C330;
    case 29u: goto L_0023C340;
    case 30u: goto L_0023C34C;
    case 31u: goto L_0023C364;
    case 32u: goto L_0023C380;
    case 33u: goto L_0023C390;
    case 34u: goto L_0023C3B0;
    case 35u: goto L_0023C3FC;
    case 36u: goto L_0023C444;
    case 37u: goto L_0023C494;
    case 38u: goto L_0023C4E0;
    case 39u: goto L_0023C51C;
    case 40u: goto L_0023C52C;
    case 41u: goto L_0023C544;
    case 42u: goto L_0023C560;
    case 43u: goto L_0023C570;
    case 44u: goto L_0023C590;
    case 45u: goto L_0023C598;
    case 46u: goto L_0023C5B8;
    case 47u: goto L_0023C5D8;
    case 48u: goto L_0023C5E0;
    case 49u: goto L_0023C630;
    case 50u: goto L_0023C678;
    case 51u: goto L_0023C690;
    case 52u: goto L_0023C6A0;
    case 53u: goto L_0023C774;
    case 54u: goto L_0023C77C;
    case 55u: goto L_0023C784;
    case 56u: goto L_0023C78C;
    case 57u: goto L_0023C794;
    case 58u: goto L_0023C79C;
    case 59u: goto L_0023C7A4;
    case 60u: goto L_0023C810;
    case 61u: goto L_0023C890;
    case 62u: goto L_0023C8A8;
    case 63u: goto L_0023C8B0;
    case 64u: goto L_0023C8B8;
    case 65u: goto L_0023C8C0;
    case 66u: goto L_0023C8C8;
    case 67u: goto L_0023C930;
    case 68u: goto L_0023C970;
    case 69u: goto L_0023C9BC;
    case 70u: goto L_0023C9F8;
    case 71u: goto L_0023CA38;
    case 72u: goto L_0023CA74;
    case 73u: goto L_0023CA8C;
    case 74u: goto L_0023CAA4;
    case 75u: goto L_0023CB20;
    case 76u: goto L_0023CB28;
    case 77u: goto L_0023CB60;
    case 78u: goto L_0023CB80;
    case 79u: goto L_0023CBA0;
    case 80u: goto L_0023CBE0;
    case 81u: goto L_0023CBF8;
    case 82u: goto L_0023CC80;
    case 83u: goto L_0023CCB0;
    case 84u: goto L_0023CD04;
    case 85u: goto L_0023CD18;
    case 86u: goto L_0023CD58;
    case 87u: goto L_0023CD80;
    case 88u: goto L_0023CD90;
    case 89u: goto L_0023CDE0;
    case 90u: goto L_0023CE7C;
    case 91u: goto L_0023CEB8;
    case 92u: goto L_0023CEE4;
    case 93u: goto L_0023CF30;
    case 94u: goto L_0023CF40;
    case 95u: goto L_0023CF68;
    case 96u: goto L_0023CF80;
    case 97u: goto L_0023CFA0;
    case 98u: goto L_0023CFB4;
    case 99u: goto L_0023CFC0;
    case 100u: goto L_0023CFD0;
    case 101u: goto L_0023CFEC;
    case 102u: goto L_0023CFF8;
    case 103u: goto L_0023D00C;
    case 104u: goto L_0023D028;
    case 105u: goto L_0023D04C;
    case 106u: goto L_0023D05C;
    case 107u: goto L_0023D068;
    case 108u: goto L_0023D070;
    case 109u: goto L_0023D078;
    case 110u: goto L_0023D08C;
    case 111u: goto L_0023D094;
    case 112u: goto L_0023D0A4;
    case 113u: goto L_0023D0B0;
    case 114u: goto L_0023D0C4;
    case 115u: goto L_0023D0D4;
    case 116u: goto L_0023D120;
    case 117u: goto L_0023D180;
    case 118u: goto L_0023D1A0;
    case 119u: goto L_0023D1E8;
    case 120u: goto L_0023D204;
    case 121u: goto L_0023D230;
    case 122u: goto L_0023D2C8;
    case 123u: goto L_0023D2D8;
    case 124u: goto L_0023D2E8;
    case 125u: goto L_0023D354;
    case 126u: goto L_0023D3B0;
    case 127u: goto L_0023D3C0;
    case 128u: goto L_0023D410;
    case 129u: goto L_0023D41C;
    case 130u: goto L_0023D454;
    case 131u: goto L_0023D4D4;
    case 132u: goto L_0023D4F8;
    case 133u: goto L_0023D528;
    case 134u: goto L_0023D598;
    case 135u: goto L_0023D5B0;
    case 136u: goto L_0023D5BC;
    case 137u: goto L_0023D5D0;
    case 138u: goto L_0023D5D4;
    case 139u: goto L_0023D678;
    case 140u: goto L_0023D6B8;
    case 141u: goto L_0023D710;
    case 142u: goto L_0023D728;
    case 143u: goto L_0023D768;
    case 144u: goto L_0023D7A0;
    case 145u: goto L_0023D7B4;
    case 146u: goto L_0023D7D4;
    case 147u: goto L_0023D7E8;
    case 148u: goto L_0023D7F4;
    case 149u: goto L_0023D840;
    case 150u: goto L_0023D8A0;
    case 151u: goto L_0023D900;
    case 152u: goto L_0023D980;
    case 153u: goto L_0023DA18;
    case 154u: goto L_0023DA50;
    case 155u: goto L_0023DA78;
    case 156u: goto L_0023DAA0;
    case 157u: goto L_0023DAB8;
    case 158u: goto L_0023DAD0;
    case 159u: goto L_0023DAF8;
    case 160u: goto L_0023DB5C;
    case 161u: goto L_0023DB90;
    case 162u: goto L_0023DBA0;
    case 163u: goto L_0023DC00;
    case 164u: goto L_0023DC50;
    case 165u: goto L_0023DC6C;
    case 166u: goto L_0023DC90;
    case 167u: goto L_0023DC94;
    case 168u: goto L_0023DCAC;
    case 169u: goto L_0023DCF0;
    case 170u: goto L_0023DD2C;
    case 171u: goto L_0023DD38;
    case 172u: goto L_0023DD6C;
    case 173u: goto L_0023DD84;
    case 174u: goto L_0023DDA0;
    case 175u: goto L_0023DDC8;
    case 176u: goto L_0023DDF4;
    case 177u: goto L_0023DE10;
    case 178u: goto L_0023DE50;
    case 179u: goto L_0023DF00;
    case 180u: goto L_0023DF18;
    case 181u: goto L_0023DF58;
    case 182u: goto L_0023DFE4;
    case 183u: goto L_0023E008;
    case 184u: goto L_0023E048;
    case 185u: goto L_0023E0A4;
    case 186u: goto L_0023E0AC;
    case 187u: goto L_0023E0EC;
    case 188u: goto L_0023E110;
    case 189u: goto L_0023E150;
    case 190u: goto L_0023E16C;
    case 191u: goto L_0023E198;
    case 192u: goto L_0023E1A0;
    case 193u: goto L_0023E1C0;
    case 194u: goto L_0023E1EC;
    case 195u: goto L_0023E1F8;
    case 196u: goto L_0023E258;
    case 197u: goto L_0023E280;
    case 198u: goto L_0023E2C0;
    case 199u: goto L_0023E300;
    case 200u: goto L_0023E330;
    case 201u: goto L_0023E378;
    case 202u: goto L_0023E39C;
    case 203u: goto L_0023E3C0;
    case 204u: goto L_0023E3E0;
    case 205u: goto L_0023E450;
    case 206u: goto L_0023E47C;
    case 207u: goto L_0023E4A4;
    case 208u: goto L_0023E4EC;
    case 209u: goto L_0023E510;
    case 210u: goto L_0023E534;
    case 211u: goto L_0023E554;
    case 212u: goto L_0023E5A0;
    case 213u: goto L_0023E5C8;
    case 214u: goto L_0023E610;
    case 215u: goto L_0023E634;
    case 216u: goto L_0023E658;
    case 217u: goto L_0023E680;
    case 218u: goto L_0023E6B4;
    case 219u: goto L_0023E6D0;
    case 220u: goto L_0023E6E4;
    case 221u: goto L_0023E704;
    case 222u: goto L_0023E710;
    case 223u: goto L_0023E730;
    case 224u: goto L_0023E740;
    case 225u: goto L_0023E750;
    case 226u: goto L_0023E774;
    case 227u: goto L_0023E7A0;
    case 228u: goto L_0023E7B4;
    case 229u: goto L_0023E7C8;
    case 230u: goto L_0023E7D8;
    case 231u: goto L_0023E7F8;
    case 232u: goto L_0023E808;
    case 233u: goto L_0023E818;
    case 234u: goto L_0023E83C;
    case 235u: goto L_0023E870;
    case 236u: goto L_0023E894;
    case 237u: goto L_0023E8A0;
    case 238u: goto L_0023E8B4;
    case 239u: goto L_0023E8C8;
    case 240u: goto L_0023E8D4;
    case 241u: goto L_0023E8E4;
    case 242u: goto L_0023E900;
    case 243u: goto L_0023E90C;
    case 244u: goto L_0023E920;
    case 245u: goto L_0023E93C;
    case 246u: goto L_0023E954;
    case 247u: goto L_0023E970;
    case 248u: goto L_0023E980;
    case 249u: goto L_0023E98C;
    case 250u: goto L_0023E99C;
    case 251u: goto L_0023E9AC;
    case 252u: goto L_0023E9D0;
    case 253u: goto L_0023E9EC;
    case 254u: goto L_0023E9F8;
    case 255u: goto L_0023EA04;
    case 256u: goto L_0023EA20;
    case 257u: goto L_0023EA80;
    case 258u: goto L_0023EA98;
    case 259u: goto L_0023EAB0;
    case 260u: goto L_0023EB20;
    case 261u: goto L_0023EB38;
    case 262u: goto L_0023EB78;
    case 263u: goto L_0023EBB0;
    case 264u: goto L_0023EBDC;
    case 265u: goto L_0023EC0C;
    case 266u: goto L_0023EC28;
    case 267u: goto L_0023EC3C;
    case 268u: goto L_0023EC48;
    case 269u: goto L_0023EC50;
    case 270u: goto L_0023EC58;
    case 271u: goto L_0023EC70;
    case 272u: goto L_0023EC90;
    case 273u: goto L_0023ECA0;
    case 274u: goto L_0023ECB4;
    case 275u: goto L_0023ECE8;
    case 276u: goto L_0023ED20;
    case 277u: goto L_0023ED58;
    case 278u: goto L_0023ED90;
    case 279u: goto L_0023EDC8;
    case 280u: goto L_0023EDFC;
    case 281u: goto L_0023EE10;
    case 282u: goto L_0023EE20;
    case 283u: goto L_0023EE54;
    case 284u: goto L_0023EE60;
    case 285u: goto L_0023EE70;
    case 286u: goto L_0023EE80;
    case 287u: goto L_0023EE8C;
    case 288u: goto L_0023EE94;
    case 289u: goto L_0023EE9C;
    case 290u: goto L_0023EEB0;
    case 291u: goto L_0023EEB8;
    case 292u: goto L_0023EEC8;
    case 293u: goto L_0023EED4;
    case 294u: goto L_0023EEE8;
    case 295u: goto L_0023EEFC;
    case 296u: goto L_0023EF00;
    case 297u: goto L_0023EF08;
    case 298u: goto L_0023EF14;
    case 299u: goto L_0023EF30;
    case 300u: goto L_0023EF48;
    case 301u: goto L_0023EF5C;
    case 302u: goto L_0023EF70;
    case 303u: goto L_0023EF98;
    case 304u: goto L_0023EFB0;
    case 305u: goto L_0023EFB8;
    case 306u: goto L_0023EFE0;
    case 307u: goto L_0023EFF0;
    case 308u: goto L_0023F004;
    case 309u: goto L_0023F010;
    case 310u: goto L_0023F018;
    case 311u: goto L_0023F024;
    case 312u: goto L_0023F034;
    case 313u: goto L_0023F048;
    case 314u: goto L_0023F058;
    case 315u: goto L_0023F070;
    case 316u: goto L_0023F080;
    case 317u: goto L_0023F098;
    case 318u: goto L_0023F0A0;
    case 319u: goto L_0023F0B8;
    case 320u: goto L_0023F0C0;
    case 321u: goto L_0023F0D0;
    case 322u: goto L_0023F0EC;
    case 323u: goto L_0023F0F8;
    case 324u: goto L_0023F138;
    case 325u: goto L_0023F154;
    case 326u: goto L_0023F184;
    case 327u: goto L_0023F1A0;
    case 328u: goto L_0023F1CC;
    case 329u: goto L_0023F1E4;
    case 330u: goto L_0023F1F4;
    case 331u: goto L_0023F200;
    case 332u: goto L_0023F20C;
    case 333u: goto L_0023F22C;
    case 334u: goto L_0023F234;
    case 335u: goto L_0023F23C;
    case 336u: goto L_0023F248;
    case 337u: goto L_0023F250;
    case 338u: goto L_0023F260;
    case 339u: goto L_0023F26C;
    case 340u: goto L_0023F284;
    case 341u: goto L_0023F2C0;
    case 342u: goto L_0023F2D0;
    case 343u: goto L_0023F2E0;
    case 344u: goto L_0023F300;
    case 345u: goto L_0023F320;
    case 346u: goto L_0023F340;
    case 347u: goto L_0023F350;
    case 348u: goto L_0023F360;
    case 349u: goto L_0023F390;
    case 350u: goto L_0023F3A0;
    case 351u: goto L_0023F404;
    case 352u: goto L_0023F43C;
    case 353u: goto L_0023F450;
    case 354u: goto L_0023F4B4;
    case 355u: goto L_0023F4D4;
    case 356u: goto L_0023F510;
    case 357u: goto L_0023F550;
    case 358u: goto L_0023F570;
    case 359u: goto L_0023F594;
    case 360u: goto L_0023F5A0;
    case 361u: goto L_0023F5B0;
    case 362u: goto L_0023F5C0;
    case 363u: goto L_0023F5CC;
    case 364u: goto L_0023F5D4;
    case 365u: goto L_0023F5DC;
    case 366u: goto L_0023F5F0;
    case 367u: goto L_0023F5F8;
    case 368u: goto L_0023F608;
    case 369u: goto L_0023F614;
    case 370u: goto L_0023F628;
    case 371u: goto L_0023F63C;
    case 372u: goto L_0023F640;
    case 373u: goto L_0023F648;
    case 374u: goto L_0023F654;
    case 375u: goto L_0023F670;
    case 376u: goto L_0023F688;
    case 377u: goto L_0023F69C;
    case 378u: goto L_0023F6B0;
    case 379u: goto L_0023F6D8;
    case 380u: goto L_0023F6F0;
    case 381u: goto L_0023F6F8;
    case 382u: goto L_0023F720;
    case 383u: goto L_0023F730;
    case 384u: goto L_0023F744;
    case 385u: goto L_0023F750;
    case 386u: goto L_0023F758;
    case 387u: goto L_0023F764;
    case 388u: goto L_0023F774;
    case 389u: goto L_0023F788;
    case 390u: goto L_0023F798;
    case 391u: goto L_0023F7B0;
    case 392u: goto L_0023F7C0;
    case 393u: goto L_0023F7D8;
    case 394u: goto L_0023F7E0;
    case 395u: goto L_0023F7F8;
    case 396u: goto L_0023F800;
    case 397u: goto L_0023F810;
    case 398u: goto L_0023F82C;
    case 399u: goto L_0023F838;
    case 400u: goto L_0023F878;
    case 401u: goto L_0023F8A0;
    case 402u: goto L_0023F8C0;
    case 403u: goto L_0023F8E0;
    case 404u: goto L_0023F900;
    case 405u: goto L_0023F980;
    case 406u: goto L_0023F9C4;
    case 407u: goto L_0023F9D8;
    case 408u: goto L_0023F9F0;
    case 409u: goto L_0023FA28;
    case 410u: goto L_0023FA4C;
    case 411u: goto L_0023FA88;
    case 412u: goto L_0023FAB0;
    case 413u: goto L_0023FAF0;
    case 414u: goto L_0023FB10;
    case 415u: goto L_0023FB80;
    case 416u: goto L_0023FBE0;
    case 417u: goto L_0023FC30;
    case 418u: goto L_0023FC90;
    case 419u: goto L_0023FCC0;
    case 420u: goto L_0023FCD0;
    case 421u: goto L_0023FCF0;
    case 422u: goto L_0023FD38;
    case 423u: goto L_0023FD64;
    case 424u: goto L_0023FDC0;
    case 425u: goto L_0023FDD8;
    case 426u: goto L_0023FE20;
    case 427u: goto L_0023FE68;
    case 428u: goto L_0023FEB0;
    case 429u: goto L_0023FEF8;
    case 430u: goto L_0023FF38;
    case 431u: goto L_0023FF60;
    case 432u: goto L_0023FF74;
    case 433u: goto L_0023FFA4;
    case 434u: goto L_0023FFE0;
    case 435u: goto L_0023FFF8;
    default: bad_entry(c, 0x0023C000u); return;
    }
L_0023C000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0023C0C0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0023C058; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30676u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023C058; } }
    st32((c.r[28].w[0] - 30676u), c.r[3].w[0]);
    c.budget -= 1;
L_0023C058:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 14256u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 14260u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0023C0C8; } }
L_0023C070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[3].w[0] - 14256u), c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C0A4; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0023C0A4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[3].w[0]), 0u);  if (t) { goto L_0023C0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C0C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0023C0C0u) [[unlikely]] return; }
L_0023C0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0023C160; } }
L_0023C0C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[17], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 14260u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C0F8u); st32((c.r[2].w[0] - 14256u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023C0F8u) [[unlikely]] return; }
L_0023C0F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 14264u), c.r[2].w[0]);  if (t) { goto L_0023C150; } }
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
L_0023C11C:
    set32(c.r[6], ld32((c.r[4].w[0] - 14256u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 14256u), c.r[7].w[0]);  if (t) { goto L_0023C140; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_0023C140:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C11Cu | kUnwind; return; } goto L_0023C11C; } }
L_0023C150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C158u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023C158u) [[unlikely]] return; }
L_0023C158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C070u | kUnwind; return; } goto L_0023C070; } }
L_0023C160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023C180:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C1A0u); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 93u, depth + 1u); else { c.pc = 0x0023CF30u; return; } if (c.pc != 0x0023C1A0u) [[unlikely]] return; }
L_0023C1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C270; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C1B8u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 89u, depth + 1u); else { c.pc = 0x0023CDE0u; return; } if (c.pc != 0x0023C1B8u) [[unlikely]] return; }
L_0023C1B8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C2D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C1D8u); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0023C930u; return; } if (c.pc != 0x0023C1D8u) [[unlikely]] return; }
L_0023C1D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C1ECu); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023C1ECu) [[unlikely]] return; }
L_0023C1EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C1F8u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0023C810u; return; } if (c.pc != 0x0023C1F8u) [[unlikely]] return; }
L_0023C1F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C208u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023C208u) [[unlikely]] return; }
L_0023C208:
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C224u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0023C3B0u; return; } if (c.pc != 0x0023C224u) [[unlikely]] return; }
L_0023C224:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C230u); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0023C390u; return; } if (c.pc != 0x0023C230u) [[unlikely]] return; }
L_0023C230:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { goto L_0023C270; } }
L_0023C244:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C260u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023C260u) [[unlikely]] return; }
L_0023C260:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C244u | kUnwind; return; } goto L_0023C244; } }
    c.budget -= 1;
L_0023C270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C27Cu); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0023C390u; return; } if (c.pc != 0x0023C27Cu) [[unlikely]] return; }
L_0023C27C:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C28Cu); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0023C380u; return; } if (c.pc != 0x0023C28Cu) [[unlikely]] return; }
L_0023C28C:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30672u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023C35C; } }
L_0023C2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0023C36C; } }
L_0023C2D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C2E8u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 88u, depth + 1u); else { c.pc = 0x0023CD90u; return; } if (c.pc != 0x0023C2E8u) [[unlikely]] return; }
L_0023C2E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C2F8u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023C2F8u) [[unlikely]] return; }
L_0023C2F8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C304u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023C304u) [[unlikely]] return; }
L_0023C304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C270u | kUnwind; return; } goto L_0023C270; } }
L_0023C30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C314u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0023CD80u; return; } if (c.pc != 0x0023C314u) [[unlikely]] return; }
L_0023C314:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C328u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023C328u) [[unlikely]] return; }
L_0023C328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C330u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0023CBE0u; return; } if (c.pc != 0x0023C330u) [[unlikely]] return; }
L_0023C330:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C340u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023C340u) [[unlikely]] return; }
L_0023C340:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C34Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023C34Cu) [[unlikely]] return; }
L_0023C34C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C30Cu | kUnwind; return; } goto L_0023C30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C270u | kUnwind; return; } goto L_0023C270; } }
L_0023C35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C364u); set32(c.r[4], ld32((c.r[28].w[0] - 30672u)));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0023B580u; return; } if (c.pc != 0x0023C364u) [[unlikely]] return; }
L_0023C364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C2D0u | kUnwind; return; } goto L_0023C2D0; } }
L_0023C36C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0023C380:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_0023C390:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0023C3B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023C434; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] - 1u);  if (t) { goto L_0023C608; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0023C3FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C420; } }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0023C420:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C3FCu | kUnwind; return; } goto L_0023C3FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023C560; } }
L_0023C434:
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023C480; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0023C444:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C468; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0023C468:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C444u | kUnwind; return; } goto L_0023C444; } }
    c.budget -= 1;
L_0023C480:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023C4F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C494u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0023C494u) [[unlikely]] return; }
L_0023C494:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0023C4E4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0023C4BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0023C4C4; } }
L_0023C4BC:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0023C4C4:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C4E0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023C4E0u) [[unlikely]] return; }
L_0023C4E0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0023C4E4:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0023C4F0:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0023C568; } }
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023C5B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0023C51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023C550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C52Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0023C52Cu) [[unlikely]] return; }
L_0023C52C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C544; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C544u); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0023C630u; return; } if (c.pc != 0x0023C544u) [[unlikely]] return; }
L_0023C544:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0023C550:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C560u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0023C3B0u; return; } if (c.pc != 0x0023C560u) [[unlikely]] return; }
L_0023C560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023C608; } }
L_0023C568:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] - 1u);  if (t) { goto L_0023C608; } }
L_0023C570:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C590u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0023C590u) [[unlikely]] return; }
L_0023C590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023C5AC; } }
L_0023C598:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C570u | kUnwind; return; } goto L_0023C570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C560u | kUnwind; return; } goto L_0023C560; } }
L_0023C5AC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C598u | kUnwind; return; } goto L_0023C598; } }
L_0023C5B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C5D8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0023C5D8u) [[unlikely]] return; }
L_0023C5D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023C5FC; } }
L_0023C5E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C5B8u | kUnwind; return; } goto L_0023C5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C51Cu | kUnwind; return; } goto L_0023C51C; } }
L_0023C5FC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C5E0u | kUnwind; return; } goto L_0023C5E0; } }
L_0023C608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023C630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0023C654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0023C65C; } }
L_0023C654:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0023C65C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C678u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023C678u) [[unlikely]] return; }
L_0023C678:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023C690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0023C6A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[4].w[0] + 4u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0023C7E0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C7E0; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0023C7D8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C7D8; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0023C7D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C7D0; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0023C7C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C7C8; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0023C7C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C7C0; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0023C7B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C7B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023C7B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C774u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023C774u) [[unlikely]] return; }
L_0023C774:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0023C77C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C784:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C78C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C794:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C79C:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C7A4:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0023C7E4; } }
L_0023C7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C77Cu | kUnwind; return; } goto L_0023C77C; } }
L_0023C7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C784u | kUnwind; return; } goto L_0023C784; } }
L_0023C7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C78Cu | kUnwind; return; } goto L_0023C78C; } }
L_0023C7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C794u | kUnwind; return; } goto L_0023C794; } }
L_0023C7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C79Cu | kUnwind; return; } goto L_0023C79C; } }
L_0023C7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C7A4u | kUnwind; return; } goto L_0023C7A4; } }
L_0023C7E0:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 1;
L_0023C7E4:
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
L_0023C810:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[4].w[0] + 4u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0023C8FC; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0023C8F4; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0023C8EC; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0023C8E4; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0023C8DC; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0023C8D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023C89C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C890u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0023C810u; return; } if (c.pc != 0x0023C890u) [[unlikely]] return; }
L_0023C890:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0023C8A0; } }
L_0023C89C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0023C8A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C8A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C8B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C8B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C8C0:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C8C8:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0023C900; } }
L_0023C8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C8A8u | kUnwind; return; } goto L_0023C8A8; } }
L_0023C8DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C8B0u | kUnwind; return; } goto L_0023C8B0; } }
L_0023C8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C8B8u | kUnwind; return; } goto L_0023C8B8; } }
L_0023C8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C8C0u | kUnwind; return; } goto L_0023C8C0; } }
L_0023C8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C8C8u | kUnwind; return; } goto L_0023C8C8; } }
L_0023C8FC:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 1;
L_0023C900:
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
L_0023C930:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023CAAC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023C9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C970u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0023C970u) [[unlikely]] return; }
L_0023C970:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0023C9C0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0023C998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0023C9A0; } }
L_0023C998:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0023C9A0:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C9BCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023C9BCu) [[unlikely]] return; }
L_0023C9BC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0023C9C0:
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 3;
L_0023C9CC:
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CAD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CA48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C9F8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0023C9F8u) [[unlikely]] return; }
L_0023C9F8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0023CA3C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 8u), 0u);  if (t) { goto L_0023CA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0023CA28; } }
L_0023CA20:
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0023CA28:
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CA38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 77u, depth + 1u); else { c.pc = 0x0023CB60u; return; } if (c.pc != 0x0023CA38u) [[unlikely]] return; }
L_0023CA38:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0023CA3C:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0023CA48:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CB04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CA74u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0023CA74u) [[unlikely]] return; }
L_0023CA74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023CA8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CA8Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0023C630u; return; } if (c.pc != 0x0023CA8Cu) [[unlikely]] return; }
L_0023CA8C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0023CA98:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CAA4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0023C930u; return; } if (c.pc != 0x0023CAA4u) [[unlikely]] return; }
L_0023CAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0023CB40; } }
L_0023CAAC:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023CB3C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CB3C; } }
L_0023CAD8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023CB3C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CAA4u | kUnwind; return; } goto L_0023CAA4; } }
L_0023CB04:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CB20u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0023CB20u) [[unlikely]] return; }
L_0023CB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CB30; } }
L_0023CB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CAA4u | kUnwind; return; } goto L_0023CAA4; } }
L_0023CB30:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CB28u | kUnwind; return; } goto L_0023CB28; } }
L_0023CB3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0023CB40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023CB60:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0023CB80:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0023CBA0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_0023CBE0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023CC00; } }
L_0023CBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023CC6C; } }
L_0023CC00:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023CC64; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023CC64; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 4u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CBF8u | kUnwind; return; } goto L_0023CBF8; } }
L_0023CC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CBF8u | kUnwind; return; } goto L_0023CBF8; } }
L_0023CC6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023CC80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023CCDC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0023CCB0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023CD60; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0023CD64; } }
L_0023CCDC:
    set32(c.r[17], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CD04u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023CD04u) [[unlikely]] return; }
L_0023CD04:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0023CD50; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0023CD18:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023CD40; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0023CD40:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CD18u | kUnwind; return; } goto L_0023CD18; } }
L_0023CD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CD58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023CD58u) [[unlikely]] return; }
L_0023CD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CCB0u | kUnwind; return; } goto L_0023CCB0; } }
L_0023CD60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0023CD64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023CD80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0023CD90:
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023CDA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[5].w[0])));  if (t) { goto L_0023CDA8; } }
L_0023CDA4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023CDA8:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_0023CDE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CF10; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CF00; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CEAC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CE98; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CE84; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023CEC0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0023CE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CE90; } }
L_0023CE84:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0023CE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CEA4; } }
L_0023CE98:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0023CEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CEB8; } }
L_0023CEAC:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0023CEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0023CF20; } }
L_0023CEC0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CEEC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CEE4u); set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 89u, depth + 1u); else { c.pc = 0x0023CDE0u; return; } if (c.pc != 0x0023CEE4u) [[unlikely]] return; }
L_0023CEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CEF8; } }
L_0023CEEC:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0023CEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CE7Cu | kUnwind; return; } goto L_0023CE7C; } }
L_0023CF00:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CEB8u | kUnwind; return; } goto L_0023CEB8; } }
L_0023CF10:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_0023CF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023CF30:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0023CF40:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CF68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 93u, depth + 1u); else { c.pc = 0x0023CF30u; return; } if (c.pc != 0x0023CF68u) [[unlikely]] return; }
L_0023CF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D0B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CF80u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 89u, depth + 1u); else { c.pc = 0x0023CDE0u; return; } if (c.pc != 0x0023CF80u) [[unlikely]] return; }
L_0023CF80:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D03C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CFA0u); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0023C930u; return; } if (c.pc != 0x0023CFA0u) [[unlikely]] return; }
L_0023CFA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CFB4u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023CFB4u) [[unlikely]] return; }
L_0023CFB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CFC0u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0023C810u; return; } if (c.pc != 0x0023CFC0u) [[unlikely]] return; }
L_0023CFC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CFD0u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023CFD0u) [[unlikely]] return; }
L_0023CFD0:
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CFECu); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0023C3B0u; return; } if (c.pc != 0x0023CFECu) [[unlikely]] return; }
L_0023CFEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CFF8u); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0023C390u; return; } if (c.pc != 0x0023CFF8u) [[unlikely]] return; }
L_0023CFF8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { goto L_0023D0B8; } }
L_0023D00C:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    set32(c.r[5], c.r[29].w[0] + 140u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D028u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023D028u) [[unlikely]] return; }
L_0023D028:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D00Cu | kUnwind; return; } goto L_0023D00C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023D0B8; } }
L_0023D03C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D04Cu); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 88u, depth + 1u); else { c.pc = 0x0023CD90u; return; } if (c.pc != 0x0023D04Cu) [[unlikely]] return; }
L_0023D04C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D05Cu); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023D05Cu) [[unlikely]] return; }
L_0023D05C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D068u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023D068u) [[unlikely]] return; }
L_0023D068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D0B8; } }
L_0023D070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D078u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0023CD80u; return; } if (c.pc != 0x0023D078u) [[unlikely]] return; }
L_0023D078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D08Cu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023D08Cu) [[unlikely]] return; }
L_0023D08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D094u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0023CBE0u; return; } if (c.pc != 0x0023D094u) [[unlikely]] return; }
L_0023D094:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D0A4u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023D0A4u) [[unlikely]] return; }
L_0023D0A4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D0B0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023D0B0u) [[unlikely]] return; }
L_0023D0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D070u | kUnwind; return; } goto L_0023D070; } }
L_0023D0B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D0C4u); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0023C390u; return; } if (c.pc != 0x0023D0C4u) [[unlikely]] return; }
L_0023D0C4:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D0D4u); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0023C380u; return; } if (c.pc != 0x0023D0D4u) [[unlikely]] return; }
L_0023D0D4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0023D120:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0023D168; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30676u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023D168; } }
    st32((c.r[28].w[0] - 30676u), c.r[3].w[0]);
    c.budget -= 1;
L_0023D168:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_0023D180:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[3].w[0] - 29800u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023D1A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 32752u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023D1D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0023D398; } }
L_0023D1D0:
    set32(c.r[16], ld32((c.r[28].w[0] - 30684u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[28].w[0] - 32752u), c.r[4].w[0]);
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D1E8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023D1E8u) [[unlikely]] return; }
L_0023D1E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11344u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D204u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0023D204u) [[unlikely]] return; }
L_0023D204:
    set32(c.r[3], ld32((c.r[28].w[0] - 30680u)));
    st32((c.r[28].w[0] - 30684u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0023D220; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0023D220:
    set32(c.r[6], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D230u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0023D230u) [[unlikely]] return; }
L_0023D230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30684u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 14288u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] - c.r[16].w[0]);  if (t) { goto L_0023D250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[2].w[0] - 14304u)));  if (t) { goto L_0023D254; } }
L_0023D250:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023D254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[11], ld32((c.r[2].w[0] - 14304u)));
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[11].w[0] - 4u);
    set32(c.r[10], ld32((c.r[2].w[0] - 14288u)));
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[10].w[0] << 2);
    set32(c.r[8], ld32((c.r[2].w[0] - 14300u)));
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 80u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 14296u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[9].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0023D330; } }
    set32(c.r[3], c.r[29].w[0] + 76u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
L_0023D2C8:
    set32(c.r[14], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_0023D35C; } }
    c.budget -= 1;
L_0023D2D8:
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_0023D368; } }
    c.budget -= 1;
L_0023D2E8:
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[14], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[12].w[0] - 14288u)));
    set32(c.r[18], ld32((c.r[13].w[0] - 14304u)));
    set32(c.r[24], ld32((c.r[11].w[0] - 14296u)));
    set32(c.r[15], ld32((c.r[10].w[0] - 14300u)));
    c.r[14].d[0] = c.r[9].d[0] ^ c.r[14].d[0];
    set32(c.r[25], c.r[25].w[0] << 2);
    c.r[14].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[17], c.r[18].w[0] - 4u);
    set32(c.r[25], c.r[18].w[0] + c.r[25].w[0]);
    c.r[14].d[0] = c.r[14].d[0] ^ 1ull;
    st32((c.r[5].w[0]), c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[24].w[0]);
    st32((c.r[4].w[0]), c.r[25].w[0]);
    c.budget -= 17;
    { const bool t = c.r[14].d[0] != 0ull; st32((c.r[2].w[0]), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D2C8u | kUnwind; return; } goto L_0023D2C8; } }
    c.budget -= 1;
L_0023D330:
    set32(c.r[3], ld32((c.r[28].w[0] - 30676u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[28].w[0] - 30676u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (t) { goto L_0023D354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D354u); set32(c.r[4], c.r[16].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023D354u) [[unlikely]] return; }
L_0023D354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023D398; } }
L_0023D35C:
    set32(c.r[14], c.r[14].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D2D8u | kUnwind; return; } goto L_0023D2D8; } }
L_0023D368:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0023D390; } }
    set32(c.r[9], ld32((c.r[8].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0023D390; } }
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[9], ld32((c.r[8].w[0])));
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D2E8u | kUnwind; return; } goto L_0023D2E8; } }
L_0023D390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D2E8u | kUnwind; return; } goto L_0023D2E8; } }
L_0023D398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0023D3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0023D3C0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
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
    set32(c.r[4], ld32((c.r[2].w[0] - 14300u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023D6E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D6E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D410u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023D410u) [[unlikely]] return; }
L_0023D410:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 14288u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0023D41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D42C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[29].w[0] + 188u);  if (t) { goto L_0023D434; } }
L_0023D42C:
    set32(c.r[2], 0u + 8u);
    set32(c.r[22], c.r[29].w[0] + 188u);
    c.budget -= 2;
L_0023D434:
    set32(c.r[17], c.r[29].w[0] + 192u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D454u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023D454u) [[unlikely]] return; }
L_0023D454:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14288u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] - 14304u)));  if (t) { goto L_0023D478; } }
L_0023D474:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023D478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 160u), 0u);
    set32(c.r[6], ld32((c.r[2].w[0] - 14304u)));
    set32(c.r[23], c.r[29].w[0] + 164u);
    set32(c.r[30], c.r[29].w[0] + 168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[6].w[0] - 4u);
    set32(c.r[5], ld32((c.r[2].w[0] - 14288u)));
    st32((c.r[23].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[18], ld32((c.r[2].w[0] - 14300u)));
    set32(c.r[21], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[30].w[0]), c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 176u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 14296u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[19].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_0023D588; } }
L_0023D4D4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30676u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023D518; } }
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0023D6EC; } }
L_0023D4F8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[4].w[0]);  if (t) { goto L_0023D518; } }
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_0023D518:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[21].d[0];  if (t) { goto L_0023D770; } }
    c.budget -= 1;
L_0023D528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 14288u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[3].w[0] - 14304u)));
    st32((c.r[29].w[0] + 160u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 14296u)));
    set32(c.r[2], c.r[7].w[0] - 4u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 172u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[19].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[30].w[0]), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D4D4u | kUnwind; return; } goto L_0023D4D4; } }
    c.budget -= 1;
L_0023D588:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D598u); set32(c.r[18], c.r[2].w[0] - 4u);  if (depth < kMaxDepth) unit_000F(c, 161u, depth + 1u); else { c.pc = 0x0023DB90u; return; } if (c.pc != 0x0023D598u) [[unlikely]] return; }
L_0023D598:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], c.r[16].w[0] >> 1);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023D7A0; } }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0023D5B0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023D7CC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30676u)));
    c.budget -= 1;
L_0023D5BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[28].w[0] - 30680u), c.r[5].w[0]);
    c.budget -= 5;
L_0023D5D0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0023D5D4:
    c.r[7].d[0] = c.r[6].d[0] << 32;
    set32(c.r[8], ld32((c.r[29].w[0] + 184u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_0023D80C; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0023D80C; } }
    c.r[2].d[0] = ld16((c.r[5].w[0] + 2u));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 30680u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[8].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 15;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D5D0u | kUnwind; return; } goto L_0023D5D0; } }
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023D6B0; } }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0023D670; } }
    c.r[2].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023D670; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0023D670:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0023D6B0; } }
L_0023D678:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[8], c.r[8].w[0] - 8u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[1].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D678u | kUnwind; return; } goto L_0023D678; } }
    c.budget -= 1;
L_0023D6B0:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D5D0u | kUnwind; return; } goto L_0023D5D0; } }
L_0023D6B8:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D6B8u | kUnwind; return; } goto L_0023D6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D5D4u | kUnwind; return; } goto L_0023D5D4; } }
    c.budget -= 1;
L_0023D6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] - 14288u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D41Cu | kUnwind; return; } goto L_0023D41C; } }
L_0023D6EC:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[20], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D710u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023D710u) [[unlikely]] return; }
L_0023D710:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0023D760; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0023D728:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0]), c.r[4].w[0]);  if (t) { goto L_0023D750; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0023D750:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D728u | kUnwind; return; } goto L_0023D728; } }
L_0023D760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D768u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023D768u) [[unlikely]] return; }
L_0023D768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D4F8u | kUnwind; return; } goto L_0023D4F8; } }
L_0023D770:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0023D798; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D798; } }
    set32(c.r[19], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[19].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D528u | kUnwind; return; } goto L_0023D528; } }
L_0023D798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D528u | kUnwind; return; } goto L_0023D528; } }
L_0023D7A0:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D7B4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 158u, depth + 1u); else { c.pc = 0x0023DAD0u; return; } if (c.pc != 0x0023D7B4u) [[unlikely]] return; }
L_0023D7B4:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D7A0u | kUnwind; return; } goto L_0023D7A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D5B0u | kUnwind; return; } goto L_0023D5B0; } }
L_0023D7CC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0023D7D4:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D7E8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 158u, depth + 1u); else { c.pc = 0x0023DAD0u; return; } if (c.pc != 0x0023D7E8u) [[unlikely]] return; }
L_0023D7E8:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D7F4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 401u, depth + 1u); else { c.pc = 0x0023F8A0u; return; } if (c.pc != 0x0023D7F4u) [[unlikely]] return; }
L_0023D7F4:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D7D4u | kUnwind; return; } goto L_0023D7D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 30676u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D5BCu | kUnwind; return; } goto L_0023D5BC; } }
L_0023D80C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D9D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 3;
L_0023D840:
    c.r[5].d[0] = c.r[6].d[0] << 32;
    set32(c.r[4], ld32((c.r[28].w[0] - 30680u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld16((c.r[8].w[0] + 2u));
    set32(c.r[9], c.r[8].w[0] + 6u);
    st16((c.r[8].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[5], c.r[7].w[0] + 2u);
    st32((c.r[28].w[0] - 30680u), c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[8].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[5], c.r[7].w[0] + 2u);
    st32((c.r[28].w[0] - 30680u), c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[8].w[0] + 2u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[5], c.r[7].w[0] + 2u);
    st32((c.r[28].w[0] - 30680u), c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[8].w[0] + 4u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 24;
L_0023D8A0:
    set32(c.r[7], ld32((c.r[28].w[0] - 30680u)));
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[7].w[0] + 2u);
    st32((c.r[28].w[0] - 30680u), c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[8].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D8A0u | kUnwind; return; } goto L_0023D8A0; } }
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0023D9A0; } }
    set32(c.r[7], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023D978; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0023D8F8; } }
    c.r[7].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0023D8F8; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0023D8F8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0023D978; } }
L_0023D900:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] - 8u);
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[8].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[1].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 8u)));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 12u)));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 16u)));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 24u)));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[7].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D900u | kUnwind; return; } goto L_0023D900; } }
    c.budget -= 1;
L_0023D978:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0023D9A0; } }
L_0023D980:
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[7].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D980u | kUnwind; return; } goto L_0023D980; } }
    c.budget -= 1;
L_0023D9A0:
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D840u | kUnwind; return; } goto L_0023D840; } }
    c.budget -= 1;
L_0023D9D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32752u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30684u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[28].w[0] - 30676u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0023D9FC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0023D9FC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023DA0C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023DA0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DA18u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023DA18u) [[unlikely]] return; }
L_0023DA18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0023DA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023DAB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023DA98; } }
L_0023DA78:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DA78u | kUnwind; return; } goto L_0023DA78; } }
    c.budget -= 1;
L_0023DA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DAA0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023DAA0u) [[unlikely]] return; }
L_0023DAA0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0023DAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DAB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0023DAB8u) [[unlikely]] return; }
L_0023DAB8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023DAD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[16], c.r[6].w[0] << 1);
    c.r[1].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023DB70; } }
L_0023DAF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_0023DB28; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023DB28; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0023DB28:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023DB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DB5Cu);  if (depth < kMaxDepth) unit_000F(c, 401u, depth + 1u); else { c.pc = 0x0023F8A0u; return; } if (c.pc != 0x0023DB5Cu) [[unlikely]] return; }
L_0023DB5C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] << 1);
    c.r[1].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DAF8u | kUnwind; return; } goto L_0023DAF8; } }
L_0023DB70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023DB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_0023DBA0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
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
    set32(c.r[2], ld32((c.r[2].w[0] - 14256u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023DE50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14292u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023DC08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14300u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DC00u); set32(c.r[5], 0u - c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 89u, depth + 1u); else { c.pc = 0x0023CDE0u; return; } if (c.pc != 0x0023DC00u) [[unlikely]] return; }
L_0023DC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0023DC14; } }
L_0023DC08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14304u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0023DC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023DE7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14288u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14292u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 188u), 0u);  if (t) { goto L_0023E080; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14300u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023DC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DC50u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0023DC50u) [[unlikely]] return; }
L_0023DC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023DC6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 14292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DC6Cu); set32(c.r[5], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0023C630u; return; } if (c.pc != 0x0023DC6Cu) [[unlikely]] return; }
L_0023DC6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    st32((c.r[3].w[0] - 14300u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 5;
L_0023DC80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14300u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DC90u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0023C930u; return; } if (c.pc != 0x0023DC90u) [[unlikely]] return; }
L_0023DC90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0023DC94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 14256u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 14260u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0023E0BC; } }
L_0023DCAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] - 14256u), c.r[5].w[0]);  if (t) { goto L_0023DCD8; } }
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0023DCD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14300u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023DD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DCF0u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0023C810u; return; } if (c.pc != 0x0023DCF0u) [[unlikely]] return; }
L_0023DCF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 14292u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0023DD08; } }
L_0023DD00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 14292u)));
    c.budget -= 2;
L_0023DD08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14300u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023E158; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023E158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DD2Cu);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023DD2Cu) [[unlikely]] return; }
L_0023DD2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 14288u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0023DD38:
    set32(c.r[19], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 184u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14288u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14292u)));
    set32(c.r[2], c.r[4].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0023E164; } }
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E1C0; } }
L_0023DD6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14300u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023DDB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DD84u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0023DD84u) [[unlikely]] return; }
L_0023DD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023DDA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 14292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DDA0u); set32(c.r[5], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0023C630u; return; } if (c.pc != 0x0023DDA0u) [[unlikely]] return; }
L_0023DDA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    st32((c.r[3].w[0] - 14300u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 5;
L_0023DDB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 14300u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DDC8u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0023C3B0u; return; } if (c.pc != 0x0023DDC8u) [[unlikely]] return; }
L_0023DDC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 14256u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { goto L_0023DE50; } }
L_0023DDF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 14256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14260u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_0023E228; } }
    c.budget -= 1;
L_0023DE10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] - 14256u), c.r[5].w[0]);  if (t) { goto L_0023DE40; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 2;
L_0023DE40:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DDF4u | kUnwind; return; } goto L_0023DDF4; } }
    c.budget -= 1;
L_0023DE50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 14256u), c.r[5].w[0]);  if (t) { goto L_0023E2C8; } }
L_0023DE7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14288u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023DE98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0] - 14304u)));  if (t) { goto L_0023DE9C; } }
L_0023DE98:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023DE9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 160u), 0u);
    set32(c.r[6], ld32((c.r[2].w[0] - 14304u)));
    set32(c.r[17], c.r[29].w[0] + 164u);
    set32(c.r[22], c.r[29].w[0] + 168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[6].w[0] - 4u);
    set32(c.r[5], ld32((c.r[2].w[0] - 14288u)));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[19], ld32((c.r[2].w[0] - 14300u)));
    set32(c.r[18], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[22].w[0]), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 176u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 14296u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[20].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DE50u | kUnwind; return; } goto L_0023DE50; } }
    set32(c.r[23], c.r[29].w[0] + 172u);
    set32(c.r[30], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_0023DF00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 14256u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 14260u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0023DFB4; } }
L_0023DF18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] - 14256u), c.r[5].w[0]);  if (t) { goto L_0023DF48; } }
    st32((c.r[2].w[0]), c.r[20].w[0]);
    c.budget -= 2;
L_0023DF48:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[18].d[0];  if (t) { goto L_0023E050; } }
    c.budget -= 1;
L_0023DF58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[3].w[0] - 14304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 14288u)));
    st32((c.r[29].w[0] + 160u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[7].w[0] - 4u);
    set32(c.r[4], ld32((c.r[3].w[0] - 14296u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[17].w[0]), c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[22].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 14300u)));
    st32((c.r[23].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[20].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[30].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DF00u | kUnwind; return; } goto L_0023DF00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DE50u | kUnwind; return; } goto L_0023DE50; } }
L_0023DFB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[21], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 14260u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DFE4u); st32((c.r[2].w[0] - 14256u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023DFE4u) [[unlikely]] return; }
L_0023DFE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 14264u), c.r[2].w[0]);  if (t) { goto L_0023E040; } }
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
L_0023E008:
    set32(c.r[6], ld32((c.r[4].w[0] - 14256u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 14256u), c.r[7].w[0]);  if (t) { goto L_0023E030; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 3;
L_0023E030:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E008u | kUnwind; return; } goto L_0023E008; } }
L_0023E040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E048u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023E048u) [[unlikely]] return; }
L_0023E048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DF18u | kUnwind; return; } goto L_0023DF18; } }
L_0023E050:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0023E078; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023E078; } }
    set32(c.r[20], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DF58u | kUnwind; return; } goto L_0023DF58; } }
L_0023E078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DF58u | kUnwind; return; } goto L_0023DF58; } }
L_0023E080:
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[2].w[0] - 14288u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14304u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E0A4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0023E0A4u) [[unlikely]] return; }
L_0023E0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E0B4; } }
L_0023E0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DC94u | kUnwind; return; } goto L_0023DC94; } }
L_0023E0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E0ACu | kUnwind; return; } goto L_0023E0AC; } }
L_0023E0BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[18], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 14260u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E0ECu); st32((c.r[2].w[0] - 14256u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023E0ECu) [[unlikely]] return; }
L_0023E0EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 14264u), c.r[2].w[0]);  if (t) { goto L_0023E148; } }
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
L_0023E110:
    set32(c.r[6], ld32((c.r[4].w[0] - 14256u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 14256u), c.r[7].w[0]);  if (t) { goto L_0023E138; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 3;
L_0023E138:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E110u | kUnwind; return; } goto L_0023E110; } }
L_0023E148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E150u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023E150u) [[unlikely]] return; }
L_0023E150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DCACu | kUnwind; return; } goto L_0023DCAC; } }
L_0023E158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] - 14288u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DD38u | kUnwind; return; } goto L_0023DD38; } }
L_0023E164:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[16], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DDC8u | kUnwind; return; } goto L_0023DDC8; } }
L_0023E16C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 14288u)));
    set32(c.r[4], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14304u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[3].w[0] - 14288u), c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E198u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0023E198u) [[unlikely]] return; }
L_0023E198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E1B4; } }
L_0023E1A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E16Cu | kUnwind; return; } goto L_0023E16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DDC8u | kUnwind; return; } goto L_0023DDC8; } }
L_0023E1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E1A0u | kUnwind; return; } goto L_0023E1A0; } }
    c.budget -= 1;
L_0023E1C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 14288u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14304u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[3].w[0] - 14288u), c.r[6].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E1ECu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0023E1ECu) [[unlikely]] return; }
L_0023E1EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E21C; } }
    c.budget -= 1;
L_0023E1F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 14288u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 14292u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E1C0u | kUnwind; return; } goto L_0023E1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DD6Cu | kUnwind; return; } goto L_0023DD6C; } }
L_0023E21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E1F8u | kUnwind; return; } goto L_0023E1F8; } }
    c.budget -= 1;
L_0023E228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 14260u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[3], c.r[2].w[0] >> 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E258u); st32((c.r[2].w[0] - 14256u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023E258u) [[unlikely]] return; }
L_0023E258:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 14264u), c.r[2].w[0]);  if (t) { goto L_0023E2B8; } }
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 5;
L_0023E280:
    set32(c.r[6], ld32((c.r[4].w[0] - 14256u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 14256u), c.r[7].w[0]);  if (t) { goto L_0023E2A8; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 3;
L_0023E2A8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E280u | kUnwind; return; } goto L_0023E280; } }
L_0023E2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E2C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023E2C0u) [[unlikely]] return; }
L_0023E2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DE10u | kUnwind; return; } goto L_0023DE10; } }
L_0023E2C8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0023E300:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E330u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 162u, depth + 1u); else { c.pc = 0x0023DBA0u; return; } if (c.pc != 0x0023E330u) [[unlikely]] return; }
L_0023E330:
    set32(c.r[4], ld32((c.r[28].w[0] - 32752u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30684u)));
    c.r[21].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[16], c.r[21].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0023E364; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0023E364:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E378u);  if (depth < kMaxDepth) unit_000F(c, 127u, depth + 1u); else { c.pc = 0x0023D3C0u; return; } if (c.pc != 0x0023E378u) [[unlikely]] return; }
L_0023E378:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E39C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 32752u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E39Cu); set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_000F(c, 118u, depth + 1u); else { c.pc = 0x0023D1A0u; return; } if (c.pc != 0x0023E39Cu) [[unlikely]] return; }
L_0023E39C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E3C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 117u, depth + 1u); else { c.pc = 0x0023D180u; return; } if (c.pc != 0x0023E3C0u) [[unlikely]] return; }
L_0023E3C0:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], c.r[2].w[0] + 6u);  if (t) { goto L_0023E408; } }
L_0023E3E0:
    c.r[4].d[0] = ld16((c.r[19].w[0]));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E3E0u | kUnwind; return; } goto L_0023E3E0; } }
    c.budget -= 1;
L_0023E408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = ld16((c.r[2].w[0] - 29800u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0023E450:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
L_0023E47C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E47Cu | kUnwind; return; } goto L_0023E47C; } }
    set32(c.r[2], c.r[3].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E4A4u); set32(c.r[18], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_000F(c, 162u, depth + 1u); else { c.pc = 0x0023DBA0u; return; } if (c.pc != 0x0023E4A4u) [[unlikely]] return; }
L_0023E4A4:
    set32(c.r[4], ld32((c.r[28].w[0] - 32752u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30684u)));
    c.r[21].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[16], c.r[21].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0023E4D8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0023E4D8:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E4ECu);  if (depth < kMaxDepth) unit_000F(c, 127u, depth + 1u); else { c.pc = 0x0023D3C0u; return; } if (c.pc != 0x0023E4ECu) [[unlikely]] return; }
L_0023E4EC:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E510; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 32752u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E510u); set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_000F(c, 118u, depth + 1u); else { c.pc = 0x0023D1A0u; return; } if (c.pc != 0x0023E510u) [[unlikely]] return; }
L_0023E510:
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E534u); c.r[5].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 117u, depth + 1u); else { c.pc = 0x0023D180u; return; } if (c.pc != 0x0023E534u) [[unlikely]] return; }
L_0023E534:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4u));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[2].w[0] + 6u);
    c.budget -= 8;
L_0023E554:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E554u | kUnwind; return; } goto L_0023E554; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0023E5A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E5C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 162u, depth + 1u); else { c.pc = 0x0023DBA0u; return; } if (c.pc != 0x0023E5C8u) [[unlikely]] return; }
L_0023E5C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 32752u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30684u)));
    c.r[17].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[16], c.r[17].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0023E5FC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0023E5FC:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E610u);  if (depth < kMaxDepth) unit_000F(c, 127u, depth + 1u); else { c.pc = 0x0023D3C0u; return; } if (c.pc != 0x0023E610u) [[unlikely]] return; }
L_0023E610:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E634; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 32752u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E634u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 118u, depth + 1u); else { c.pc = 0x0023D1A0u; return; } if (c.pc != 0x0023E634u) [[unlikely]] return; }
L_0023E634:
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E658u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 117u, depth + 1u); else { c.pc = 0x0023D180u; return; } if (c.pc != 0x0023E658u) [[unlikely]] return; }
L_0023E658:
    st32((c.r[20].w[0]), c.r[18].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0023E680:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] - 14304u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0023E6D0; } }
L_0023E6B4:
    set32(c.r[20], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E6B4u | kUnwind; return; } goto L_0023E6B4; } }
L_0023E6D0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[17].d[0];  if (t) { goto L_0023E888; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E6E4u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0023C810u; return; } if (c.pc != 0x0023E6E4u) [[unlikely]] return; }
L_0023E6E4:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E888; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E704u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 161u, depth + 1u); else { c.pc = 0x0023DB90u; return; } if (c.pc != 0x0023E704u) [[unlikely]] return; }
L_0023E704:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E808; } }
L_0023E710:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E888; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E730u); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 161u, depth + 1u); else { c.pc = 0x0023DB90u; return; } if (c.pc != 0x0023E730u) [[unlikely]] return; }
L_0023E730:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E7E8; } }
    c.budget -= 1;
L_0023E740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E750u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 281u, depth + 1u); else { c.pc = 0x0023EE10u; return; } if (c.pc != 0x0023E750u) [[unlikely]] return; }
L_0023E750:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E7C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E774u); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 281u, depth + 1u); else { c.pc = 0x0023EE10u; return; } if (c.pc != 0x0023E774u) [[unlikely]] return; }
L_0023E774:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E7C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E7A0u); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0023C390u; return; } if (c.pc != 0x0023E7A0u) [[unlikely]] return; }
L_0023E7A0:
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E7B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 281u, depth + 1u); else { c.pc = 0x0023EE10u; return; } if (c.pc != 0x0023E7B4u) [[unlikely]] return; }
L_0023E7B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E7C8u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0023C380u; return; } if (c.pc != 0x0023E7C8u) [[unlikely]] return; }
L_0023E7C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E7D8u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 161u, depth + 1u); else { c.pc = 0x0023DB90u; return; } if (c.pc != 0x0023E7D8u) [[unlikely]] return; }
L_0023E7D8:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E740u | kUnwind; return; } goto L_0023E740; } }
    c.budget -= 1;
L_0023E7E8:
    set32(c.r[18], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E7F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0023EBB0u; return; } if (c.pc != 0x0023E7F8u) [[unlikely]] return; }
L_0023E7F8:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E6D0u | kUnwind; return; } goto L_0023E6D0; } }
    c.budget -= 1;
L_0023E808:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E818u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 281u, depth + 1u); else { c.pc = 0x0023EE10u; return; } if (c.pc != 0x0023E818u) [[unlikely]] return; }
L_0023E818:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E860; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E83Cu); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 281u, depth + 1u); else { c.pc = 0x0023EE10u; return; } if (c.pc != 0x0023E83Cu) [[unlikely]] return; }
L_0023E83C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E860; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0023E860:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E870u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 161u, depth + 1u); else { c.pc = 0x0023DB90u; return; } if (c.pc != 0x0023E870u) [[unlikely]] return; }
L_0023E870:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E808u | kUnwind; return; } goto L_0023E808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E710u | kUnwind; return; } goto L_0023E710; } }
    c.budget -= 1;
L_0023E888:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E894u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023E894u) [[unlikely]] return; }
L_0023E894:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E960; } }
L_0023E8A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8B4u); st32((c.r[29].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_000F(c, 67u, depth + 1u); else { c.pc = 0x0023C930u; return; } if (c.pc != 0x0023E8B4u) [[unlikely]] return; }
L_0023E8B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8C8u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023E8C8u) [[unlikely]] return; }
L_0023E8C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8D4u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 60u, depth + 1u); else { c.pc = 0x0023C810u; return; } if (c.pc != 0x0023E8D4u) [[unlikely]] return; }
L_0023E8D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8E4u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023E8E4u) [[unlikely]] return; }
L_0023E8E4:
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E900u); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0023C3B0u; return; } if (c.pc != 0x0023E900u) [[unlikely]] return; }
L_0023E900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E90Cu); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0023C390u; return; } if (c.pc != 0x0023E90Cu) [[unlikely]] return; }
L_0023E90C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0023E948; } }
L_0023E920:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E93Cu); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023E93Cu) [[unlikely]] return; }
L_0023E93C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E920u | kUnwind; return; } goto L_0023E920; } }
L_0023E948:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E954u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023E954u) [[unlikely]] return; }
L_0023E954:
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E8A0u | kUnwind; return; } goto L_0023E8A0; } }
L_0023E960:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E970u); set32(c.r[5], c.r[5].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0023EA20u; return; } if (c.pc != 0x0023E970u) [[unlikely]] return; }
L_0023E970:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E980u); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0023E9D0u; return; } if (c.pc != 0x0023E980u) [[unlikely]] return; }
L_0023E980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E98Cu); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023E98Cu) [[unlikely]] return; }
L_0023E98C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E99Cu); set32(c.r[4], c.r[4].w[0] - 14264u);  if (depth < kMaxDepth) unit_000F(c, 161u, depth + 1u); else { c.pc = 0x0023DB90u; return; } if (c.pc != 0x0023E99Cu) [[unlikely]] return; }
L_0023E99C:
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E9ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 154u, depth + 1u); else { c.pc = 0x0023DA50u; return; } if (c.pc != 0x0023E9ACu) [[unlikely]] return; }
L_0023E9AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0023E9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E9ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 403u, depth + 1u); else { c.pc = 0x0023F8E0u; return; } if (c.pc != 0x0023E9ECu) [[unlikely]] return; }
L_0023E9EC:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E9F8u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0023F8C0u; return; } if (c.pc != 0x0023E9F8u) [[unlikely]] return; }
L_0023E9F8:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EA04u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0023F8C0u; return; } if (c.pc != 0x0023EA04u) [[unlikely]] return; }
L_0023EA04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023EA20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0023EA5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0023EA64; } }
L_0023EA5C:
    set32(c.r[2], 0u + 8u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0023EA64:
    st32((c.r[21].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EA80u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023EA80u) [[unlikely]] return; }
L_0023EA80:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0023EAF0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023EA98:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[22], c.r[3].w[0] + c.r[17].w[0]);  if (t) { goto L_0023EAF8; } }
    c.budget -= 1;
L_0023EAB0:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023EAD8; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0023EAD8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EA98u | kUnwind; return; } goto L_0023EA98; } }
    c.budget -= 1;
L_0023EAF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0023EB80; } }
L_0023EAF8:
    set32(c.r[18], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EB20u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023EB20u) [[unlikely]] return; }
L_0023EB20:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0023EB70; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0023EB38:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023EB60; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0023EB60:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EB38u | kUnwind; return; } goto L_0023EB38; } }
L_0023EB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EB78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023EB78u) [[unlikely]] return; }
L_0023EB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EAB0u | kUnwind; return; } goto L_0023EAB0; } }
L_0023EB80:
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
L_0023EBB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0023EC70; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023EBF8; } }
L_0023EBDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EBDCu | kUnwind; return; } goto L_0023EBDC; } }
L_0023EBF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023EC0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC0Cu);  if (depth < kMaxDepth) unit_000F(c, 273u, depth + 1u); else { c.pc = 0x0023ECA0u; return; } if (c.pc != 0x0023EC0Cu) [[unlikely]] return; }
L_0023EC0C:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0023EC50; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0023EC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 273u, depth + 1u); else { c.pc = 0x0023ECA0u; return; } if (c.pc != 0x0023EC28u) [[unlikely]] return; }
L_0023EC28:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023EC3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0023EBB0u; return; } if (c.pc != 0x0023EC3Cu) [[unlikely]] return; }
L_0023EC3C:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 272u, depth + 1u); else { c.pc = 0x0023EC90u; return; } if (c.pc != 0x0023EC48u) [[unlikely]] return; }
L_0023EC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0023EC50u) [[unlikely]] return; }
L_0023EC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC58u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023EC58u) [[unlikely]] return; }
L_0023EC58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0023EC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0023EC70u) [[unlikely]] return; }
L_0023EC70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023EC90:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B170u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 165u, depth); }
L_0023ECA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023ECD0; } }
L_0023ECB4:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023ECB4u | kUnwind; return; } goto L_0023ECB4; } }
L_0023ECD0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023EDFC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023ED08; } }
L_0023ECE8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023ECE8u | kUnwind; return; } goto L_0023ECE8; } }
    c.budget -= 1;
L_0023ED08:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023EDFC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023ED40; } }
L_0023ED20:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023ED20u | kUnwind; return; } goto L_0023ED20; } }
    c.budget -= 1;
L_0023ED40:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023EDFC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023ED78; } }
L_0023ED58:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023ED58u | kUnwind; return; } goto L_0023ED58; } }
    c.budget -= 1;
L_0023ED78:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023EDFC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023EDB0; } }
L_0023ED90:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023ED90u | kUnwind; return; } goto L_0023ED90; } }
    c.budget -= 1;
L_0023EDB0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023EDFC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023EDE8; } }
L_0023EDC8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EDC8u | kUnwind; return; } goto L_0023EDC8; } }
    c.budget -= 1;
L_0023EDE8:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023EDFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EDFCu);  if (depth < kMaxDepth) unit_000F(c, 273u, depth + 1u); else { c.pc = 0x0023ECA0u; return; } if (c.pc != 0x0023EDFCu) [[unlikely]] return; }
L_0023EDFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023EE10:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0023EE20:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], ld32((c.r[28].w[0] - 32752u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EE54u); set32(c.r[4], c.r[4].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023EE54u) [[unlikely]] return; }
L_0023EE54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EE60u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 356u, depth + 1u); else { c.pc = 0x0023F510u; return; } if (c.pc != 0x0023EE60u) [[unlikely]] return; }
L_0023EE60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EE70u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 88u, depth + 1u); else { c.pc = 0x0023CD90u; return; } if (c.pc != 0x0023EE70u) [[unlikely]] return; }
L_0023EE70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EE80u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023EE80u) [[unlikely]] return; }
L_0023EE80:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EE8Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023EE8Cu) [[unlikely]] return; }
L_0023EE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023EEE0; } }
L_0023EE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EE9Cu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0023CD80u; return; } if (c.pc != 0x0023EE9Cu) [[unlikely]] return; }
L_0023EE9C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30676u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023EFD8; } }
L_0023EEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EEB8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0023CBE0u; return; } if (c.pc != 0x0023EEB8u) [[unlikely]] return; }
L_0023EEB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EEC8u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023EEC8u) [[unlikely]] return; }
L_0023EEC8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EED4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023EED4u) [[unlikely]] return; }
L_0023EED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EE94u | kUnwind; return; } goto L_0023EE94; } }
    c.budget -= 1;
L_0023EEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EEE8u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 348u, depth + 1u); else { c.pc = 0x0023F360u; return; } if (c.pc != 0x0023EEE8u) [[unlikely]] return; }
L_0023EEE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30676u)));
    set32(c.r[4], c.r[29].w[0] + 268u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EEFCu); st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 347u, depth + 1u); else { c.pc = 0x0023F350u; return; } if (c.pc != 0x0023EEFCu) [[unlikely]] return; }
L_0023EEFC:
    set32(c.r[4], c.r[29].w[0] + 260u);
    c.budget -= 1;
L_0023EF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EF08u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 344u, depth + 1u); else { c.pc = 0x0023F300u; return; } if (c.pc != 0x0023EF08u) [[unlikely]] return; }
L_0023EF08:
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EF14u); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_000F(c, 343u, depth + 1u); else { c.pc = 0x0023F2E0u; return; } if (c.pc != 0x0023EF14u) [[unlikely]] return; }
L_0023EF14:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023EFF8; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 30680u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EF30u); set32(c.r[4], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023EF30u) [[unlikely]] return; }
L_0023EF30:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0023EFF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EF48u); set32(c.r[4], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023EF48u) [[unlikely]] return; }
L_0023EF48:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EF5Cu); set32(c.r[4], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023EF5Cu) [[unlikely]] return; }
L_0023EF5C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 268u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EF70u); st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023EF70u) [[unlikely]] return; }
L_0023EF70:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 268u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EF98u); st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023EF98u) [[unlikely]] return; }
L_0023EF98:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[16].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EEFCu | kUnwind; return; } goto L_0023EEFC; } }
    c.budget -= 1;
L_0023EFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EFB8u); set32(c.r[4], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 345u, depth + 1u); else { c.pc = 0x0023F320u; return; } if (c.pc != 0x0023EFB8u) [[unlikely]] return; }
L_0023EFB8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EFB0u | kUnwind; return; } goto L_0023EFB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 260u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EF00u | kUnwind; return; } goto L_0023EF00; } }
    c.budget -= 1;
L_0023EFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EFE0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0023CD80u; return; } if (c.pc != 0x0023EFE0u) [[unlikely]] return; }
L_0023EFE0:
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EFF0u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023EFF0u) [[unlikely]] return; }
L_0023EFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023EEB0u | kUnwind; return; } goto L_0023EEB0; } }
L_0023EFF8:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F004u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 344u, depth + 1u); else { c.pc = 0x0023F300u; return; } if (c.pc != 0x0023F004u) [[unlikely]] return; }
L_0023F004:
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F010u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_000F(c, 343u, depth + 1u); else { c.pc = 0x0023F2E0u; return; } if (c.pc != 0x0023F010u) [[unlikely]] return; }
L_0023F010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F100; } }
L_0023F018:
    set32(c.r[17], ld32((c.r[28].w[0] - 30680u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F024u); set32(c.r[4], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F024u) [[unlikely]] return; }
L_0023F024:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F034u); set32(c.r[4], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F034u) [[unlikely]] return; }
L_0023F034:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F048u); set32(c.r[4], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F048u) [[unlikely]] return; }
L_0023F048:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
L_0023F058:
    set32(c.r[4], ld32((c.r[28].w[0] - 30680u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[2], c.r[4].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F070u); st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 342u, depth + 1u); else { c.pc = 0x0023F2D0u; return; } if (c.pc != 0x0023F070u) [[unlikely]] return; }
L_0023F070:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F058u | kUnwind; return; } goto L_0023F058; } }
L_0023F080:
    set32(c.r[4], ld32((c.r[28].w[0] - 30680u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[2], c.r[4].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F098u); st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 342u, depth + 1u); else { c.pc = 0x0023F2D0u; return; } if (c.pc != 0x0023F098u) [[unlikely]] return; }
L_0023F098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F0A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 341u, depth + 1u); else { c.pc = 0x0023F2C0u; return; } if (c.pc != 0x0023F0A0u) [[unlikely]] return; }
L_0023F0A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F080u | kUnwind; return; } goto L_0023F080; } }
    c.r[16].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0023F0E0; } }
    c.budget -= 1;
L_0023F0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F0C0u); set32(c.r[4], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F0C0u) [[unlikely]] return; }
L_0023F0C0:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F0D0u); st32((c.r[2].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 345u, depth + 1u); else { c.pc = 0x0023F320u; return; } if (c.pc != 0x0023F0D0u) [[unlikely]] return; }
L_0023F0D0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F0B8u | kUnwind; return; } goto L_0023F0B8; } }
    c.budget -= 1;
L_0023F0E0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F0ECu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 344u, depth + 1u); else { c.pc = 0x0023F300u; return; } if (c.pc != 0x0023F0ECu) [[unlikely]] return; }
L_0023F0EC:
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F0F8u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_000F(c, 343u, depth + 1u); else { c.pc = 0x0023F2E0u; return; } if (c.pc != 0x0023F0F8u) [[unlikely]] return; }
L_0023F0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F018u | kUnwind; return; } goto L_0023F018; } }
L_0023F100:
    set32(c.r[3], ld32((c.r[28].w[0] - 32752u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30684u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[28].w[0] - 30676u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0023F12C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0023F12C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F138u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 154u, depth + 1u); else { c.pc = 0x0023DA50u; return; } if (c.pc != 0x0023F138u) [[unlikely]] return; }
L_0023F138:
    set32(c.r[2], ld32((c.r[28].w[0] - 32752u)));
    set32(c.r[16], c.r[20].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023F170; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023F154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[21].w[0] << 1);  if (t) { goto L_0023F168; } }
L_0023F164:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023F168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F298; } }
L_0023F170:
    set32(c.r[17], ld32((c.r[28].w[0] - 30684u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F184u); st32((c.r[28].w[0] - 32752u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023F184u) [[unlikely]] return; }
L_0023F184:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11344u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F1A0u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0023F1A0u) [[unlikely]] return; }
L_0023F1A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30680u)));
    st32((c.r[28].w[0] - 30684u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0023F1BC; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0023F1BC:
    set32(c.r[6], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F1CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0023F1CCu) [[unlikely]] return; }
L_0023F1CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30684u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] - 14304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F1E4u); set32(c.r[16], c.r[2].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 88u, depth + 1u); else { c.pc = 0x0023CD90u; return; } if (c.pc != 0x0023F1E4u) [[unlikely]] return; }
L_0023F1E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F1F4u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023F1F4u) [[unlikely]] return; }
L_0023F1F4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F200u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023F200u) [[unlikely]] return; }
L_0023F200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023F234; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30676u)));
    c.budget -= 1;
L_0023F20C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 30676u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (t) { goto L_0023F22C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F22Cu); set32(c.r[4], c.r[17].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023F22Cu) [[unlikely]] return; }
L_0023F22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F154u | kUnwind; return; } goto L_0023F154; } }
L_0023F234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F23Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0023CD80u; return; } if (c.pc != 0x0023F23Cu) [[unlikely]] return; }
L_0023F23C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023F27C; } }
L_0023F248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F250u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0023CBE0u; return; } if (c.pc != 0x0023F250u) [[unlikely]] return; }
L_0023F250:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F260u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023F260u) [[unlikely]] return; }
L_0023F260:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F26Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023F26Cu) [[unlikely]] return; }
L_0023F26C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F234u | kUnwind; return; } goto L_0023F234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30676u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F20Cu | kUnwind; return; } goto L_0023F20C; } }
L_0023F27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F284u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0023CD80u; return; } if (c.pc != 0x0023F284u) [[unlikely]] return; }
L_0023F284:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F248u | kUnwind; return; } goto L_0023F248; } }
    c.budget -= 1;
L_0023F298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0023F2C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0]));  c.pc = t; return; }
L_0023F2D0:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023F2E0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0023F300:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0023F320:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0023F340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0023F350:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0023F360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[18], c.r[19].w[0] >> 1);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] - 4u);  if (t) { goto L_0023F428; } }
L_0023F390:
    set32(c.r[17], c.r[18].w[0] << 1);
    c.r[1].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0023F418; } }
L_0023F3A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[19].d[0];  if (t) { goto L_0023F3D0; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023F3D0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0023F3D0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023F418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F404u);  if (depth < kMaxDepth) unit_000F(c, 401u, depth + 1u); else { c.pc = 0x0023F8A0u; return; } if (c.pc != 0x0023F404u) [[unlikely]] return; }
L_0023F404:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] << 1);
    c.r[1].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F3A0u | kUnwind; return; } goto L_0023F3A0; } }
L_0023F418:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F390u | kUnwind; return; } goto L_0023F390; } }
L_0023F428:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023F4E8; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0023F43C:
    set32(c.r[18], 0u + 2u);
    c.r[1].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0023F4C8; } }
    c.budget -= 1;
L_0023F450:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_0023F480; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023F480; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0023F480:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023F4C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F4B4u);  if (depth < kMaxDepth) unit_000F(c, 401u, depth + 1u); else { c.pc = 0x0023F8A0u; return; } if (c.pc != 0x0023F4B4u) [[unlikely]] return; }
L_0023F4B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] << 1);
    c.r[1].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F450u | kUnwind; return; } goto L_0023F450; } }
L_0023F4C8:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F4D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 401u, depth + 1u); else { c.pc = 0x0023F8A0u; return; } if (c.pc != 0x0023F4D4u) [[unlikely]] return; }
L_0023F4D4:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F43Cu | kUnwind; return; } goto L_0023F43C; } }
    c.budget -= 1;
L_0023F4E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023F510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023F52C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_0023F534; } }
L_0023F52C:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 2;
L_0023F534:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F550u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023F550u) [[unlikely]] return; }
L_0023F550:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023F570:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F594u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 52u, depth + 1u); else { c.pc = 0x0023C6A0u; return; } if (c.pc != 0x0023F594u) [[unlikely]] return; }
L_0023F594:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F5A0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 356u, depth + 1u); else { c.pc = 0x0023F510u; return; } if (c.pc != 0x0023F5A0u) [[unlikely]] return; }
L_0023F5A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F5B0u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 88u, depth + 1u); else { c.pc = 0x0023CD90u; return; } if (c.pc != 0x0023F5B0u) [[unlikely]] return; }
L_0023F5B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F5C0u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023F5C0u) [[unlikely]] return; }
L_0023F5C0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F5CCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023F5CCu) [[unlikely]] return; }
L_0023F5CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F620; } }
L_0023F5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F5DCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0023CD80u; return; } if (c.pc != 0x0023F5DCu) [[unlikely]] return; }
L_0023F5DC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30676u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023F718; } }
L_0023F5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F5F8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0023CBE0u; return; } if (c.pc != 0x0023F5F8u) [[unlikely]] return; }
L_0023F5F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F608u); set32(c.r[5], c.r[5].w[0] - 14304u);  if (depth < kMaxDepth) unit_000F(c, 79u, depth + 1u); else { c.pc = 0x0023CBA0u; return; } if (c.pc != 0x0023F608u) [[unlikely]] return; }
L_0023F608:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F614u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 78u, depth + 1u); else { c.pc = 0x0023CB80u; return; } if (c.pc != 0x0023F614u) [[unlikely]] return; }
L_0023F614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F5D4u | kUnwind; return; } goto L_0023F5D4; } }
    c.budget -= 1;
L_0023F620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F628u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 348u, depth + 1u); else { c.pc = 0x0023F360u; return; } if (c.pc != 0x0023F628u) [[unlikely]] return; }
L_0023F628:
    set32(c.r[2], ld32((c.r[28].w[0] - 30676u)));
    set32(c.r[4], c.r[29].w[0] + 172u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F63Cu); st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 347u, depth + 1u); else { c.pc = 0x0023F350u; return; } if (c.pc != 0x0023F63Cu) [[unlikely]] return; }
L_0023F63C:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 1;
L_0023F640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F648u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 344u, depth + 1u); else { c.pc = 0x0023F300u; return; } if (c.pc != 0x0023F648u) [[unlikely]] return; }
L_0023F648:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F654u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_000F(c, 343u, depth + 1u); else { c.pc = 0x0023F2E0u; return; } if (c.pc != 0x0023F654u) [[unlikely]] return; }
L_0023F654:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023F738; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 30680u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F670u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F670u) [[unlikely]] return; }
L_0023F670:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0023F738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F688u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F688u) [[unlikely]] return; }
L_0023F688:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F69Cu); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F69Cu) [[unlikely]] return; }
L_0023F69C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 172u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F6B0u); st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F6B0u) [[unlikely]] return; }
L_0023F6B0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 172u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30680u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F6D8u); st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F6D8u) [[unlikely]] return; }
L_0023F6D8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[16].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F63Cu | kUnwind; return; } goto L_0023F63C; } }
    c.budget -= 1;
L_0023F6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F6F8u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 345u, depth + 1u); else { c.pc = 0x0023F320u; return; } if (c.pc != 0x0023F6F8u) [[unlikely]] return; }
L_0023F6F8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F6F0u | kUnwind; return; } goto L_0023F6F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 164u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F640u | kUnwind; return; } goto L_0023F640; } }
    c.budget -= 1;
L_0023F718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F720u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0023CD80u; return; } if (c.pc != 0x0023F720u) [[unlikely]] return; }
L_0023F720:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F730u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 82u, depth + 1u); else { c.pc = 0x0023CC80u; return; } if (c.pc != 0x0023F730u) [[unlikely]] return; }
L_0023F730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F5F0u | kUnwind; return; } goto L_0023F5F0; } }
L_0023F738:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F744u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 344u, depth + 1u); else { c.pc = 0x0023F300u; return; } if (c.pc != 0x0023F744u) [[unlikely]] return; }
L_0023F744:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F750u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 343u, depth + 1u); else { c.pc = 0x0023F2E0u; return; } if (c.pc != 0x0023F750u) [[unlikely]] return; }
L_0023F750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F840; } }
L_0023F758:
    set32(c.r[17], ld32((c.r[28].w[0] - 30680u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F764u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F764u) [[unlikely]] return; }
L_0023F764:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F774u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F774u) [[unlikely]] return; }
L_0023F774:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F788u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F788u) [[unlikely]] return; }
L_0023F788:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 4;
L_0023F798:
    set32(c.r[4], ld32((c.r[28].w[0] - 30680u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[2], c.r[4].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F7B0u); st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 342u, depth + 1u); else { c.pc = 0x0023F2D0u; return; } if (c.pc != 0x0023F7B0u) [[unlikely]] return; }
L_0023F7B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F798u | kUnwind; return; } goto L_0023F798; } }
L_0023F7C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30680u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[2], c.r[4].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F7D8u); st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 342u, depth + 1u); else { c.pc = 0x0023F2D0u; return; } if (c.pc != 0x0023F7D8u) [[unlikely]] return; }
L_0023F7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F7E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 341u, depth + 1u); else { c.pc = 0x0023F2C0u; return; } if (c.pc != 0x0023F7E0u) [[unlikely]] return; }
L_0023F7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F7C0u | kUnwind; return; } goto L_0023F7C0; } }
    c.r[16].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0023F820; } }
    c.budget -= 1;
L_0023F7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F800u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 346u, depth + 1u); else { c.pc = 0x0023F340u; return; } if (c.pc != 0x0023F800u) [[unlikely]] return; }
L_0023F800:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F810u); st32((c.r[2].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000F(c, 345u, depth + 1u); else { c.pc = 0x0023F320u; return; } if (c.pc != 0x0023F810u) [[unlikely]] return; }
L_0023F810:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F7F8u | kUnwind; return; } goto L_0023F7F8; } }
    c.budget -= 1;
L_0023F820:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F82Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 344u, depth + 1u); else { c.pc = 0x0023F300u; return; } if (c.pc != 0x0023F82Cu) [[unlikely]] return; }
L_0023F82C:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F838u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 343u, depth + 1u); else { c.pc = 0x0023F2E0u; return; } if (c.pc != 0x0023F838u) [[unlikely]] return; }
L_0023F838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F758u | kUnwind; return; } goto L_0023F758; } }
L_0023F840:
    set32(c.r[3], ld32((c.r[28].w[0] - 32752u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30684u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30680u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[28].w[0] - 30676u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0023F86C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0023F86C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F878u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 154u, depth + 1u); else { c.pc = 0x0023DA50u; return; } if (c.pc != 0x0023F878u) [[unlikely]] return; }
L_0023F878:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0023F8A0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_0023F8C0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_0023F8E0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_0023F900:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0023F9F0; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 30672u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0023F9C4; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0023F968; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30676u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023F968; } }
    st32((c.r[28].w[0] - 30676u), c.r[3].w[0]);
    c.budget -= 1;
L_0023F968:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 14256u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 14260u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0023F9F8; } }
L_0023F980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 14256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[3].w[0] - 14256u), c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023F9B4; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0023F9B4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F9C4u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0023F9C4u) [[unlikely]] return; }
L_0023F9C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F9D8u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023F9D8u) [[unlikely]] return; }
L_0023F9D8:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0023F9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F9F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0023F9F0u) [[unlikely]] return; }
L_0023F9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0023FA90; } }
L_0023F9F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[18], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 14260u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FA28u); st32((c.r[2].w[0] - 14256u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0023FA28u) [[unlikely]] return; }
L_0023FA28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 14264u), c.r[2].w[0]);  if (t) { goto L_0023FA80; } }
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
L_0023FA4C:
    set32(c.r[6], ld32((c.r[4].w[0] - 14256u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 14264u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 14256u), c.r[7].w[0]);  if (t) { goto L_0023FA70; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_0023FA70:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FA4Cu | kUnwind; return; } goto L_0023FA4C; } }
L_0023FA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FA88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0023FA88u) [[unlikely]] return; }
L_0023FA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F980u | kUnwind; return; } goto L_0023F980; } }
L_0023FA90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0023FAB0:
    c.r[3].d[0] = 0ull | 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[4], c.f[12]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_0023FAF0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023FB10:
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 17405ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 40643ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80010000u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_0023FB80:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = c.r[3].d[0] | 17405ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[3].d[0] = c.r[3].d[0] | 40643ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    mmi::mult(c, 1, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80010000u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0023FBE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[5].d[0] = c.r[3].d[0] | 17405ull;
    c.r[3].d[0] = c.r[2].d[0] | 40643ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38000000u);
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.f[0] = c.r[2].w[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] & 32767ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  c.pc = t; return; }
L_0023FC30:
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[6].d[0] = c.r[3].d[0] | 17405ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[5].d[0] = c.r[2].d[0] | 40643ull;
    set32(c.r[3], 0u + 101u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80010000u);
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[4].d[0] = c.r[4].d[0] & 32767ull;
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0023FC90:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[3].d[0] | 17405ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 40643ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 32767ull;  c.pc = t; return; }
L_0023FCC0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0023FCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 45u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0023FD30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = 0u;
    c.f[3] = c.r[2].w[0];
    c.budget -= 3;
L_0023FCF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023FD40; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023FD40; } }
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[2], c.r[3].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FCF0u | kUnwind; return; } goto L_0023FCF0; } }
    c.budget -= 1;
L_0023FD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD38u); set32(c.r[4], c.r[4].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x0023FD38u) [[unlikely]] return; }
L_0023FD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_0023FDA8; } }
L_0023FD40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0023FDA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[4] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[1] = c.f[4];
    c.budget -= 5;
L_0023FD64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023FDA8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023FDA8; } }
    set32(c.r[2], c.r[3].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[3] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[4]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD64u | kUnwind; return; } goto L_0023FD64; } }
    c.budget -= 1;
L_0023FDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023FDC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 45u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0023FE10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023FDD8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023FF4C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023FF4C; } }
    set32(c.r[3], c.r[5].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FDD8u | kUnwind; return; } goto L_0023FDD8; } }
L_0023FE10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[4].w[0] + 1u);  if (t) { goto L_0023FE58; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023FE20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023FF48; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023FF48; } }
    set32(c.r[2], c.r[3].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FE20u | kUnwind; return; } goto L_0023FE20; } }
L_0023FE58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_0023FEA0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023FE68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023FF44; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023FF44; } }
    set32(c.r[2], c.r[3].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FE68u | kUnwind; return; } goto L_0023FE68; } }
L_0023FEA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[4].w[0] + 1u);  if (t) { goto L_0023FEE8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023FEB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023FF40; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023FF40; } }
    set32(c.r[2], c.r[3].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FEB0u | kUnwind; return; } goto L_0023FEB0; } }
L_0023FEE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_0023FF30; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023FEF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023FF3C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023FF3C; } }
    set32(c.r[2], c.r[3].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FEF8u | kUnwind; return; } goto L_0023FEF8; } }
L_0023FF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FF38u); set32(c.r[4], c.r[4].w[0] + 1u);  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x0023FF38u) [[unlikely]] return; }
L_0023FF38:
    set32(c.r[5], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_0023FF3C:
    set32(c.r[4], 0u - c.r[5].w[0]);
    c.budget -= 1;
L_0023FF40:
    set32(c.r[5], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0023FF44:
    set32(c.r[4], 0u - c.r[5].w[0]);
    c.budget -= 1;
L_0023FF48:
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_0023FF4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023FF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], c.r[8].w[0] - 32u);
    set32(c.r[7], c.r[29].w[0]);
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
L_0023FF74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FF74u | kUnwind; return; } goto L_0023FF74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 3954u);
    st8((c.r[2].w[0] - 3953u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0023FFA4:
    mmi::divu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FFA4u | kUnwind; return; } goto L_0023FFA4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023FFE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { [[clang::musttail]] return unit_0010(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FFF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0023FFF8u) [[unlikely]] return; }
L_0023FFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { [[clang::musttail]] return unit_0010(c, 2u, depth); } }
    [[clang::musttail]] return unit_0010(c, 1u, depth);
}

}

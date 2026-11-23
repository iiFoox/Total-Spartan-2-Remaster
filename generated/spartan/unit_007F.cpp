#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007F[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 265,
    0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 287, 0, 0, 288, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003FC000;
    case 2u: goto L_003FC010;
    case 3u: goto L_003FC030;
    case 4u: goto L_003FC044;
    case 5u: goto L_003FC09C;
    case 6u: goto L_003FC0D8;
    case 7u: goto L_003FC0F0;
    case 8u: goto L_003FC114;
    case 9u: goto L_003FC120;
    case 10u: goto L_003FC128;
    case 11u: goto L_003FC130;
    case 12u: goto L_003FC150;
    case 13u: goto L_003FC158;
    case 14u: goto L_003FC160;
    case 15u: goto L_003FC168;
    case 16u: goto L_003FC188;
    case 17u: goto L_003FC1A0;
    case 18u: goto L_003FC1B4;
    case 19u: goto L_003FC1C4;
    case 20u: goto L_003FC1D0;
    case 21u: goto L_003FC1E8;
    case 22u: goto L_003FC200;
    case 23u: goto L_003FC228;
    case 24u: goto L_003FC260;
    case 25u: goto L_003FC2A4;
    case 26u: goto L_003FC2B0;
    case 27u: goto L_003FC2B8;
    case 28u: goto L_003FC2FC;
    case 29u: goto L_003FC30C;
    case 30u: goto L_003FC31C;
    case 31u: goto L_003FC32C;
    case 32u: goto L_003FC350;
    case 33u: goto L_003FC3F0;
    case 34u: goto L_003FC464;
    case 35u: goto L_003FC4B4;
    case 36u: goto L_003FC4D0;
    case 37u: goto L_003FC51C;
    case 38u: goto L_003FC544;
    case 39u: goto L_003FC590;
    case 40u: goto L_003FC5A0;
    case 41u: goto L_003FC5CC;
    case 42u: goto L_003FC5D8;
    case 43u: goto L_003FC5F8;
    case 44u: goto L_003FC630;
    case 45u: goto L_003FC68C;
    case 46u: goto L_003FC69C;
    case 47u: goto L_003FC6AC;
    case 48u: goto L_003FC6BC;
    case 49u: goto L_003FC6F0;
    case 50u: goto L_003FC724;
    case 51u: goto L_003FC730;
    case 52u: goto L_003FC738;
    case 53u: goto L_003FC77C;
    case 54u: goto L_003FC78C;
    case 55u: goto L_003FC79C;
    case 56u: goto L_003FC7AC;
    case 57u: goto L_003FC7D0;
    case 58u: goto L_003FC7F0;
    case 59u: goto L_003FC814;
    case 60u: goto L_003FC840;
    case 61u: goto L_003FC850;
    case 62u: goto L_003FC898;
    case 63u: goto L_003FC8AC;
    case 64u: goto L_003FC8B4;
    case 65u: goto L_003FC8CC;
    case 66u: goto L_003FC900;
    case 67u: goto L_003FC934;
    case 68u: goto L_003FC950;
    case 69u: goto L_003FC968;
    case 70u: goto L_003FC97C;
    case 71u: goto L_003FC9A4;
    case 72u: goto L_003FC9B0;
    case 73u: goto L_003FC9BC;
    case 74u: goto L_003FC9D8;
    case 75u: goto L_003FC9E8;
    case 76u: goto L_003FCA24;
    case 77u: goto L_003FCA50;
    case 78u: goto L_003FCA80;
    case 79u: goto L_003FCAC0;
    case 80u: goto L_003FCAD0;
    case 81u: goto L_003FCAE0;
    case 82u: goto L_003FCAF0;
    case 83u: goto L_003FCB10;
    case 84u: goto L_003FCB30;
    case 85u: goto L_003FCB50;
    case 86u: goto L_003FCB70;
    case 87u: goto L_003FCB90;
    case 88u: goto L_003FCBAC;
    case 89u: goto L_003FCBC0;
    case 90u: goto L_003FCBDC;
    case 91u: goto L_003FCBF0;
    case 92u: goto L_003FCC18;
    case 93u: goto L_003FCC44;
    case 94u: goto L_003FCC50;
    case 95u: goto L_003FCCA8;
    case 96u: goto L_003FCCC0;
    case 97u: goto L_003FCCE4;
    case 98u: goto L_003FCCF0;
    case 99u: goto L_003FCD9C;
    case 100u: goto L_003FCE30;
    case 101u: goto L_003FCE60;
    case 102u: goto L_003FCE94;
    case 103u: goto L_003FCEA4;
    case 104u: goto L_003FCEC0;
    case 105u: goto L_003FCF80;
    case 106u: goto L_003FCFA0;
    case 107u: goto L_003FCFD0;
    case 108u: goto L_003FD000;
    case 109u: goto L_003FD00C;
    case 110u: goto L_003FD040;
    case 111u: goto L_003FD050;
    case 112u: goto L_003FD070;
    case 113u: goto L_003FD100;
    case 114u: goto L_003FD13C;
    case 115u: goto L_003FD160;
    case 116u: goto L_003FD178;
    case 117u: goto L_003FD1B0;
    case 118u: goto L_003FD1C4;
    case 119u: goto L_003FD1F0;
    case 120u: goto L_003FD200;
    case 121u: goto L_003FD260;
    case 122u: goto L_003FD290;
    case 123u: goto L_003FD2B8;
    case 124u: goto L_003FD2E0;
    case 125u: goto L_003FD300;
    case 126u: goto L_003FD318;
    case 127u: goto L_003FD350;
    case 128u: goto L_003FD364;
    case 129u: goto L_003FD3A0;
    case 130u: goto L_003FD3DC;
    case 131u: goto L_003FD400;
    case 132u: goto L_003FD418;
    case 133u: goto L_003FD450;
    case 134u: goto L_003FD464;
    case 135u: goto L_003FD490;
    case 136u: goto L_003FD4A0;
    case 137u: goto L_003FD500;
    case 138u: goto L_003FD530;
    case 139u: goto L_003FD558;
    case 140u: goto L_003FD580;
    case 141u: goto L_003FD5A0;
    case 142u: goto L_003FD5B8;
    case 143u: goto L_003FD5F0;
    case 144u: goto L_003FD604;
    case 145u: goto L_003FD640;
    case 146u: goto L_003FD650;
    case 147u: goto L_003FD678;
    case 148u: goto L_003FD6A0;
    case 149u: goto L_003FD6C0;
    case 150u: goto L_003FD6D8;
    case 151u: goto L_003FD710;
    case 152u: goto L_003FD724;
    case 153u: goto L_003FD760;
    case 154u: goto L_003FD780;
    case 155u: goto L_003FD7A4;
    case 156u: goto L_003FD7C0;
    case 157u: goto L_003FD7F0;
    case 158u: goto L_003FD834;
    case 159u: goto L_003FD844;
    case 160u: goto L_003FD860;
    case 161u: goto L_003FD8F0;
    case 162u: goto L_003FD900;
    case 163u: goto L_003FD910;
    case 164u: goto L_003FD920;
    case 165u: goto L_003FD930;
    case 166u: goto L_003FD950;
    case 167u: goto L_003FD970;
    case 168u: goto L_003FD994;
    case 169u: goto L_003FD9B0;
    case 170u: goto L_003FD9D0;
    case 171u: goto L_003FD9F0;
    case 172u: goto L_003FDA14;
    case 173u: goto L_003FDA30;
    case 174u: goto L_003FDA50;
    case 175u: goto L_003FDA70;
    case 176u: goto L_003FDA94;
    case 177u: goto L_003FDAB0;
    case 178u: goto L_003FDAE0;
    case 179u: goto L_003FDB24;
    case 180u: goto L_003FDB34;
    case 181u: goto L_003FDB50;
    case 182u: goto L_003FDBD0;
    case 183u: goto L_003FDC90;
    case 184u: goto L_003FDD50;
    case 185u: goto L_003FDD7C;
    case 186u: goto L_003FDDA8;
    case 187u: goto L_003FDE40;
    case 188u: goto L_003FDE78;
    case 189u: goto L_003FDE88;
    case 190u: goto L_003FDEA0;
    case 191u: goto L_003FDEB0;
    case 192u: goto L_003FDEC4;
    case 193u: goto L_003FDEE8;
    case 194u: goto L_003FDF00;
    case 195u: goto L_003FDF10;
    case 196u: goto L_003FDF20;
    case 197u: goto L_003FDF50;
    case 198u: goto L_003FDF6C;
    case 199u: goto L_003FDF80;
    case 200u: goto L_003FDFDC;
    case 201u: goto L_003FE030;
    case 202u: goto L_003FE044;
    case 203u: goto L_003FE04C;
    case 204u: goto L_003FE0B0;
    case 205u: goto L_003FE0C4;
    case 206u: goto L_003FE128;
    case 207u: goto L_003FE13C;
    case 208u: goto L_003FE15C;
    case 209u: goto L_003FE170;
    case 210u: goto L_003FE190;
    case 211u: goto L_003FE1B0;
    case 212u: goto L_003FE1D0;
    case 213u: goto L_003FE1F0;
    case 214u: goto L_003FE218;
    case 215u: goto L_003FE238;
    case 216u: goto L_003FE268;
    case 217u: goto L_003FE278;
    case 218u: goto L_003FE290;
    case 219u: goto L_003FE2A0;
    case 220u: goto L_003FE30C;
    case 221u: goto L_003FE330;
    case 222u: goto L_003FE350;
    case 223u: goto L_003FE500;
    case 224u: goto L_003FE540;
    case 225u: goto L_003FE588;
    case 226u: goto L_003FE5A0;
    case 227u: goto L_003FE630;
    case 228u: goto L_003FE684;
    case 229u: goto L_003FE6A0;
    case 230u: goto L_003FE6B0;
    case 231u: goto L_003FE6C0;
    case 232u: goto L_003FE6E0;
    case 233u: goto L_003FE6F0;
    case 234u: goto L_003FE708;
    case 235u: goto L_003FE740;
    case 236u: goto L_003FE754;
    case 237u: goto L_003FE7A8;
    case 238u: goto L_003FE800;
    case 239u: goto L_003FE808;
    case 240u: goto L_003FE820;
    case 241u: goto L_003FE834;
    case 242u: goto L_003FE888;
    case 243u: goto L_003FE8E0;
    case 244u: goto L_003FE8E8;
    case 245u: goto L_003FE900;
    case 246u: goto L_003FE914;
    case 247u: goto L_003FE968;
    case 248u: goto L_003FE9C0;
    case 249u: goto L_003FE9C8;
    case 250u: goto L_003FE9E0;
    case 251u: goto L_003FE9F4;
    case 252u: goto L_003FEA48;
    case 253u: goto L_003FEAA0;
    case 254u: goto L_003FEAA8;
    case 255u: goto L_003FEAC0;
    case 256u: goto L_003FEB0C;
    case 257u: goto L_003FEB2C;
    case 258u: goto L_003FEB78;
    case 259u: goto L_003FEBA4;
    case 260u: goto L_003FECA8;
    case 261u: goto L_003FECC4;
    case 262u: goto L_003FECD8;
    case 263u: goto L_003FECE0;
    case 264u: goto L_003FECF4;
    case 265u: goto L_003FECFC;
    case 266u: goto L_003FED10;
    case 267u: goto L_003FED20;
    case 268u: goto L_003FED30;
    case 269u: goto L_003FED40;
    case 270u: goto L_003FED5C;
    case 271u: goto L_003FED84;
    case 272u: goto L_003FEDA0;
    case 273u: goto L_003FEDE8;
    case 274u: goto L_003FEE20;
    case 275u: goto L_003FEE6C;
    case 276u: goto L_003FEEB4;
    case 277u: goto L_003FEED0;
    case 278u: goto L_003FEEF0;
    case 279u: goto L_003FEF14;
    case 280u: goto L_003FEF24;
    case 281u: goto L_003FEF40;
    case 282u: goto L_003FEF84;
    case 283u: goto L_003FEF90;
    case 284u: goto L_003FEF98;
    case 285u: goto L_003FEFA0;
    case 286u: goto L_003FEFAC;
    case 287u: goto L_003FEFB4;
    case 288u: goto L_003FEFC0;
    case 289u: goto L_003FEFC8;
    case 290u: goto L_003FEFD4;
    case 291u: goto L_003FEFE0;
    case 292u: goto L_003FEFF0;
    case 293u: goto L_003FF000;
    case 294u: goto L_003FF010;
    case 295u: goto L_003FF064;
    case 296u: goto L_003FF080;
    case 297u: goto L_003FF0F0;
    case 298u: goto L_003FF100;
    case 299u: goto L_003FF110;
    case 300u: goto L_003FF120;
    case 301u: goto L_003FF174;
    case 302u: goto L_003FF190;
    case 303u: goto L_003FF200;
    case 304u: goto L_003FF2A0;
    case 305u: goto L_003FF2C0;
    case 306u: goto L_003FF2E0;
    case 307u: goto L_003FF300;
    case 308u: goto L_003FF320;
    case 309u: goto L_003FF33C;
    case 310u: goto L_003FF350;
    case 311u: goto L_003FF370;
    case 312u: goto L_003FF3C4;
    case 313u: goto L_003FF3E0;
    case 314u: goto L_003FF450;
    case 315u: goto L_003FF488;
    case 316u: goto L_003FF4B4;
    case 317u: goto L_003FF4CC;
    case 318u: goto L_003FF4E4;
    case 319u: goto L_003FF4FC;
    case 320u: goto L_003FF50C;
    case 321u: goto L_003FF520;
    case 322u: goto L_003FF528;
    case 323u: goto L_003FF540;
    case 324u: goto L_003FF554;
    case 325u: goto L_003FF568;
    case 326u: goto L_003FF584;
    case 327u: goto L_003FF5A0;
    case 328u: goto L_003FF5D0;
    case 329u: goto L_003FF624;
    case 330u: goto L_003FF640;
    case 331u: goto L_003FF6B0;
    case 332u: goto L_003FF6C0;
    case 333u: goto L_003FF6DC;
    case 334u: goto L_003FF744;
    case 335u: goto L_003FF764;
    case 336u: goto L_003FF780;
    case 337u: goto L_003FF790;
    case 338u: goto L_003FF7B0;
    case 339u: goto L_003FF7CC;
    case 340u: goto L_003FF7DC;
    case 341u: goto L_003FF7F0;
    case 342u: goto L_003FF820;
    case 343u: goto L_003FF84C;
    case 344u: goto L_003FF850;
    case 345u: goto L_003FF8A0;
    case 346u: goto L_003FF8C4;
    case 347u: goto L_003FF8CC;
    case 348u: goto L_003FF8EC;
    case 349u: goto L_003FF8FC;
    case 350u: goto L_003FF928;
    case 351u: goto L_003FF934;
    case 352u: goto L_003FF94C;
    case 353u: goto L_003FF954;
    case 354u: goto L_003FF960;
    case 355u: goto L_003FF994;
    case 356u: goto L_003FF9A4;
    case 357u: goto L_003FF9D0;
    case 358u: goto L_003FFA00;
    case 359u: goto L_003FFA20;
    case 360u: goto L_003FFA50;
    case 361u: goto L_003FFA84;
    case 362u: goto L_003FFA94;
    case 363u: goto L_003FFAB0;
    case 364u: goto L_003FFB30;
    case 365u: goto L_003FFB40;
    case 366u: goto L_003FFB80;
    case 367u: goto L_003FFBAC;
    case 368u: goto L_003FFBCC;
    case 369u: goto L_003FFBDC;
    case 370u: goto L_003FFC14;
    case 371u: goto L_003FFC24;
    case 372u: goto L_003FFC50;
    case 373u: goto L_003FFC60;
    case 374u: goto L_003FFC80;
    case 375u: goto L_003FFCB4;
    case 376u: goto L_003FFCE0;
    case 377u: goto L_003FFD10;
    case 378u: goto L_003FFD44;
    case 379u: goto L_003FFD54;
    case 380u: goto L_003FFD70;
    case 381u: goto L_003FFDE0;
    case 382u: goto L_003FFDF0;
    case 383u: goto L_003FFE4C;
    case 384u: goto L_003FFE5C;
    case 385u: goto L_003FFE70;
    case 386u: goto L_003FFE90;
    case 387u: goto L_003FFEB0;
    case 388u: goto L_003FFEC0;
    case 389u: goto L_003FFED0;
    case 390u: goto L_003FFEE0;
    case 391u: goto L_003FFEF0;
    case 392u: goto L_003FFF00;
    case 393u: goto L_003FFF58;
    case 394u: goto L_003FFF70;
    case 395u: goto L_003FFF84;
    case 396u: goto L_003FFFBC;
    case 397u: goto L_003FFFD4;
    case 398u: goto L_003FFFE0;
    default: bad_entry(c, 0x003FC000u); return;
    }
L_003FC000:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[18].d[0] = ld8((c.r[2].w[0] + 124u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC010u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 467u, depth + 1u); else { c.pc = 0x00313ED0u; return; } if (c.pc != 0x003FC010u) [[unlikely]] return; }
L_003FC010:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FC04C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC030u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 469u, depth + 1u); else { c.pc = 0x00313F00u; return; } if (c.pc != 0x003FC030u) [[unlikely]] return; }
L_003FC030:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC044u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 466u, depth + 1u); else { c.pc = 0x00313EC0u; return; } if (c.pc != 0x003FC044u) [[unlikely]] return; }
L_003FC044:
    c.r[3].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 2;
L_003FC04C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC09C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[6].d[0] = ld16((c.r[3].w[0] - 19170u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] - 19174u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] - 19172u));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FC09C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 97u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FC09C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003FC09C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 97u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC188; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FC188; } }
    set32(c.r[4], c.r[17].w[0] + 40u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC0D8u); st32((c.r[17].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_000F(c, 413u, depth + 1u); else { c.pc = 0x0023FAF0u; return; } if (c.pc != 0x003FC0D8u) [[unlikely]] return; }
L_003FC0D8:
    set32(c.r[16], ld32((c.r[17].w[0] + 84u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] - 1u);  if (t) { goto L_003FC158; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_003FC0F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_003FC114; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FC114; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC114u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FC114u) [[unlikely]] return; }
L_003FC114:
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FC188; } }
L_003FC120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC128u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 33u, depth + 1u); else { c.pc = 0x003FC3F0u; return; } if (c.pc != 0x003FC128u) [[unlikely]] return; }
L_003FC128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC148; } }
L_003FC130:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC120u | kUnwind; return; } goto L_003FC120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBF7Cu | kUnwind; return; } [[clang::musttail]] return unit_007E(c, 460u, depth); } }
L_003FC148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC130u | kUnwind; return; } goto L_003FC130; } }
L_003FC150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FC188; } }
L_003FC158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC160u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 33u, depth + 1u); else { c.pc = 0x003FC3F0u; return; } if (c.pc != 0x003FC160u) [[unlikely]] return; }
L_003FC160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC180; } }
L_003FC168:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC158u | kUnwind; return; } goto L_003FC158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC0F0u | kUnwind; return; } goto L_003FC0F0; } }
L_003FC180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC168u | kUnwind; return; } goto L_003FC168; } }
L_003FC188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FC1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x003FC1B4u) [[unlikely]] return; }
L_003FC1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC1F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 195u, depth + 1u); else { c.pc = 0x002BAA40u; return; } if (c.pc != 0x003FC1C4u) [[unlikely]] return; }
L_003FC1C4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FC1D8; } }
L_003FC1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FC1F4; } }
L_003FC1D8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FC1E8u) [[unlikely]] return; }
L_003FC1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC1D0u | kUnwind; return; } goto L_003FC1D0; } }
L_003FC1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FC1F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC200:
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 84u), 0u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 92u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FC250; } }
L_003FC228:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31556u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC228u | kUnwind; return; } goto L_003FC228; } }
    c.budget -= 1;
L_003FC250:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_003FC260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FC2FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FC2E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    set32(c.r[2], c.r[2].w[0] - 528u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FC304; } }
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 1;
L_003FC2A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003FC314; } }
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 1;
L_003FC2B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003FC324; } }
L_003FC2B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FC2E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FC2E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FC2E4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FC2FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC2FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FC2FCu) [[unlikely]] return; }
L_003FC2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FC334; } }
L_003FC304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC30Cu);  if (depth < kMaxDepth) unit_0011(c, 368u, depth + 1u); else { c.pc = 0x002478E0u; return; } if (c.pc != 0x003FC30Cu) [[unlikely]] return; }
L_003FC30C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC2A4u | kUnwind; return; } goto L_003FC2A4; } }
L_003FC314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC31Cu);  if (depth < kMaxDepth) unit_007F(c, 171u, depth + 1u); else { c.pc = 0x003FD9F0u; return; } if (c.pc != 0x003FC31Cu) [[unlikely]] return; }
L_003FC31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 60u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC2B0u | kUnwind; return; } goto L_003FC2B0; } }
L_003FC324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC32Cu);  if (depth < kMaxDepth) unit_007F(c, 164u, depth + 1u); else { c.pc = 0x003FD920u; return; } if (c.pc != 0x003FC32Cu) [[unlikely]] return; }
L_003FC32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC2B8u | kUnwind; return; } goto L_003FC2B8; } }
L_003FC334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FC350:
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
    set32(c.r[5], c.r[5].w[0] - 528u);
    set32(c.r[3], c.r[3].w[0] - 848u);
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
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 40;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003FC3F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FC440; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FC448; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC450; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003FC450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FC56C; } }
L_003FC440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FC56C; } }
L_003FC448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FC56C; } }
L_003FC450:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FC490; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_003FC464:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FC478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003FC494; } }
L_003FC478:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC464u | kUnwind; return; } goto L_003FC464; } }
    c.budget -= 1;
L_003FC490:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FC494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FC4A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FC56C; } }
L_003FC4A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4B4u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 21u, depth + 1u); else { c.pc = 0x002E8340u; return; } if (c.pc != 0x003FC4B4u) [[unlikely]] return; }
L_003FC4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC52C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FC4F8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_003FC4D0:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FC4E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 68u)));  if (t) { goto L_003FC500; } }
L_003FC4E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC4D0u | kUnwind; return; } goto L_003FC4D0; } }
L_003FC4F8:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 2;
L_003FC500:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 124u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC51Cu); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 464u, depth + 1u); else { c.pc = 0x00313E70u; return; } if (c.pc != 0x003FC51Cu) [[unlikely]] return; }
L_003FC51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FC56C; } }
L_003FC52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FC56C; } }
L_003FC534:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC544u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 66u, depth + 1u); else { c.pc = 0x003FC900u; return; } if (c.pc != 0x003FC544u) [[unlikely]] return; }
L_003FC544:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 10;
L_003FC56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FC590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), 0u);  c.pc = t; return; }
L_003FC5A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FC5D4; } }
L_003FC5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003FC618; } }
L_003FC5D4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FC5D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC5F8u); set32(c.r[19], c.r[3].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_002F(c, 144u, depth + 1u); else { c.pc = 0x002BD2B0u; return; } if (c.pc != 0x003FC5F8u) [[unlikely]] return; }
L_003FC5F8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC5D8u | kUnwind; return; } goto L_003FC5D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC5CCu | kUnwind; return; } goto L_003FC5CC; } }
L_003FC618:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FC630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 32u), c.r[10].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC68Cu); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_007F(c, 163u, depth + 1u); else { c.pc = 0x003FD910u; return; } if (c.pc != 0x003FC68Cu) [[unlikely]] return; }
L_003FC68C:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC69Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 169u, depth + 1u); else { c.pc = 0x003FD9B0u; return; } if (c.pc != 0x003FC69Cu) [[unlikely]] return; }
L_003FC69C:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 366u, depth + 1u); else { c.pc = 0x002478A0u; return; } if (c.pc != 0x003FC6ACu) [[unlikely]] return; }
L_003FC6AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FC6E0; } }
L_003FC6BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 31560u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC6BCu | kUnwind; return; } goto L_003FC6BC; } }
L_003FC6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FC77C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 76u);
    set32(c.r[2], c.r[2].w[0] - 528u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FC784; } }
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 1;
L_003FC724:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003FC794; } }
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 1;
L_003FC730:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003FC7A4; } }
L_003FC738:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FC764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FC764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FC764:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FC77C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC77Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FC77Cu) [[unlikely]] return; }
L_003FC77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FC7B4; } }
L_003FC784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC78Cu);  if (depth < kMaxDepth) unit_0011(c, 368u, depth + 1u); else { c.pc = 0x002478E0u; return; } if (c.pc != 0x003FC78Cu) [[unlikely]] return; }
L_003FC78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC724u | kUnwind; return; } goto L_003FC724; } }
L_003FC794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC79Cu);  if (depth < kMaxDepth) unit_007F(c, 171u, depth + 1u); else { c.pc = 0x003FD9F0u; return; } if (c.pc != 0x003FC79Cu) [[unlikely]] return; }
L_003FC79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 60u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC730u | kUnwind; return; } goto L_003FC730; } }
L_003FC7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7ACu);  if (depth < kMaxDepth) unit_007F(c, 164u, depth + 1u); else { c.pc = 0x003FD920u; return; } if (c.pc != 0x003FC7ACu) [[unlikely]] return; }
L_003FC7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC738u | kUnwind; return; } goto L_003FC738; } }
L_003FC7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FC7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7F0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FC7F0u) [[unlikely]] return; }
L_003FC7F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC8E8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FC8E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC814u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FC814u) [[unlikely]] return; }
L_003FC814:
    set32(c.r[6], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003FC8D8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003FC8D8; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003FC840:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FC86C; } }
    c.budget -= 1;
L_003FC850:
    set32(c.r[3], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC840u | kUnwind; return; } goto L_003FC840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FC8D8; } }
L_003FC86C:
    set32(c.r[3], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC850u | kUnwind; return; } goto L_003FC850; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[6].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003FC8D8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_003FC898:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 20368u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 220u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8ACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 47u, depth + 1u); else { c.pc = 0x002E8740u; return; } if (c.pc != 0x003FC8ACu) [[unlikely]] return; }
L_003FC8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 140u), 0u);  if (t) { goto L_003FC8D0; } }
L_003FC8B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8CCu); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 44u, depth + 1u); else { c.pc = 0x002E8650u; return; } if (c.pc != 0x003FC8CCu) [[unlikely]] return; }
L_003FC8CC:
    st32((c.r[17].w[0] + 140u), 0u);
    c.budget -= 1;
L_003FC8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003FC8EC; } }
L_003FC8D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC8B4u | kUnwind; return; } goto L_003FC8B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 140u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC898u | kUnwind; return; } goto L_003FC898; } }
L_003FC8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003FC8EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FC900:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC934u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FC934u) [[unlikely]] return; }
L_003FC934:
    st32((c.r[20].w[0] + 132u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 136u)));
    set32(c.r[4], c.r[4].w[0] - 20368u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC950u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x002E8870u; return; } if (c.pc != 0x003FC950u) [[unlikely]] return; }
L_003FC950:
    st32((c.r[20].w[0] + 140u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 152u)));
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FC9B8; } }
L_003FC968:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FC97C; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC97Cu); set32(c.r[4], ld32((c.r[20].w[0] + 140u)));  if (depth < kMaxDepth) unit_0020(c, 286u, depth + 1u); else { c.pc = 0x00283AB0u; return; } if (c.pc != 0x003FC97Cu) [[unlikely]] return; }
L_003FC97C:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[2].w[0] + 1376u), c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC9A4u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 164u, depth + 1u); else { c.pc = 0x00281E70u; return; } if (c.pc != 0x003FC9A4u) [[unlikely]] return; }
L_003FC9A4:
    set32(c.r[5], ld32((c.r[20].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003FCA14; } }
L_003FC9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003FCA2C; } }
L_003FC9B8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FC9BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC9D8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FC9D8u) [[unlikely]] return; }
L_003FC9D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC9E8u); set32(c.r[5], c.r[5].w[0] + 8060u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x003FC9E8u) [[unlikely]] return; }
L_003FC9E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FC9F8; } }
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_003FC9F8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 152u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC9BCu | kUnwind; return; } goto L_003FC9BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC968u | kUnwind; return; } goto L_003FC968; } }
L_003FCA14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA24u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FCA24u) [[unlikely]] return; }
L_003FCA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC9B0u | kUnwind; return; } goto L_003FC9B0; } }
L_003FCA2C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FCA50:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 20u), c.r[4].w[0]);  c.pc = t; return; }
L_003FCA80:
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FCAB4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 523u));
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FCAB4; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FCAB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FCAB8; } }
L_003FCAB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FCAB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FCAC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 140u)));  c.pc = t; return; }
L_003FCAD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));  c.pc = t; return; }
L_003FCAE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));  c.pc = t; return; }
L_003FCAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FCB18; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCB10u) [[unlikely]] return; }
L_003FCB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FCB20; } }
L_003FCB18:
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003FCB20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCB30:
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_007F[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FCB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FCB78; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCB70u) [[unlikely]] return; }
L_003FCB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FCB80; } }
L_003FCB78:
    set32(c.r[2], c.r[4].w[0] + 32u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003FCB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCB90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FCBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 321u, depth + 1u); else { c.pc = 0x0027E740u; return; } if (c.pc != 0x003FCBACu) [[unlikely]] return; }
L_003FCBAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCBC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FCBDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBDCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 321u, depth + 1u); else { c.pc = 0x0027E740u; return; } if (c.pc != 0x003FCBDCu) [[unlikely]] return; }
L_003FCBDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FCCAC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FCCAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FCC18u) [[unlikely]] return; }
L_003FCC18:
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003FCC90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003FCC90; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003FCC44:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FCC6C; } }
L_003FCC50:
    set32(c.r[3], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCC44u | kUnwind; return; } goto L_003FCC44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 140u)));  if (t) { goto L_003FCC94; } }
L_003FCC6C:
    set32(c.r[3], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCC50u | kUnwind; return; } goto L_003FCC50; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[6].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_003FCC90:
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_003FCC94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 20368u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 220u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCCA8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 47u, depth + 1u); else { c.pc = 0x002E8740u; return; } if (c.pc != 0x003FCCA8u) [[unlikely]] return; }
L_003FCCA8:
    st32((c.r[16].w[0] + 140u), 0u);
    c.budget -= 1;
L_003FCCAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FCCC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FCCE4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCCE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FCCE4u) [[unlikely]] return; }
L_003FCCE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCCF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[6].w[0]));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[4].w[0] + 136u), c.r[5].w[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 32u), c.f[3]);
    set32(c.r[12], ld32((c.r[29].w[0] + 120u)));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    c.r[5].d[0] = c.r[7].d[0] << 56;
    st32((c.r[4].w[0] + 40u), c.f[1]);
    set32(c.r[11], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 112u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    set32(c.r[17], ld32((c.r[29].w[0] + 128u)));
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.f[0] = ld32((c.r[12].w[0]));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[12]);
    st32((c.r[4].w[0] + 64u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 124u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 125u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 127u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD9Cu); set32(c.r[4], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_007F(c, 165u, depth + 1u); else { c.pc = 0x003FD930u; return; } if (c.pc != 0x003FCD9Cu) [[unlikely]] return; }
L_003FCD9C:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 96u));
    st32((c.r[19].w[0] + 128u), c.r[18].w[0]);
    st8((c.r[19].w[0] + 153u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[19].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[19].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[19].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[19].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[19].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[19].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[19].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[19].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[19].w[0] + 120u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FCE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FCE94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] - 208u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FCE9C; } }
L_003FCE60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FCE7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FCE7C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FCE94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FCE94u) [[unlikely]] return; }
L_003FCE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FCEAC; } }
L_003FCE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCEA4u);  if (depth < kMaxDepth) unit_007F(c, 167u, depth + 1u); else { c.pc = 0x003FD970u; return; } if (c.pc != 0x003FCEA4u) [[unlikely]] return; }
L_003FCEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCE60u | kUnwind; return; } goto L_003FCE60; } }
L_003FCEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FCEC0:
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
    set32(c.r[3], c.r[3].w[0] - 208u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[10], 0u + 1u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 140u), 0u);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 148u), 0u);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 153u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 76u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 84u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 88u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 92u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 96u), c.r[10].w[0]);
    c.budget -= 45;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 120u), 0u);  c.pc = t; return; }
L_003FCF80:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_003FCFA0:
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 40u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 9;
    { set32(c.r[4], c.r[4].w[0] + 20u);  goto L_003FD9B0; }
L_003FCFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FD040; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD000u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 171u, depth + 1u); else { c.pc = 0x003FD9F0u; return; } if (c.pc != 0x003FD000u) [[unlikely]] return; }
L_003FD000:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003FD048; } }
L_003FD00C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FD028; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FD028:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FD040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FD040u) [[unlikely]] return; }
L_003FD040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FD058; } }
L_003FD048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD050u);  if (depth < kMaxDepth) unit_007F(c, 171u, depth + 1u); else { c.pc = 0x003FD9F0u; return; } if (c.pc != 0x003FD050u) [[unlikely]] return; }
L_003FD050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD00Cu | kUnwind; return; } goto L_003FD00C; } }
L_003FD058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FD070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[8], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] + 80u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], 0u + 85u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], 0u + 1u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[11].w[0]));  c.pc = t; return; }
L_003FD100:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003FD1A8; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD13C:
    set32(c.r[2], ld32((c.r[22].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003FD190; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FD160:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FD1B8; } }
L_003FD178:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD160u | kUnwind; return; } goto L_003FD160; } }
    c.budget -= 1;
L_003FD190:
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD13Cu | kUnwind; return; } goto L_003FD13C; } }
    c.budget -= 1;
L_003FD1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD1B0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FD1B0u) [[unlikely]] return; }
L_003FD1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD268; } }
L_003FD1B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD1C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FD1C4u) [[unlikely]] return; }
L_003FD1C4:
    set32(c.r[7], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003FD248; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 64u)));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003FD248; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003FD1F0:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003FD220; } }
    c.budget -= 1;
L_003FD200:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD1F0u | kUnwind; return; } goto L_003FD1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD248; } }
    c.budget -= 1;
L_003FD220:
    set32(c.r[3], ld32((c.r[7].w[0] + 76u)));
    set32(c.r[4], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD200u | kUnwind; return; } goto L_003FD200; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[7].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[7].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 5;
L_003FD248:
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD260u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 47u, depth + 1u); else { c.pc = 0x002E8740u; return; } if (c.pc != 0x003FD260u) [[unlikely]] return; }
L_003FD260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD178u | kUnwind; return; } goto L_003FD178; } }
L_003FD268:
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
L_003FD290:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FD2B8u) [[unlikely]] return; }
L_003FD2B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FD370; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FD370; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003FD348; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD2E0:
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003FD330; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD300:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 153u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FD358; } }
L_003FD318:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD300u | kUnwind; return; } goto L_003FD300; } }
    c.budget -= 1;
L_003FD330:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD2E0u | kUnwind; return; } goto L_003FD2E0; } }
    c.budget -= 1;
L_003FD348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD350u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FD350u) [[unlikely]] return; }
L_003FD350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD370; } }
L_003FD358:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD364u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 66u, depth + 1u); else { c.pc = 0x003FC900u; return; } if (c.pc != 0x003FD364u) [[unlikely]] return; }
L_003FD364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD318u | kUnwind; return; } goto L_003FD318; } }
    c.budget -= 1;
L_003FD370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FD3A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003FD448; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD3DC:
    set32(c.r[2], ld32((c.r[22].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003FD430; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FD400:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FD458; } }
L_003FD418:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD400u | kUnwind; return; } goto L_003FD400; } }
    c.budget -= 1;
L_003FD430:
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD3DCu | kUnwind; return; } goto L_003FD3DC; } }
    c.budget -= 1;
L_003FD448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD450u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FD450u) [[unlikely]] return; }
L_003FD450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD508; } }
L_003FD458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD464u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FD464u) [[unlikely]] return; }
L_003FD464:
    set32(c.r[7], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003FD4E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 64u)));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003FD4E8; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003FD490:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003FD4C0; } }
    c.budget -= 1;
L_003FD4A0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD490u | kUnwind; return; } goto L_003FD490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD4E8; } }
    c.budget -= 1;
L_003FD4C0:
    set32(c.r[3], ld32((c.r[7].w[0] + 76u)));
    set32(c.r[4], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD4A0u | kUnwind; return; } goto L_003FD4A0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[7].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[7].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 5;
L_003FD4E8:
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD500u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 47u, depth + 1u); else { c.pc = 0x002E8740u; return; } if (c.pc != 0x003FD500u) [[unlikely]] return; }
L_003FD500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD418u | kUnwind; return; } goto L_003FD418; } }
L_003FD508:
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
L_003FD530:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD558u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FD558u) [[unlikely]] return; }
L_003FD558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FD610; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FD610; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003FD5E8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD580:
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003FD5D0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD5A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 153u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FD5F8; } }
L_003FD5B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD5A0u | kUnwind; return; } goto L_003FD5A0; } }
    c.budget -= 1;
L_003FD5D0:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD580u | kUnwind; return; } goto L_003FD580; } }
    c.budget -= 1;
L_003FD5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5F0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FD5F0u) [[unlikely]] return; }
L_003FD5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD610; } }
L_003FD5F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD604u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 66u, depth + 1u); else { c.pc = 0x003FC900u; return; } if (c.pc != 0x003FD604u) [[unlikely]] return; }
L_003FD604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD5B8u | kUnwind; return; } goto L_003FD5B8; } }
    c.budget -= 1;
L_003FD610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FD640:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_003FD650:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD678u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FD678u) [[unlikely]] return; }
L_003FD678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FD730; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FD730; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003FD708; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD6A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003FD6F0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD6C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 153u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FD718; } }
L_003FD6D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD6C0u | kUnwind; return; } goto L_003FD6C0; } }
    c.budget -= 1;
L_003FD6F0:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD6A0u | kUnwind; return; } goto L_003FD6A0; } }
    c.budget -= 1;
L_003FD708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD710u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FD710u) [[unlikely]] return; }
L_003FD710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD730; } }
L_003FD718:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD724u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 66u, depth + 1u); else { c.pc = 0x003FC900u; return; } if (c.pc != 0x003FD724u) [[unlikely]] return; }
L_003FD724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD6D8u | kUnwind; return; } goto L_003FD6D8; } }
    c.budget -= 1;
L_003FD730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FD760:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_003FD780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 173u, depth + 1u); else { c.pc = 0x003FDA30u; return; } if (c.pc != 0x003FD7A4u) [[unlikely]] return; }
L_003FD7A4:
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FD7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FD834; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 368u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FD83C; } }
L_003FD7F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FD81C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FD81C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FD81C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FD834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FD834u) [[unlikely]] return; }
L_003FD834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FD84C; } }
L_003FD83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD844u);  if (depth < kMaxDepth) unit_007F(c, 175u, depth + 1u); else { c.pc = 0x003FDA70u; return; } if (c.pc != 0x003FD844u) [[unlikely]] return; }
L_003FD844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD7F0u | kUnwind; return; } goto L_003FD7F0; } }
L_003FD84C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FD860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u - 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 3u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[5], c.r[5].w[0] - 12672u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 368u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_003FD8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003FD900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FD910:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_003FD920:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_003FD930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD950u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003FD950u) [[unlikely]] return; }
L_003FD950:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FD970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FD994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD994u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003FD994u) [[unlikely]] return; }
L_003FD994:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FD9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9D0u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003FD9D0u) [[unlikely]] return; }
L_003FD9D0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FD9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FDA14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA14u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003FDA14u) [[unlikely]] return; }
L_003FDA14:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA50u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003FDA50u) [[unlikely]] return; }
L_003FDA50:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FDA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FDA94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA94u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003FDA94u) [[unlikely]] return; }
L_003FDA94:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FDB24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 672u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FDB2C; } }
L_003FDAE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FDB0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FDB0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FDB0C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FDB24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FDB24u) [[unlikely]] return; }
L_003FDB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FDB3C; } }
L_003FDB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB34u);  if (depth < kMaxDepth) unit_007F(c, 232u, depth + 1u); else { c.pc = 0x003FE6E0u; return; } if (c.pc != 0x003FDB34u) [[unlikely]] return; }
L_003FDB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDAE0u | kUnwind; return; } goto L_003FDAE0; } }
L_003FDB3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FDB50:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003FDB80; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_003FDBBC; } }
L_003FDB80:
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.f[0] = 0u;
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 28u));
    c.f[2] = ld32((c.r[3].w[0] + 28u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 15;
L_003FDBBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FDBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.f[3] = ld32((c.r[29].w[0] + 28u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.f[7] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_003FDC1C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.f[3]);  if (t) { goto L_003FDC88; } }
L_003FDC1C:
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.f[6] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[4] = ld32((c.r[3].w[0] + 20u));
    c.f[5] = ld32((c.r[4].w[0] + 20u));
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[3] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[4]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    st32((c.r[5].w[0] + 12u), c.f[7]);
    c.budget -= 27;
L_003FDC88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.f[3] = ld32((c.r[29].w[0] + 28u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.f[7] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_003FDCDC; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.f[3]);  if (t) { goto L_003FDD48; } }
L_003FDCDC:
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.f[6] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[3].w[0] + 8u));
    c.f[5] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[4]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    st32((c.r[5].w[0] + 12u), c.f[7]);
    c.budget -= 27;
L_003FDD48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FDDD8; } }
L_003FDD7C:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FDDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDDA8u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FDDA8u) [[unlikely]] return; }
L_003FDDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FDE34; } }
L_003FDDB0:
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDD7Cu | kUnwind; return; } goto L_003FDD7C; } }
    c.budget -= 1;
L_003FDDD8:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 23;
L_003FDE34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FDE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[2].w[0] - 25200u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 25136u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE78u); st32((c.r[2].w[0] - 25072u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FDE78u) [[unlikely]] return; }
L_003FDE78:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FDE88u) [[unlikely]] return; }
L_003FDE88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDEA0:
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 3;
    { c.r[7].d[0] = 0ull + 0ull;  goto L_003FE6D0; }
L_003FDEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDEC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x003FDEC4u) [[unlikely]] return; }
L_003FDEC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FDEE8; } }
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDEE8u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 53u, depth + 1u); else { c.pc = 0x003BD0E0u; return; } if (c.pc != 0x003FDEE8u) [[unlikely]] return; }
L_003FDEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDF00:
    st32((c.r[4].w[0] + 20u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.f[13]);  c.pc = t; return; }
L_003FDF10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FDF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 3552u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FDF60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28540u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_003FE1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF50u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FDF50u) [[unlikely]] return; }
L_003FDF50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FE1A4; } }
L_003FDF60:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 105u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE054; } }
L_003FDF6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] - 10220u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003FE080; } }
L_003FDF80:
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FDFCC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FDFCC; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FDFCC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FDFCC; } }
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003FDFD0; } }
L_003FDFCC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FDFD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FE098; } }
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.budget -= 1;
L_003FDFDC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FE024; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE024; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FE024; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FE024; } }
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003FE028; } }
L_003FE024:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FE028:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FE0B8; } }
L_003FE030:
    set32(c.r[3], ld32((c.r[28].w[0] - 28540u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_003FE0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE044u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FE044u) [[unlikely]] return; }
L_003FE044:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003FE04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FE1A0; } }
L_003FE054:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0] - 10220u)));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDF6Cu | kUnwind; return; } goto L_003FDF6C; } }
L_003FE080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDF80u | kUnwind; return; } goto L_003FDF80; } }
L_003FE098:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0B0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FE0B0u) [[unlikely]] return; }
L_003FE0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 76u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDFDCu | kUnwind; return; } goto L_003FDFDC; } }
L_003FE0B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x003FE0C4u) [[unlikely]] return; }
L_003FE0C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE030u | kUnwind; return; } goto L_003FE030; } }
L_003FE0D0:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FE11C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 88u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE11C; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FE11C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FE11C; } }
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003FE120; } }
L_003FE11C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FE120:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FE178; } }
L_003FE128:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 104u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE13Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FE13Cu) [[unlikely]] return; }
L_003FE13C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 3664u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE164; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE15Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 27u, depth + 1u); else { c.pc = 0x0034C580u; return; } if (c.pc != 0x003FE15Cu) [[unlikely]] return; }
L_003FE15C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] - 3664u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003FE164:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE170u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 64u, depth + 1u); else { c.pc = 0x003BD280u; return; } if (c.pc != 0x003FE170u) [[unlikely]] return; }
L_003FE170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE04Cu | kUnwind; return; } goto L_003FE04C; } }
L_003FE178:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[5], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE190u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FE190u) [[unlikely]] return; }
L_003FE190:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] - 3664u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE128u | kUnwind; return; } goto L_003FE128; } }
L_003FE1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FE1A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE1D0u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 107u, depth + 1u); else { c.pc = 0x003BDA60u; return; } if (c.pc != 0x003FE1D0u) [[unlikely]] return; }
L_003FE1D0:
    st32((c.r[28].w[0] - 28540u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE1F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FE1F0u) [[unlikely]] return; }
L_003FE1F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 3664u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE220; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE218u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 27u, depth + 1u); else { c.pc = 0x0034C580u; return; } if (c.pc != 0x003FE218u) [[unlikely]] return; }
L_003FE218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] - 3664u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003FE220:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE238u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FE238u) [[unlikely]] return; }
L_003FE238:
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FE260; } }
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FE278; } }
L_003FE260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FE268u) [[unlikely]] return; }
L_003FE268:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE278u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FE278u) [[unlikely]] return; }
L_003FE278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 28540u), 0u);  c.pc = t; return; }
L_003FE2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 48u), c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[3]);
    st32((c.r[4].w[0] + 56u), c.f[2]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 92u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[4].w[0] + 92u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE30Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FE30Cu) [[unlikely]] return; }
L_003FE30C:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[16].w[0] + 106u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE350u); set32(c.r[4], 0u + 140u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003FE350u) [[unlikely]] return; }
L_003FE350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE3C8; } }
    st32((c.r[2].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.r[5].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[2].w[0] + 44u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[2].w[0] + 48u), 0u);
    set32(c.r[4], 0u + 140u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 56u), 0u);
    st32((c.r[2].w[0] + 100u), 0u);
    st32((c.r[2].w[0] + 104u), 0u);
    st32((c.r[2].w[0] + 108u), 0u);
    st32((c.r[2].w[0] + 116u), 0u);
    st32((c.r[2].w[0] + 120u), 0u);
    st32((c.r[2].w[0] + 124u), 0u);
    st32((c.r[2].w[0] + 128u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 28;
L_003FE3C8:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.f[10] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[10], ld32((c.r[17].w[0] + 32u)));
    c.f[9] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.f[8] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[7] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[9], ld32((c.r[16].w[0] + 28u)));
    c.f[6] = ld32((c.r[16].w[0] + 36u));
    c.f[5] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[8], ld32((c.r[16].w[0] + 52u)));
    c.f[4] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[10].w[0]), c.r[5].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[10].w[0] + 4u), c.r[4].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[10].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[10].w[0] + 12u), c.f[10]);
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[10].w[0] + 16u), c.f[9]);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[10].w[0] + 20u), c.f[8]);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[10].w[0] + 24u), c.f[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    st32((c.r[10].w[0] + 28u), c.r[9].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[10].w[0] + 32u), c.f[7]);
    st32((c.r[10].w[0] + 36u), c.f[6]);
    st32((c.r[10].w[0] + 40u), c.f[5]);
    st32((c.r[10].w[0] + 44u), c.f[4]);
    st32((c.r[10].w[0] + 48u), c.f[1]);
    st32((c.r[10].w[0] + 52u), c.r[8].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    st32((c.r[10].w[0] + 56u), c.f[3]);
    st32((c.r[10].w[0] + 60u), c.f[0]);
    st32((c.r[10].w[0] + 64u), c.r[7].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 88u));
    st32((c.r[10].w[0] + 68u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[10].w[0] + 72u), c.f[2]);
    st32((c.r[10].w[0] + 76u), c.r[5].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    st32((c.r[10].w[0] + 80u), c.f[1]);
    st32((c.r[10].w[0] + 84u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[10].w[0] + 88u), c.f[3]);
    st32((c.r[10].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[10].w[0] + 96u), c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[10].w[0] + 100u), c.f[1]);
    c.f[3] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    st32((c.r[10].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    st32((c.r[10].w[0] + 108u), c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 124u));
    st32((c.r[10].w[0] + 112u), c.f[3]);
    st32((c.r[10].w[0] + 116u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[10].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[10].w[0] + 124u), c.f[2]);
    st32((c.r[10].w[0] + 128u), c.f[1]);
    st32((c.r[10].w[0] + 132u), c.f[0]);
    st32((c.r[10].w[0] + 136u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 77;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FE588; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 1552u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28540u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE540u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FE540u) [[unlikely]] return; }
L_003FE540:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_003FE544:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FE570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FE570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FE570:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FE588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE588u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FE588u) [[unlikely]] return; }
L_003FE588:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE5A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u - 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 3u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[5], c.r[5].w[0] - 12672u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1552u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 144u), 0u);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_003FE630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FE684; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FE66C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FE66C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FE684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE684u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FE684u) [[unlikely]] return; }
L_003FE684:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE6A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_003FE6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 48u);  c.pc = t; return; }
L_003FE6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003FE6D0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_003FE6E0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_003FE6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE708u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FE708u) [[unlikely]] return; }
L_003FE708:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FE754u) [[unlikely]] return; }
L_003FE754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE7B0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FE7A0; } }
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 12;
L_003FE7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FE7A8u) [[unlikely]] return; }
L_003FE7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FE810; } }
L_003FE7B0:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE800; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE800u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FE800u) [[unlikely]] return; }
L_003FE800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE808u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FE808u) [[unlikely]] return; }
L_003FE808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE7A8u | kUnwind; return; } goto L_003FE7A8; } }
L_003FE810:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE834u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FE834u) [[unlikely]] return; }
L_003FE834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE890; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FE880; } }
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 12;
L_003FE880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE888u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FE888u) [[unlikely]] return; }
L_003FE888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FE8F0; } }
L_003FE890:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE8E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FE8E0u) [[unlikely]] return; }
L_003FE8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FE8E8u) [[unlikely]] return; }
L_003FE8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE888u | kUnwind; return; } goto L_003FE888; } }
L_003FE8F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE914u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FE914u) [[unlikely]] return; }
L_003FE914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE970; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FE960; } }
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 12;
L_003FE960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FE968u) [[unlikely]] return; }
L_003FE968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FE9D0; } }
L_003FE970:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE9C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FE9C0u) [[unlikely]] return; }
L_003FE9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FE9C8u) [[unlikely]] return; }
L_003FE9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE968u | kUnwind; return; } goto L_003FE968; } }
L_003FE9D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FE9F4u) [[unlikely]] return; }
L_003FE9F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FEA50; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FEA40; } }
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 80u), 0u);
    c.budget -= 12;
L_003FEA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FEA48u) [[unlikely]] return; }
L_003FEA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FEAB0; } }
L_003FEA50:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FEAA0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEAA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FEAA0u) [[unlikely]] return; }
L_003FEAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEAA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FEAA8u) [[unlikely]] return; }
L_003FEAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEA48u | kUnwind; return; } goto L_003FEA48; } }
L_003FEAB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FEB48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FEB98; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 8;
L_003FEB0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FEB2C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB2Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FEB2Cu) [[unlikely]] return; }
L_003FEB2C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003FEB48:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FECFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FECE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB78u); set32(c.r[5], c.r[16].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FEB78u) [[unlikely]] return; }
L_003FEB78:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FEC94; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_003FECFC; } }
L_003FEB98:
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEBA4u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003FEBA4u) [[unlikely]] return; }
L_003FEBA4:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003FEBE0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FEBFC; } }
L_003FEBE0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003FEBFC:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003FEC24; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FEC40; } }
L_003FEC24:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003FEC40:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003FEC68; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FEC84; } }
L_003FEC68:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003FEC84:
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEB0Cu | kUnwind; return; } goto L_003FEB0C; } }
L_003FEC94:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FECA8u) [[unlikely]] return; }
L_003FECA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FECFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FECC4u) [[unlikely]] return; }
L_003FECC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FECFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FECD8u) [[unlikely]] return; }
L_003FECD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x003FECE0u) [[unlikely]] return; }
L_003FECE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FED00; } }
L_003FECE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FECF4u) [[unlikely]] return; }
L_003FECF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x003FECFCu) [[unlikely]] return; }
L_003FECFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FED00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FED10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 64u);  c.pc = t; return; }
L_003FED20:
    c.budget -= 2;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_003FED30:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 36u));
    c.budget -= 3;
    { c.r[5].d[0] = c.r[2].d[0] & 1ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_003FED40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED5Cu); c.r[5].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FED5Cu) [[unlikely]] return; }
L_003FED5C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28624u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FED84; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FED84; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FED84u) [[unlikely]] return; }
L_003FED84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEDA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[3] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 44u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    st32((c.r[4].w[0] + 40u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEDE8u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003FEDE8u) [[unlikely]] return; }
L_003FEDE8:
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FEE20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FEEB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 1856u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FEE70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FEE6C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FEE6Cu) [[unlikely]] return; }
L_003FEE6C:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 1;
L_003FEE70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FEE9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FEE9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FEE9C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FEEB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEEB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FEEB4u) [[unlikely]] return; }
L_003FEEB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FEED0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FEEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FEF1C; } }
L_003FEF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_003FEF2C; } }
L_003FEF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF24u);  if (depth < kMaxDepth) unit_007F(c, 281u, depth + 1u); else { c.pc = 0x003FEF40u; return; } if (c.pc != 0x003FEF24u) [[unlikely]] return; }
L_003FEF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEF14u | kUnwind; return; } goto L_003FEF14; } }
L_003FEF2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003FEFD4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 8480u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_007F[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FEF84:
    st8((c.r[28].w[0] - 29620u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003FEFD4; } }
L_003FEF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF98u); set32(c.r[4], ld32((c.r[6].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 149u, depth + 1u); else { c.pc = 0x002A1A70u; return; } if (c.pc != 0x003FEF98u) [[unlikely]] return; }
L_003FEF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FEFD8; } }
L_003FEFA0:
    set32(c.r[4], ld32((c.r[6].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEFACu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 149u, depth + 1u); else { c.pc = 0x002A1A70u; return; } if (c.pc != 0x003FEFACu) [[unlikely]] return; }
L_003FEFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FEFD4; } }
L_003FEFB4:
    set32(c.r[4], ld32((c.r[6].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEFC0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 149u, depth + 1u); else { c.pc = 0x002A1A70u; return; } if (c.pc != 0x003FEFC0u) [[unlikely]] return; }
L_003FEFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FEFD4; } }
L_003FEFC8:
    set32(c.r[4], ld32((c.r[6].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEFD4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 149u, depth + 1u); else { c.pc = 0x002A1A70u; return; } if (c.pc != 0x003FEFD4u) [[unlikely]] return; }
L_003FEFD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FEFD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FEFE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEF40u | kUnwind; return; } goto L_003FEF40; }
L_003FEFF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003FF000:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FF010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FF064; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 2160u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FF04C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FF04C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FF064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF064u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FF064u) [[unlikely]] return; }
L_003FF064:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF080:
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
    set32(c.r[3], c.r[3].w[0] + 2160u);
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
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003FF0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FF100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FF110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FF120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FF174; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 2448u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FF15C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FF15C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FF174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF174u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FF174u) [[unlikely]] return; }
L_003FF174:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF190:
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
    set32(c.r[3], c.r[3].w[0] + 2448u);
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
L_003FF200:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003FF278; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003FF260; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003FF24C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003FF238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FF28C; } }
L_003FF238:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003FF28C; } }
L_003FF24C:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003FF28C; } }
L_003FF260:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003FF28C; } }
L_003FF278:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_003FF28C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FF2A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003FF2C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003FF2E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003FF300:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003FF320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF33Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x003FF33Cu) [[unlikely]] return; }
L_003FF33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FF350; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF350u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x003FF350u) [[unlikely]] return; }
L_003FF350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FF3C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 2736u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FF3AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FF3AC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FF3C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF3C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FF3C4u) [[unlikely]] return; }
L_003FF3C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF3E0:
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
    set32(c.r[3], c.r[3].w[0] + 2736u);
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
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), 0u);  c.pc = t; return; }
L_003FF450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FF5A8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF488u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF488u) [[unlikely]] return; }
L_003FF488:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FF5A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 8631u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10228u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003FF4B4u) [[unlikely]] return; }
L_003FF4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FF548; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4CCu); set32(c.r[5], c.r[5].w[0] + 8646u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003FF4CCu) [[unlikely]] return; }
L_003FF4CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FF55C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4E4u); set32(c.r[5], c.r[5].w[0] + 8662u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003FF4E4u) [[unlikely]] return; }
L_003FF4E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FF570; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1336u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FF540; } }
L_003FF4FC:
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF50Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0020(c, 285u, depth + 1u); else { c.pc = 0x00283A70u; return; } if (c.pc != 0x003FF50Cu) [[unlikely]] return; }
L_003FF50C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF520u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF520u) [[unlikely]] return; }
L_003FF520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_003FF58C; } }
L_003FF528:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1336u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF4FCu | kUnwind; return; } goto L_003FF4FC; } }
    c.budget -= 1;
L_003FF540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FF5A8; } }
L_003FF548:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF554u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 321u, depth + 1u); else { c.pc = 0x0027E740u; return; } if (c.pc != 0x003FF554u) [[unlikely]] return; }
L_003FF554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF540u | kUnwind; return; } goto L_003FF540; } }
L_003FF55C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF568u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 321u, depth + 1u); else { c.pc = 0x0027E740u; return; } if (c.pc != 0x003FF568u) [[unlikely]] return; }
L_003FF568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF540u | kUnwind; return; } goto L_003FF540; } }
L_003FF570:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 6u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF584u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 512u, depth + 1u); else { c.pc = 0x002C2190u; return; } if (c.pc != 0x003FF584u) [[unlikely]] return; }
L_003FF584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF540u | kUnwind; return; } goto L_003FF540; } }
L_003FF58C:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 6u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5A0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FF5A0u) [[unlikely]] return; }
L_003FF5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF528u | kUnwind; return; } goto L_003FF528; } }
L_003FF5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FF5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FF624; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 3024u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FF60C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FF60C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FF624; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FF624u) [[unlikely]] return; }
L_003FF624:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF640:
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
    set32(c.r[3], c.r[3].w[0] + 3024u);
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
L_003FF6B0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_007F[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FF6C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF6DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x003FF6DCu) [[unlikely]] return; }
L_003FF6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FF764; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FF734; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FF704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FF754; } }
L_003FF704:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003FF754; } }
L_003FF734:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF744u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003FF744u) [[unlikely]] return; }
L_003FF744:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_003FF754:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF764u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FF764u) [[unlikely]] return; }
L_003FF764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_003FF790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7B0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003FF7B0u) [[unlikely]] return; }
L_003FF7B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7CCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FF7CCu) [[unlikely]] return; }
L_003FF7CC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF7DCu) [[unlikely]] return; }
L_003FF7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF7F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    mmi::divu(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { set32(c.r[4], c.r[4].w[0] - 10288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD440u | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 151u, depth); }
L_003FF820:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003FF930; } }
L_003FF84C:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 32u));
    c.budget -= 1;
L_003FF850:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FF890; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FF870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FF8A8; } }
    c.budget -= 1;
L_003FF870:
    set32(c.r[17], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003FF8A8; } }
    c.budget -= 1;
L_003FF890:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8A0u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003FF8A0u) [[unlikely]] return; }
L_003FF8A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003FF8A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[16], c.r[17].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8C4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 144u, depth + 1u); else { c.pc = 0x002BD2B0u; return; } if (c.pc != 0x003FF8C4u) [[unlikely]] return; }
L_003FF8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FF8CCu) [[unlikely]] return; }
L_003FF8CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FF910; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8ECu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 144u, depth + 1u); else { c.pc = 0x002BD2B0u; return; } if (c.pc != 0x003FF8ECu) [[unlikely]] return; }
L_003FF8EC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF8FCu) [[unlikely]] return; }
L_003FF8FC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF84Cu | kUnwind; return; } goto L_003FF84C; } }
    c.budget -= 1;
L_003FF910:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF928u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FF928u) [[unlikely]] return; }
L_003FF928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FF9B0; } }
L_003FF930:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FF934:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF94Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 144u, depth + 1u); else { c.pc = 0x002BD2B0u; return; } if (c.pc != 0x003FF94Cu) [[unlikely]] return; }
L_003FF94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF954u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FF954u) [[unlikely]] return; }
L_003FF954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FF97C; } }
    c.budget -= 1;
L_003FF960:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF934u | kUnwind; return; } goto L_003FF934; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[19].w[0] + 32u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF850u | kUnwind; return; } goto L_003FF850; } }
L_003FF97C:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF994u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 144u, depth + 1u); else { c.pc = 0x002BD2B0u; return; } if (c.pc != 0x003FF994u) [[unlikely]] return; }
L_003FF994:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF9A4u) [[unlikely]] return; }
L_003FF9A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF960u | kUnwind; return; } goto L_003FF960; } }
    c.budget -= 1;
L_003FF9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FF9D0:
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_003FFA00:
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24u);
    c.budget -= 5;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC490u | kUnwind; return; } [[clang::musttail]] return unit_002B(c, 41u, depth); }
L_003FFA20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FFA84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 3312u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FFA8C; } }
L_003FFA50:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FFA6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FFA6C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FFA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FFA84u) [[unlikely]] return; }
L_003FFA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FFA9C; } }
L_003FFA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA94u);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x003FFA94u) [[unlikely]] return; }
L_003FFA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFA50u | kUnwind; return; } goto L_003FFA50; } }
L_003FFA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FFAB0:
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
    set32(c.r[3], c.r[3].w[0] + 3312u);
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
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_003FFB30:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_007F[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FFB40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[17], c.r[16].w[0] + 44u);
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB80u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FFB80u) [[unlikely]] return; }
L_003FFB80:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[4].d[0] = c.r[2].d[0] ^ c.r[18].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 44u));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FFBE4; } }
L_003FFBAC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FFC2C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003FFC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x003FFBCCu) [[unlikely]] return; }
L_003FFBCC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FFBDCu) [[unlikely]] return; }
L_003FFBDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003FFC30; } }
L_003FFBE4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFC00; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFBACu | kUnwind; return; } goto L_003FFBAC; } }
L_003FFC00:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC14u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FFC14u) [[unlikely]] return; }
L_003FFC14:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FFC24u) [[unlikely]] return; }
L_003FFC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFBDCu | kUnwind; return; } goto L_003FFBDC; } }
L_003FFC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003FFC30:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FFC50:
    st32((c.r[4].w[0] + 40u), 0u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FFC60:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_003FFC80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 411u, depth + 1u); else { c.pc = 0x00313660u; return; } if (c.pc != 0x003FFCB4u) [[unlikely]] return; }
L_003FFCB4:
    st8((c.r[18].w[0] + 36u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0] + 32u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FFCE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FFD44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + 3600u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FFD4C; } }
L_003FFD10:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FFD2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FFD2C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FFD44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FFD44u) [[unlikely]] return; }
L_003FFD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FFD5C; } }
L_003FFD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD54u);  if (depth < kMaxDepth) unit_0044(c, 413u, depth + 1u); else { c.pc = 0x003136A0u; return; } if (c.pc != 0x003FFD54u) [[unlikely]] return; }
L_003FFD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFD10u | kUnwind; return; } goto L_003FFD10; } }
L_003FFD5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FFD70:
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
    set32(c.r[3], c.r[3].w[0] + 3600u);
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
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), 0u);  c.pc = t; return; }
L_003FFDE0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_007F[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FFDF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FFE18; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FFE34; } }
L_003FFE18:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003FFE34:
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FFE54; } }
L_003FFE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FFE78; } }
L_003FFE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FFE5Cu) [[unlikely]] return; }
L_003FFE5C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE70u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 512u, depth + 1u); else { c.pc = 0x002C2190u; return; } if (c.pc != 0x003FFE70u) [[unlikely]] return; }
L_003FFE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFE4Cu | kUnwind; return; } goto L_003FFE4C; } }
L_003FFE78:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[2].w[0] - 10224u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFEB0u); st32((c.r[4].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FFEB0u) [[unlikely]] return; }
L_003FFEB0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFEC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FFEC0u) [[unlikely]] return; }
L_003FFEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FFEE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_003FFEF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_003FFF00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FFFFC; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003FFFA4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003FFFF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003FFFF8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FFF58:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF70u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FFF70u) [[unlikely]] return; }
L_003FFF70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[19].d[0];  if (t) { goto L_003FFF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FFF84u) [[unlikely]] return; }
L_003FFF84:
    c.budget -= 1;
L_003FFF88:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFF58u | kUnwind; return; } goto L_003FFF58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FFFF8; } }
L_003FFFA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003FFFF8; } }
    c.r[17].d[0] = c.r[6].d[0] & 255ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FFFBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFD4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FFFD4u) [[unlikely]] return; }
L_003FFFD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FFFE0u) [[unlikely]] return; }
L_003FFFE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFFBCu | kUnwind; return; } goto L_003FFFBC; } }
    c.budget -= 1;
L_003FFFF8:
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003FFFFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0080(c, 1u, depth);
}

}

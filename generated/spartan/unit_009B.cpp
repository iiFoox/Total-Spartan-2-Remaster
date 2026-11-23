#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009B[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52,
    0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0,
    73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 221, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 239, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 252, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 260, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 276, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 385,
};

void unit_009B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0046C000;
    case 2u: goto L_0046C008;
    case 3u: goto L_0046C020;
    case 4u: goto L_0046C030;
    case 5u: goto L_0046C080;
    case 6u: goto L_0046C0E4;
    case 7u: goto L_0046C100;
    case 8u: goto L_0046C118;
    case 9u: goto L_0046C130;
    case 10u: goto L_0046C140;
    case 11u: goto L_0046C154;
    case 12u: goto L_0046C164;
    case 13u: goto L_0046C178;
    case 14u: goto L_0046C190;
    case 15u: goto L_0046C1A4;
    case 16u: goto L_0046C1B4;
    case 17u: goto L_0046C1C8;
    case 18u: goto L_0046C1E0;
    case 19u: goto L_0046C1F4;
    case 20u: goto L_0046C204;
    case 21u: goto L_0046C218;
    case 22u: goto L_0046C230;
    case 23u: goto L_0046C244;
    case 24u: goto L_0046C254;
    case 25u: goto L_0046C268;
    case 26u: goto L_0046C280;
    case 27u: goto L_0046C298;
    case 28u: goto L_0046C2B8;
    case 29u: goto L_0046C2C8;
    case 30u: goto L_0046C2D8;
    case 31u: goto L_0046C2EC;
    case 32u: goto L_0046C33C;
    case 33u: goto L_0046C368;
    case 34u: goto L_0046C3A0;
    case 35u: goto L_0046C3A8;
    case 36u: goto L_0046C3E0;
    case 37u: goto L_0046C3E8;
    case 38u: goto L_0046C420;
    case 39u: goto L_0046C428;
    case 40u: goto L_0046C460;
    case 41u: goto L_0046C468;
    case 42u: goto L_0046C4A0;
    case 43u: goto L_0046C4A8;
    case 44u: goto L_0046C4E0;
    case 45u: goto L_0046C560;
    case 46u: goto L_0046C568;
    case 47u: goto L_0046C59C;
    case 48u: goto L_0046C5A4;
    case 49u: goto L_0046C5C8;
    case 50u: goto L_0046C5D0;
    case 51u: goto L_0046C5D8;
    case 52u: goto L_0046C5FC;
    case 53u: goto L_0046C604;
    case 54u: goto L_0046C60C;
    case 55u: goto L_0046C630;
    case 56u: goto L_0046C638;
    case 57u: goto L_0046C640;
    case 58u: goto L_0046C664;
    case 59u: goto L_0046C66C;
    case 60u: goto L_0046C674;
    case 61u: goto L_0046C698;
    case 62u: goto L_0046C6A0;
    case 63u: goto L_0046C6A8;
    case 64u: goto L_0046C6CC;
    case 65u: goto L_0046C6E0;
    case 66u: goto L_0046C700;
    case 67u: goto L_0046C714;
    case 68u: goto L_0046C724;
    case 69u: goto L_0046C734;
    case 70u: goto L_0046C750;
    case 71u: goto L_0046C760;
    case 72u: goto L_0046C770;
    case 73u: goto L_0046C780;
    case 74u: goto L_0046C794;
    case 75u: goto L_0046C7E4;
    case 76u: goto L_0046C838;
    case 77u: goto L_0046C884;
    case 78u: goto L_0046C8B8;
    case 79u: goto L_0046C8F0;
    case 80u: goto L_0046C8F8;
    case 81u: goto L_0046C930;
    case 82u: goto L_0046C938;
    case 83u: goto L_0046C970;
    case 84u: goto L_0046C978;
    case 85u: goto L_0046C9B0;
    case 86u: goto L_0046C9B8;
    case 87u: goto L_0046C9F0;
    case 88u: goto L_0046C9F8;
    case 89u: goto L_0046CA30;
    case 90u: goto L_0046CA64;
    case 91u: goto L_0046CA94;
    case 92u: goto L_0046CA9C;
    case 93u: goto L_0046CACC;
    case 94u: goto L_0046CAD4;
    case 95u: goto L_0046CB04;
    case 96u: goto L_0046CB0C;
    case 97u: goto L_0046CB3C;
    case 98u: goto L_0046CB44;
    case 99u: goto L_0046CB74;
    case 100u: goto L_0046CB7C;
    case 101u: goto L_0046CBAC;
    case 102u: goto L_0046CC64;
    case 103u: goto L_0046CC80;
    case 104u: goto L_0046CCAC;
    case 105u: goto L_0046CCD8;
    case 106u: goto L_0046CD10;
    case 107u: goto L_0046CD30;
    case 108u: goto L_0046CD64;
    case 109u: goto L_0046CDCC;
    case 110u: goto L_0046CDD0;
    case 111u: goto L_0046CDFC;
    case 112u: goto L_0046CE50;
    case 113u: goto L_0046CE68;
    case 114u: goto L_0046CE90;
    case 115u: goto L_0046CF9C;
    case 116u: goto L_0046CFBC;
    case 117u: goto L_0046CFD4;
    case 118u: goto L_0046D000;
    case 119u: goto L_0046D02C;
    case 120u: goto L_0046D058;
    case 121u: goto L_0046D090;
    case 122u: goto L_0046D0B0;
    case 123u: goto L_0046D0E4;
    case 124u: goto L_0046D14C;
    case 125u: goto L_0046D150;
    case 126u: goto L_0046D17C;
    case 127u: goto L_0046D1D0;
    case 128u: goto L_0046D1E8;
    case 129u: goto L_0046D210;
    case 130u: goto L_0046D31C;
    case 131u: goto L_0046D33C;
    case 132u: goto L_0046D354;
    case 133u: goto L_0046D380;
    case 134u: goto L_0046D3AC;
    case 135u: goto L_0046D3D8;
    case 136u: goto L_0046D410;
    case 137u: goto L_0046D430;
    case 138u: goto L_0046D464;
    case 139u: goto L_0046D4CC;
    case 140u: goto L_0046D4D0;
    case 141u: goto L_0046D4FC;
    case 142u: goto L_0046D550;
    case 143u: goto L_0046D568;
    case 144u: goto L_0046D590;
    case 145u: goto L_0046D69C;
    case 146u: goto L_0046D6BC;
    case 147u: goto L_0046D6D4;
    case 148u: goto L_0046D700;
    case 149u: goto L_0046D72C;
    case 150u: goto L_0046D758;
    case 151u: goto L_0046D790;
    case 152u: goto L_0046D7B0;
    case 153u: goto L_0046D7E4;
    case 154u: goto L_0046D84C;
    case 155u: goto L_0046D850;
    case 156u: goto L_0046D87C;
    case 157u: goto L_0046D8D0;
    case 158u: goto L_0046D8E8;
    case 159u: goto L_0046D910;
    case 160u: goto L_0046DA1C;
    case 161u: goto L_0046DA3C;
    case 162u: goto L_0046DA54;
    case 163u: goto L_0046DA80;
    case 164u: goto L_0046DA94;
    case 165u: goto L_0046DAA4;
    case 166u: goto L_0046DAB4;
    case 167u: goto L_0046DAD0;
    case 168u: goto L_0046DB10;
    case 169u: goto L_0046DB98;
    case 170u: goto L_0046DBE8;
    case 171u: goto L_0046DC30;
    case 172u: goto L_0046DC70;
    case 173u: goto L_0046DC90;
    case 174u: goto L_0046DCC4;
    case 175u: goto L_0046DD40;
    case 176u: goto L_0046DD44;
    case 177u: goto L_0046DD7C;
    case 178u: goto L_0046DDA4;
    case 179u: goto L_0046DE70;
    case 180u: goto L_0046DE8C;
    case 181u: goto L_0046DEA4;
    case 182u: goto L_0046DED0;
    case 183u: goto L_0046DF14;
    case 184u: goto L_0046DF60;
    case 185u: goto L_0046DF90;
    case 186u: goto L_0046DFE0;
    case 187u: goto L_0046E00C;
    case 188u: goto L_0046E05C;
    case 189u: goto L_0046E0AC;
    case 190u: goto L_0046E0CC;
    case 191u: goto L_0046E100;
    case 192u: goto L_0046E148;
    case 193u: goto L_0046E168;
    case 194u: goto L_0046E1A0;
    case 195u: goto L_0046E1D0;
    case 196u: goto L_0046E1E0;
    case 197u: goto L_0046E218;
    case 198u: goto L_0046E240;
    case 199u: goto L_0046E26C;
    case 200u: goto L_0046E284;
    case 201u: goto L_0046E2BC;
    case 202u: goto L_0046E2D8;
    case 203u: goto L_0046E30C;
    case 204u: goto L_0046E374;
    case 205u: goto L_0046E378;
    case 206u: goto L_0046E3A4;
    case 207u: goto L_0046E440;
    case 208u: goto L_0046E45C;
    case 209u: goto L_0046E474;
    case 210u: goto L_0046E4A0;
    case 211u: goto L_0046E4D4;
    case 212u: goto L_0046E520;
    case 213u: goto L_0046E574;
    case 214u: goto L_0046E5A0;
    case 215u: goto L_0046E5C0;
    case 216u: goto L_0046E5D0;
    case 217u: goto L_0046E60C;
    case 218u: goto L_0046E62C;
    case 219u: goto L_0046E650;
    case 220u: goto L_0046E674;
    case 221u: goto L_0046E678;
    case 222u: goto L_0046E680;
    case 223u: goto L_0046E6C0;
    case 224u: goto L_0046E754;
    case 225u: goto L_0046E790;
    case 226u: goto L_0046E7CC;
    case 227u: goto L_0046E7EC;
    case 228u: goto L_0046E810;
    case 229u: goto L_0046E834;
    case 230u: goto L_0046E838;
    case 231u: goto L_0046E840;
    case 232u: goto L_0046E880;
    case 233u: goto L_0046E914;
    case 234u: goto L_0046E950;
    case 235u: goto L_0046E98C;
    case 236u: goto L_0046E9AC;
    case 237u: goto L_0046E9D0;
    case 238u: goto L_0046E9F4;
    case 239u: goto L_0046E9F8;
    case 240u: goto L_0046EA00;
    case 241u: goto L_0046EA40;
    case 242u: goto L_0046EAD4;
    case 243u: goto L_0046EB10;
    case 244u: goto L_0046EB40;
    case 245u: goto L_0046EBA4;
    case 246u: goto L_0046EBFC;
    case 247u: goto L_0046EC54;
    case 248u: goto L_0046EC68;
    case 249u: goto L_0046ECB0;
    case 250u: goto L_0046ECD0;
    case 251u: goto L_0046ECF4;
    case 252u: goto L_0046ECF8;
    case 253u: goto L_0046ED00;
    case 254u: goto L_0046ED40;
    case 255u: goto L_0046EDB4;
    case 256u: goto L_0046EDF0;
    case 257u: goto L_0046EE14;
    case 258u: goto L_0046EE44;
    case 259u: goto L_0046EE74;
    case 260u: goto L_0046EE78;
    case 261u: goto L_0046EE98;
    case 262u: goto L_0046EEAC;
    case 263u: goto L_0046EEE0;
    case 264u: goto L_0046EF00;
    case 265u: goto L_0046EF08;
    case 266u: goto L_0046EF1C;
    case 267u: goto L_0046EF4C;
    case 268u: goto L_0046EF7C;
    case 269u: goto L_0046EF80;
    case 270u: goto L_0046EFAC;
    case 271u: goto L_0046EFC0;
    case 272u: goto L_0046EFF0;
    case 273u: goto L_0046F014;
    case 274u: goto L_0046F044;
    case 275u: goto L_0046F074;
    case 276u: goto L_0046F078;
    case 277u: goto L_0046F098;
    case 278u: goto L_0046F0AC;
    case 279u: goto L_0046F0E0;
    case 280u: goto L_0046F100;
    case 281u: goto L_0046F108;
    case 282u: goto L_0046F11C;
    case 283u: goto L_0046F14C;
    case 284u: goto L_0046F17C;
    case 285u: goto L_0046F180;
    case 286u: goto L_0046F1AC;
    case 287u: goto L_0046F1C0;
    case 288u: goto L_0046F1F0;
    case 289u: goto L_0046F244;
    case 290u: goto L_0046F258;
    case 291u: goto L_0046F2A8;
    case 292u: goto L_0046F300;
    case 293u: goto L_0046F318;
    case 294u: goto L_0046F338;
    case 295u: goto L_0046F358;
    case 296u: goto L_0046F37C;
    case 297u: goto L_0046F380;
    case 298u: goto L_0046F388;
    case 299u: goto L_0046F3C8;
    case 300u: goto L_0046F43C;
    case 301u: goto L_0046F470;
    case 302u: goto L_0046F484;
    case 303u: goto L_0046F4B4;
    case 304u: goto L_0046F4DC;
    case 305u: goto L_0046F500;
    case 306u: goto L_0046F514;
    case 307u: goto L_0046F528;
    case 308u: goto L_0046F530;
    case 309u: goto L_0046F540;
    case 310u: goto L_0046F560;
    case 311u: goto L_0046F5A8;
    case 312u: goto L_0046F5E0;
    case 313u: goto L_0046F674;
    case 314u: goto L_0046F694;
    case 315u: goto L_0046F6B8;
    case 316u: goto L_0046F6D4;
    case 317u: goto L_0046F6F0;
    case 318u: goto L_0046F740;
    case 319u: goto L_0046F754;
    case 320u: goto L_0046F768;
    case 321u: goto L_0046F790;
    case 322u: goto L_0046F7C0;
    case 323u: goto L_0046F7CC;
    case 324u: goto L_0046F820;
    case 325u: goto L_0046F884;
    case 326u: goto L_0046F8A0;
    case 327u: goto L_0046F8B8;
    case 328u: goto L_0046F8D0;
    case 329u: goto L_0046F8E0;
    case 330u: goto L_0046F8F0;
    case 331u: goto L_0046F900;
    case 332u: goto L_0046F938;
    case 333u: goto L_0046F970;
    case 334u: goto L_0046F9E4;
    case 335u: goto L_0046FA00;
    case 336u: goto L_0046FA74;
    case 337u: goto L_0046FA90;
    case 338u: goto L_0046FAA0;
    case 339u: goto L_0046FAD0;
    case 340u: goto L_0046FAE0;
    case 341u: goto L_0046FB00;
    case 342u: goto L_0046FB2C;
    case 343u: goto L_0046FB40;
    case 344u: goto L_0046FB5C;
    case 345u: goto L_0046FB6C;
    case 346u: goto L_0046FB90;
    case 347u: goto L_0046FBBC;
    case 348u: goto L_0046FBD0;
    case 349u: goto L_0046FBE8;
    case 350u: goto L_0046FBF8;
    case 351u: goto L_0046FC20;
    case 352u: goto L_0046FC50;
    case 353u: goto L_0046FC64;
    case 354u: goto L_0046FC7C;
    case 355u: goto L_0046FC8C;
    case 356u: goto L_0046FCB0;
    case 357u: goto L_0046FCC0;
    case 358u: goto L_0046FCD4;
    case 359u: goto L_0046FCDC;
    case 360u: goto L_0046FD00;
    case 361u: goto L_0046FD10;
    case 362u: goto L_0046FD24;
    case 363u: goto L_0046FD2C;
    case 364u: goto L_0046FD50;
    case 365u: goto L_0046FD64;
    case 366u: goto L_0046FDD4;
    case 367u: goto L_0046FE38;
    case 368u: goto L_0046FE50;
    case 369u: goto L_0046FE64;
    case 370u: goto L_0046FE74;
    case 371u: goto L_0046FE84;
    case 372u: goto L_0046FEA0;
    case 373u: goto L_0046FECC;
    case 374u: goto L_0046FEDC;
    case 375u: goto L_0046FEEC;
    case 376u: goto L_0046FF00;
    case 377u: goto L_0046FF70;
    case 378u: goto L_0046FF80;
    case 379u: goto L_0046FF90;
    case 380u: goto L_0046FFA0;
    case 381u: goto L_0046FFB4;
    case 382u: goto L_0046FFBC;
    case 383u: goto L_0046FFE0;
    case 384u: goto L_0046FFF4;
    case 385u: goto L_0046FFFC;
    default: bad_entry(c, 0x0046C000u); return;
    }
L_0046C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C008u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0046C008u) [[unlikely]] return; }
L_0046C008:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046C020:
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_0046C030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[7], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0046C04C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046C078; } }
L_0046C04C:
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[6].w[0] << 1);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 11;
L_0046C078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046C080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0046C0E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 15728u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046C0CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046C0CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0046C0CC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0046C0E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C0E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0046C0E4u) [[unlikely]] return; }
L_0046C0E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046C100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C118u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046C118u) [[unlikely]] return; }
L_0046C118:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046C130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 48u);  c.pc = t; return; }
L_0046C140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046C154u) [[unlikely]] return; }
L_0046C154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046C16C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C164u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046C164u) [[unlikely]] return; }
L_0046C164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046C180; } }
L_0046C16C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C178u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046C178u) [[unlikely]] return; }
L_0046C178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C164u | kUnwind; return; } goto L_0046C164; } }
L_0046C180:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046C190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C1A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046C1A4u) [[unlikely]] return; }
L_0046C1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046C1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C1B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046C1B4u) [[unlikely]] return; }
L_0046C1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046C1D0; } }
L_0046C1BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C1C8u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046C1C8u) [[unlikely]] return; }
L_0046C1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C1B4u | kUnwind; return; } goto L_0046C1B4; } }
L_0046C1D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046C1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C1F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046C1F4u) [[unlikely]] return; }
L_0046C1F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046C20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046C204u) [[unlikely]] return; }
L_0046C204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046C220; } }
L_0046C20C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C218u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046C218u) [[unlikely]] return; }
L_0046C218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C204u | kUnwind; return; } goto L_0046C204; } }
L_0046C220:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046C230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C244u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046C244u) [[unlikely]] return; }
L_0046C244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046C25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046C254u) [[unlikely]] return; }
L_0046C254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046C270; } }
L_0046C25C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C268u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046C268u) [[unlikely]] return; }
L_0046C268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C254u | kUnwind; return; } goto L_0046C254; } }
L_0046C270:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046C280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C298u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x0046C298u) [[unlikely]] return; }
L_0046C298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046C6E8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046C2C0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 3;
L_0046C2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0046C6EC; } }
L_0046C2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C2C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0046C2C8u) [[unlikely]] return; }
L_0046C2C8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C2D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046C2D8u) [[unlikely]] return; }
L_0046C2D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0046C558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C2ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046C2ECu) [[unlikely]] return; }
L_0046C2EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046C4E0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 811u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046C318; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0046C318:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046C4E0; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28368u));
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 28368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 28368u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0046C54C; } }
L_0046C33C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 68u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046C4E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 21600u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0046C000u < 16384u) { entry = entries_009B[(t - 0x0046C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0046C368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 21552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C3A0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 82u, depth + 1u); else { c.pc = 0x00445290u; return; } if (c.pc != 0x0046C3A0u) [[unlikely]] return; }
L_0046C3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[17].w[0] + 64u));  if (t) { goto L_0046C4E4; } }
L_0046C3A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 21552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C3E0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 82u, depth + 1u); else { c.pc = 0x00445290u; return; } if (c.pc != 0x0046C3E0u) [[unlikely]] return; }
L_0046C3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046C4E0; } }
L_0046C3E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 21552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15072u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C420u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 145u, depth + 1u); else { c.pc = 0x004460B0u; return; } if (c.pc != 0x0046C420u) [[unlikely]] return; }
L_0046C420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046C4E0; } }
L_0046C428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 21552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15072u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C460u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 145u, depth + 1u); else { c.pc = 0x004460B0u; return; } if (c.pc != 0x0046C460u) [[unlikely]] return; }
L_0046C460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046C4E0; } }
L_0046C468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 21552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C4A0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 82u, depth + 1u); else { c.pc = 0x00445290u; return; } if (c.pc != 0x0046C4A0u) [[unlikely]] return; }
L_0046C4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046C4E0; } }
L_0046C4A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 21552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C4E0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 82u, depth + 1u); else { c.pc = 0x00445290u; return; } if (c.pc != 0x0046C4E0u) [[unlikely]] return; }
L_0046C4E0:
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.budget -= 1;
L_0046C4E4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046C6D4; } }
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046C528; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_0046C544; } }
L_0046C528:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 7;
L_0046C544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C2B8u | kUnwind; return; } goto L_0046C2B8; } }
L_0046C54C:
    st8((c.r[28].w[0] - 28368u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C33Cu | kUnwind; return; } goto L_0046C33C; } }
L_0046C558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C560u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0046C560u) [[unlikely]] return; }
L_0046C560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C568u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046C568u) [[unlikely]] return; }
L_0046C568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4E0u | kUnwind; return; } goto L_0046C4E0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4E0u | kUnwind; return; } goto L_0046C4E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21568u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0046C000u < 16384u) { entry = entries_009B[(t - 0x0046C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0046C59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C5A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0046C5A4u) [[unlikely]] return; }
L_0046C5A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C5C8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 75u, depth + 1u); else { c.pc = 0x00445170u; return; } if (c.pc != 0x0046C5C8u) [[unlikely]] return; }
L_0046C5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4E0u | kUnwind; return; } goto L_0046C4E0; } }
L_0046C5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C5D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0046C5D8u) [[unlikely]] return; }
L_0046C5D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C5FCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 75u, depth + 1u); else { c.pc = 0x00445170u; return; } if (c.pc != 0x0046C5FCu) [[unlikely]] return; }
L_0046C5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4E0u | kUnwind; return; } goto L_0046C4E0; } }
L_0046C604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C60Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0046C60Cu) [[unlikely]] return; }
L_0046C60C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15072u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C630u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 126u, depth + 1u); else { c.pc = 0x00445C80u; return; } if (c.pc != 0x0046C630u) [[unlikely]] return; }
L_0046C630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4E0u | kUnwind; return; } goto L_0046C4E0; } }
L_0046C638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C640u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0046C640u) [[unlikely]] return; }
L_0046C640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15072u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C664u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 126u, depth + 1u); else { c.pc = 0x00445C80u; return; } if (c.pc != 0x0046C664u) [[unlikely]] return; }
L_0046C664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4E0u | kUnwind; return; } goto L_0046C4E0; } }
L_0046C66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C674u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0046C674u) [[unlikely]] return; }
L_0046C674:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C698u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 75u, depth + 1u); else { c.pc = 0x00445170u; return; } if (c.pc != 0x0046C698u) [[unlikely]] return; }
L_0046C698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4E0u | kUnwind; return; } goto L_0046C4E0; } }
L_0046C6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C6A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0046C6A8u) [[unlikely]] return; }
L_0046C6A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] - 15952u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C6CCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 75u, depth + 1u); else { c.pc = 0x00445170u; return; } if (c.pc != 0x0046C6CCu) [[unlikely]] return; }
L_0046C6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4E0u | kUnwind; return; } goto L_0046C4E0; } }
L_0046C6D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C6E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0046C6E0u) [[unlikely]] return; }
L_0046C6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C2B8u | kUnwind; return; } goto L_0046C2B8; } }
L_0046C6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0046C6EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046C700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C714u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x0046C714u) [[unlikely]] return; }
L_0046C714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046C734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C724u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046C724u) [[unlikely]] return; }
L_0046C724:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C734u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0046C734u) [[unlikely]] return; }
L_0046C734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046C750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C760u);  if (depth < kMaxDepth) unit_002E(c, 243u, depth + 1u); else { c.pc = 0x002BAFB0u; return; } if (c.pc != 0x0046C760u) [[unlikely]] return; }
L_0046C760:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C770u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046C770u) [[unlikely]] return; }
L_0046C770:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046C780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C794u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x0046C794u) [[unlikely]] return; }
L_0046C794:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046CC64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0046CC24; } }
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046C7E0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 101u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0046C7E4; } }
L_0046C7E0:
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0046C7E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046CC64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 811u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046C814; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0046C814:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046CBB4; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 28372u));
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 28372u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 28372u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0046CC44; } }
L_0046C838:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046CC4C; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0046C880; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0046C880; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 92u));
    c.r[4].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0046C884; } }
L_0046C880:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0046C884:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046CA38; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 100u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046CBB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21664u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0046C000u < 16384u) { entry = entries_009B[(t - 0x0046C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0046C8B8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28372u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21544u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    c.f[12] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C8F0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 82u, depth + 1u); else { c.pc = 0x00445290u; return; } if (c.pc != 0x0046C8F0u) [[unlikely]] return; }
L_0046C8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 96u));  if (t) { goto L_0046CBBC; } }
L_0046C8F8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28372u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21544u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    c.f[12] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C930u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 82u, depth + 1u); else { c.pc = 0x00445290u; return; } if (c.pc != 0x0046C930u) [[unlikely]] return; }
L_0046C930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046C938:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28372u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21544u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    c.f[12] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[4], c.r[4].w[0] - 15072u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C970u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 145u, depth + 1u); else { c.pc = 0x004460B0u; return; } if (c.pc != 0x0046C970u) [[unlikely]] return; }
L_0046C970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046C978:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28372u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21544u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    c.f[12] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[4], c.r[4].w[0] - 15072u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C9B0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 145u, depth + 1u); else { c.pc = 0x004460B0u; return; } if (c.pc != 0x0046C9B0u) [[unlikely]] return; }
L_0046C9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046C9B8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28372u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21544u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    c.f[12] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C9F0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 82u, depth + 1u); else { c.pc = 0x00445290u; return; } if (c.pc != 0x0046C9F0u) [[unlikely]] return; }
L_0046C9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046C9F8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28372u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 21544u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    c.f[12] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CA30u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 82u, depth + 1u); else { c.pc = 0x00445290u; return; } if (c.pc != 0x0046CA30u) [[unlikely]] return; }
L_0046CA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046CA38:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 100u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046CBB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21632u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0046C000u < 16384u) { entry = entries_009B[(t - 0x0046C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0046CA64:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CA94u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0091(c, 75u, depth + 1u); else { c.pc = 0x00445170u; return; } if (c.pc != 0x0046CA94u) [[unlikely]] return; }
L_0046CA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046CA9C:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CACCu); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0091(c, 75u, depth + 1u); else { c.pc = 0x00445170u; return; } if (c.pc != 0x0046CACCu) [[unlikely]] return; }
L_0046CACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046CAD4:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] - 15072u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CB04u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0091(c, 126u, depth + 1u); else { c.pc = 0x00445C80u; return; } if (c.pc != 0x0046CB04u) [[unlikely]] return; }
L_0046CB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046CB0C:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] - 15072u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CB3Cu); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0091(c, 126u, depth + 1u); else { c.pc = 0x00445C80u; return; } if (c.pc != 0x0046CB3Cu) [[unlikely]] return; }
L_0046CB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046CB44:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CB74u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0091(c, 75u, depth + 1u); else { c.pc = 0x00445170u; return; } if (c.pc != 0x0046CB74u) [[unlikely]] return; }
L_0046CB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046CB7C:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] - 15952u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CBACu); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0091(c, 75u, depth + 1u); else { c.pc = 0x00445170u; return; } if (c.pc != 0x0046CBACu) [[unlikely]] return; }
L_0046CBAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CBB8; } }
L_0046CBB4:
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0046CBB8:
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 1;
L_0046CBBC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046CC58; } }
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046CC00; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_0046CC1C; } }
L_0046CC00:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 7;
L_0046CC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046CC68; } }
L_0046CC24:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046CC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C7E4u | kUnwind; return; } goto L_0046C7E4; } }
L_0046CC38:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C7E4u | kUnwind; return; } goto L_0046C7E4; } }
L_0046CC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28372u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C838u | kUnwind; return; } goto L_0046C838; } }
L_0046CC4C:
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C884u | kUnwind; return; } goto L_0046C884; } }
L_0046CC58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CC64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0046CC64u) [[unlikely]] return; }
L_0046CC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0046CC68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046CC80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CCACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046CCACu) [[unlikely]] return; }
L_0046CCAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046CE58; } }
    set32(c.r[17], ld32((c.r[22].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0046CE44; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046CE40; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 760u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046CCD8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_0046CE28; } }
    set32(c.r[19], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046CDD0; } }
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0046CD48; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046CD10:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0046CF54; } }
    c.budget -= 1;
L_0046CD30:
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CD10u | kUnwind; return; } goto L_0046CD10; } }
    c.budget -= 1;
L_0046CD48:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046CD98; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 2808u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046CD64:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0046CD84; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0046CD9C; } }
L_0046CD84:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CD64u | kUnwind; return; } goto L_0046CD64; } }
L_0046CD98:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046CD9C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046CFC8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CDCCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046CDCCu) [[unlikely]] return; }
L_0046CDCC:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0046CDD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 764u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046CE40; } }
L_0046CDFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CDFCu | kUnwind; return; } goto L_0046CDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CE40; } }
L_0046CE28:
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CCD8u | kUnwind; return; } goto L_0046CCD8; } }
    c.budget -= 1;
L_0046CE40:
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0046CE44:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CE50u); st32((c.r[22].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046CE50u) [[unlikely]] return; }
L_0046CE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0046CFDC; } }
L_0046CE58:
    set32(c.r[5], ld32((c.r[22].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CE68u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0046CE68u) [[unlikely]] return; }
L_0046CE68:
    st32((c.r[22].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], 0u + 170u);
    set32(c.r[5], ld32((c.r[22].w[0] + 80u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 764u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], ld32((c.r[22].w[0] + 72u)));  if (t) { goto L_0046CF48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 4096u);
    c.budget -= 3;
L_0046CE90:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 31u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046CEB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 4096u);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0046CECC; } }
L_0046CEB8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(170ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CE90u | kUnwind; return; } goto L_0046CE90; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046CECC:
    st32((c.r[8].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[8].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 24u), 0u);
    st32((c.r[8].w[0] + 12u), c.r[22].w[0]);
    st8((c.r[8].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 28u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 28u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046CF1C; } }
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[8].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0046CF20; } }
L_0046CF1C:
    st32((c.r[8].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 1;
L_0046CF20:
    set32(c.r[4], ld32((c.r[5].w[0] + 764u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 764u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046CF44; } }
    st32((c.r[3].w[0]), c.r[8].w[0]);
    c.budget -= 1;
L_0046CF44:
    st16((c.r[5].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0046CF48:
    st32((c.r[22].w[0] + 32u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0] + 92u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CE50u | kUnwind; return; } goto L_0046CE50; } }
L_0046CF54:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CD30u | kUnwind; return; } goto L_0046CD30; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046CFA8; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[17].w[0] + 68u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 29u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CF9Cu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046CF9Cu) [[unlikely]] return; }
L_0046CF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CD30u | kUnwind; return; } goto L_0046CD30; } }
    c.budget -= 1;
L_0046CFA8:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CFBCu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046CFBCu) [[unlikely]] return; }
L_0046CFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CD30u | kUnwind; return; } goto L_0046CD30; } }
    c.budget -= 1;
L_0046CFC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CFD4u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046CFD4u) [[unlikely]] return; }
L_0046CFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CDD0u | kUnwind; return; } goto L_0046CDD0; } }
L_0046CFDC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0046D000:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D02Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046D02Cu) [[unlikely]] return; }
L_0046D02C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046D1D8; } }
    set32(c.r[17], ld32((c.r[22].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0046D1C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046D1C0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 760u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046D058:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_0046D1A8; } }
    set32(c.r[19], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046D150; } }
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0046D0C8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046D090:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0046D2D4; } }
    c.budget -= 1;
L_0046D0B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D090u | kUnwind; return; } goto L_0046D090; } }
    c.budget -= 1;
L_0046D0C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046D118; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 2808u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046D0E4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0046D104; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0046D11C; } }
L_0046D104:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D0E4u | kUnwind; return; } goto L_0046D0E4; } }
L_0046D118:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046D11C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046D348; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D14Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046D14Cu) [[unlikely]] return; }
L_0046D14C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0046D150:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 764u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046D1C0; } }
L_0046D17C:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D17Cu | kUnwind; return; } goto L_0046D17C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046D1C0; } }
L_0046D1A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D058u | kUnwind; return; } goto L_0046D058; } }
    c.budget -= 1;
L_0046D1C0:
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0046D1C4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D1D0u); st32((c.r[22].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046D1D0u) [[unlikely]] return; }
L_0046D1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0046D35C; } }
L_0046D1D8:
    set32(c.r[5], ld32((c.r[22].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D1E8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0046D1E8u) [[unlikely]] return; }
L_0046D1E8:
    st32((c.r[22].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], 0u + 170u);
    set32(c.r[5], ld32((c.r[22].w[0] + 80u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 764u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], ld32((c.r[22].w[0] + 72u)));  if (t) { goto L_0046D2C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 4096u);
    c.budget -= 3;
L_0046D210:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 31u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046D238; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 4096u);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0046D24C; } }
L_0046D238:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(170ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D210u | kUnwind; return; } goto L_0046D210; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046D24C:
    st32((c.r[8].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[8].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 24u), 0u);
    st32((c.r[8].w[0] + 12u), c.r[22].w[0]);
    st8((c.r[8].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 28u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 28u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046D29C; } }
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[8].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0046D2A0; } }
L_0046D29C:
    st32((c.r[8].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 1;
L_0046D2A0:
    set32(c.r[4], ld32((c.r[5].w[0] + 764u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 764u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046D2C4; } }
    st32((c.r[3].w[0]), c.r[8].w[0]);
    c.budget -= 1;
L_0046D2C4:
    st16((c.r[5].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0046D2C8:
    st32((c.r[22].w[0] + 32u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0] + 92u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D1D0u | kUnwind; return; } goto L_0046D1D0; } }
L_0046D2D4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D0B0u | kUnwind; return; } goto L_0046D0B0; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046D328; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[17].w[0] + 68u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 29u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D31Cu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046D31Cu) [[unlikely]] return; }
L_0046D31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D0B0u | kUnwind; return; } goto L_0046D0B0; } }
    c.budget -= 1;
L_0046D328:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D33Cu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046D33Cu) [[unlikely]] return; }
L_0046D33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D0B0u | kUnwind; return; } goto L_0046D0B0; } }
    c.budget -= 1;
L_0046D348:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D354u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046D354u) [[unlikely]] return; }
L_0046D354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D150u | kUnwind; return; } goto L_0046D150; } }
L_0046D35C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0046D380:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D3ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046D3ACu) [[unlikely]] return; }
L_0046D3AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046D558; } }
    set32(c.r[17], ld32((c.r[22].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0046D544; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046D540; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 760u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046D3D8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_0046D528; } }
    set32(c.r[19], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046D4D0; } }
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0046D448; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046D410:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0046D654; } }
    c.budget -= 1;
L_0046D430:
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D410u | kUnwind; return; } goto L_0046D410; } }
    c.budget -= 1;
L_0046D448:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046D498; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 2808u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046D464:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0046D484; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0046D49C; } }
L_0046D484:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D464u | kUnwind; return; } goto L_0046D464; } }
L_0046D498:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046D49C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046D6C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D4CCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046D4CCu) [[unlikely]] return; }
L_0046D4CC:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0046D4D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 764u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046D540; } }
L_0046D4FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D4FCu | kUnwind; return; } goto L_0046D4FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046D540; } }
L_0046D528:
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D3D8u | kUnwind; return; } goto L_0046D3D8; } }
    c.budget -= 1;
L_0046D540:
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0046D544:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D550u); st32((c.r[22].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046D550u) [[unlikely]] return; }
L_0046D550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0046D6DC; } }
L_0046D558:
    set32(c.r[5], ld32((c.r[22].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D568u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0046D568u) [[unlikely]] return; }
L_0046D568:
    st32((c.r[22].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], 0u + 170u);
    set32(c.r[5], ld32((c.r[22].w[0] + 80u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 764u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], ld32((c.r[22].w[0] + 72u)));  if (t) { goto L_0046D648; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 4096u);
    c.budget -= 3;
L_0046D590:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 31u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046D5B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 4096u);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0046D5CC; } }
L_0046D5B8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(170ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D590u | kUnwind; return; } goto L_0046D590; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046D5CC:
    st32((c.r[8].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[8].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 24u), 0u);
    st32((c.r[8].w[0] + 12u), c.r[22].w[0]);
    st8((c.r[8].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 28u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 28u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046D61C; } }
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[8].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0046D620; } }
L_0046D61C:
    st32((c.r[8].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 1;
L_0046D620:
    set32(c.r[4], ld32((c.r[5].w[0] + 764u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 764u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046D644; } }
    st32((c.r[3].w[0]), c.r[8].w[0]);
    c.budget -= 1;
L_0046D644:
    st16((c.r[5].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0046D648:
    st32((c.r[22].w[0] + 32u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0] + 92u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D550u | kUnwind; return; } goto L_0046D550; } }
L_0046D654:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D430u | kUnwind; return; } goto L_0046D430; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046D6A8; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[17].w[0] + 68u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 29u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D69Cu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046D69Cu) [[unlikely]] return; }
L_0046D69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D430u | kUnwind; return; } goto L_0046D430; } }
    c.budget -= 1;
L_0046D6A8:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D6BCu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046D6BCu) [[unlikely]] return; }
L_0046D6BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D430u | kUnwind; return; } goto L_0046D430; } }
    c.budget -= 1;
L_0046D6C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D6D4u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046D6D4u) [[unlikely]] return; }
L_0046D6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D4D0u | kUnwind; return; } goto L_0046D4D0; } }
L_0046D6DC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0046D700:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D72Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046D72Cu) [[unlikely]] return; }
L_0046D72C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046D8D8; } }
    set32(c.r[17], ld32((c.r[22].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0046D8C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046D8C0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 760u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046D758:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_0046D8A8; } }
    set32(c.r[19], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046D850; } }
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0046D7C8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046D790:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0046D9D4; } }
    c.budget -= 1;
L_0046D7B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D790u | kUnwind; return; } goto L_0046D790; } }
    c.budget -= 1;
L_0046D7C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046D818; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 2808u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046D7E4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0046D804; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0046D81C; } }
L_0046D804:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D7E4u | kUnwind; return; } goto L_0046D7E4; } }
L_0046D818:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046D81C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046DA48; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D84Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046D84Cu) [[unlikely]] return; }
L_0046D84C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0046D850:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 764u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046D8C0; } }
L_0046D87C:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D87Cu | kUnwind; return; } goto L_0046D87C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046D8C0; } }
L_0046D8A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D758u | kUnwind; return; } goto L_0046D758; } }
    c.budget -= 1;
L_0046D8C0:
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0046D8C4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D8D0u); st32((c.r[22].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046D8D0u) [[unlikely]] return; }
L_0046D8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0046DA5C; } }
L_0046D8D8:
    set32(c.r[5], ld32((c.r[22].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D8E8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0046D8E8u) [[unlikely]] return; }
L_0046D8E8:
    st32((c.r[22].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], 0u + 170u);
    set32(c.r[5], ld32((c.r[22].w[0] + 80u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 764u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], ld32((c.r[22].w[0] + 72u)));  if (t) { goto L_0046D9C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 4096u);
    c.budget -= 3;
L_0046D910:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 31u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046D938; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 4096u);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0046D94C; } }
L_0046D938:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(170ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D910u | kUnwind; return; } goto L_0046D910; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046D94C:
    st32((c.r[8].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[8].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 24u), 0u);
    st32((c.r[8].w[0] + 12u), c.r[22].w[0]);
    st8((c.r[8].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 28u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 28u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046D99C; } }
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[8].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0046D9A0; } }
L_0046D99C:
    st32((c.r[8].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 1;
L_0046D9A0:
    set32(c.r[4], ld32((c.r[5].w[0] + 764u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 764u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046D9C4; } }
    st32((c.r[3].w[0]), c.r[8].w[0]);
    c.budget -= 1;
L_0046D9C4:
    st16((c.r[5].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0046D9C8:
    st32((c.r[22].w[0] + 32u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0] + 92u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D8D0u | kUnwind; return; } goto L_0046D8D0; } }
L_0046D9D4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D7B0u | kUnwind; return; } goto L_0046D7B0; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046DA28; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[17].w[0] + 68u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 29u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA1Cu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046DA1Cu) [[unlikely]] return; }
L_0046DA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D7B0u | kUnwind; return; } goto L_0046D7B0; } }
    c.budget -= 1;
L_0046DA28:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA3Cu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046DA3Cu) [[unlikely]] return; }
L_0046DA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D7B0u | kUnwind; return; } goto L_0046D7B0; } }
    c.budget -= 1;
L_0046DA48:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA54u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046DA54u) [[unlikely]] return; }
L_0046DA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D850u | kUnwind; return; } goto L_0046D850; } }
L_0046DA5C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0046DA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x0046DA94u) [[unlikely]] return; }
L_0046DA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046DAB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DAA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046DAA4u) [[unlikely]] return; }
L_0046DAA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DAB4u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0046DAB4u) [[unlikely]] return; }
L_0046DAB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046DAD0:
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 76u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 522u));
    set32(c.r[4], c.r[4].w[0] + 8704u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0046DB10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046DB78; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046DB78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046DB64; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1540u));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046DB78; } }
L_0046DB64:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 29u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 63u));
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0046DEAC; } }
L_0046DB78:
    set32(c.r[5], ld32((c.r[17].w[0] + 2812u)));
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(200ll);
    set32(c.r[4], 0u + 170u);
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0046DC00; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 24u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0046DB98:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0046DDC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046DDC0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 2808u)));
    set32(c.r[6], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { goto L_0046DDC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046DDC0; } }
    c.r[6].d[0] = ld8((c.r[6].w[0] + 10u));
    c.r[5].d[0] = c.r[11].d[0] & 255ull;
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1540u));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046DBE8; } }
    c.r[11].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_0046DBE8:
    set32(c.r[5], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[5].d[0] = c.r[10].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DB98u | kUnwind; return; } goto L_0046DB98; } }
    c.budget -= 1;
L_0046DC00:
    set32(c.r[5], 0u + 170u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0046DEAC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 2808u)));
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[19], c.r[4].w[0] << 2);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], c.r[5].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0046DDE8; } }
L_0046DC30:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0046DD44; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046DC50; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1540u));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0046DC54; } }
L_0046DC50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046DC54:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0046DD44; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046DCA8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046DC70:
    set32(c.r[2], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0046DE28; } }
    c.budget -= 1;
L_0046DC90:
    set32(c.r[2], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DC70u | kUnwind; return; } goto L_0046DC70; } }
    c.budget -= 1;
L_0046DCA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046DCF8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 2808u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046DCC4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0046DCE4; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0046DCFC; } }
L_0046DCE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DCC4u | kUnwind; return; } goto L_0046DCC4; } }
L_0046DCF8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046DCFC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0046DD1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046DD1C; } }
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0046DD1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046DE98; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DD40u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046DD40u) [[unlikely]] return; }
L_0046DD40:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0046DD44:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046DD84; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2808u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 10u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DD7Cu); set32(c.r[8], c.r[17].w[0] + 68u);  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046DD7Cu) [[unlikely]] return; }
L_0046DD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 2808u)));  if (t) { goto L_0046DDA8; } }
L_0046DD84:
    set32(c.r[2], ld32((c.r[17].w[0] + 2808u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 10u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DDA4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046DDA4u) [[unlikely]] return; }
L_0046DDA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 2808u)));
    c.budget -= 1;
L_0046DDA8:
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0046DEB0; } }
L_0046DDC0:
    set32(c.r[6], ld32((c.r[17].w[0] + 2808u)));
    c.r[5].d[0] = c.r[11].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 10u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DBE8u | kUnwind; return; } goto L_0046DBE8; } }
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DBE8u | kUnwind; return; } goto L_0046DBE8; } }
L_0046DDE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046DEAC; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1540u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046DEAC; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 62u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 29u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046DEAC; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 10u));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046DEAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DC30u | kUnwind; return; } goto L_0046DC30; } }
L_0046DE28:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DC90u | kUnwind; return; } goto L_0046DC90; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046DE78; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[17].w[0] + 68u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 29u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE70u); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046DE70u) [[unlikely]] return; }
L_0046DE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DC90u | kUnwind; return; } goto L_0046DC90; } }
L_0046DE78:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 62u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DE8Cu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046DE8Cu) [[unlikely]] return; }
L_0046DE8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DC90u | kUnwind; return; } goto L_0046DC90; } }
    c.budget -= 1;
L_0046DE98:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DEA4u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046DEA4u) [[unlikely]] return; }
L_0046DEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DD44u | kUnwind; return; } goto L_0046DD44; } }
L_0046DEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0046DEB0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0046DED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046DEF8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046DFC0; } }
L_0046DEF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 2812u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0046DFC0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 2808u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_0046DF14:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0046DFA8; } }
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046DF68; } }
    set32(c.r[2], c.r[8].w[0] << 1);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 62u));
    set32(c.r[17], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 10u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DF60u); set32(c.r[8], c.r[16].w[0] + 68u);  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046DF60u) [[unlikely]] return; }
L_0046DF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 2808u)));  if (t) { goto L_0046DF94; } }
L_0046DF68:
    set32(c.r[2], c.r[8].w[0] << 1);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 62u));
    set32(c.r[17], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 10u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DF90u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046DF90u) [[unlikely]] return; }
L_0046DF90:
    set32(c.r[3], ld32((c.r[16].w[0] + 2808u)));
    c.budget -= 1;
L_0046DF94:
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0046DFC0; } }
L_0046DFA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 2812u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DF14u | kUnwind; return; } goto L_0046DF14; } }
    c.budget -= 1;
L_0046DFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046DFE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046E048; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 760u)));
    c.budget -= 1;
L_0046E00C:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046E030; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046E030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_0046E048; } }
L_0046E030:
    set32(c.r[3], ld32((c.r[18].w[0] + 764u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E00Cu | kUnwind; return; } goto L_0046E00C; } }
    c.budget -= 1;
L_0046E048:
    set32(c.r[3], ld32((c.r[18].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0046E0E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E05C:
    set32(c.r[3], ld32((c.r[18].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046E0D0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046E0D0; } }
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E0B8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E0ACu); set32(c.r[6], c.r[18].w[0] + 68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046E0ACu) [[unlikely]] return; }
L_0046E0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046E0D0; } }
    c.budget -= 1;
L_0046E0B8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E0CCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046E0CCu) [[unlikely]] return; }
L_0046E0CC:
    c.budget -= 1;
L_0046E0D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 764u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E05Cu | kUnwind; return; } goto L_0046E05C; } }
    c.budget -= 1;
L_0046E0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0046E100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 21536u)));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[4].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 2812u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046E228; } }
    set32(c.r[3], 0u + 200u);
    st8((c.r[18].w[0] + 63u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 2812u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046E180; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E148:
    set32(c.r[4], ld32((c.r[18].w[0] + 2808u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 63u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046E220; } }
    c.budget -= 1;
L_0046E168:
    set32(c.r[3], ld32((c.r[18].w[0] + 2812u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E148u | kUnwind; return; } goto L_0046E148; } }
    c.budget -= 1;
L_0046E180:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 63u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[18].w[0] + 63u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0046E1F8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E1A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 30u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046E1E0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 28u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0046E1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E1D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 182u, depth + 1u); else { c.pc = 0x0046DED0u; return; } if (c.pc != 0x0046E1D0u) [[unlikely]] return; }
L_0046E1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046E1E0; } }
L_0046E1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E1E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 168u, depth + 1u); else { c.pc = 0x0046DB10u; return; } if (c.pc != 0x0046E1E0u) [[unlikely]] return; }
L_0046E1E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 764u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E1A0u | kUnwind; return; } goto L_0046E1A0; } }
    c.budget -= 1;
L_0046E1F8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046E228; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046E228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E218u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 186u, depth + 1u); else { c.pc = 0x0046DFE0u; return; } if (c.pc != 0x0046E218u) [[unlikely]] return; }
L_0046E218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046E228; } }
L_0046E220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 63u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E168u | kUnwind; return; } goto L_0046E168; } }
L_0046E228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0046E240:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046E3F0; } }
L_0046E26C:
    set32(c.r[6], ld32((c.r[21].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0046E3E8; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 760u)));
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0046E284:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0046E3D0; } }
    set32(c.r[18], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046E378; } }
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0046E2F0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E2BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 760u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0046E3F8; } }
L_0046E2D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 764u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E2BCu | kUnwind; return; } goto L_0046E2BC; } }
    c.budget -= 1;
L_0046E2F0:
    set32(c.r[2], ld32((c.r[21].w[0] + 2812u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046E340; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 2808u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0046E30C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0046E32C; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0046E344; } }
L_0046E32C:
    set32(c.r[2], ld32((c.r[21].w[0] + 2812u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E30Cu | kUnwind; return; } goto L_0046E30C; } }
L_0046E340:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E344:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046E468; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E374u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046E374u) [[unlikely]] return; }
L_0046E374:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0046E378:
    set32(c.r[3], ld32((c.r[21].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 764u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046E3E8; } }
L_0046E3A4:
    set32(c.r[3], ld32((c.r[21].w[0] + 760u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E3A4u | kUnwind; return; } goto L_0046E3A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046E3E8; } }
L_0046E3D0:
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E284u | kUnwind; return; } goto L_0046E284; } }
    c.budget -= 1;
L_0046E3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 60u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0046E47C; } }
L_0046E3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E26Cu | kUnwind; return; } goto L_0046E26C; } }
L_0046E3F8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E2D8u | kUnwind; return; } goto L_0046E2D8; } }
    c.f[1] = ld32((c.r[21].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E448; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[21].w[0] + 68u);
    c.r[7].d[0] = ld8((c.r[21].w[0] + 62u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 29u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E440u); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046E440u) [[unlikely]] return; }
L_0046E440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E2D8u | kUnwind; return; } goto L_0046E2D8; } }
L_0046E448:
    c.r[7].d[0] = ld8((c.r[21].w[0] + 62u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E45Cu); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009B(c, 312u, depth + 1u); else { c.pc = 0x0046F5E0u; return; } if (c.pc != 0x0046E45Cu) [[unlikely]] return; }
L_0046E45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E2D8u | kUnwind; return; } goto L_0046E2D8; } }
    c.budget -= 1;
L_0046E468:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E474u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046E474u) [[unlikely]] return; }
L_0046E474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E378u | kUnwind; return; } goto L_0046E378; } }
L_0046E47C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0046E4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 764u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(170ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0046E5A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 4096u);
    c.budget -= 3;
L_0046E4D4:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 31u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046E4FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 4096u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0046E510; } }
L_0046E4FC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(170ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E4D4u | kUnwind; return; } goto L_0046E4D4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E510:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E520u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 317u, depth + 1u); else { c.pc = 0x0046F6F0u; return; } if (c.pc != 0x0046E520u) [[unlikely]] return; }
L_0046E520:
    set32(c.r[4], ld32((c.r[18].w[0] + 764u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 764u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046E544; } }
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_0046E544:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0046E5A0; } }
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E5A0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E574u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046E574u) [[unlikely]] return; }
L_0046E574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046E5A0; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[18].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E5A0u); set32(c.r[6], c.r[18].w[0] + 68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046E5A0u) [[unlikely]] return; }
L_0046E5A0:
    st16((c.r[18].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0046E5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0046E5C0:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  [[clang::musttail]] return unit_009C(c, 13u, depth); }
L_0046E5D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2812u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0046E730; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 2808u)));
    c.budget -= 1;
L_0046E60C:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_0046E718; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0046E698; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E62C:
    set32(c.r[3], ld32((c.r[21].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046E738; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_0046E738; } }
    c.budget -= 1;
L_0046E650:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046E748; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E674u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046E674u) [[unlikely]] return; }
L_0046E674:
    c.budget -= 1;
L_0046E678:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 2;
L_0046E680:
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E62Cu | kUnwind; return; } goto L_0046E62C; } }
    c.budget -= 1;
L_0046E698:
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 2812u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046E730; } }
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.budget -= 3;
L_0046E6C0:
    set32(c.r[4], ld32((c.r[21].w[0] + 2808u)));
    set32(c.r[3], c.r[6].w[0] + 12u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 10u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E6C0u | kUnwind; return; } goto L_0046E6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046E730; } }
L_0046E718:
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E60Cu | kUnwind; return; } goto L_0046E60C; } }
    c.budget -= 1;
L_0046E730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046E760; } }
L_0046E738:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E680u | kUnwind; return; } goto L_0046E680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E650u | kUnwind; return; } goto L_0046E650; } }
L_0046E748:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E754u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046E754u) [[unlikely]] return; }
L_0046E754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E678u | kUnwind; return; } goto L_0046E678; } }
    c.budget -= 1;
L_0046E760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0046E790:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2812u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0046E8F0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 2808u)));
    c.budget -= 1;
L_0046E7CC:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_0046E8D8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0046E858; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E7EC:
    set32(c.r[3], ld32((c.r[21].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046E8F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_0046E8F8; } }
    c.budget -= 1;
L_0046E810:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046E908; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E834u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046E834u) [[unlikely]] return; }
L_0046E834:
    c.budget -= 1;
L_0046E838:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 2;
L_0046E840:
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E7ECu | kUnwind; return; } goto L_0046E7EC; } }
    c.budget -= 1;
L_0046E858:
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 2812u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046E8F0; } }
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.budget -= 3;
L_0046E880:
    set32(c.r[4], ld32((c.r[21].w[0] + 2808u)));
    set32(c.r[3], c.r[6].w[0] + 12u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 10u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E880u | kUnwind; return; } goto L_0046E880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046E8F0; } }
L_0046E8D8:
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E7CCu | kUnwind; return; } goto L_0046E7CC; } }
    c.budget -= 1;
L_0046E8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046E920; } }
L_0046E8F8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E840u | kUnwind; return; } goto L_0046E840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E810u | kUnwind; return; } goto L_0046E810; } }
L_0046E908:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E914u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046E914u) [[unlikely]] return; }
L_0046E914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E838u | kUnwind; return; } goto L_0046E838; } }
    c.budget -= 1;
L_0046E920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0046E950:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2812u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0046EAB0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 2808u)));
    c.budget -= 1;
L_0046E98C:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_0046EA98; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0046EA18; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E9AC:
    set32(c.r[3], ld32((c.r[21].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046EAB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_0046EAB8; } }
    c.budget -= 1;
L_0046E9D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046EAC8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E9F4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046E9F4u) [[unlikely]] return; }
L_0046E9F4:
    c.budget -= 1;
L_0046E9F8:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 2;
L_0046EA00:
    set32(c.r[3], ld32((c.r[21].w[0] + 764u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E9ACu | kUnwind; return; } goto L_0046E9AC; } }
    c.budget -= 1;
L_0046EA18:
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 2812u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046EAB0; } }
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.budget -= 3;
L_0046EA40:
    set32(c.r[4], ld32((c.r[21].w[0] + 2808u)));
    set32(c.r[3], c.r[6].w[0] + 12u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 10u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EA40u | kUnwind; return; } goto L_0046EA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046EAB0; } }
L_0046EA98:
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E98Cu | kUnwind; return; } goto L_0046E98C; } }
    c.budget -= 1;
L_0046EAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046EAE0; } }
L_0046EAB8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EA00u | kUnwind; return; } goto L_0046EA00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E9D0u | kUnwind; return; } goto L_0046E9D0; } }
L_0046EAC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EAD4u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046EAD4u) [[unlikely]] return; }
L_0046EAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E9F8u | kUnwind; return; } goto L_0046E9F8; } }
    c.budget -= 1;
L_0046EAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0046EB10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EB40u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x0046EB40u) [[unlikely]] return; }
L_0046EB40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046EDC0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 76u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 522u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046ED90; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0046EC40; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[3], 0u + 170u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0046ED90; } }
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046EBE8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2808u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0046EBA4:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0046EBD0; } }
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0046ED90; } }
L_0046EBD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EBA4u | kUnwind; return; } goto L_0046EBA4; } }
    c.budget -= 1;
L_0046EBE8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[18].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EBFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046EBFCu) [[unlikely]] return; }
L_0046EBFC:
    set32(c.r[5], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 2812u), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 2808u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0046ED90; } }
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 4u), c.r[18].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0046ED90; } }
L_0046EC40:
    set32(c.r[3], ld32((c.r[17].w[0] + 2812u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046ED90; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046EC54:
    set32(c.r[3], ld32((c.r[17].w[0] + 2808u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0046EC84; } }
L_0046EC68:
    set32(c.r[3], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EC54u | kUnwind; return; } goto L_0046EC54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046ED90; } }
L_0046EC84:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EC68u | kUnwind; return; } goto L_0046EC68; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0046ED18; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046ECB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 760u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046ED98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0046ED98; } }
L_0046ECD0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046EDA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ECF4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046ECF4u) [[unlikely]] return; }
L_0046ECF4:
    c.budget -= 1;
L_0046ECF8:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 2;
L_0046ED00:
    set32(c.r[3], ld32((c.r[17].w[0] + 764u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046ECB0u | kUnwind; return; } goto L_0046ECB0; } }
    c.budget -= 1;
L_0046ED18:
    set32(c.r[3], ld32((c.r[17].w[0] + 2812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 2812u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 2812u)));
    c.r[1].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046ED90; } }
    set32(c.r[3], c.r[21].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.budget -= 3;
L_0046ED40:
    set32(c.r[4], ld32((c.r[17].w[0] + 2808u)));
    set32(c.r[3], c.r[6].w[0] + 12u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 10u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 2812u)));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046ED40u | kUnwind; return; } goto L_0046ED40; } }
L_0046ED90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046EDC0; } }
L_0046ED98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046ED00u | kUnwind; return; } goto L_0046ED00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046ECD0u | kUnwind; return; } goto L_0046ECD0; } }
L_0046EDA8:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EDB4u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046EDB4u) [[unlikely]] return; }
L_0046EDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046ECF8u | kUnwind; return; } goto L_0046ECF8; } }
    c.budget -= 1;
L_0046EDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0046EDF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 2812u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046EE30; } }
L_0046EE14:
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 2812u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EE14u | kUnwind; return; } goto L_0046EE14; } }
L_0046EE30:
    set32(c.r[2], ld32((c.r[18].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0046EE90; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046EE44:
    set32(c.r[2], ld32((c.r[18].w[0] + 760u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046EEA0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EE74u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046EE74u) [[unlikely]] return; }
L_0046EE74:
    c.budget -= 1;
L_0046EE78:
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 764u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EE44u | kUnwind; return; } goto L_0046EE44; } }
L_0046EE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EE98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046EE98u) [[unlikely]] return; }
L_0046EE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046EEB8; } }
L_0046EEA0:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EEACu); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046EEACu) [[unlikely]] return; }
L_0046EEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EE78u | kUnwind; return; } goto L_0046EE78; } }
    c.budget -= 1;
L_0046EEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046EEE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009B(c, 380u, depth + 1u); else { c.pc = 0x0046FFA0u; return; } if (c.pc != 0x0046EF00u) [[unlikely]] return; }
L_0046EF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046EF08u) [[unlikely]] return; }
L_0046EF08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046EFC8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046EF38; } }
L_0046EF1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 2812u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EF1Cu | kUnwind; return; } goto L_0046EF1C; } }
L_0046EF38:
    set32(c.r[2], ld32((c.r[18].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0046EF98; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046EF4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 760u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046EFB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EF7Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046EF7Cu) [[unlikely]] return; }
L_0046EF7C:
    c.budget -= 1;
L_0046EF80:
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 764u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EF4Cu | kUnwind; return; } goto L_0046EF4C; } }
L_0046EF98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10220u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EFACu); st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046EFACu) [[unlikely]] return; }
L_0046EFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046EFC8; } }
L_0046EFB4:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EFC0u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046EFC0u) [[unlikely]] return; }
L_0046EFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EF80u | kUnwind; return; } goto L_0046EF80; } }
L_0046EFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046EFF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 2812u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046F030; } }
L_0046F014:
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 2812u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F014u | kUnwind; return; } goto L_0046F014; } }
L_0046F030:
    set32(c.r[2], ld32((c.r[18].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0046F090; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046F044:
    set32(c.r[2], ld32((c.r[18].w[0] + 760u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046F0A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F074u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046F074u) [[unlikely]] return; }
L_0046F074:
    c.budget -= 1;
L_0046F078:
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 764u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F044u | kUnwind; return; } goto L_0046F044; } }
L_0046F090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F098u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046F098u) [[unlikely]] return; }
L_0046F098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046F0B8; } }
L_0046F0A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F0ACu); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046F0ACu) [[unlikely]] return; }
L_0046F0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F078u | kUnwind; return; } goto L_0046F078; } }
    c.budget -= 1;
L_0046F0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046F0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F100u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009B(c, 383u, depth + 1u); else { c.pc = 0x0046FFE0u; return; } if (c.pc != 0x0046F100u) [[unlikely]] return; }
L_0046F100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F108u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046F108u) [[unlikely]] return; }
L_0046F108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046F1C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046F138; } }
L_0046F11C:
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 2812u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 2812u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F11Cu | kUnwind; return; } goto L_0046F11C; } }
L_0046F138:
    set32(c.r[2], ld32((c.r[18].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0046F198; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046F14C:
    set32(c.r[2], ld32((c.r[18].w[0] + 760u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046F1B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F17Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046F17Cu) [[unlikely]] return; }
L_0046F17C:
    c.budget -= 1;
L_0046F180:
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 764u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F14Cu | kUnwind; return; } goto L_0046F14C; } }
L_0046F198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10220u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F1ACu); st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046F1ACu) [[unlikely]] return; }
L_0046F1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046F1C8; } }
L_0046F1B4:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F1C0u); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046F1C0u) [[unlikely]] return; }
L_0046F1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F180u | kUnwind; return; } goto L_0046F180; } }
L_0046F1C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046F1F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 764u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046F260; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 2812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046F260; } }
    c.f[0] = ld32((c.r[21].w[0] + 64u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046F26C; } }
L_0046F244:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 60u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0046F294; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[21].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0046F258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046F448; } }
L_0046F260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_0046F448; } }
L_0046F26C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[21].w[0] + 68u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[21].w[0] + 68u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F244u | kUnwind; return; } goto L_0046F244; } }
    c.f[0] = ld32((c.r[21].w[0] + 64u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 68u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F244u | kUnwind; return; } goto L_0046F244; } }
L_0046F294:
    set32(c.r[2], ld32((c.r[21].w[0] + 2812u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0046F310; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046F2A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 2808u)));
    set32(c.r[6], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046F320; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 522u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 8704u);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 76u));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046F320; } }
    set32(c.r[22], c.r[22].w[0] + 12u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_0046F300:
    set32(c.r[2], ld32((c.r[21].w[0] + 2812u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F2A8u | kUnwind; return; } goto L_0046F2A8; } }
L_0046F310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F318u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 191u, depth + 1u); else { c.pc = 0x0046E100u; return; } if (c.pc != 0x0046F318u) [[unlikely]] return; }
L_0046F318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F258u | kUnwind; return; } goto L_0046F258; } }
L_0046F320:
    set32(c.r[2], ld32((c.r[21].w[0] + 764u)));
    set32(c.r[17], ld32((c.r[6].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0046F3A0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046F338:
    set32(c.r[2], ld32((c.r[21].w[0] + 760u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046F420; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0046F420; } }
L_0046F358:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046F430; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F37Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046F37Cu) [[unlikely]] return; }
L_0046F37C:
    c.budget -= 1;
L_0046F380:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 2;
L_0046F388:
    set32(c.r[2], ld32((c.r[21].w[0] + 764u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F338u | kUnwind; return; } goto L_0046F338; } }
    c.budget -= 1;
L_0046F3A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 2812u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 2812u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 2812u)));
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F300u | kUnwind; return; } goto L_0046F300; } }
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 3;
L_0046F3C8:
    set32(c.r[3], ld32((c.r[21].w[0] + 2808u)));
    set32(c.r[2], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 9u));
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 10u));
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 2812u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F3C8u | kUnwind; return; } goto L_0046F3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F300u | kUnwind; return; } goto L_0046F300; } }
L_0046F420:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F388u | kUnwind; return; } goto L_0046F388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F358u | kUnwind; return; } goto L_0046F358; } }
L_0046F430:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F43Cu); st32((c.r[4].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046F43Cu) [[unlikely]] return; }
L_0046F43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F380u | kUnwind; return; } goto L_0046F380; } }
    c.budget -= 1;
L_0046F448:
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
L_0046F470:
    set32(c.r[3], ld32((c.r[4].w[0] + 764u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0046F4A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046F484:
    set32(c.r[3], ld32((c.r[4].w[0] + 760u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 764u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F484u | kUnwind; return; } goto L_0046F484; } }
L_0046F4A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046F4D0; } }
L_0046F4B4:
    set32(c.r[3], ld32((c.r[4].w[0] + 764u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 764u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 764u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F4B4u | kUnwind; return; } goto L_0046F4B4; } }
L_0046F4D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 2812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046F4F8; } }
L_0046F4DC:
    set32(c.r[3], ld32((c.r[4].w[0] + 2812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 2812u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2812u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F4DCu | kUnwind; return; } goto L_0046F4DC; } }
L_0046F4F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046F500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F514u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 42u, depth + 1u); else { c.pc = 0x00470530u; return; } if (c.pc != 0x0046F514u) [[unlikely]] return; }
L_0046F514:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 21536u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F528u); st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046F528u) [[unlikely]] return; }
L_0046F528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046F538; } }
L_0046F530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046F548; } }
L_0046F538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F540u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046F540u) [[unlikely]] return; }
L_0046F540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F530u | kUnwind; return; } goto L_0046F530; } }
L_0046F548:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046F560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[20] = c.f[12];
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], 0u + 85u);
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F5A8u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x00314110u; return; } if (c.pc != 0x0046F5A8u) [[unlikely]] return; }
L_0046F5A8:
    st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st8((c.r[17].w[0] + 62u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 63u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 64u), c.f[20]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), 0u);
    st8((c.r[17].w[0] + 77u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0046F5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.f[12] = 0u;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0046F630; } }
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.budget -= 11;
L_0046F630:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046F69C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0046F67C; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046F660; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0046F660; } }
    st8((c.r[3].w[0] + 1540u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0046F660:
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F674u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046F674u) [[unlikely]] return; }
L_0046F674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0046F6DC; } }
L_0046F67C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F694u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046F694u) [[unlikely]] return; }
L_0046F694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F674u | kUnwind; return; } goto L_0046F674; } }
L_0046F69C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0046F6C0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), c.f[12]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F6B8u); st32((c.r[4].w[0] + 88u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046F6B8u) [[unlikely]] return; }
L_0046F6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F674u | kUnwind; return; } goto L_0046F674; } }
L_0046F6C0:
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 84u), c.f[12]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F6D4u); st32((c.r[4].w[0] + 88u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046F6D4u) [[unlikely]] return; }
L_0046F6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F674u | kUnwind; return; } goto L_0046F674; } }
L_0046F6DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046F6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 12u), 0u);  if (t) { goto L_0046F728; } }
    st8((c.r[5].w[0] + 1540u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0046F728:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0046F798; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046F740u) [[unlikely]] return; }
L_0046F740:
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F754u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046F754u) [[unlikely]] return; }
L_0046F754:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F768u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046F768u) [[unlikely]] return; }
L_0046F768:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046F7A0; } }
    set32(c.r[4], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 6;
L_0046F790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0046F7A4; } }
L_0046F798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F790u | kUnwind; return; } goto L_0046F790; } }
L_0046F7A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0046F7A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046F7C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 4096u);
    c.budget -= 3;
L_0046F7CC:
    st8((c.r[4].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st8((c.r[4].w[0] + 63u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(162ll) ? 1ull : 0ull;
    st8((c.r[4].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 127u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 159u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 191u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 223u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 255u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 256u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F7CCu | kUnwind; return; } goto L_0046F7CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 4096u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 63u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0046F820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0046F884; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046F86C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046F86C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0046F86C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0046F884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F884u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0046F884u) [[unlikely]] return; }
L_0046F884:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046F8A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F8B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046F8B8u) [[unlikely]] return; }
L_0046F8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046F8D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 48u);  c.pc = t; return; }
L_0046F8E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046F8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046F900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0046F9E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 768u);
    set32(c.r[3], c.r[3].w[0] + 16336u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0046F958; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046F958; } }
L_0046F938:
    set32(c.r[2], ld32((c.r[16].w[0] + 2812u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 2812u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2812u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F938u | kUnwind; return; } goto L_0046F938; } }
    c.budget -= 1;
L_0046F958:
    set32(c.r[2], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046F990; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046F990; } }
L_0046F970:
    set32(c.r[2], ld32((c.r[16].w[0] + 764u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 764u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 764u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F970u | kUnwind; return; } goto L_0046F970; } }
    c.budget -= 1;
L_0046F990:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0046F9CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046F9CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046F9CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0046F9CC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0046F9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F9E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0046F9E4u) [[unlikely]] return; }
L_0046F9E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0046FA74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16656u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046FA5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046FA5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046FA5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0046FA5C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0046FA74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FA74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0046FA74u) [[unlikely]] return; }
L_0046FA74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FA90:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 73u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0046FAA8; } }
L_0046FAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046FAC4; } }
L_0046FAA8:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FAA0u | kUnwind; return; } goto L_0046FAA0; } }
L_0046FAC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046FAD0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 73u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0046FAE8; } }
L_0046FAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046FAF8; } }
L_0046FAE8:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FAE0u | kUnwind; return; } goto L_0046FAE0; } }
L_0046FAF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046FB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046FB7C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046FB48; } }
    st32((c.r[16].w[0] + 84u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 2;
L_0046FB2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046FB64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046FB64; } }
L_0046FB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046FB80; } }
L_0046FB48:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FB5Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0046FB5Cu) [[unlikely]] return; }
L_0046FB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FB2Cu | kUnwind; return; } goto L_0046FB2C; } }
L_0046FB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FB6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046FB6Cu) [[unlikely]] return; }
L_0046FB6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FB40u | kUnwind; return; } goto L_0046FB40; } }
L_0046FB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0046FB80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046FC08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046FBD8; } }
    st32((c.r[16].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 2;
L_0046FBBC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046FBF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046FBF0; } }
L_0046FBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046FC0C; } }
L_0046FBD8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FBE8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0046FBE8u) [[unlikely]] return; }
L_0046FBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FBBCu | kUnwind; return; } goto L_0046FBBC; } }
L_0046FBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FBF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046FBF8u) [[unlikely]] return; }
L_0046FBF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FBD0u | kUnwind; return; } goto L_0046FBD0; } }
L_0046FC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0046FC0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046FC9C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046FC6C; } }
    st32((c.r[16].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 2;
L_0046FC50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046FC84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046FC84; } }
L_0046FC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046FCA0; } }
L_0046FC6C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FC7Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0046FC7Cu) [[unlikely]] return; }
L_0046FC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 64u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FC50u | kUnwind; return; } goto L_0046FC50; } }
L_0046FC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FC8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046FC8Cu) [[unlikely]] return; }
L_0046FC8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FC64u | kUnwind; return; } goto L_0046FC64; } }
L_0046FC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0046FCA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FCB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_0046FCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FCD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046FCD4u) [[unlikely]] return; }
L_0046FCD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046FCE4; } }
L_0046FCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046FCF4; } }
L_0046FCE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 10220u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FCDCu | kUnwind; return; } goto L_0046FCDC; } }
L_0046FCF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FD00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_0046FD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FD24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046FD24u) [[unlikely]] return; }
L_0046FD24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046FD34; } }
L_0046FD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046FD44; } }
L_0046FD34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 10220u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FD2Cu | kUnwind; return; } goto L_0046FD2C; } }
L_0046FD44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FD64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x0046FD64u) [[unlikely]] return; }
L_0046FD64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046FE38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[1] = ld32((c.r[16].w[0] + 88u));  if (t) { goto L_0046FD84; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0046FDA0; } }
L_0046FD84:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0046FDA0:
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046FDD8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0046FDD8; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FDD4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x0046FDD4u) [[unlikely]] return; }
L_0046FDD4:
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 1;
L_0046FDD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[1] = ld32((c.r[16].w[0] + 88u));  if (t) { goto L_0046FDF0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0046FE0C; } }
L_0046FDF0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0046FE0C:
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046FE38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046FE38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FE38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x0046FE38u) [[unlikely]] return; }
L_0046FE38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FE64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x0046FE64u) [[unlikely]] return; }
L_0046FE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046FE84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FE74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046FE74u) [[unlikely]] return; }
L_0046FE74:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FE84u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0046FE84u) [[unlikely]] return; }
L_0046FE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 73u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046FED4; } }
L_0046FECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046FEF4; } }
L_0046FED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FEDCu); st32((c.r[16].w[0] + 84u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0046FEDCu) [[unlikely]] return; }
L_0046FEDC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FEECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046FEECu) [[unlikely]] return; }
L_0046FEEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FECCu | kUnwind; return; } goto L_0046FECC; } }
L_0046FEF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FF00:
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 14u)));
    st32((c.r[4].w[0] + 60u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 73u)));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 74u)));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  c.pc = t; return; }
L_0046FF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046FF80:
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.r[6].w[0]);  c.pc = t; return; }
L_0046FF90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_0046FFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FFB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046FFB4u) [[unlikely]] return; }
L_0046FFB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046FFC4; } }
L_0046FFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0046FFD4; } }
L_0046FFC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 10220u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FFBCu | kUnwind; return; } goto L_0046FFBC; } }
L_0046FFD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FFF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0046FFF4u) [[unlikely]] return; }
L_0046FFF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_009C(c, 2u, depth); } }
L_0046FFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_009C(c, 3u, depth); } }
    [[clang::musttail]] return unit_009C(c, 2u, depth);
}

}

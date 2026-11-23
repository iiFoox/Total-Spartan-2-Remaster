#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0031[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0,
    93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260,
    0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 282, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 286, 287, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    317, 0, 318, 0, 319, 0, 320, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0031(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C4000;
    case 2u: goto L_002C4004;
    case 3u: goto L_002C400C;
    case 4u: goto L_002C4050;
    case 5u: goto L_002C40F8;
    case 6u: goto L_002C4178;
    case 7u: goto L_002C41A0;
    case 8u: goto L_002C41D8;
    case 9u: goto L_002C41EC;
    case 10u: goto L_002C41F4;
    case 11u: goto L_002C4224;
    case 12u: goto L_002C4250;
    case 13u: goto L_002C4260;
    case 14u: goto L_002C428C;
    case 15u: goto L_002C4298;
    case 16u: goto L_002C42A0;
    case 17u: goto L_002C42AC;
    case 18u: goto L_002C42B4;
    case 19u: goto L_002C42CC;
    case 20u: goto L_002C42DC;
    case 21u: goto L_002C42F0;
    case 22u: goto L_002C432C;
    case 23u: goto L_002C435C;
    case 24u: goto L_002C4370;
    case 25u: goto L_002C43B8;
    case 26u: goto L_002C43C4;
    case 27u: goto L_002C441C;
    case 28u: goto L_002C4444;
    case 29u: goto L_002C445C;
    case 30u: goto L_002C4474;
    case 31u: goto L_002C447C;
    case 32u: goto L_002C4494;
    case 33u: goto L_002C44A4;
    case 34u: goto L_002C44AC;
    case 35u: goto L_002C44C0;
    case 36u: goto L_002C44D4;
    case 37u: goto L_002C44E8;
    case 38u: goto L_002C44F0;
    case 39u: goto L_002C44F8;
    case 40u: goto L_002C451C;
    case 41u: goto L_002C4524;
    case 42u: goto L_002C4534;
    case 43u: goto L_002C4568;
    case 44u: goto L_002C4598;
    case 45u: goto L_002C45D8;
    case 46u: goto L_002C46D0;
    case 47u: goto L_002C46DC;
    case 48u: goto L_002C4710;
    case 49u: goto L_002C4748;
    case 50u: goto L_002C475C;
    case 51u: goto L_002C4778;
    case 52u: goto L_002C4788;
    case 53u: goto L_002C4798;
    case 54u: goto L_002C47C4;
    case 55u: goto L_002C47D0;
    case 56u: goto L_002C47D8;
    case 57u: goto L_002C47E4;
    case 58u: goto L_002C47EC;
    case 59u: goto L_002C4804;
    case 60u: goto L_002C4814;
    case 61u: goto L_002C4850;
    case 62u: goto L_002C4880;
    case 63u: goto L_002C4894;
    case 64u: goto L_002C48CC;
    case 65u: goto L_002C48D4;
    case 66u: goto L_002C4900;
    case 67u: goto L_002C492C;
    case 68u: goto L_002C4954;
    case 69u: goto L_002C4968;
    case 70u: goto L_002C4980;
    case 71u: goto L_002C4988;
    case 72u: goto L_002C49A0;
    case 73u: goto L_002C49A8;
    case 74u: goto L_002C49E8;
    case 75u: goto L_002C4A10;
    case 76u: goto L_002C4A3C;
    case 77u: goto L_002C4A44;
    case 78u: goto L_002C4A74;
    case 79u: goto L_002C4A90;
    case 80u: goto L_002C4AB8;
    case 81u: goto L_002C4B24;
    case 82u: goto L_002C4B58;
    case 83u: goto L_002C4B78;
    case 84u: goto L_002C4B84;
    case 85u: goto L_002C4BB0;
    case 86u: goto L_002C4BEC;
    case 87u: goto L_002C4C00;
    case 88u: goto L_002C4C20;
    case 89u: goto L_002C4C30;
    case 90u: goto L_002C4C40;
    case 91u: goto L_002C4C6C;
    case 92u: goto L_002C4C78;
    case 93u: goto L_002C4C80;
    case 94u: goto L_002C4C8C;
    case 95u: goto L_002C4C94;
    case 96u: goto L_002C4CAC;
    case 97u: goto L_002C4CBC;
    case 98u: goto L_002C4CF8;
    case 99u: goto L_002C4D28;
    case 100u: goto L_002C4D3C;
    case 101u: goto L_002C4D74;
    case 102u: goto L_002C4D7C;
    case 103u: goto L_002C4DAC;
    case 104u: goto L_002C4DD8;
    case 105u: goto L_002C4E00;
    case 106u: goto L_002C4E14;
    case 107u: goto L_002C4E2C;
    case 108u: goto L_002C4E34;
    case 109u: goto L_002C4E4C;
    case 110u: goto L_002C4E54;
    case 111u: goto L_002C4E98;
    case 112u: goto L_002C4EC4;
    case 113u: goto L_002C4F04;
    case 114u: goto L_002C4F48;
    case 115u: goto L_002C4F58;
    case 116u: goto L_002C4F78;
    case 117u: goto L_002C4F84;
    case 118u: goto L_002C4F98;
    case 119u: goto L_002C4FA0;
    case 120u: goto L_002C4FD0;
    case 121u: goto L_002C4FEC;
    case 122u: goto L_002C5050;
    case 123u: goto L_002C5070;
    case 124u: goto L_002C5090;
    case 125u: goto L_002C50B4;
    case 126u: goto L_002C50D0;
    case 127u: goto L_002C50FC;
    case 128u: goto L_002C511C;
    case 129u: goto L_002C5140;
    case 130u: goto L_002C5168;
    case 131u: goto L_002C5180;
    case 132u: goto L_002C51A4;
    case 133u: goto L_002C51C0;
    case 134u: goto L_002C51E0;
    case 135u: goto L_002C5208;
    case 136u: goto L_002C5220;
    case 137u: goto L_002C5244;
    case 138u: goto L_002C5264;
    case 139u: goto L_002C5280;
    case 140u: goto L_002C52A8;
    case 141u: goto L_002C52C0;
    case 142u: goto L_002C52E4;
    case 143u: goto L_002C5304;
    case 144u: goto L_002C5320;
    case 145u: goto L_002C5348;
    case 146u: goto L_002C5360;
    case 147u: goto L_002C5380;
    case 148u: goto L_002C53A0;
    case 149u: goto L_002C53C4;
    case 150u: goto L_002C53E0;
    case 151u: goto L_002C540C;
    case 152u: goto L_002C542C;
    case 153u: goto L_002C5450;
    case 154u: goto L_002C5478;
    case 155u: goto L_002C5490;
    case 156u: goto L_002C54B0;
    case 157u: goto L_002C54D0;
    case 158u: goto L_002C54FC;
    case 159u: goto L_002C5510;
    case 160u: goto L_002C5520;
    case 161u: goto L_002C5540;
    case 162u: goto L_002C556C;
    case 163u: goto L_002C55A0;
    case 164u: goto L_002C55C4;
    case 165u: goto L_002C55DC;
    case 166u: goto L_002C5600;
    case 167u: goto L_002C5628;
    case 168u: goto L_002C5640;
    case 169u: goto L_002C566C;
    case 170u: goto L_002C5684;
    case 171u: goto L_002C56A0;
    case 172u: goto L_002C56CC;
    case 173u: goto L_002C56EC;
    case 174u: goto L_002C5710;
    case 175u: goto L_002C5738;
    case 176u: goto L_002C5750;
    case 177u: goto L_002C5760;
    case 178u: goto L_002C5774;
    case 179u: goto L_002C57A0;
    case 180u: goto L_002C57C8;
    case 181u: goto L_002C57E0;
    case 182u: goto L_002C57FC;
    case 183u: goto L_002C581C;
    case 184u: goto L_002C583C;
    case 185u: goto L_002C5860;
    case 186u: goto L_002C5878;
    case 187u: goto L_002C5894;
    case 188u: goto L_002C58B0;
    case 189u: goto L_002C58D4;
    case 190u: goto L_002C58F4;
    case 191u: goto L_002C5918;
    case 192u: goto L_002C5934;
    case 193u: goto L_002C5954;
    case 194u: goto L_002C596C;
    case 195u: goto L_002C5984;
    case 196u: goto L_002C59A0;
    case 197u: goto L_002C59B8;
    case 198u: goto L_002C59F0;
    case 199u: goto L_002C5A1C;
    case 200u: goto L_002C5A44;
    case 201u: goto L_002C5A6C;
    case 202u: goto L_002C5A94;
    case 203u: goto L_002C5ACC;
    case 204u: goto L_002C5AF8;
    case 205u: goto L_002C5B2C;
    case 206u: goto L_002C5B58;
    case 207u: goto L_002C5B84;
    case 208u: goto L_002C5BA0;
    case 209u: goto L_002C5BC8;
    case 210u: goto L_002C5BF0;
    case 211u: goto L_002C5C18;
    case 212u: goto L_002C5C38;
    case 213u: goto L_002C5C50;
    case 214u: goto L_002C5C74;
    case 215u: goto L_002C5CC8;
    case 216u: goto L_002C5CE0;
    case 217u: goto L_002C5D40;
    case 218u: goto L_002C5DD4;
    case 219u: goto L_002C5E34;
    case 220u: goto L_002C5E80;
    case 221u: goto L_002C5EB0;
    case 222u: goto L_002C5EDC;
    case 223u: goto L_002C5EF0;
    case 224u: goto L_002C601C;
    case 225u: goto L_002C6024;
    case 226u: goto L_002C605C;
    case 227u: goto L_002C60A0;
    case 228u: goto L_002C60F8;
    case 229u: goto L_002C6138;
    case 230u: goto L_002C613C;
    case 231u: goto L_002C6160;
    case 232u: goto L_002C617C;
    case 233u: goto L_002C6198;
    case 234u: goto L_002C61B0;
    case 235u: goto L_002C6214;
    case 236u: goto L_002C62C8;
    case 237u: goto L_002C62F0;
    case 238u: goto L_002C6368;
    case 239u: goto L_002C6424;
    case 240u: goto L_002C64B4;
    case 241u: goto L_002C6574;
    case 242u: goto L_002C6584;
    case 243u: goto L_002C6594;
    case 244u: goto L_002C65B0;
    case 245u: goto L_002C66E0;
    case 246u: goto L_002C678C;
    case 247u: goto L_002C67C0;
    case 248u: goto L_002C680C;
    case 249u: goto L_002C68A8;
    case 250u: goto L_002C68B8;
    case 251u: goto L_002C68C8;
    case 252u: goto L_002C68E0;
    case 253u: goto L_002C698C;
    case 254u: goto L_002C6A18;
    case 255u: goto L_002C6A30;
    case 256u: goto L_002C6B1C;
    case 257u: goto L_002C6B28;
    case 258u: goto L_002C6B40;
    case 259u: goto L_002C6D70;
    case 260u: goto L_002C6D7C;
    case 261u: goto L_002C6D8C;
    case 262u: goto L_002C6DE8;
    case 263u: goto L_002C6E78;
    case 264u: goto L_002C6FDC;
    case 265u: goto L_002C701C;
    case 266u: goto L_002C7050;
    case 267u: goto L_002C7094;
    case 268u: goto L_002C70A4;
    case 269u: goto L_002C70BC;
    case 270u: goto L_002C7140;
    case 271u: goto L_002C7178;
    case 272u: goto L_002C7184;
    case 273u: goto L_002C71A0;
    case 274u: goto L_002C7234;
    case 275u: goto L_002C7308;
    case 276u: goto L_002C738C;
    case 277u: goto L_002C73AC;
    case 278u: goto L_002C7430;
    case 279u: goto L_002C7450;
    case 280u: goto L_002C7470;
    case 281u: goto L_002C74F0;
    case 282u: goto L_002C74F4;
    case 283u: goto L_002C74F8;
    case 284u: goto L_002C751C;
    case 285u: goto L_002C7560;
    case 286u: goto L_002C7564;
    case 287u: goto L_002C7568;
    case 288u: goto L_002C7580;
    case 289u: goto L_002C75F4;
    case 290u: goto L_002C7600;
    case 291u: goto L_002C761C;
    case 292u: goto L_002C76C8;
    case 293u: goto L_002C7704;
    case 294u: goto L_002C770C;
    case 295u: goto L_002C771C;
    case 296u: goto L_002C7784;
    case 297u: goto L_002C7824;
    case 298u: goto L_002C7844;
    case 299u: goto L_002C78BC;
    case 300u: goto L_002C7968;
    case 301u: goto L_002C7978;
    case 302u: goto L_002C7988;
    case 303u: goto L_002C7A2C;
    case 304u: goto L_002C7ABC;
    case 305u: goto L_002C7B40;
    case 306u: goto L_002C7B50;
    case 307u: goto L_002C7B60;
    case 308u: goto L_002C7BC0;
    case 309u: goto L_002C7BE8;
    case 310u: goto L_002C7C30;
    case 311u: goto L_002C7C70;
    case 312u: goto L_002C7CB0;
    case 313u: goto L_002C7CB8;
    case 314u: goto L_002C7CC0;
    case 315u: goto L_002C7CC8;
    case 316u: goto L_002C7CEC;
    case 317u: goto L_002C7D00;
    case 318u: goto L_002C7D08;
    case 319u: goto L_002C7D10;
    case 320u: goto L_002C7D18;
    case 321u: goto L_002C7D1C;
    case 322u: goto L_002C7D30;
    case 323u: goto L_002C7EB0;
    case 324u: goto L_002C7EBC;
    case 325u: goto L_002C7EE4;
    case 326u: goto L_002C7EF8;
    case 327u: goto L_002C7F74;
    default: bad_entry(c, 0x002C4000u); return;
    }
L_002C4000:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_002C4004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3F60u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 761u, depth); } }
L_002C400C:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3FB0u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 763u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002C40D0; } }
    c.r[4].d[0] = ld8((c.r[12].w[0] + 2u));
    set32(c.r[3], ld32((c.r[12].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] | 16ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[12].w[0] + 104u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3FB0u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 763u, depth); } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C4050:
    set32(c.r[3], ld32((c.r[12].w[0] + 100u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[14], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[14].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[15], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[14], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    st32((c.r[14].w[0]), c.r[12].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[14].w[0]);
    set32(c.r[15], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[14], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    st32((c.r[14].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[12].w[0] + 104u)));
    c.r[3].d[0] = c.r[11].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4050u | kUnwind; return; } goto L_002C4050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3FB0u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 763u, depth); } }
L_002C40D0:
    c.r[4].d[0] = ld8((c.r[12].w[0] + 2u));
    set32(c.r[3], ld32((c.r[12].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] | 17ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[12].w[0] + 104u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3FB0u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 763u, depth); } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C40F8:
    set32(c.r[3], ld32((c.r[12].w[0] + 100u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[14], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[14].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[15], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[14], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    st32((c.r[14].w[0]), c.r[12].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[14].w[0]);
    set32(c.r[15], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[14], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    st32((c.r[14].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[12].w[0] + 104u)));
    c.r[3].d[0] = c.r[11].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C40F8u | kUnwind; return; } goto L_002C40F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3FB0u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 763u, depth); } }
L_002C4178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C41A0:
    set32(c.r[29], c.r[29].w[0] - 752u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 21424u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C41D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C41D8u) [[unlikely]] return; }
L_002C41D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4218; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C41ECu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C41ECu) [[unlikely]] return; }
L_002C41EC:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 2;
L_002C41F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C41F4u | kUnwind; return; } goto L_002C41F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4240; } }
L_002C4218:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002C4224:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4224u | kUnwind; return; } goto L_002C4224; } }
L_002C4240:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4250u); set32(c.r[5], c.r[5].w[0] - 16663u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C4250u) [[unlikely]] return; }
L_002C4250:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 728u);
    set32(c.r[6], c.r[6].w[0] + 952u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_002C4260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4260u | kUnwind; return; } goto L_002C4260; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C428Cu); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002C428Cu) [[unlikely]] return; }
L_002C428C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4298u); set32(c.r[5], c.r[29].w[0] + 728u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C4298u) [[unlikely]] return; }
L_002C4298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42A0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002C42A0u) [[unlikely]] return; }
L_002C42A0:
    set32(c.r[4], c.r[29].w[0] + 748u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42ACu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C42ACu) [[unlikely]] return; }
L_002C42AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42B4u); set32(c.r[4], c.r[29].w[0] + 748u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C42B4u) [[unlikely]] return; }
L_002C42B4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42CCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C42CCu) [[unlikely]] return; }
L_002C42CC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 748u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C42DCu) [[unlikely]] return; }
L_002C42DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002C42F8; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C42F0u) [[unlikely]] return; }
L_002C42F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_002C46E0; } }
L_002C42F8:
    set32(c.r[18], c.r[29].w[0] + 180u);
    set32(c.r[16], c.r[29].w[0] + 168u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4364; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[29].w[0] + 744u);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C432Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C432Cu) [[unlikely]] return; }
L_002C432C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_002C435C; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C435Cu); set32(c.r[5], c.r[2].w[0] + 744u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C435Cu) [[unlikely]] return; }
L_002C435C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_002C4380; } }
L_002C4364:
    set32(c.r[4], c.r[29].w[0] + 744u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4370u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C4370u) [[unlikely]] return; }
L_002C4370:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 4;
L_002C4380:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 744u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_002C43A4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C43B8; } }
L_002C43A4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C43B8u) [[unlikely]] return; }
L_002C43B8:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43C4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002C43C4u) [[unlikely]] return; }
L_002C43C4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16736u)));
    mmi::divu(c, 0, c.r[23].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C43E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_002C43F0; } }
L_002C43E8:
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[20], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002C43F0:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C444C; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C441Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C441Cu) [[unlikely]] return; }
L_002C441C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_002C4468; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[17].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4444u); set32(c.r[5], c.r[20].w[0] + c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4444u) [[unlikely]] return; }
L_002C4444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_002C446C; } }
L_002C444C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C445Cu); set32(c.r[16], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C445Cu) [[unlikely]] return; }
L_002C445C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C4468:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_002C446C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4474u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002C4474u) [[unlikely]] return; }
L_002C4474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C447Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002C447Cu) [[unlikely]] return; }
L_002C447C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[21].w[0] + 28u);
    st32((c.r[21].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4494u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 171u, depth + 1u); else { c.pc = 0x002C56A0u; return; } if (c.pc != 0x002C4494u) [[unlikely]] return; }
L_002C4494:
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 131u, depth + 1u); else { c.pc = 0x002C5180u; return; } if (c.pc != 0x002C44A4u) [[unlikely]] return; }
L_002C44A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002C44ACu) [[unlikely]] return; }
L_002C44AC:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44C0u); set32(c.r[6], c.r[6].w[0] - 16383u);  if (depth < kMaxDepth) unit_0031(c, 155u, depth + 1u); else { c.pc = 0x002C5490u; return; } if (c.pc != 0x002C44C0u) [[unlikely]] return; }
L_002C44C0:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[21].w[0] + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44D4u); set32(c.r[6], c.r[6].w[0] - 16351u);  if (depth < kMaxDepth) unit_0030(c, 596u, depth + 1u); else { c.pc = 0x002C2C20u; return; } if (c.pc != 0x002C44D4u) [[unlikely]] return; }
L_002C44D4:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44E8u); set32(c.r[6], c.r[6].w[0] - 16316u);  if (depth < kMaxDepth) unit_0011(c, 366u, depth + 1u); else { c.pc = 0x002478A0u; return; } if (c.pc != 0x002C44E8u) [[unlikely]] return; }
L_002C44E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002C44F0u) [[unlikely]] return; }
L_002C44F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44F8u); set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C44F8u) [[unlikely]] return; }
L_002C44F8:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_002C4560; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C451C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4524u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x002C4524u) [[unlikely]] return; }
L_002C4524:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4534u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002C4534u) [[unlikely]] return; }
L_002C4534:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[22].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[19].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C451Cu | kUnwind; return; } goto L_002C451C; } }
L_002C4560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4568u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002C4568u) [[unlikely]] return; }
L_002C4568:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[8], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_002C46C8; } }
    set32(c.r[6], c.r[29].w[0] + 148u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    set32(c.r[4], c.r[29].w[0] + 716u);
    set32(c.r[3], c.r[29].w[0] + 720u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[12], 0u + 8u);
    c.budget -= 6;
L_002C4598:
    set32(c.r[18], ld32((c.r[8].w[0] + 100u)));
    set32(c.r[10], c.r[7].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[7].w[0]);
    set32(c.r[14], ld32((c.r[9].w[0] + 9992u)));
    set32(c.r[11], c.r[10].w[0] << 4);
    set32(c.r[2], ld32((c.r[8].w[0] + 104u)));
    set32(c.r[10], ld32((c.r[21].w[0] + 28u)));
    c.r[13].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[8].w[0] + 96u)));
    c.r[15].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[18], c.r[14].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[14], c.r[16].w[0] + 32u);
    c.budget -= 16;
L_002C45D8:
    set32(c.r[11], ld32((c.r[15].w[0])));
    set32(c.r[13], c.r[13].w[0] - 1u);
    set32(c.r[10], ld32((c.r[15].w[0] + 4u)));
    st32((c.r[14].w[0]), c.r[11].w[0]);
    set32(c.r[15], c.r[15].w[0] + 8u);
    st32((c.r[14].w[0] + 4u), c.r[10].w[0]);
    c.budget -= 8;
    { const bool t = c.r[13].sd[0] > 0; set32(c.r[14], c.r[14].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C45D8u | kUnwind; return; } goto L_002C45D8; } }
    st32((c.r[16].w[0] + 96u), c.r[17].w[0]);
    set32(c.r[10], c.r[7].w[0] << 5);
    st32((c.r[16].w[0] + 100u), c.r[18].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[16].w[0] + 64u) & ~15u, c.vu0.vf[30]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[16].w[0] + 80u) & ~15u, c.vu0.vf[30]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.r[11].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[11].d[0] = c.r[11].d[0] | 19ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.f[0] = ld32((c.r[8].w[0] + 64u));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 68u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 72u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 76u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0] + 80u));
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.f[0] = ld32((c.r[8].w[0] + 64u));
    c.f[3] = ld32((c.r[8].w[0] + 84u));
    c.f[2] = ld32((c.r[8].w[0] + 68u));
    c.f[5] = ld32((c.r[8].w[0] + 88u));
    c.f[4] = ld32((c.r[8].w[0] + 72u));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[8], c.r[8].w[0] + 112u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    st32((c.r[2].w[0] + 24u), c.f[4]);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[6].w[0]), c.f[2]);
    st32((c.r[5].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 712u), c.f[0]);
    st32((c.r[4].w[0]), c.f[2]);
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 52;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.f[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4598u | kUnwind; return; } goto L_002C4598; } }
L_002C46C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46D0u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002C46D0u) [[unlikely]] return; }
L_002C46D0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C46DCu) [[unlikely]] return; }
L_002C46DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002C46E0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_002C4710:
    set32(c.r[29], c.r[29].w[0] - 720u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 21424u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4748u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C4748u) [[unlikely]] return; }
L_002C4748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4A30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002C475C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C475Cu | kUnwind; return; } goto L_002C475C; } }
L_002C4778:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4788u); set32(c.r[5], c.r[5].w[0] - 16663u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C4788u) [[unlikely]] return; }
L_002C4788:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 696u);
    set32(c.r[6], c.r[6].w[0] + 936u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_002C4798:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4798u | kUnwind; return; } goto L_002C4798; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47C4u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002C47C4u) [[unlikely]] return; }
L_002C47C4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47D0u); set32(c.r[5], c.r[29].w[0] + 696u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C47D0u) [[unlikely]] return; }
L_002C47D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47D8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002C47D8u) [[unlikely]] return; }
L_002C47D8:
    set32(c.r[4], c.r[29].w[0] + 716u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47E4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C47E4u) [[unlikely]] return; }
L_002C47E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47ECu); set32(c.r[4], c.r[29].w[0] + 716u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C47ECu) [[unlikely]] return; }
L_002C47EC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4804u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4804u) [[unlikely]] return; }
L_002C4804:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 716u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4814u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C4814u) [[unlikely]] return; }
L_002C4814:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C4A68; } }
    set32(c.r[16], c.r[29].w[0] + 164u);
    set32(c.r[18], c.r[29].w[0] + 152u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4888; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 712u);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4850u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C4850u) [[unlikely]] return; }
L_002C4850:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C48A0; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4880u); set32(c.r[5], c.r[2].w[0] + 712u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4880u) [[unlikely]] return; }
L_002C4880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_002C48A4; } }
L_002C4888:
    set32(c.r[4], c.r[29].w[0] + 712u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4894u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C4894u) [[unlikely]] return; }
L_002C4894:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C48A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_002C48A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 712u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C4A7C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C4A7C; } }
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_002C48CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C48D4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002C48D4u) [[unlikely]] return; }
L_002C48D4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[23], ld32((c.r[2].w[0] - 16736u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[22], ld32((c.r[2].w[0] - 16736u)));
    mmi::divu(c, 0, c.r[19].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4A98; } }
    set32(c.r[2], c.r[22].w[0] - c.r[2].w[0]);
    set32(c.r[21], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002C4900:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C495C; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C492Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C492Cu) [[unlikely]] return; }
L_002C492C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[18].d[0]; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002C4974; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[17].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4954u); set32(c.r[5], c.r[21].w[0] + c.r[18].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4954u) [[unlikely]] return; }
L_002C4954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_002C4978; } }
L_002C495C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4968u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C4968u) [[unlikely]] return; }
L_002C4968:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C4974:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_002C4978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4980u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002C4980u) [[unlikely]] return; }
L_002C4980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4988u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002C4988u) [[unlikely]] return; }
L_002C4988:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C49A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 141u, depth + 1u); else { c.pc = 0x002C52C0u; return; } if (c.pc != 0x002C49A0u) [[unlikely]] return; }
L_002C49A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C49A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002C49A8u) [[unlikely]] return; }
L_002C49A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32340u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 32340u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C49C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_002C49D4; } }
L_002C49C8:
    set32(c.r[2], c.r[22].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
L_002C49D4:
    set32(c.r[18], c.r[21].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C4AA0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C49E8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 9992u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A10u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x002C4A10u) [[unlikely]] return; }
L_002C4A10:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C49E8u | kUnwind; return; } goto L_002C49E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  if (t) { goto L_002C4AA4; } }
L_002C4A30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A3Cu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C4A3Cu) [[unlikely]] return; }
L_002C4A3C:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 2;
L_002C4A44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4A44u | kUnwind; return; } goto L_002C4A44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4778u | kUnwind; return; } goto L_002C4778; } }
L_002C4A68:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C4A74u) [[unlikely]] return; }
L_002C4A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_002C4B88; } }
L_002C4A7C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4A90u) [[unlikely]] return; }
L_002C4A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C48CCu | kUnwind; return; } goto L_002C48CC; } }
L_002C4A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4900u | kUnwind; return; } goto L_002C4900; } }
L_002C4AA0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_002C4AA4:
    set32(c.r[4], c.r[20].w[0] + 12u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4AB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 136u, depth + 1u); else { c.pc = 0x002C5220u; return; } if (c.pc != 0x002C4AB8u) [[unlikely]] return; }
L_002C4AB8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 32336u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 32336u)));
    set32(c.r[5], c.r[2].w[0] << 3);
    mmi::divu(c, 0, c.r[3].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4AE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[23].w[0]);  if (t) { goto L_002C4AEC; } }
L_002C4AE0:
    set32(c.r[2], c.r[22].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[23].w[0]);
    c.budget -= 3;
L_002C4AEC:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[21].w[0] + c.r[4].w[0]);  if (t) { goto L_002C4B0C; } }
L_002C4B00:
    set32(c.r[2], c.r[22].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_002C4B0C:
    set32(c.r[18], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C4B70; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4B24:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 256u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 9992u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 256u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 260u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B58u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0038(c, 407u, depth + 1u); else { c.pc = 0x002E2C50u; return; } if (c.pc != 0x002C4B58u) [[unlikely]] return; }
L_002C4B58:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 264u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4B24u | kUnwind; return; } goto L_002C4B24; } }
L_002C4B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B78u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002C4B78u) [[unlikely]] return; }
L_002C4B78:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C4B84u) [[unlikely]] return; }
L_002C4B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002C4B88:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 720u);  c.pc = t; return; }
L_002C4BB0:
    set32(c.r[29], c.r[29].w[0] - 752u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 21424u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C4BECu) [[unlikely]] return; }
L_002C4BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4F8C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002C4C00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4C00u | kUnwind; return; } goto L_002C4C00; } }
    c.budget -= 1;
L_002C4C20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C30u); set32(c.r[5], c.r[5].w[0] - 16663u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C4C30u) [[unlikely]] return; }
L_002C4C30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 728u);
    set32(c.r[6], c.r[6].w[0] + 920u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_002C4C40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4C40u | kUnwind; return; } goto L_002C4C40; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C6Cu); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002C4C6Cu) [[unlikely]] return; }
L_002C4C6C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C78u); set32(c.r[5], c.r[29].w[0] + 728u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C4C78u) [[unlikely]] return; }
L_002C4C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C80u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002C4C80u) [[unlikely]] return; }
L_002C4C80:
    set32(c.r[4], c.r[29].w[0] + 748u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C8Cu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C4C8Cu) [[unlikely]] return; }
L_002C4C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C94u); set32(c.r[4], c.r[29].w[0] + 748u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C4C94u) [[unlikely]] return; }
L_002C4C94:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4CACu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4CACu) [[unlikely]] return; }
L_002C4CAC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 748u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4CBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C4CBCu) [[unlikely]] return; }
L_002C4CBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C4FC4; } }
    set32(c.r[16], c.r[29].w[0] + 196u);
    set32(c.r[18], c.r[29].w[0] + 184u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4D30; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 744u);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4CF8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C4CF8u) [[unlikely]] return; }
L_002C4CF8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C4D48; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D28u); set32(c.r[5], c.r[2].w[0] + 744u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4D28u) [[unlikely]] return; }
L_002C4D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  if (t) { goto L_002C4D4C; } }
L_002C4D30:
    set32(c.r[4], c.r[29].w[0] + 744u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D3Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C4D3Cu) [[unlikely]] return; }
L_002C4D3C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C4D48:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_002C4D4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 744u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C4FD8; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C4FD8; } }
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_002C4D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D7Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002C4D7Cu) [[unlikely]] return; }
L_002C4D7C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 16736u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[30], ld32((c.r[2].w[0] - 16736u)));
    mmi::divu(c, 0, c.r[22].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4FF4; } }
    set32(c.r[2], c.r[30].w[0] - c.r[2].w[0]);
    set32(c.r[23], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002C4DAC:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4E08; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DD8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C4DD8u) [[unlikely]] return; }
L_002C4DD8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[18].d[0]; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002C4E20; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[17].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E00u); set32(c.r[5], c.r[23].w[0] + c.r[18].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4E00u) [[unlikely]] return; }
L_002C4E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_002C4E24; } }
L_002C4E08:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E14u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C4E14u) [[unlikely]] return; }
L_002C4E14:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C4E20:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_002C4E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E2Cu);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002C4E2Cu) [[unlikely]] return; }
L_002C4E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002C4E34u) [[unlikely]] return; }
L_002C4E34:
    set32(c.r[21], ld32((c.r[23].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 16281u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E4Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 150u, depth + 1u); else { c.pc = 0x002C53E0u; return; } if (c.pc != 0x002C4E4Cu) [[unlikely]] return; }
L_002C4E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E54u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002C4E54u) [[unlikely]] return; }
L_002C4E54:
    set32(c.r[3], ld32((c.r[28].w[0] - 32348u)));
    c.r[19].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[28].w[0] - 32348u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;  if (t) { goto L_002C4E88; } }
L_002C4E7C:
    set32(c.r[2], c.r[30].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002C4E88:
    set32(c.r[18], c.r[23].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C4EF0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4E98:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 9992u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4EC4u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0038(c, 424u, depth + 1u); else { c.pc = 0x002E2F20u; return; } if (c.pc != 0x002C4EC4u) [[unlikely]] return; }
L_002C4EC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4ED8; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_002C4ED8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 56u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4E98u | kUnwind; return; } goto L_002C4E98; } }
    c.budget -= 1;
L_002C4EF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F04u); set32(c.r[6], c.r[6].w[0] - 16271u);  if (depth < kMaxDepth) unit_0031(c, 146u, depth + 1u); else { c.pc = 0x002C5360u; return; } if (c.pc != 0x002C4F04u) [[unlikely]] return; }
L_002C4F04:
    set32(c.r[3], ld32((c.r[28].w[0] - 32344u)));
    c.r[8].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[28].w[0] - 32344u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;  if (t) { goto L_002C4F38; } }
L_002C4F2C:
    set32(c.r[2], c.r[30].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002C4F38:
    set32(c.r[7], c.r[23].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C4F70; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4F48:
    set32(c.r[2], ld32((c.r[7].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4FFC; } }
    c.budget -= 1;
L_002C4F58:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 56u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4F48u | kUnwind; return; } goto L_002C4F48; } }
    c.budget -= 1;
L_002C4F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F78u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002C4F78u) [[unlikely]] return; }
L_002C4F78:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C4F84u) [[unlikely]] return; }
L_002C4F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5020; } }
L_002C4F8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F98u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C4F98u) [[unlikely]] return; }
L_002C4F98:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 2;
L_002C4FA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4FA0u | kUnwind; return; } goto L_002C4FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4C20u | kUnwind; return; } goto L_002C4C20; } }
L_002C4FC4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C4FD0u) [[unlikely]] return; }
L_002C4FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5020; } }
L_002C4FD8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4FECu) [[unlikely]] return; }
L_002C4FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4D74u | kUnwind; return; } goto L_002C4D74; } }
L_002C4FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4DACu | kUnwind; return; } goto L_002C4DAC; } }
L_002C4FFC:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4F58u | kUnwind; return; } goto L_002C4F58; } }
    c.budget -= 1;
L_002C5020:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_002C5050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5070u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C5070u) [[unlikely]] return; }
L_002C5070:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C50B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C50B4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C50B4u) [[unlikely]] return; }
L_002C50B4:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C50D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C50FCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C50FCu) [[unlikely]] return; }
L_002C50FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22368u);
    set32(c.r[6], c.r[6].w[0] + 19920u);
    set32(c.r[7], 0u + 40u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C511Cu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002C511Cu) [[unlikely]] return; }
L_002C511C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5168; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5168u); set32(c.r[5], c.r[5].w[0] + 19920u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5168u) [[unlikely]] return; }
L_002C5168:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C51A4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C51A4u) [[unlikely]] return; }
L_002C51A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22352u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C51C0u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002C51C0u) [[unlikely]] return; }
L_002C51C0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C51E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5208; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5208u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5208u) [[unlikely]] return; }
L_002C5208:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5244u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C5244u) [[unlikely]] return; }
L_002C5244:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11584u);
    set32(c.r[6], c.r[6].w[0] + 11472u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5264u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002C5264u) [[unlikely]] return; }
L_002C5264:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C52A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C52A8u); set32(c.r[5], c.r[5].w[0] + 11472u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C52A8u) [[unlikely]] return; }
L_002C52A8:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C52C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C52E4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C52E4u) [[unlikely]] return; }
L_002C52E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21824u);
    set32(c.r[6], c.r[6].w[0] + 21712u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5304u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002C5304u) [[unlikely]] return; }
L_002C5304:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5348; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5348u); set32(c.r[5], c.r[5].w[0] + 21712u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5348u) [[unlikely]] return; }
L_002C5348:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5380u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C5380u) [[unlikely]] return; }
L_002C5380:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C53A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C53C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C53C4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C53C4u) [[unlikely]] return; }
L_002C53C4:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C53E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C540Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C540Cu) [[unlikely]] return; }
L_002C540C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12272u);
    set32(c.r[6], c.r[6].w[0] + 12176u);
    set32(c.r[7], 0u + 56u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C542Cu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002C542Cu) [[unlikely]] return; }
L_002C542C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5478; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5478u); set32(c.r[5], c.r[5].w[0] + 12176u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5478u) [[unlikely]] return; }
L_002C5478:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C54B0u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C54B0u) [[unlikely]] return; }
L_002C54B0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C54D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C5510; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_002C5518; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002C54FC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C5510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5510u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002C5510u) [[unlikely]] return; }
L_002C5510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C5528; } }
L_002C5518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5520u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x002C5520u) [[unlikely]] return; }
L_002C5520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C54FCu | kUnwind; return; } goto L_002C54FC; } }
L_002C5528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C556Cu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x002C556Cu) [[unlikely]] return; }
L_002C556C:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 19ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C55A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C55DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55C4u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x002C55C4u) [[unlikely]] return; }
L_002C55C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C55DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002C55DCu) [[unlikely]] return; }
L_002C55DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5628; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5628u); set32(c.r[5], c.r[5].w[0] + 22080u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5628u) [[unlikely]] return; }
L_002C5628:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C5684; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C566C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C566Cu);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x002C566Cu) [[unlikely]] return; }
L_002C566C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C5684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5684u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002C5684u) [[unlikely]] return; }
L_002C5684:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C56A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56CCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C56CCu) [[unlikely]] return; }
L_002C56CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22288u);
    set32(c.r[6], c.r[6].w[0] + 22080u);
    set32(c.r[7], 0u + 112u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56ECu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002C56ECu) [[unlikely]] return; }
L_002C56EC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5738u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x002C5738u) [[unlikely]] return; }
L_002C5738:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002C5760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 109u, depth + 1u); else { c.pc = 0x002611B0u; return; } if (c.pc != 0x002C5774u) [[unlikely]] return; }
L_002C5774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 13112u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C57A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C5C38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57C8u); set32(c.r[4], c.r[4].w[0] + 3376u);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0026D150u; return; } if (c.pc != 0x002C57C8u) [[unlikely]] return; }
L_002C57C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C57E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57E0u); set32(c.r[5], c.r[5].w[0] + 12176u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C57E0u) [[unlikely]] return; }
L_002C57E0:
    st32((c.r[17].w[0] + 368u), 0u);
    st32((c.r[17].w[0] + 372u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 376u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C57FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57FCu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C57FCu) [[unlikely]] return; }
L_002C57FC:
    st32((c.r[17].w[0] + 376u), 0u);
    st32((c.r[17].w[0] + 380u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 384u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C581C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C581Cu); set32(c.r[5], c.r[5].w[0] + 21712u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C581Cu) [[unlikely]] return; }
L_002C581C:
    st32((c.r[17].w[0] + 384u), 0u);
    st32((c.r[17].w[0] + 388u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 396u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C583C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C583Cu); set32(c.r[5], c.r[5].w[0] + 11472u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C583Cu) [[unlikely]] return; }
L_002C583C:
    st32((c.r[17].w[0] + 396u), 0u);
    st32((c.r[17].w[0] + 400u), 0u);
    st32((c.r[17].w[0] + 392u), 0u);
    st32((c.r[17].w[0] + 404u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 408u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5860u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5860u) [[unlikely]] return; }
L_002C5860:
    st32((c.r[17].w[0] + 408u), 0u);
    c.budget -= 1;
L_002C5864:
    set32(c.r[4], ld32((c.r[17].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5878u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5878u) [[unlikely]] return; }
L_002C5878:
    st32((c.r[17].w[0] + 412u), 0u);
    st32((c.r[17].w[0] + 416u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 420u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5894; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5894u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5894u) [[unlikely]] return; }
L_002C5894:
    st32((c.r[17].w[0] + 420u), 0u);
    st32((c.r[17].w[0] + 424u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C58B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58B0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C58B0u) [[unlikely]] return; }
L_002C58B0:
    st32((c.r[17].w[0] + 428u), 0u);
    st32((c.r[17].w[0] + 432u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C58D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C58D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58D4u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C58D4u) [[unlikely]] return; }
L_002C58D4:
    st32((c.r[17].w[0] + 448u), 0u);
    st32((c.r[17].w[0] + 452u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 436u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C58F4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58F4u); set32(c.r[5], c.r[5].w[0] + 22080u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C58F4u) [[unlikely]] return; }
L_002C58F4:
    st32((c.r[17].w[0] + 436u), 0u);
    st32((c.r[17].w[0] + 440u), 0u);
    st32((c.r[17].w[0] + 444u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5918; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5918u); set32(c.r[5], c.r[5].w[0] + 19920u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5918u) [[unlikely]] return; }
L_002C5918:
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5934u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5934u) [[unlikely]] return; }
L_002C5934:
    st32((c.r[17].w[0] + 364u), 0u);
    c.budget -= 1;
L_002C5938:
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29744u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5954u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5954u) [[unlikely]] return; }
L_002C5954:
    set32(c.r[4], ld32((c.r[28].w[0] - 29736u)));
    st32((c.r[28].w[0] - 29744u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 29740u), 0u);  if (t) { goto L_002C596C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C596Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C596Cu) [[unlikely]] return; }
L_002C596C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29728u)));
    st32((c.r[28].w[0] - 29736u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 29732u), 0u);  if (t) { goto L_002C5984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5984u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5984u) [[unlikely]] return; }
L_002C5984:
    st32((c.r[28].w[0] - 29728u), 0u);
    st32((c.r[28].w[0] - 29724u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C59A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59A0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C59A0u) [[unlikely]] return; }
L_002C59A0:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_002C59A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C59B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59B8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C59B8u) [[unlikely]] return; }
L_002C59B8:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], c.r[17].w[0] + 408u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_002C5A9C; } }
    set32(c.r[2], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C59F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C59F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C59F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59F0u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C59F0u) [[unlikely]] return; }
L_002C59F0:
    st32((c.r[17].w[0] + 448u), 0u);
    st32((c.r[17].w[0] + 452u), 0u);
    c.budget -= 2;
L_002C59F8:
    set32(c.r[2], c.r[17].w[0] + 436u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5A24; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 436u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5A1C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A1Cu); set32(c.r[5], c.r[5].w[0] + 22080u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5A1Cu) [[unlikely]] return; }
L_002C5A1C:
    st32((c.r[17].w[0] + 436u), 0u);
    st32((c.r[17].w[0] + 440u), 0u);
    c.budget -= 2;
L_002C5A24:
    set32(c.r[2], c.r[17].w[0] + 428u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5A4C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5A44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A44u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5A44u) [[unlikely]] return; }
L_002C5A44:
    st32((c.r[17].w[0] + 428u), 0u);
    st32((c.r[17].w[0] + 432u), 0u);
    c.budget -= 2;
L_002C5A4C:
    set32(c.r[2], c.r[17].w[0] + 420u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5A74; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A6Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5A6Cu) [[unlikely]] return; }
L_002C5A6C:
    st32((c.r[17].w[0] + 420u), 0u);
    st32((c.r[17].w[0] + 424u), 0u);
    c.budget -= 2;
L_002C5A74:
    set32(c.r[2], c.r[17].w[0] + 412u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5A9C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5A94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A94u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5A94u) [[unlikely]] return; }
L_002C5A94:
    st32((c.r[17].w[0] + 412u), 0u);
    st32((c.r[17].w[0] + 416u), 0u);
    c.budget -= 2;
L_002C5A9C:
    set32(c.r[2], c.r[17].w[0] + 384u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5B00; } }
    set32(c.r[2], c.r[17].w[0] + 396u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5AD4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5ACC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5ACCu); set32(c.r[5], c.r[5].w[0] + 11472u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5ACCu) [[unlikely]] return; }
L_002C5ACC:
    st32((c.r[17].w[0] + 396u), 0u);
    st32((c.r[17].w[0] + 400u), 0u);
    c.budget -= 2;
L_002C5AD4:
    set32(c.r[2], c.r[17].w[0] + 384u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5B00; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5AF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AF8u); set32(c.r[5], c.r[5].w[0] + 21712u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5AF8u) [[unlikely]] return; }
L_002C5AF8:
    st32((c.r[17].w[0] + 384u), 0u);
    st32((c.r[17].w[0] + 388u), 0u);
    c.budget -= 2;
L_002C5B00:
    set32(c.r[2], c.r[17].w[0] + 368u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5B60; } }
    set32(c.r[2], c.r[17].w[0] + 376u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5B34; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5B2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B2Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5B2Cu) [[unlikely]] return; }
L_002C5B2C:
    st32((c.r[17].w[0] + 376u), 0u);
    st32((c.r[17].w[0] + 380u), 0u);
    c.budget -= 2;
L_002C5B34:
    set32(c.r[2], c.r[17].w[0] + 368u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5B60; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5B58; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B58u); set32(c.r[5], c.r[5].w[0] + 12176u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5B58u) [[unlikely]] return; }
L_002C5B58:
    st32((c.r[17].w[0] + 368u), 0u);
    st32((c.r[17].w[0] + 372u), 0u);
    c.budget -= 2;
L_002C5B60:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5BD0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5B84; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B84u); set32(c.r[5], c.r[5].w[0] + 19920u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5B84u) [[unlikely]] return; }
L_002C5B84:
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BA0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5BA0u) [[unlikely]] return; }
L_002C5BA0:
    st32((c.r[17].w[0] + 364u), 0u);
    c.budget -= 1;
L_002C5BA4:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_002C5BD0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5BC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BC8u); set32(c.r[5], c.r[5].w[0] + 19920u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002C5BC8u) [[unlikely]] return; }
L_002C5BC8:
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 2;
L_002C5BD0:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5BF8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BF0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5BF0u) [[unlikely]] return; }
L_002C5BF0:
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 2;
L_002C5BF8:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5C20; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C18u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C5C18u) [[unlikely]] return; }
L_002C5C18:
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 2;
L_002C5C20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C5C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002C5C38u) [[unlikely]] return; }
L_002C5C38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5CC0; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C5C74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5CD0; } }
L_002C5CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5CC8u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C5CC8u) [[unlikely]] return; }
L_002C5CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5C74u | kUnwind; return; } goto L_002C5C74; } }
L_002C5CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5CE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C5E88; } }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5E90; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 536u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 321u, depth + 1u); else { c.pc = 0x0027E740u; return; } if (c.pc != 0x002C5D40u) [[unlikely]] return; }
L_002C5D40:
    set32(c.r[12], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[9], 0u - 5u);
    set32(c.r[10], c.r[2].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] << 7);
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 129u);
    set32(c.r[7], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[6], 0u + 1u);
    c.r[11].d[0] = ld8((c.r[12].w[0] + 526u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[12].w[0] + 526u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 523u));
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[8].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 56u), 0u);
    st32((c.r[2].w[0] + 60u), c.f[20]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DD4u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 88u, depth + 1u); else { c.pc = 0x00281060u; return; } if (c.pc != 0x002C5DD4u) [[unlikely]] return; }
L_002C5DD4:
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], 0u - 129u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 526u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 526u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 523u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 523u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 321u, depth + 1u); else { c.pc = 0x0027E740u; return; } if (c.pc != 0x002C5E34u) [[unlikely]] return; }
L_002C5E34:
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 524u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 524u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
L_002C5E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C5E94; } }
L_002C5E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C5E80u | kUnwind; return; } goto L_002C5E80; } }
L_002C5E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C5E94:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C5EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C5EDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 16064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5EDCu); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x002C5EDCu) [[unlikely]] return; }
L_002C5EDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5EF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[8].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[7], c.r[8].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[8].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[15], c.r[8].w[0] << 5);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[13], c.r[8].w[0] << 11);
    c.r[10].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[9], c.r[8].w[0] << 1);
    c.f[3] = ld32((c.r[6].w[0]));
    set32(c.r[18], 0u - 9u);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[24], 0u - 17u);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[14], 0u - 33u);
    set32(c.r[12], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[3].d[0];
    set32(c.r[11], 0u + 202u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[10], c.r[10].w[0] - 16064u);
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[8], 0u - 3u);
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[24].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[14].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[12].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 73;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C60F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C601Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0040(c, 4u, depth + 1u); else { c.pc = 0x00300050u; return; } if (c.pc != 0x002C601Cu) [[unlikely]] return; }
L_002C601C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6024u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002C6024u) [[unlikely]] return; }
L_002C6024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[4] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C605Cu); st32((c.r[17].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002C605Cu) [[unlikely]] return; }
L_002C605C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[4] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6130; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C60A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C6140; } }
L_002C60F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C60F8u); set32(c.r[4], ld32((c.r[16].w[0] + 1356u)));  if (depth < kMaxDepth) unit_00A2(c, 17u, depth + 1u); else { c.pc = 0x004882F0u; return; } if (c.pc != 0x002C60F8u) [[unlikely]] return; }
L_002C60F8:
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C6140; } }
L_002C6130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6138u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C6138u) [[unlikely]] return; }
L_002C6138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C60A0u | kUnwind; return; } goto L_002C60A0; } }
    goto L_002C6140;
L_002C613C:
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C6140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C6160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C6198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 1;
L_002C617C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 16032u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6198u); st8((c.r[2].w[0] + 536u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x002C6198u) [[unlikely]] return; }
L_002C6198:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C61B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C62D0; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C62D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C62D0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C62C0; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C6214:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 5u);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 43;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C62D4; } }
L_002C62C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C62C8u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C62C8u) [[unlikely]] return; }
L_002C62C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6214u | kUnwind; return; } goto L_002C6214; } }
L_002C62D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C62D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C62F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C655C; } }
    set32(c.r[3], 0u + 285u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C64A0; } }
    set32(c.r[3], 0u + 284u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C6334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6564; } }
L_002C6334:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C659C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6410; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C656C; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C6368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 5u);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 42;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C6564; } }
L_002C6410:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C657C; } }
    set32(c.r[3], 0u + 285u);
    c.budget -= 1;
L_002C6424:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_002C6564; } }
L_002C64A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C658C; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C64B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 5u);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 42;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C6564; } }
L_002C655C:
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_002C6564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C65A0; } }
L_002C656C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6574u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C6574u) [[unlikely]] return; }
L_002C6574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6368u | kUnwind; return; } goto L_002C6368; } }
L_002C657C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6584u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C6584u) [[unlikely]] return; }
L_002C6584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 285u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6424u | kUnwind; return; } goto L_002C6424; } }
L_002C658C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6594u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C6594u) [[unlikely]] return; }
L_002C6594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C64B4u | kUnwind; return; } goto L_002C64B4; } }
L_002C659C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C65A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C65B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[7].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[7].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[7].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], c.r[7].w[0] << 5);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[14], c.r[7].w[0] << 11);
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[9], c.r[7].w[0] << 1);
    set32(c.r[19], 0u - 9u);
    set32(c.r[15], 0u - 17u);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[24], 0u - 33u);
    set32(c.r[13], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[12], 0u + 58u);
    set32(c.r[10], c.r[10].w[0] - 16032u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[7].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    set32(c.r[8], 0u - 3u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[21].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[7], 0u - 2u);
    c.r[19].d[0] = c.r[21].d[0] & c.r[19].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[20].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[19].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & c.r[24].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[24].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[5].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 75;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C6784; } }
    set32(c.r[2], 0u + 284u);
    c.budget -= 1;
L_002C66E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 356u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 41;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C6794; } }
L_002C6784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C678Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C678Cu) [[unlikely]] return; }
L_002C678C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 284u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C66E0u | kUnwind; return; } goto L_002C66E0; } }
L_002C6794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C67C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 171u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C67F8; } }
    set32(c.r[3], 0u + 172u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C67F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C68C0; } }
L_002C67F8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C68B0; } }
    set32(c.r[3], 0u + 274u);
    c.budget -= 1;
L_002C680C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    set32(c.r[8], 0u + 1u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 382u));
    set32(c.r[3], 0u - 129u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 39;
L_002C68A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C68D0; } }
L_002C68B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68B8u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C68B8u) [[unlikely]] return; }
L_002C68B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 274u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C680Cu | kUnwind; return; } goto L_002C680C; } }
L_002C68C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68C8u);  if (depth < kMaxDepth) unit_0031(c, 273u, depth + 1u); else { c.pc = 0x002C71A0u; return; } if (c.pc != 0x002C68C8u) [[unlikely]] return; }
L_002C68C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C68A8u | kUnwind; return; } goto L_002C68A8; } }
L_002C68D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C68E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.f[1] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[5].w[0] + 104u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[6], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[5] = c.r[2].w[0];
    c.f[5] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[5] = fp::cvt_w_s(c.f[5]);
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE000000u);
    c.f[1] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 36;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C6A20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C698C; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002C698C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[6], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[4] = c.r[2].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[5].w[0] + 104u));
    c.f[2] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 31;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C6A10; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[5].w[0] + 404u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C6A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6A18u); st32((c.r[5].w[0] + 104u), c.f[1]);  if (depth < kMaxDepth) unit_0031(c, 280u, depth + 1u); else { c.pc = 0x002C7470u; return; } if (c.pc != 0x002C6A18u) [[unlikely]] return; }
L_002C6A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002C6A28; } }
L_002C6A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C698Cu | kUnwind; return; } goto L_002C698C; } }
L_002C6A28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C6A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C6B28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[11].d[0] = 0ull & 1ull;
    set32(c.r[2], c.r[2].w[0] - 16000u);
    set32(c.r[12], 0u - 65u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[15], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], 0u - 129u);
    set32(c.r[10], c.r[11].w[0] << 7);
    set32(c.r[7], 0u - 3u);
    set32(c.r[8], c.r[11].w[0] << 1);
    set32(c.r[6], 0u - 2u);
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[14].d[0] = ld8((c.r[15].w[0] + 523u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[15].w[0] + 523u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[15].w[0] + 523u));
    c.r[9].d[0] = c.r[12].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[15].w[0] + 523u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 524u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 524u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 524u));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[11].d[0];
    st8((c.r[8].w[0] + 524u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 45;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C6B28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 15968u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B1Cu); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002C6B1Cu) [[unlikely]] return; }
L_002C6B1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x002C6B28u) [[unlikely]] return; }
L_002C6B28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6B40:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[23], 0u - 9u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[25], 0u - 17u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[21].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[19], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[22], c.r[21].w[0] << 3);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[15], c.r[21].w[0] << 5);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[14], c.r[21].w[0] << 11);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[13], c.r[13].w[0] - 15968u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[11], 0u - 2u);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[10], c.r[10].w[0] - 16000u);
    set32(c.r[9], 0u - 65u);
    set32(c.r[7], 0u - 3u);
    set32(c.r[8], c.r[21].w[0] << 1);
    set32(c.r[6], c.r[21].w[0] << 4);
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 204u));
    c.f[21] = ld32((c.r[29].w[0] + 220u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[12].d[0] = c.r[2].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    set32(c.r[3], c.r[21].w[0] << 6);
    c.r[2].d[0] = c.r[2].d[0] & c.r[23].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[22], 0u - 129u);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[25].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[24].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[24].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 2049u);
    c.r[2].d[0] = c.r[15].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[22] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], 0u + 70u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[21].d[0];
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[12], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 736u));
    c.r[10].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[10].d[0] | c.r[2].d[0];
    st8((c.r[12].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[25].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[30].d[0];
    st8((c.r[6].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 536u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[6].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[22].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[23].d[0];
    st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[22].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[23].d[0];
    st8((c.r[3].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[23] = ld32((c.r[5].w[0] + 104u));
    c.budget -= 140;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D70u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002C6D70u) [[unlikely]] return; }
L_002C6D70:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D7Cu); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002C6D7Cu) [[unlikely]] return; }
L_002C6D7C:
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D8Cu); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002C6D8Cu) [[unlikely]] return; }
L_002C6D8C:
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[5] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    c.f[1] = c.f[23] ^ fp::kSign;
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[23]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[24]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C6E64; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C708C; } }
    set32(c.r[2], 0u + 171u);
    c.budget -= 1;
L_002C6DE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 372u), c.f[0]);  if (t) { goto L_002C6F6C; } }
L_002C6E64:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C709C; } }
    set32(c.r[2], 0u + 172u);
    c.budget -= 1;
L_002C6E78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[5] = 0u;
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.f[4] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    set32(c.r[3], 0u - 2u);
    st32((c.r[17].w[0] + 356u), c.r[5].w[0]);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 376u));
    c.f[2] = ld32((c.r[17].w[0] + 368u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 372u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 44u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
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
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.budget -= 61;
L_002C6F6C:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.f[5] = ld32((c.r[17].w[0] + 40u));
    c.f[4] = ld32((c.r[17].w[0] + 120u));
    c.f[6] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[9] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[8] = ld32((c.r[16].w[0]));
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[9]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[8]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[7]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[8], c.f[2]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[9], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[7], c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6FDCu); st32((c.r[29].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_0035(c, 6u, depth + 1u); else { c.pc = 0x002D4180u; return; } if (c.pc != 0x002C6FDCu) [[unlikely]] return; }
L_002C6FDC:
    c.f[1] = ld32((c.r[17].w[0] + 508u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C70AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C70AC; } }
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.budget -= 1;
L_002C701C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), c.f[21]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C70C4; } }
L_002C7050:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 526u));
    set32(c.r[5], 0u - 33u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[3], 0u - 65u);
    set32(c.r[4], c.r[4].w[0] << 6);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C70F4; } }
L_002C708C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7094u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C7094u) [[unlikely]] return; }
L_002C7094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 171u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6DE8u | kUnwind; return; } goto L_002C6DE8; } }
L_002C709C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C70A4u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C70A4u) [[unlikely]] return; }
L_002C70A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 172u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6E78u | kUnwind; return; } goto L_002C6E78; } }
L_002C70AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C70BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 52u, depth + 1u); else { c.pc = 0x002D4990u; return; } if (c.pc != 0x002C70BCu) [[unlikely]] return; }
L_002C70BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[17].w[0] + 52u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C701Cu | kUnwind; return; } goto L_002C701C; } }
L_002C70C4:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 48u), c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7050u | kUnwind; return; } goto L_002C7050; } }
L_002C70F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002C7140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C7184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 15968u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7178u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002C7178u) [[unlikely]] return; }
L_002C7178:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7184u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x002C7184u) [[unlikely]] return; }
L_002C7184:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C71A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 280u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7438; } }
    set32(c.r[3], 0u + 278u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7438; } }
    set32(c.r[3], 0u + 279u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7394; } }
    set32(c.r[3], 0u + 277u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C72F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C72E4; } }
    set32(c.r[3], 0u + 275u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7220; } }
    set32(c.r[3], 0u + 274u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7440; } }
L_002C7214:
    st32((c.r[16].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002C7440; } }
L_002C7220:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7448; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002C7234:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 5u);
    st32((c.r[16].w[0] + 356u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[7].w[0] + 1520u), 0u);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 44;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C7440; } }
L_002C72E4:
    st32((c.r[16].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002C7440; } }
L_002C72F0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7308u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C7308u) [[unlikely]] return; }
L_002C7308:
    set32(c.r[2], 0u + 278u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C738Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0020(c, 40u, depth + 1u); else { c.pc = 0x00280530u; return; } if (c.pc != 0x002C738Cu) [[unlikely]] return; }
L_002C738C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7440; } }
L_002C7394:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C73AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C73ACu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C73ACu) [[unlikely]] return; }
L_002C73AC:
    set32(c.r[2], 0u + 280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7430u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0020(c, 40u, depth + 1u); else { c.pc = 0x00280530u; return; } if (c.pc != 0x002C7430u) [[unlikely]] return; }
L_002C7430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7440; } }
L_002C7438:
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_002C7440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C7458; } }
L_002C7448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7450u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C7450u) [[unlikely]] return; }
L_002C7450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7234u | kUnwind; return; } goto L_002C7234; } }
L_002C7458:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C7470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C7C58; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[6] = 0u;
    c.f[7] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 508u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[7], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[4].w[0] + 32u);  if (t) { goto L_002C7668; } }
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[28].w[0] - 28940u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C761C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7BC8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7C08; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7BD0; } }
L_002C74F0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C74F4:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002C74F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7524; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7580; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C751Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x002C751Cu) [[unlikely]] return; }
L_002C751C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_002C7584; } }
L_002C7524:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7580; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7C10; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7C50; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C7C18; } }
L_002C7560:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C7564:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002C7568:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7580; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7580u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x002C7580u) [[unlikely]] return; }
L_002C7580:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_002C7584:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = ld32((c.r[3].w[0] - 24112u));
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C7600; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 808u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C75C8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C75C8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C75C8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002C7600; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C75F4; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C75F4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x002C75F4u) [[unlikely]] return; }
L_002C75F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7600u); set32(c.r[4], ld32((c.r[2].w[0] + 1356u)));  if (depth < kMaxDepth) unit_00A2(c, 17u, depth + 1u); else { c.pc = 0x004882F0u; return; } if (c.pc != 0x002C7600u) [[unlikely]] return; }
L_002C7600:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002C761C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 20u), c.f[1]);  if (t) { goto L_002C7C58; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 129u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C7C5C; } }
L_002C7668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = ld32((c.r[2].w[0] + 2440u));
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[2].w[0] + 2436u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[7], c.f[3]);
    st32((c.r[29].w[0] + 56u), c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 52u), c.f[3]);
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 48u), c.f[2]);  if (t) { goto L_002C7940; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002C76C8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C76F0; } }
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_002C76F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7704; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7704u);  if (depth < kMaxDepth) unit_0035(c, 52u, depth + 1u); else { c.pc = 0x002D4990u; return; } if (c.pc != 0x002C7704u) [[unlikely]] return; }
L_002C7704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C770Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 311u, depth + 1u); else { c.pc = 0x002C7C70u; return; } if (c.pc != 0x002C770Cu) [[unlikely]] return; }
L_002C770C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7970; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002C771C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7748; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
L_002C7748:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7800; } }
    c.f[13] = ld32((c.r[16].w[0] + 56u));
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[13], c.f[13]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C7980; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7B58; } }
    set32(c.r[3], 0u + 277u);
    c.budget -= 1;
L_002C7784:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_002C78BC; } }
L_002C7800:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7B68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7B68; } }
L_002C7824:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 1520u), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7BB8; } }
    set32(c.r[3], 0u + 275u);
    c.budget -= 1;
L_002C7844:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_002C78BC:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[10], 0u - 129u);
    set32(c.r[11], c.r[3].w[0] << 7);
    set32(c.r[7], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[9], 0u + 1u);
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[10].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[11].d[0];
    st8((c.r[6].w[0] + 524u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[10].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[11].d[0];
    st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C761Cu | kUnwind; return; } goto L_002C761C; } }
L_002C7940:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[2].w[0] + 248u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[1] = ld32((c.r[2].w[0] + 244u));
    c.f[0] = ld32((c.r[2].w[0] + 240u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7968u); st32((c.r[29].w[0] + 72u), c.f[2]);  if (depth < kMaxDepth) unit_007D(c, 21u, depth + 1u); else { c.pc = 0x003F41B0u; return; } if (c.pc != 0x002C7968u) [[unlikely]] return; }
L_002C7968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C76C8u | kUnwind; return; } goto L_002C76C8; } }
L_002C7970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7978u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x002C7978u) [[unlikely]] return; }
L_002C7978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C771Cu | kUnwind; return; } goto L_002C771C; } }
L_002C7980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7988u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002C7988u) [[unlikely]] return; }
L_002C7988:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[0] = 0u;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[3]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 36;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C7AA8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7B38; } }
    set32(c.r[3], 0u + 277u);
    c.budget -= 1;
L_002C7A2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C78BCu | kUnwind; return; } goto L_002C78BC; } }
L_002C7AA8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7B48; } }
    set32(c.r[3], 0u + 279u);
    c.budget -= 1;
L_002C7ABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C78BCu | kUnwind; return; } goto L_002C78BC; } }
L_002C7B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7B40u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C7B40u) [[unlikely]] return; }
L_002C7B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 277u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7A2Cu | kUnwind; return; } goto L_002C7A2C; } }
L_002C7B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7B50u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C7B50u) [[unlikely]] return; }
L_002C7B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 279u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7ABCu | kUnwind; return; } goto L_002C7ABC; } }
L_002C7B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7B60u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C7B60u) [[unlikely]] return; }
L_002C7B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 277u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7784u | kUnwind; return; } goto L_002C7784; } }
L_002C7B68:
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 122u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7824u | kUnwind; return; } goto L_002C7824; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7824u | kUnwind; return; } goto L_002C7824; } }
L_002C7BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7BC0u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002C7BC0u) [[unlikely]] return; }
L_002C7BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 275u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7844u | kUnwind; return; } goto L_002C7844; } }
L_002C7BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C74F8u | kUnwind; return; } goto L_002C74F8; } }
L_002C7BD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[17].w[0] + 24u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C74F0u | kUnwind; return; } goto L_002C74F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7BE8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002C7BE8u) [[unlikely]] return; }
L_002C7BE8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C74F4u | kUnwind; return; } goto L_002C74F4; } }
L_002C7C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C74F8u | kUnwind; return; } goto L_002C74F8; } }
L_002C7C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7568u | kUnwind; return; } goto L_002C7568; } }
L_002C7C18:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[17].w[0] + 24u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7560u | kUnwind; return; } goto L_002C7560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C30u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x002C7C30u) [[unlikely]] return; }
L_002C7C30:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7564u | kUnwind; return; } goto L_002C7564; } }
L_002C7C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7568u | kUnwind; return; } goto L_002C7568; } }
L_002C7C58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C7C5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C7C70:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 39u);  if (t) { goto L_002C7CD0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 537u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C7D1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 16112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0031[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C7CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_002C7D20; } }
L_002C7CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 40u);  if (t) { goto L_002C7D1C; } }
L_002C7CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 41u);  if (t) { goto L_002C7D1C; } }
L_002C7CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 41u);  if (t) { goto L_002C7D1C; } }
L_002C7CD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 537u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C7D1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 2;
L_002C7CEC:
    set32(c.r[3], c.r[3].w[0] - 16160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0031[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C7D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 19u);  if (t) { goto L_002C7D1C; } }
L_002C7D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 21u);  if (t) { goto L_002C7D1C; } }
L_002C7D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 22u);  if (t) { goto L_002C7D1C; } }
L_002C7D18:
    set32(c.r[5], 0u + 20u);
    c.budget -= 1;
L_002C7D1C:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002C7D20:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { set32(c.r[6], 0u - 1u);  [[clang::musttail]] return unit_0076(c, 6u, depth); }
L_002C7D30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[15], 0u - 9u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[13], 0u - 17u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[11], 0u - 33u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[9], 0u - 2049u);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[17], c.r[2].w[0] << 2);
    set32(c.r[24], c.r[2].w[0] << 3);
    set32(c.r[12], c.r[2].w[0] << 5);
    set32(c.r[10], c.r[2].w[0] << 11);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 57u);
    set32(c.r[7], c.r[7].w[0] - 15968u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[8] = ld32((c.r[29].w[0] + 92u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[17].d[0] = c.r[6].d[0] | c.r[17].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u - 2u);
    c.f[9] = ld32((c.r[29].w[0] + 108u));
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[18].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 67;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 8u);  if (t) { [[clang::musttail]] return unit_0032(c, 3u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 212u)));
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[18].w[0] + 112u));
    set32(c.r[17], 0u + 4u);
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 116u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { [[clang::musttail]] return unit_0032(c, 2u, depth); } }
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = ld32((c.r[3].w[0] + 4u));  if (t) { goto L_002C7EA8; } }
    c.f[22] = c.f[0];
    c.budget -= 1;
L_002C7EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EB0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002C7EB0u) [[unlikely]] return; }
L_002C7EB0:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EBCu); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002C7EBCu) [[unlikely]] return; }
L_002C7EBC:
    c.f[2] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[21]);
    st32((c.r[18].w[0] + 48u), c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 52u), 0u);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 60u), c.f[20]);
    c.budget -= 10;
L_002C7EE4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0032(c, 4u, depth); } }
    set32(c.r[2], 0u + 274u);
    c.budget -= 1;
L_002C7EF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[18].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[18].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[18].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 356u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0032(c, 6u, depth); } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 382u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 360u));
    st32((c.r[18].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 376u));
    c.f[0] = ld32((c.r[18].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 372u), c.f[0]);
    c.budget -= 17;
L_002C7F74:
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 65u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[12], 0u - 5u);
    set32(c.r[14], c.r[2].w[0] << 2);
    set32(c.r[13], 0u - 3u);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[10], 0u - 17u);
    set32(c.r[11], c.r[2].w[0] << 4);
    set32(c.r[8], c.r[2].w[0] << 6);
    set32(c.r[9], 0u - 2u);
    c.r[15].d[0] = ld8((c.r[18].w[0] + 736u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], 0u - 129u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[4].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[17].d[0];
    st8((c.r[18].w[0] + 736u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[16].w[0]));
    c.r[12].d[0] = c.r[15].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld16((c.r[16].w[0]));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld16((c.r[16].w[0]));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 524u));
    c.r[9].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.budget -= 35;
    [[clang::musttail]] return unit_0032(c, 1u, depth);
}

}

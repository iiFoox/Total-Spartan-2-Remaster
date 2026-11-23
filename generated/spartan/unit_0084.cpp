#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0084[4096] = {
    1, 2, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0,
    0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0,
    108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0,
    0, 122, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164,
    0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191,
    0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 220, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 274, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 288, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 330, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351,
    0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0,
    357, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 364, 0, 365, 0, 366, 0,
    0, 0, 367, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0,
    0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0,
    0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0,
    399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 413, 0, 414, 0, 415, 0, 0, 0, 416, 0,
    417, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0,
    434, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 438, 0, 439, 0, 440, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 444, 0, 445, 0,
    446, 0, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 453, 0, 454, 0, 455, 0, 0, 0, 456, 0, 457, 0,
    458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0,
    0, 466, 0, 467, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 0, 0, 476,
    0, 477, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 483, 0, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 487, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0,
    0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 516, 0, 517, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 524, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0,
    0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0084(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00410000;
    case 2u: goto L_00410004;
    case 3u: goto L_00410008;
    case 4u: goto L_0041001C;
    case 5u: goto L_00410040;
    case 6u: goto L_00410084;
    case 7u: goto L_004100BC;
    case 8u: goto L_00410118;
    case 9u: goto L_00410144;
    case 10u: goto L_00410198;
    case 11u: goto L_004101C4;
    case 12u: goto L_004101FC;
    case 13u: goto L_00410204;
    case 14u: goto L_00410210;
    case 15u: goto L_00410224;
    case 16u: goto L_00410240;
    case 17u: goto L_00410250;
    case 18u: goto L_00410274;
    case 19u: goto L_00410328;
    case 20u: goto L_004103D8;
    case 21u: goto L_00410498;
    case 22u: goto L_004104DC;
    case 23u: goto L_004104FC;
    case 24u: goto L_004105AC;
    case 25u: goto L_004105D8;
    case 26u: goto L_0041061C;
    case 27u: goto L_00410644;
    case 28u: goto L_0041064C;
    case 29u: goto L_00410670;
    case 30u: goto L_00410724;
    case 31u: goto L_004107D4;
    case 32u: goto L_00410894;
    case 33u: goto L_004108E4;
    case 34u: goto L_0041090C;
    case 35u: goto L_004109C4;
    case 36u: goto L_004109F0;
    case 37u: goto L_00410A34;
    case 38u: goto L_00410A68;
    case 39u: goto L_00410A70;
    case 40u: goto L_00410A78;
    case 41u: goto L_00410AA4;
    case 42u: goto L_00410AD8;
    case 43u: goto L_00410B10;
    case 44u: goto L_00410B78;
    case 45u: goto L_00410BA4;
    case 46u: goto L_00410BF0;
    case 47u: goto L_00410C1C;
    case 48u: goto L_00410C6C;
    case 49u: goto L_00410CA8;
    case 50u: goto L_00410CE0;
    case 51u: goto L_00410D34;
    case 52u: goto L_00410D64;
    case 53u: goto L_00410D80;
    case 54u: goto L_00410DBC;
    case 55u: goto L_00410DF4;
    case 56u: goto L_00410E48;
    case 57u: goto L_00410E80;
    case 58u: goto L_00410E88;
    case 59u: goto L_00410EB0;
    case 60u: goto L_00410ECC;
    case 61u: goto L_00410F04;
    case 62u: goto L_00410F10;
    case 63u: goto L_00410F50;
    case 64u: goto L_00410F8C;
    case 65u: goto L_00410F90;
    case 66u: goto L_00410FC4;
    case 67u: goto L_00410FEC;
    case 68u: goto L_00411000;
    case 69u: goto L_0041105C;
    case 70u: goto L_00411094;
    case 71u: goto L_004110C4;
    case 72u: goto L_004110CC;
    case 73u: goto L_004110DC;
    case 74u: goto L_00411100;
    case 75u: goto L_00411154;
    case 76u: goto L_004111A4;
    case 77u: goto L_004111BC;
    case 78u: goto L_004111C4;
    case 79u: goto L_004111DC;
    case 80u: goto L_004111F4;
    case 81u: goto L_004111FC;
    case 82u: goto L_00411210;
    case 83u: goto L_00411264;
    case 84u: goto L_00411280;
    case 85u: goto L_00411290;
    case 86u: goto L_004112FC;
    case 87u: goto L_00411314;
    case 88u: goto L_00411324;
    case 89u: goto L_0041133C;
    case 90u: goto L_00411344;
    case 91u: goto L_0041134C;
    case 92u: goto L_00411358;
    case 93u: goto L_00411370;
    case 94u: goto L_00411378;
    case 95u: goto L_00411384;
    case 96u: goto L_00411390;
    case 97u: goto L_004113A8;
    case 98u: goto L_004113C4;
    case 99u: goto L_004113CC;
    case 100u: goto L_004113D4;
    case 101u: goto L_004113F4;
    case 102u: goto L_004113FC;
    case 103u: goto L_00411408;
    case 104u: goto L_00411434;
    case 105u: goto L_0041143C;
    case 106u: goto L_0041145C;
    case 107u: goto L_00411478;
    case 108u: goto L_00411480;
    case 109u: goto L_00411488;
    case 110u: goto L_004114A8;
    case 111u: goto L_004114B0;
    case 112u: goto L_004114BC;
    case 113u: goto L_004114E8;
    case 114u: goto L_004114F0;
    case 115u: goto L_0041150C;
    case 116u: goto L_00411528;
    case 117u: goto L_00411530;
    case 118u: goto L_00411538;
    case 119u: goto L_00411558;
    case 120u: goto L_00411560;
    case 121u: goto L_0041156C;
    case 122u: goto L_00411584;
    case 123u: goto L_00411588;
    case 124u: goto L_004115A4;
    case 125u: goto L_004115AC;
    case 126u: goto L_004115C4;
    case 127u: goto L_004115CC;
    case 128u: goto L_004115E0;
    case 129u: goto L_004115E8;
    case 130u: goto L_004115F8;
    case 131u: goto L_00411600;
    case 132u: goto L_00411618;
    case 133u: goto L_00411634;
    case 134u: goto L_0041163C;
    case 135u: goto L_00411644;
    case 136u: goto L_00411664;
    case 137u: goto L_0041166C;
    case 138u: goto L_00411678;
    case 139u: goto L_0041169C;
    case 140u: goto L_004116B0;
    case 141u: goto L_00411704;
    case 142u: goto L_0041170C;
    case 143u: goto L_00411724;
    case 144u: goto L_00411740;
    case 145u: goto L_00411748;
    case 146u: goto L_00411750;
    case 147u: goto L_00411770;
    case 148u: goto L_00411778;
    case 149u: goto L_00411784;
    case 150u: goto L_004117A8;
    case 151u: goto L_004117BC;
    case 152u: goto L_0041180C;
    case 153u: goto L_00411814;
    case 154u: goto L_0041183C;
    case 155u: goto L_00411858;
    case 156u: goto L_00411868;
    case 157u: goto L_00411870;
    case 158u: goto L_00411898;
    case 159u: goto L_004118B4;
    case 160u: goto L_004118C4;
    case 161u: goto L_004118CC;
    case 162u: goto L_004118E4;
    case 163u: goto L_004118EC;
    case 164u: goto L_004118FC;
    case 165u: goto L_00411908;
    case 166u: goto L_00411920;
    case 167u: goto L_00411950;
    case 168u: goto L_00411968;
    case 169u: goto L_00411970;
    case 170u: goto L_00411988;
    case 171u: goto L_00411998;
    case 172u: goto L_004119B0;
    case 173u: goto L_004119C0;
    case 174u: goto L_004119D8;
    case 175u: goto L_004119E0;
    case 176u: goto L_00411A00;
    case 177u: goto L_00411A10;
    case 178u: goto L_00411A18;
    case 179u: goto L_00411A38;
    case 180u: goto L_00411A48;
    case 181u: goto L_00411A50;
    case 182u: goto L_00411A68;
    case 183u: goto L_00411A70;
    case 184u: goto L_00411A7C;
    case 185u: goto L_00411A90;
    case 186u: goto L_00411AA8;
    case 187u: goto L_00411AB0;
    case 188u: goto L_00411AC4;
    case 189u: goto L_00411ADC;
    case 190u: goto L_00411AF4;
    case 191u: goto L_00411AFC;
    case 192u: goto L_00411B08;
    case 193u: goto L_00411B1C;
    case 194u: goto L_00411B34;
    case 195u: goto L_00411B3C;
    case 196u: goto L_00411B54;
    case 197u: goto L_00411B70;
    case 198u: goto L_00411B88;
    case 199u: goto L_00411BA4;
    case 200u: goto L_00411BBC;
    case 201u: goto L_00411BD8;
    case 202u: goto L_00411BF0;
    case 203u: goto L_00411C0C;
    case 204u: goto L_00411C24;
    case 205u: goto L_00411C40;
    case 206u: goto L_00411C58;
    case 207u: goto L_00411C78;
    case 208u: goto L_00411C90;
    case 209u: goto L_00411CC4;
    case 210u: goto L_00411CDC;
    case 211u: goto L_00411D10;
    case 212u: goto L_00411D28;
    case 213u: goto L_00411D5C;
    case 214u: goto L_00411D74;
    case 215u: goto L_00411D94;
    case 216u: goto L_00411DAC;
    case 217u: goto L_00411E4C;
    case 218u: goto L_00411E64;
    case 219u: goto L_00411E80;
    case 220u: goto L_00411E98;
    case 221u: goto L_00411E9C;
    case 222u: goto L_00411EA8;
    case 223u: goto L_00411EB4;
    case 224u: goto L_00411EBC;
    case 225u: goto L_00411ED4;
    case 226u: goto L_00411EDC;
    case 227u: goto L_00411EF4;
    case 228u: goto L_00411F04;
    case 229u: goto L_00411F0C;
    case 230u: goto L_00411F24;
    case 231u: goto L_00411F40;
    case 232u: goto L_00411F48;
    case 233u: goto L_00411F60;
    case 234u: goto L_00411F68;
    case 235u: goto L_00411F84;
    case 236u: goto L_00411FA0;
    case 237u: goto L_00411FB8;
    case 238u: goto L_00411FD4;
    case 239u: goto L_00411FF0;
    case 240u: goto L_0041200C;
    case 241u: goto L_00412028;
    case 242u: goto L_00412038;
    case 243u: goto L_00412048;
    case 244u: goto L_00412058;
    case 245u: goto L_00412068;
    case 246u: goto L_00412090;
    case 247u: goto L_004120A4;
    case 248u: goto L_004120AC;
    case 249u: goto L_004120C4;
    case 250u: goto L_004120CC;
    case 251u: goto L_004120E4;
    case 252u: goto L_00412100;
    case 253u: goto L_00412110;
    case 254u: goto L_00412118;
    case 255u: goto L_00412138;
    case 256u: goto L_0041213C;
    case 257u: goto L_004121B8;
    case 258u: goto L_004121CC;
    case 259u: goto L_004121E8;
    case 260u: goto L_004121FC;
    case 261u: goto L_00412218;
    case 262u: goto L_0041222C;
    case 263u: goto L_0041223C;
    case 264u: goto L_00412250;
    case 265u: goto L_004122D4;
    case 266u: goto L_004122E8;
    case 267u: goto L_00412304;
    case 268u: goto L_00412318;
    case 269u: goto L_004123A4;
    case 270u: goto L_004123B0;
    case 271u: goto L_004124D0;
    case 272u: goto L_00412520;
    case 273u: goto L_00412564;
    case 274u: goto L_00412568;
    case 275u: goto L_00412598;
    case 276u: goto L_004125C0;
    case 277u: goto L_004125C8;
    case 278u: goto L_004125D0;
    case 279u: goto L_00412624;
    case 280u: goto L_0041264C;
    case 281u: goto L_00412658;
    case 282u: goto L_00412660;
    case 283u: goto L_004126D4;
    case 284u: goto L_004126FC;
    case 285u: goto L_00412708;
    case 286u: goto L_00412710;
    case 287u: goto L_00412764;
    case 288u: goto L_0041278C;
    case 289u: goto L_00412798;
    case 290u: goto L_004127A0;
    case 291u: goto L_004127F4;
    case 292u: goto L_00412844;
    case 293u: goto L_00412850;
    case 294u: goto L_00412858;
    case 295u: goto L_00412884;
    case 296u: goto L_00412890;
    case 297u: goto L_00412898;
    case 298u: goto L_004128EC;
    case 299u: goto L_0041295C;
    case 300u: goto L_00412968;
    case 301u: goto L_00412970;
    case 302u: goto L_00412994;
    case 303u: goto L_004129A0;
    case 304u: goto L_004129A8;
    case 305u: goto L_004129CC;
    case 306u: goto L_004129D8;
    case 307u: goto L_004129E0;
    case 308u: goto L_00412A4C;
    case 309u: goto L_00412AA4;
    case 310u: goto L_00412AB8;
    case 311u: goto L_00412B08;
    case 312u: goto L_00412B10;
    case 313u: goto L_00412B78;
    case 314u: goto L_00412B80;
    case 315u: goto L_00412C18;
    case 316u: goto L_00412C20;
    case 317u: goto L_00412C88;
    case 318u: goto L_00412C90;
    case 319u: goto L_00412CF8;
    case 320u: goto L_00412D00;
    case 321u: goto L_00412DA8;
    case 322u: goto L_00412DB0;
    case 323u: goto L_00412E58;
    case 324u: goto L_00412E60;
    case 325u: goto L_00412EC8;
    case 326u: goto L_00412ED0;
    case 327u: goto L_00412F38;
    case 328u: goto L_00412F40;
    case 329u: goto L_00412FD0;
    case 330u: goto L_0041300C;
    case 331u: goto L_00413010;
    case 332u: goto L_00413034;
    case 333u: goto L_00413070;
    case 334u: goto L_004130AC;
    case 335u: goto L_004130C0;
    case 336u: goto L_00413130;
    case 337u: goto L_00413140;
    case 338u: goto L_00413160;
    case 339u: goto L_00413188;
    case 340u: goto L_004131A4;
    case 341u: goto L_004131AC;
    case 342u: goto L_004131B8;
    case 343u: goto L_004131C0;
    case 344u: goto L_004131C8;
    case 345u: goto L_00413220;
    case 346u: goto L_00413230;
    case 347u: goto L_00413240;
    case 348u: goto L_00413250;
    case 349u: goto L_00413258;
    case 350u: goto L_0041326C;
    case 351u: goto L_0041327C;
    case 352u: goto L_0041328C;
    case 353u: goto L_0041329C;
    case 354u: goto L_004132A4;
    case 355u: goto L_004132E0;
    case 356u: goto L_004132F0;
    case 357u: goto L_00413300;
    case 358u: goto L_00413310;
    case 359u: goto L_00413318;
    case 360u: goto L_00413338;
    case 361u: goto L_00413348;
    case 362u: goto L_00413350;
    case 363u: goto L_00413358;
    case 364u: goto L_00413368;
    case 365u: goto L_00413370;
    case 366u: goto L_00413378;
    case 367u: goto L_00413388;
    case 368u: goto L_00413390;
    case 369u: goto L_0041339C;
    case 370u: goto L_004133AC;
    case 371u: goto L_004133B4;
    case 372u: goto L_004133BC;
    case 373u: goto L_004133CC;
    case 374u: goto L_004133DC;
    case 375u: goto L_004133E4;
    case 376u: goto L_004133F0;
    case 377u: goto L_004133F8;
    case 378u: goto L_00413408;
    case 379u: goto L_00413410;
    case 380u: goto L_00413418;
    case 381u: goto L_00413428;
    case 382u: goto L_00413438;
    case 383u: goto L_00413440;
    case 384u: goto L_0041344C;
    case 385u: goto L_00413454;
    case 386u: goto L_00413468;
    case 387u: goto L_00413478;
    case 388u: goto L_00413488;
    case 389u: goto L_00413490;
    case 390u: goto L_00413498;
    case 391u: goto L_004134A8;
    case 392u: goto L_004134B0;
    case 393u: goto L_004134B8;
    case 394u: goto L_004134C8;
    case 395u: goto L_004134D0;
    case 396u: goto L_004134D8;
    case 397u: goto L_004134E8;
    case 398u: goto L_004134F8;
    case 399u: goto L_00413500;
    case 400u: goto L_00413514;
    case 401u: goto L_00413524;
    case 402u: goto L_00413534;
    case 403u: goto L_0041353C;
    case 404u: goto L_00413544;
    case 405u: goto L_00413554;
    case 406u: goto L_00413564;
    case 407u: goto L_00413574;
    case 408u: goto L_004135A0;
    case 409u: goto L_004135A8;
    case 410u: goto L_004135B8;
    case 411u: goto L_004135C0;
    case 412u: goto L_004135C8;
    case 413u: goto L_004135D8;
    case 414u: goto L_004135E0;
    case 415u: goto L_004135E8;
    case 416u: goto L_004135F8;
    case 417u: goto L_00413600;
    case 418u: goto L_00413608;
    case 419u: goto L_00413618;
    case 420u: goto L_00413620;
    case 421u: goto L_00413628;
    case 422u: goto L_00413638;
    case 423u: goto L_00413648;
    case 424u: goto L_00413650;
    case 425u: goto L_00413688;
    case 426u: goto L_00413698;
    case 427u: goto L_004136A8;
    case 428u: goto L_004136B8;
    case 429u: goto L_004136C0;
    case 430u: goto L_004136CC;
    case 431u: goto L_004136DC;
    case 432u: goto L_004136EC;
    case 433u: goto L_004136F4;
    case 434u: goto L_00413700;
    case 435u: goto L_00413710;
    case 436u: goto L_00413718;
    case 437u: goto L_00413720;
    case 438u: goto L_00413730;
    case 439u: goto L_00413738;
    case 440u: goto L_00413740;
    case 441u: goto L_00413750;
    case 442u: goto L_00413758;
    case 443u: goto L_00413760;
    case 444u: goto L_00413770;
    case 445u: goto L_00413778;
    case 446u: goto L_00413780;
    case 447u: goto L_00413790;
    case 448u: goto L_00413798;
    case 449u: goto L_004137A0;
    case 450u: goto L_004137B0;
    case 451u: goto L_004137B8;
    case 452u: goto L_004137C0;
    case 453u: goto L_004137D0;
    case 454u: goto L_004137D8;
    case 455u: goto L_004137E0;
    case 456u: goto L_004137F0;
    case 457u: goto L_004137F8;
    case 458u: goto L_00413800;
    case 459u: goto L_00413810;
    case 460u: goto L_00413820;
    case 461u: goto L_00413828;
    case 462u: goto L_00413844;
    case 463u: goto L_0041384C;
    case 464u: goto L_00413860;
    case 465u: goto L_00413874;
    case 466u: goto L_00413884;
    case 467u: goto L_0041388C;
    case 468u: goto L_0041389C;
    case 469u: goto L_004138A4;
    case 470u: goto L_004138B8;
    case 471u: goto L_004138C0;
    case 472u: goto L_004138D0;
    case 473u: goto L_004138D8;
    case 474u: goto L_004138E4;
    case 475u: goto L_004138EC;
    case 476u: goto L_004138FC;
    case 477u: goto L_00413904;
    case 478u: goto L_00413910;
    case 479u: goto L_00413918;
    case 480u: goto L_00413928;
    case 481u: goto L_00413930;
    case 482u: goto L_00413940;
    case 483u: goto L_00413948;
    case 484u: goto L_00413958;
    case 485u: goto L_00413960;
    case 486u: goto L_00413970;
    case 487u: goto L_00413978;
    case 488u: goto L_004139A0;
    case 489u: goto L_004139B4;
    case 490u: goto L_004139BC;
    case 491u: goto L_004139E4;
    case 492u: goto L_004139F4;
    case 493u: goto L_00413A04;
    case 494u: goto L_00413A3C;
    case 495u: goto L_00413A4C;
    case 496u: goto L_00413A84;
    case 497u: goto L_00413A94;
    case 498u: goto L_00413ACC;
    case 499u: goto L_00413ADC;
    case 500u: goto L_00413B14;
    case 501u: goto L_00413B24;
    case 502u: goto L_00413B5C;
    case 503u: goto L_00413B6C;
    case 504u: goto L_00413BA4;
    case 505u: goto L_00413BB4;
    case 506u: goto L_00413BEC;
    case 507u: goto L_00413BFC;
    case 508u: goto L_00413C34;
    case 509u: goto L_00413C3C;
    case 510u: goto L_00413C68;
    case 511u: goto L_00413C70;
    case 512u: goto L_00413C9C;
    case 513u: goto L_00413CA4;
    case 514u: goto L_00413CD0;
    case 515u: goto L_00413CD8;
    case 516u: goto L_00413D04;
    case 517u: goto L_00413D0C;
    case 518u: goto L_00413D20;
    case 519u: goto L_00413D28;
    case 520u: goto L_00413D3C;
    case 521u: goto L_00413D44;
    case 522u: goto L_00413D58;
    case 523u: goto L_00413D60;
    case 524u: goto L_00413D88;
    case 525u: goto L_00413D90;
    case 526u: goto L_00413DB4;
    case 527u: goto L_00413DBC;
    case 528u: goto L_00413E18;
    case 529u: goto L_00413E20;
    case 530u: goto L_00413E3C;
    case 531u: goto L_00413E44;
    case 532u: goto L_00413E70;
    case 533u: goto L_00413EA8;
    case 534u: goto L_00413EC4;
    case 535u: goto L_00413EE0;
    case 536u: goto L_00413F74;
    case 537u: goto L_00413F84;
    case 538u: goto L_00413FB4;
    default: bad_entry(c, 0x00410000u); return;
    }
L_00410000:
    set32(c.r[4], 0u + 12u);
    c.budget -= 1;
L_00410004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410014; } }
    goto L_0041000C;
L_00410008:
    c.budget -= 1;
L_0041000C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_00410014:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0041001C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28720u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28720u), c.r[2].w[0]);  if (t) { goto L_004101FC; } }
L_00410040:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00410AAC; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004101FC; } }
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004100A4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 248u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 27600u);  if (t) { goto L_00410094; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00410094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410084u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00410084u) [[unlikely]] return; }
L_00410084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00410094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00410098; } }
L_00410094:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00410098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004100A4; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004100A4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410E40; } }
    set32(c.r[4], c.r[19].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004100BCu); st8((c.r[19].w[0] + 541u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004100BCu) [[unlikely]] return; }
L_004100BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 40u));
    c.f[12] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[7], ld32((c.r[19].w[0] + 672u)));
    c.f[13] = ld32((c.r[19].w[0] + 28u));
    c.r[8].d[0] = ld8((c.r[19].w[0] + 552u));
    c.f[14] = ld32((c.r[19].w[0] + 448u));
    set32(c.r[10], ld32((c.r[19].w[0] + 44u)));
    c.f[15] = ld32((c.r[19].w[0] + 452u));
    c.f[16] = ld32((c.r[19].w[0] + 456u));
    set32(c.r[2], c.r[2].w[0] - 12352u);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[17] = ld32((c.r[19].w[0] + 460u));
    c.f[18] = ld32((c.r[19].w[0] + 476u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410118u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 207u, depth + 1u); else { c.pc = 0x004175E0u; return; } if (c.pc != 0x00410118u) [[unlikely]] return; }
L_00410118:
    set32(c.r[3], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 520u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410D6C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 539u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00410D6C; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 488u)));
    c.budget -= 3;
L_00410144:
    set32(c.r[5], ld32((c.r[28].w[0] - 28732u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28958u));
    set32(c.r[3], c.r[3].w[0] - 12352u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 28956u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004101BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410198u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410198u) [[unlikely]] return; }
L_00410198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004101AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_004101AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_004101DC; } }
L_004101BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004101C4u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004101C4u) [[unlikely]] return; }
L_004101C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004101D4; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_004101D4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_004101DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 28732u), c.r[2].w[0]);
    c.budget -= 8;
L_004101FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00410E88; } }
L_00410204:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410210u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00410210u) [[unlikely]] return; }
L_00410210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041022C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410224u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 281u, depth + 1u); else { c.pc = 0x0040E390u; return; } if (c.pc != 0x00410224u) [[unlikely]] return; }
L_00410224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00410E88; } }
L_0041022C:
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410240u); set32(c.r[5], c.r[5].w[0] + 11867u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00410240u) [[unlikely]] return; }
L_00410240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00410204u | kUnwind; return; } goto L_00410204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 556u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FC30u | kUnwind; return; } [[clang::musttail]] return unit_0083(c, 382u, depth); } }
L_00410250:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410614; } }
    st8((c.r[19].w[0] + 541u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28804u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410274u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410274u) [[unlikely]] return; }
L_00410274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410310; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28804u)));
    c.r[11].d[0] = 0ull & 1ull;
    set32(c.r[10], 0u - 2u);
    set32(c.r[8], 0u - 3u);
    set32(c.r[9], c.r[11].w[0] << 1);
    set32(c.r[6], 0u - 5u);
    set32(c.r[7], c.r[11].w[0] << 2);
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[11].w[0] << 3);
    st32((c.r[2].w[0]), 0u);
    c.r[12].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 37;
L_00410310:
    set32(c.r[3], ld32((c.r[28].w[0] - 28804u)));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28804u), c.r[2].w[0]);  if (t) { goto L_004103C8; } }
L_00410320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410328u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410328u) [[unlikely]] return; }
L_00410328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004103C0; } }
    st32((c.r[2].w[0]), 0u);
    c.r[10].d[0] = 0ull & 1ull;
    c.r[11].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[9], 0u - 2u);
    set32(c.r[7], 0u - 3u);
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[5], 0u - 5u);
    set32(c.r[6], c.r[10].w[0] << 2);
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], c.r[10].w[0] << 3);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 36;
L_004103C0:
    st32((c.r[28].w[0] - 28808u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28804u), c.r[2].w[0]);
    c.budget -= 2;
L_004103C8:
    set32(c.r[16], ld32((c.r[28].w[0] - 28804u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004103D8u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x004103D8u) [[unlikely]] return; }
L_004103D8:
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 3u);
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], c.r[19].w[0] + 148u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 556u)));
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 556u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[7], c.r[7].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = ld8((c.r[7].w[0] + 528u));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 484u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[5], c.r[6].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 460u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 468u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 700u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[5].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410498u); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00410498u) [[unlikely]] return; }
L_00410498:
    set32(c.r[4], ld32((c.r[28].w[0] - 28716u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 40u));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[7], ld32((c.r[19].w[0] + 672u)));
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.f[14] = ld32((c.r[19].w[0] + 472u));
    c.f[15] = ld32((c.r[19].w[0] + 468u));
    set32(c.r[2], c.r[2].w[0] - 30992u);
    c.f[16] = ld32((c.r[19].w[0] + 476u));
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004104DCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 110u, depth + 1u); else { c.pc = 0x00419A60u; return; } if (c.pc != 0x004104DCu) [[unlikely]] return; }
L_004104DC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28716u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30992u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004104FCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 107u, depth + 1u); else { c.pc = 0x004199C0u; return; } if (c.pc != 0x004104FCu) [[unlikely]] return; }
L_004104FC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 520u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041054C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28752u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[28].w[0] - 28752u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 488u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 520u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041055C; } }
L_0041054C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 488u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0041055C:
    set32(c.r[6], ld32((c.r[28].w[0] - 28716u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] - 30992u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28966u));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 28964u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004105D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004105ACu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004105ACu) [[unlikely]] return; }
L_004105AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004105C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_004105C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_004105F0; } }
L_004105D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004105D8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004105D8u) [[unlikely]] return; }
L_004105D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004105E8; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_004105E8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_004105F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28716u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28716u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004101FCu | kUnwind; return; } goto L_004101FC; } }
L_00410614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041061Cu); set32(c.r[4], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0041061Cu) [[unlikely]] return; }
L_0041061C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28716u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 30992u);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410644u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 101u, depth + 1u); else { c.pc = 0x004198E0u; return; } if (c.pc != 0x00410644u) [[unlikely]] return; }
L_00410644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004101FCu | kUnwind; return; } goto L_004101FC; } }
L_0041064C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410A2C; } }
    st8((c.r[19].w[0] + 541u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28804u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041071C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410670u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410670u) [[unlikely]] return; }
L_00410670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041070C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28804u)));
    c.r[11].d[0] = 0ull & 1ull;
    set32(c.r[10], 0u - 2u);
    set32(c.r[8], 0u - 3u);
    set32(c.r[9], c.r[11].w[0] << 1);
    set32(c.r[6], 0u - 5u);
    set32(c.r[7], c.r[11].w[0] << 2);
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[11].w[0] << 3);
    st32((c.r[2].w[0]), 0u);
    c.r[12].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 37;
L_0041070C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28804u)));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28804u), c.r[2].w[0]);  if (t) { goto L_004107C4; } }
L_0041071C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410724u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410724u) [[unlikely]] return; }
L_00410724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004107BC; } }
    st32((c.r[2].w[0]), 0u);
    c.r[10].d[0] = 0ull & 1ull;
    c.r[11].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[9], 0u - 2u);
    set32(c.r[7], 0u - 3u);
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[5], 0u - 5u);
    set32(c.r[6], c.r[10].w[0] << 2);
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], c.r[10].w[0] << 3);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 36;
L_004107BC:
    st32((c.r[28].w[0] - 28808u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28804u), c.r[2].w[0]);
    c.budget -= 2;
L_004107C4:
    set32(c.r[16], ld32((c.r[28].w[0] - 28804u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004107D4u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x004107D4u) [[unlikely]] return; }
L_004107D4:
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 3u);
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], c.r[19].w[0] + 148u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 556u)));
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 556u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[7], c.r[7].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = ld8((c.r[7].w[0] + 528u));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 484u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[5], c.r[6].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 460u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 468u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 700u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[5].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410894u); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00410894u) [[unlikely]] return; }
L_00410894:
    set32(c.r[4], ld32((c.r[28].w[0] - 28724u)));
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 40u));
    set32(c.r[7], ld32((c.r[19].w[0] + 672u)));
    c.f[14] = ld32((c.r[19].w[0] + 472u));
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.f[15] = ld32((c.r[19].w[0] + 468u));
    c.r[9].d[0] = ld8((c.r[19].w[0] + 7u));
    c.f[16] = ld32((c.r[19].w[0] + 476u));
    set32(c.r[2], c.r[2].w[0] + 29328u);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[13] = c.f[12];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004108E4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 56u, depth + 1u); else { c.pc = 0x00418D50u; return; } if (c.pc != 0x004108E4u) [[unlikely]] return; }
L_004108E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 29328u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041090Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 53u, depth + 1u); else { c.pc = 0x00418CB0u; return; } if (c.pc != 0x0041090Cu) [[unlikely]] return; }
L_0041090C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 520u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041095C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28748u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[28].w[0] - 28748u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 488u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 520u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041096C; } }
L_0041095C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 488u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0041096C:
    set32(c.r[6], ld32((c.r[28].w[0] - 28724u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28982u));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 28980u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004109E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004109C4u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004109C4u) [[unlikely]] return; }
L_004109C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004109D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_004109D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00410A08; } }
L_004109E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004109F0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004109F0u) [[unlikely]] return; }
L_004109F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410A00; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_00410A00:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00410A08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28724u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28724u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004101FCu | kUnwind; return; } goto L_004101FC; } }
L_00410A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A34u); set32(c.r[4], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00410A34u) [[unlikely]] return; }
L_00410A34:
    set32(c.r[3], ld32((c.r[28].w[0] - 28724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] + 29328u);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A68u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 48u, depth + 1u); else { c.pc = 0x00418BF0u; return; } if (c.pc != 0x00410A68u) [[unlikely]] return; }
L_00410A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004101FCu | kUnwind; return; } goto L_004101FC; } }
L_00410A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410A78u); set32(c.r[4], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00410A78u) [[unlikely]] return; }
L_00410A78:
    set32(c.r[3], ld32((c.r[28].w[0] - 28720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410AA4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 9u, depth + 1u); else { c.pc = 0x00418220u; return; } if (c.pc != 0x00410AA4u) [[unlikely]] return; }
L_00410AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004101FCu | kUnwind; return; } goto L_004101FC; } }
L_00410AAC:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410AF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 248u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 27600u);  if (t) { goto L_00410AE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00410AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410AD8u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00410AD8u) [[unlikely]] return; }
L_00410AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00410AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00410AEC; } }
L_00410AE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00410AEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410AF8; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00410AF8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410D2C; } }
    set32(c.r[4], c.r[19].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410B10u); st8((c.r[19].w[0] + 541u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00410B10u) [[unlikely]] return; }
L_00410B10:
    c.f[0] = ld32((c.r[19].w[0] + 460u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 30768u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 148u);
    st32((c.r[29].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 476u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28728u)));
    c.f[12] = ld32((c.r[19].w[0] + 20u));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 40u));
    c.f[13] = ld32((c.r[19].w[0] + 24u));
    c.f[14] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[7], ld32((c.r[19].w[0] + 672u)));
    c.f[15] = ld32((c.r[19].w[0] + 28u));
    c.r[8].d[0] = ld8((c.r[19].w[0] + 552u));
    c.f[16] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[10], ld32((c.r[19].w[0] + 44u)));
    c.f[17] = ld32((c.r[19].w[0] + 448u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.f[18] = ld32((c.r[19].w[0] + 452u));
    c.f[19] = ld32((c.r[19].w[0] + 456u));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410B78u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 161u, depth + 1u); else { c.pc = 0x00416DC0u; return; } if (c.pc != 0x00410B78u) [[unlikely]] return; }
L_00410B78:
    set32(c.r[3], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 520u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410C58; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 539u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00410C58; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 488u)));
    c.budget -= 3;
L_00410BA4:
    set32(c.r[5], ld32((c.r[28].w[0] - 28728u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28950u));
    set32(c.r[3], c.r[3].w[0] + 30768u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 28948u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410C14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410BF0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410BF0u) [[unlikely]] return; }
L_00410BF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410C04; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_00410C04:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00410C34; } }
L_00410C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410C1Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410C1Cu) [[unlikely]] return; }
L_00410C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410C2C; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_00410C2C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00410C34:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28728u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28728u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004101FCu | kUnwind; return; } goto L_004101FC; } }
L_00410C58:
    set32(c.r[2], ld32((c.r[28].w[0] - 28812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410CA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410C6Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410C6Cu) [[unlikely]] return; }
L_00410C6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410C90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28812u)));
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 7;
L_00410C90:
    set32(c.r[3], ld32((c.r[28].w[0] - 28812u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28812u), c.r[2].w[0]);  if (t) { goto L_00410CD0; } }
L_00410CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CA8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410CA8u) [[unlikely]] return; }
L_00410CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410CC8; } }
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 6;
L_00410CC8:
    st32((c.r[28].w[0] - 28816u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28812u), c.r[2].w[0]);
    c.budget -= 2;
L_00410CD0:
    set32(c.r[16], ld32((c.r[28].w[0] - 28812u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410CE0u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x00410CE0u) [[unlikely]] return; }
L_00410CE0:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28736u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[28].w[0] - 28736u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 488u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 520u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 539u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00410BA4u | kUnwind; return; } goto L_00410BA4; } }
L_00410D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D34u); set32(c.r[4], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00410D34u) [[unlikely]] return; }
L_00410D34:
    set32(c.r[3], ld32((c.r[28].w[0] - 28728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].d[0] = ld8((c.r[19].w[0] + 552u));
    set32(c.r[2], c.r[2].w[0] + 30768u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D64u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 156u, depth + 1u); else { c.pc = 0x00416D00u; return; } if (c.pc != 0x00410D64u) [[unlikely]] return; }
L_00410D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004101FCu | kUnwind; return; } goto L_004101FC; } }
L_00410D6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410DB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410D80u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410D80u) [[unlikely]] return; }
L_00410D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410DA4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28812u)));
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 7;
L_00410DA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 28812u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28812u), c.r[2].w[0]);  if (t) { goto L_00410DE4; } }
L_00410DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410DBCu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410DBCu) [[unlikely]] return; }
L_00410DBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00410DDC; } }
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 6;
L_00410DDC:
    st32((c.r[28].w[0] - 28816u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28812u), c.r[2].w[0]);
    c.budget -= 2;
L_00410DE4:
    set32(c.r[16], ld32((c.r[28].w[0] - 28812u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410DF4u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x00410DF4u) [[unlikely]] return; }
L_00410DF4:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28740u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[28].w[0] - 28740u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 488u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 520u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 539u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00410144u | kUnwind; return; } goto L_00410144; } }
L_00410E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E48u); set32(c.r[4], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00410E48u) [[unlikely]] return; }
L_00410E48:
    set32(c.r[3], ld32((c.r[28].w[0] - 28732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[7].d[0] = ld8((c.r[19].w[0] + 552u));
    set32(c.r[2], c.r[2].w[0] - 12352u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410E80u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 202u, depth + 1u); else { c.pc = 0x00417520u; return; } if (c.pc != 0x00410E80u) [[unlikely]] return; }
L_00410E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004101FCu | kUnwind; return; } goto L_004101FC; } }
L_00410E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00410EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00410F28; } }
L_00410ECC:
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00410F10; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00410F08; } }
    c.r[2].d[0] = 0ull | 65535ull;
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00410F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F04u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00410F04u) [[unlikely]] return; }
L_00410F04:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00410F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410F10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00410F10u) [[unlikely]] return; }
L_00410F10:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00410ECCu | kUnwind; return; } goto L_00410ECC; } }
    c.budget -= 1;
L_00410F28:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00410F50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00410FEC; } }
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 1;
L_00410F8C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00410F90:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004110E4; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00411048; } }
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 2;
L_00410FC4:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00410FC4u | kUnwind; return; } goto L_00410FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0041104C; } }
L_00410FEC:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00411000u) [[unlikely]] return; }
L_00411000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00411018; } }
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00410F90u | kUnwind; return; } goto L_00410F90; } }
L_00411018:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00410FECu | kUnwind; return; } goto L_00410FEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00410F8Cu | kUnwind; return; } goto L_00410F8C; } }
L_00411048:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0041104C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041108C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041105Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0041105Cu) [[unlikely]] return; }
L_0041105C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041107C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = 0ull | 65535ull;
    st32((c.r[2].w[0]), 0u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 6;
L_0041107C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_004110B8; } }
L_0041108C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411094u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00411094u) [[unlikely]] return; }
L_00411094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004110B0; } }
    st32((c.r[2].w[0]), 0u);
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 5;
L_004110B0:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_004110B8:
    set32(c.r[18], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004110C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004110C4u) [[unlikely]] return; }
L_004110C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004110CCu); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x004110CCu) [[unlikely]] return; }
L_004110CC:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004110DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004110DCu) [[unlikely]] return; }
L_004110DC:
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 2;
L_004110E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00411100:
    set32(c.r[29], c.r[29].w[0] - 1296u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 704u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 192u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411154u); st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00411154u) [[unlikely]] return; }
L_00411154:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], c.r[29].w[0] + 348u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[23], c.r[29].w[0] + 861u);
    set32(c.r[3], c.r[29].w[0] + 356u);
    set32(c.r[4], 0u + 100u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[29].w[0] + 364u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[29].w[0] + 780u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 784u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 352u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 322u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
L_004111A4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00412158; } }
    set32(c.r[4], c.r[29].w[0] + 1292u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004111BCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004111BCu) [[unlikely]] return; }
L_004111BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_00412158; } }
L_004111C4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004111E0; } }
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004111DCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004111DCu) [[unlikely]] return; }
L_004111DC:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_004111E0:
    set32(c.r[2], c.r[29].w[0] + 332u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004111F4u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004111F4u) [[unlikely]] return; }
L_004111F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_004111FC:
    c.r[17].d[0] = ld8((c.r[29].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411210u); set32(c.r[6], 0u + 704u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00411210u) [[unlikely]] return; }
L_00411210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], c.r[29].w[0] + 348u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 356u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[29].w[0] + 780u);
    st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 784u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 352u);
    c.budget -= 17;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_00411268; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411264u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411264u) [[unlikely]] return; }
L_00411264:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411268:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_00411284; } }
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411280u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411280u) [[unlikely]] return; }
L_00411280:
    set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_00411284:
    set32(c.r[7], c.r[29].w[0] + 368u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
L_00411290:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004112B0; } }
    c.r[1].d[0] = c.r[5].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004112B0; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_004112B0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004112C4; } }
    set32(c.r[3], c.r[5].w[0] - 32u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_004112C4:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411290u | kUnwind; return; } goto L_00411290; } }
    set32(c.r[3], c.r[29].w[0] + 332u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[29].w[0] + 856u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[29].w[0] + 332u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0041213C; } }
L_004112FC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411318; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411314u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411314u) [[unlikely]] return; }
L_00411314:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411318:
    set32(c.r[3], ld32((c.r[29].w[0] + 1288u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28652u), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411324:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 1284u), 0u);  if (t) { goto L_00412184; } }
    set32(c.r[4], c.r[29].w[0] + 1284u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041133Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0041133Cu) [[unlikely]] return; }
L_0041133C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_00412184; } }
L_00411344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0041213C; } }
L_0041134C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041213C; } }
L_00411358:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 1280u), 0u);  if (t) { goto L_00412198; } }
    set32(c.r[4], c.r[29].w[0] + 1280u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411370u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411370u) [[unlikely]] return; }
L_00411370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_00412198; } }
L_00411378:
    set32(c.r[3], c.r[29].w[0] + 321u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0041213C; } }
L_00411384:
    set32(c.r[3], c.r[29].w[0] + 321u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0041213C; } }
L_00411390:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { goto L_004113AC; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113A8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004113A8u) [[unlikely]] return; }
L_004113A8:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_004113AC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_004121AC; } }
    set32(c.r[4], c.r[29].w[0] + 1136u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113C4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004113C4u) [[unlikely]] return; }
L_004113C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_004121AC; } }
L_004113CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113D4u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004113D4u) [[unlikely]] return; }
L_004113D4:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 568u);
    set32(c.r[7], c.r[2].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11873u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004113F4u); set32(c.r[6], c.r[6].w[0] + 30624u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004113F4u) [[unlikely]] return; }
L_004113F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_0041140C; } }
L_004113FC:
    set32(c.r[4], c.r[29].w[0] + 568u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411408u); set32(c.r[5], c.r[29].w[0] + 1136u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00411408u) [[unlikely]] return; }
L_00411408:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 1;
L_0041140C:
    set32(c.r[2], c.r[29].w[0] + 864u);
    st32((c.r[2].w[0]), c.r[30].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 868u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 857u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411434u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411434u) [[unlikely]] return; }
L_00411434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_0041143C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_00411460; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041145Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0041145Cu) [[unlikely]] return; }
L_0041145C:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411460:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_004121DC; } }
    set32(c.r[4], c.r[29].w[0] + 1136u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411478u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411478u) [[unlikely]] return; }
L_00411478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_004121DC; } }
L_00411480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411488u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00411488u) [[unlikely]] return; }
L_00411488:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 668u);
    set32(c.r[7], c.r[2].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11873u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004114A8u); set32(c.r[6], c.r[6].w[0] + 30624u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004114A8u) [[unlikely]] return; }
L_004114A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_004114C0; } }
L_004114B0:
    set32(c.r[4], c.r[29].w[0] + 668u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004114BCu); set32(c.r[5], c.r[29].w[0] + 1136u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004114BCu) [[unlikely]] return; }
L_004114BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 1;
L_004114C0:
    set32(c.r[2], c.r[29].w[0] + 864u);
    st32((c.r[2].w[0]), c.r[30].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 868u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 858u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004114E8u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004114E8u) [[unlikely]] return; }
L_004114E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_004114F0:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00411510; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041150Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0041150Cu) [[unlikely]] return; }
L_0041150C:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411510:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_0041220C; } }
    set32(c.r[4], c.r[29].w[0] + 1136u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411528u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411528u) [[unlikely]] return; }
L_00411528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_0041220C; } }
L_00411530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411538u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00411538u) [[unlikely]] return; }
L_00411538:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 1024u);
    set32(c.r[7], c.r[2].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11873u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411558u); set32(c.r[6], c.r[6].w[0] + 30624u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00411558u) [[unlikely]] return; }
L_00411558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 28616u)));  if (t) { goto L_00411570; } }
L_00411560:
    set32(c.r[4], c.r[29].w[0] + 1024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041156Cu); set32(c.r[5], c.r[29].w[0] + 1136u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0041156Cu) [[unlikely]] return; }
L_0041156C:
    set32(c.r[17], ld32((c.r[28].w[0] - 28616u)));
    c.budget -= 1;
L_00411570:
    c.r[3].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0041223C; } }
L_00411584:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00411588:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0041213C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28612u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004115BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004115A4u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004115A4u) [[unlikely]] return; }
L_004115A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412294; } }
L_004115AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28612u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28612u), c.r[2].w[0]);  if (t) { goto L_004115D4; } }
L_004115BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004115C4u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004115C4u) [[unlikely]] return; }
L_004115C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004122B0; } }
L_004115CC:
    st32((c.r[28].w[0] - 28616u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28612u), c.r[2].w[0]);
    c.budget -= 2;
L_004115D4:
    set32(c.r[17], ld32((c.r[28].w[0] - 28612u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004115E0u); set32(c.r[4], c.r[29].w[0] + 1024u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004115E0u) [[unlikely]] return; }
L_004115E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004115E8u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x004115E8u) [[unlikely]] return; }
L_004115E8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004115F8u); set32(c.r[5], c.r[29].w[0] + 1024u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004115F8u) [[unlikely]] return; }
L_004115F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[21].w[0]));  if (t) { goto L_0041213C; } }
L_00411600:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0041161C; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411618u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411618u) [[unlikely]] return; }
L_00411618:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0041161C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_004122C8; } }
    set32(c.r[4], c.r[29].w[0] + 1136u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411634u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411634u) [[unlikely]] return; }
L_00411634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_004122C8; } }
L_0041163C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411644u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00411644u) [[unlikely]] return; }
L_00411644:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 1024u);
    set32(c.r[7], c.r[2].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11873u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411664u); set32(c.r[6], c.r[6].w[0] + 30624u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00411664u) [[unlikely]] return; }
L_00411664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 28616u)));  if (t) { goto L_0041167C; } }
L_0041166C:
    set32(c.r[4], c.r[29].w[0] + 1024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411678u); set32(c.r[5], c.r[29].w[0] + 1136u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00411678u) [[unlikely]] return; }
L_00411678:
    set32(c.r[17], ld32((c.r[28].w[0] - 28616u)));
    c.budget -= 1;
L_0041167C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 1013u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_004116F8; } }
L_0041169C:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004116B0u); set32(c.r[5], c.r[29].w[0] + 1024u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004116B0u) [[unlikely]] return; }
L_004116B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004116C4; } }
    set32(c.r[2], c.r[29].w[0] + 1014u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));  if (t) { goto L_004116F8; } }
L_004116C4:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041169Cu | kUnwind; return; } goto L_0041169C; } }
    c.budget -= 1;
L_004116F8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411704u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411704u) [[unlikely]] return; }
L_00411704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_0041170C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00411728; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411724u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411724u) [[unlikely]] return; }
L_00411724:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411728:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_004122F8; } }
    set32(c.r[4], c.r[29].w[0] + 1136u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411740u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411740u) [[unlikely]] return; }
L_00411740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_004122F8; } }
L_00411748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411750u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00411750u) [[unlikely]] return; }
L_00411750:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 1024u);
    set32(c.r[7], c.r[2].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11873u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411770u); set32(c.r[6], c.r[6].w[0] + 30624u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00411770u) [[unlikely]] return; }
L_00411770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[28].w[0] - 28616u)));  if (t) { goto L_00411788; } }
L_00411778:
    set32(c.r[4], c.r[29].w[0] + 1024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411784u); set32(c.r[5], c.r[29].w[0] + 1136u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00411784u) [[unlikely]] return; }
L_00411784:
    set32(c.r[17], ld32((c.r[28].w[0] - 28616u)));
    c.budget -= 1;
L_00411788:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 1015u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00411800; } }
L_004117A8:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004117BCu); set32(c.r[5], c.r[29].w[0] + 1024u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004117BCu) [[unlikely]] return; }
L_004117BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004117D0; } }
    set32(c.r[2], c.r[29].w[0] + 1016u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));  if (t) { goto L_00411800; } }
L_004117D0:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004117A8u | kUnwind; return; } goto L_004117A8; } }
L_00411800:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041180Cu); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041180Cu) [[unlikely]] return; }
L_0041180C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_00411814:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 888u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 889u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00411840; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041183Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0041183Cu) [[unlikely]] return; }
L_0041183C:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411840:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_0041185C; } }
    set32(c.r[4], c.r[29].w[0] + 890u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411858u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411858u) [[unlikely]] return; }
L_00411858:
    set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_0041185C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411868u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411868u) [[unlikely]] return; }
L_00411868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_00411870:
    set32(c.r[2], c.r[29].w[0] + 889u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 888u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041189C; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411898u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411898u) [[unlikely]] return; }
L_00411898:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0041189C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_004118B8; } }
    set32(c.r[4], c.r[29].w[0] + 890u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004118B4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004118B4u) [[unlikely]] return; }
L_004118B4:
    set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_004118B8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004118C4u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004118C4u) [[unlikely]] return; }
L_004118C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_004118CC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 1264u), 0u);  if (t) { goto L_00412328; } }
    set32(c.r[4], c.r[29].w[0] + 1264u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004118E4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004118E4u) [[unlikely]] return; }
L_004118E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_00412328; } }
L_004118EC:
    set32(c.r[3], c.r[29].w[0] + 859u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0041213C; } }
L_004118FC:
    set32(c.r[3], c.r[29].w[0] + 859u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0041213C; } }
L_00411908:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411924; } }
    set32(c.r[4], c.r[29].w[0] + 340u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411920u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411920u) [[unlikely]] return; }
L_00411920:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411924:
    set32(c.r[3], c.r[29].w[0] + 340u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 344u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0041213C; } }
L_00411950:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0041213C; } }
    set32(c.r[4], c.r[29].w[0] + 1260u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411968u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411968u) [[unlikely]] return; }
L_00411968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_0041213C; } }
L_00411970:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0041198C; } }
    set32(c.r[4], c.r[29].w[0] + 348u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411988u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411988u) [[unlikely]] return; }
L_00411988:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0041198C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041213C; } }
L_00411998:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004119B4; } }
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004119B0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004119B0u) [[unlikely]] return; }
L_004119B0:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_004119B4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041213C; } }
L_004119C0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0041213C; } }
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004119D8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004119D8u) [[unlikely]] return; }
L_004119D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_0041213C; } }
L_004119E0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 325u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00411A04; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A00u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411A00u) [[unlikely]] return; }
L_00411A00:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411A04:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A10u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411A10u) [[unlikely]] return; }
L_00411A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_00411A18:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 326u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00411A3C; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A38u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411A38u) [[unlikely]] return; }
L_00411A38:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411A3C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A48u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411A48u) [[unlikely]] return; }
L_00411A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_00411A50:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0041233C; } }
    set32(c.r[4], c.r[29].w[0] + 800u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411A68u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411A68u) [[unlikely]] return; }
L_00411A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_0041233C; } }
L_00411A70:
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411A7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 8193u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411A90:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00412358; } }
    set32(c.r[4], c.r[29].w[0] + 884u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411AA8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411AA8u) [[unlikely]] return; }
L_00411AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_00412358; } }
L_00411AB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411AC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65279ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411ADC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00412374; } }
    set32(c.r[4], c.r[29].w[0] + 356u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411AF4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411AF4u) [[unlikely]] return; }
L_00411AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_00412374; } }
L_00411AFC:
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411B08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 4097u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411B1C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0041213C; } }
    set32(c.r[4], c.r[29].w[0] + 804u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411B34u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411B34u) [[unlikely]] return; }
L_00411B34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_0041213C; } }
L_00411B3C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411B58; } }
    set32(c.r[4], c.r[29].w[0] + 780u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411B54u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411B54u) [[unlikely]] return; }
L_00411B54:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411B58:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411B70:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411B8C; } }
    set32(c.r[4], c.r[29].w[0] + 776u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411B88u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411B88u) [[unlikely]] return; }
L_00411B88:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411B8C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411BA4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411BC0; } }
    set32(c.r[4], c.r[29].w[0] + 780u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411BBCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411BBCu) [[unlikely]] return; }
L_00411BBC:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411BC0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411BD8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411BF4; } }
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411BF0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411BF0u) [[unlikely]] return; }
L_00411BF0:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411BF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411C0C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411C28; } }
    set32(c.r[4], c.r[29].w[0] + 772u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C24u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411C24u) [[unlikely]] return; }
L_00411C24:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411C28:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0041213C; } }
L_00411C40:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411C5C; } }
    set32(c.r[4], c.r[29].w[0] + 1256u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C58u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411C58u) [[unlikely]] return; }
L_00411C58:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411C5C:
    set32(c.r[4], ld32((c.r[29].w[0] + 1256u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 1020u);
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0041213C; } }
L_00411C78:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411C94; } }
    set32(c.r[4], c.r[29].w[0] + 788u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411C90u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411C90u) [[unlikely]] return; }
L_00411C90:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411C94:
    set32(c.r[3], c.r[29].w[0] + 788u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 788u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0041213C; } }
L_00411CC4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411CE0; } }
    set32(c.r[4], c.r[29].w[0] + 792u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411CDCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411CDCu) [[unlikely]] return; }
L_00411CDC:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411CE0:
    set32(c.r[3], c.r[29].w[0] + 792u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 792u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0041213C; } }
L_00411D10:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411D2C; } }
    set32(c.r[4], c.r[29].w[0] + 796u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D28u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411D28u) [[unlikely]] return; }
L_00411D28:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411D2C:
    set32(c.r[3], c.r[29].w[0] + 796u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 796u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_0041213C; } }
L_00411D5C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411D78; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411D74u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411D74u) [[unlikely]] return; }
L_00411D74:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411D78:
    set32(c.r[3], ld32((c.r[29].w[0] + 1288u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0041213C; } }
    set32(c.r[3], c.r[29].w[0] + 327u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0041213C; } }
L_00411D94:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411DB0; } }
    set32(c.r[4], c.r[29].w[0] + 1008u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411DACu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411DACu) [[unlikely]] return; }
L_00411DAC:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411DB0:
    set32(c.r[3], c.r[29].w[0] + 1008u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00411DD0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00411DEC; } }
L_00411DD0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00411DEC:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00411E1C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[29].w[0] + 1008u);  if (t) { goto L_00411E38; } }
L_00411E1C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[29].w[0] + 1008u);
    c.budget -= 7;
L_00411E38:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[29].w[0] + 1012u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0041213C; } }
L_00411E4C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411E68; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E64u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411E64u) [[unlikely]] return; }
L_00411E64:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411E68:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_00411E84; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411E80u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411E80u) [[unlikely]] return; }
L_00411E80:
    set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_00411E84:
    set32(c.r[2], ld32((c.r[28].w[0] - 28884u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0041239C; } }
L_00411E98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00411E9C:
    set32(c.r[2], c.r[29].w[0] + 996u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_004123E4; } }
L_00411EA8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411EB4u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411EB4u) [[unlikely]] return; }
L_00411EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_00411EBC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0041213C; } }
    set32(c.r[4], c.r[29].w[0] + 992u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411ED4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411ED4u) [[unlikely]] return; }
L_00411ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_0041213C; } }
L_00411EDC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411EF8; } }
    set32(c.r[4], c.r[29].w[0] + 1000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411EF4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411EF4u) [[unlikely]] return; }
L_00411EF4:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411EF8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F04u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411F04u) [[unlikely]] return; }
L_00411F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_00411F0C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00411F28; } }
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F24u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411F24u) [[unlikely]] return; }
L_00411F24:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00411F28:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 324u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F40u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00411F40u) [[unlikely]] return; }
L_00411F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_00411F48:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004123F4; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00411F60u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00411F60u) [[unlikely]] return; }
L_00411F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_004123F4; } }
L_00411F68:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 6u);
    set32(c.r[2], c.r[29].w[0] + 876u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 3ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0041208C; } }
L_00411F84:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 7u);
    set32(c.r[2], c.r[29].w[0] + 876u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 3ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0041208C; } }
L_00411FA0:
    set32(c.r[2], c.r[29].w[0] + 876u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0041208C; } }
L_00411FB8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[29].w[0] + 876u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0041208C; } }
L_00411FD4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[29].w[0] + 876u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0041208C; } }
L_00411FF0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 876u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0041208C; } }
L_0041200C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 876u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | 3ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0041208C; } }
L_00412028:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 849u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041208C; } }
L_00412038:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 850u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041208C; } }
L_00412048:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 852u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041208C; } }
L_00412058:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 848u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0041208C; } }
L_00412068:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 849u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 852u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 850u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 848u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_0041208C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00412090:
    set32(c.r[2], c.r[29].w[0] + 860u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004120A4u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004120A4u) [[unlikely]] return; }
L_004120A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_004120AC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0041213C; } }
    set32(c.r[4], c.r[29].w[0] + 360u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004120C4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004120C4u) [[unlikely]] return; }
L_004120C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_0041213C; } }
L_004120CC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004120E8; } }
    set32(c.r[4], c.r[29].w[0] + 1288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004120E4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x004120E4u) [[unlikely]] return; }
L_004120E4:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_004120E8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1288u)));  if (t) { goto L_00412104; } }
    set32(c.r[4], c.r[29].w[0] + 468u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412100u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00412100u) [[unlikely]] return; }
L_00412100:
    set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_00412104:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412110u); set32(c.r[4], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412110u) [[unlikely]] return; }
L_00412110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0041213C; } }
L_00412118:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 323u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[19].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00412138u); st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00412138u) [[unlikely]] return; }
L_00412138:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0041213C:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 176u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004111A4u | kUnwind; return; } goto L_004111A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0041249C; } }
L_00412158:
    set32(c.r[3], ld32((c.r[29].w[0] + 1292u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(56ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041213Cu | kUnwind; return; } goto L_0041213C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 11280u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00410000u < 16384u) { entry = entries_0084[(t - 0x00410000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00412184:
    set32(c.r[3], ld32((c.r[29].w[0] + 1284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041134Cu | kUnwind; return; } goto L_0041134C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411344u | kUnwind; return; } goto L_00411344; } }
L_00412198:
    set32(c.r[3], ld32((c.r[29].w[0] + 1280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411384u | kUnwind; return; } goto L_00411384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411378u | kUnwind; return; } goto L_00411378; } }
L_004121AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121B8u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004121B8u) [[unlikely]] return; }
L_004121B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11879u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 65u, depth + 1u); else { c.pc = 0x002351F8u; return; } if (c.pc != 0x004121CCu) [[unlikely]] return; }
L_004121CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004113FCu | kUnwind; return; } goto L_004113FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004113CCu | kUnwind; return; } goto L_004113CC; } }
L_004121DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121E8u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004121E8u) [[unlikely]] return; }
L_004121E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11879u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004121FCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 65u, depth + 1u); else { c.pc = 0x002351F8u; return; } if (c.pc != 0x004121FCu) [[unlikely]] return; }
L_004121FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004114B0u | kUnwind; return; } goto L_004114B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411480u | kUnwind; return; } goto L_00411480; } }
L_0041220C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412218u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00412218u) [[unlikely]] return; }
L_00412218:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11879u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041222Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 65u, depth + 1u); else { c.pc = 0x002351F8u; return; } if (c.pc != 0x0041222Cu) [[unlikely]] return; }
L_0041222C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411560u | kUnwind; return; } goto L_00411560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411530u | kUnwind; return; } goto L_00411530; } }
L_0041223C:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412250u); set32(c.r[5], c.r[29].w[0] + 1024u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00412250u) [[unlikely]] return; }
L_00412250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412264; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411584u | kUnwind; return; } goto L_00411584; } }
L_00412264:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[17].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041223Cu | kUnwind; return; } goto L_0041223C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[29].w[0] + 160u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411588u | kUnwind; return; } goto L_00411588; } }
L_00412294:
    set32(c.r[4], ld32((c.r[28].w[0] - 28612u)));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0]), 0u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004115ACu | kUnwind; return; } goto L_004115AC; } }
L_004122B0:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004115CCu | kUnwind; return; } goto L_004115CC; } }
L_004122C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004122D4u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004122D4u) [[unlikely]] return; }
L_004122D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11879u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004122E8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 65u, depth + 1u); else { c.pc = 0x002351F8u; return; } if (c.pc != 0x004122E8u) [[unlikely]] return; }
L_004122E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041166Cu | kUnwind; return; } goto L_0041166C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041163Cu | kUnwind; return; } goto L_0041163C; } }
L_004122F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412304u); set32(c.r[4], c.r[4].w[0] + 11879u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00412304u) [[unlikely]] return; }
L_00412304:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] + 11879u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412318u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 65u, depth + 1u); else { c.pc = 0x002351F8u; return; } if (c.pc != 0x00412318u) [[unlikely]] return; }
L_00412318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411778u | kUnwind; return; } goto L_00411778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411748u | kUnwind; return; } goto L_00411748; } }
L_00412328:
    set32(c.r[3], ld32((c.r[29].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004118FCu | kUnwind; return; } goto L_004118FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004118ECu | kUnwind; return; } goto L_004118EC; } }
L_0041233C:
    set32(c.r[3], c.r[29].w[0] + 800u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411A7Cu | kUnwind; return; } goto L_00411A7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411A70u | kUnwind; return; } goto L_00411A70; } }
L_00412358:
    set32(c.r[3], c.r[29].w[0] + 884u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411AC4u | kUnwind; return; } goto L_00411AC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411AB0u | kUnwind; return; } goto L_00411AB0; } }
L_00412374:
    set32(c.r[3], c.r[29].w[0] + 356u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411B08u | kUnwind; return; } goto L_00411B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411AFCu | kUnwind; return; } goto L_00411AFC; } }
L_0041239C:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[21], c.r[21].w[0] - 752u);
    c.budget -= 2;
L_004123A4:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004123B0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004123B0u) [[unlikely]] return; }
L_004123B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004123C8; } }
    set32(c.r[2], c.r[29].w[0] + 1004u);
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411E98u | kUnwind; return; } goto L_00411E98; } }
L_004123C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 28884u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004123A4u | kUnwind; return; } goto L_004123A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411E9Cu | kUnwind; return; } goto L_00411E9C; } }
L_004123E4:
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[29].w[0] + 1004u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411EA8u | kUnwind; return; } goto L_00411EA8; } }
L_004123F4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u - 256u);
    set32(c.r[3], ld32((c.r[29].w[0] + 1288u)));
    set32(c.r[2], 0u + 31u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[16].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412068u | kUnwind; return; } goto L_00412068; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412058u | kUnwind; return; } goto L_00412058; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412048u | kUnwind; return; } goto L_00412048; } }
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412038u | kUnwind; return; } goto L_00412038; } }
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412028u | kUnwind; return; } goto L_00412028; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041200Cu | kUnwind; return; } goto L_0041200C; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411FF0u | kUnwind; return; } goto L_00411FF0; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411FD4u | kUnwind; return; } goto L_00411FD4; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411FB8u | kUnwind; return; } goto L_00411FB8; } }
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411FA0u | kUnwind; return; } goto L_00411FA0; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411F84u | kUnwind; return; } goto L_00411F84; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00411F68u | kUnwind; return; } goto L_00411F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412090u | kUnwind; return; } goto L_00412090; } }
L_0041249C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1296u);  c.pc = t; return; }
L_004124D0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 204u), c.r[6].w[0]);  if (t) { goto L_00412FA0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00412FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412520u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00412520u) [[unlikely]] return; }
L_00412520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412FA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28784u)));
    set32(c.r[20], ld32((c.r[28].w[0] - 28824u)));
    set32(c.r[30], ld32((c.r[28].w[0] - 28800u)));
    set32(c.r[19], ld32((c.r[28].w[0] - 28760u)));
    set32(c.r[18], ld32((c.r[28].w[0] - 28816u)));
    set32(c.r[23], ld32((c.r[28].w[0] - 28792u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[20].d[0] ^ 0ull;
    set32(c.r[22], ld32((c.r[28].w[0] - 28776u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 28808u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 168u), 0u);  if (t) { goto L_00412AA4; } }
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 1;
L_00412564:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00412568:
    c.r[20].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_00412FA0; } }
    c.r[3].d[0] = c.r[30].d[0] << 32;
    c.r[21].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 172u), 0u);  if (t) { goto L_00412608; } }
L_00412598:
    c.r[3].d[0] = c.r[30].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_004125E0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004125C0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004125C0u) [[unlikely]] return; }
L_004125C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412B48; } }
L_004125C8:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_004125D0:
    c.r[3].d[0] = c.r[30].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004125E0:
    c.r[3].d[0] = c.r[30].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[30], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.r[3].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[30].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412598u | kUnwind; return; } goto L_00412598; } }
L_00412608:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_004126B8; } }
L_00412624:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00412690; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041264Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0041264Cu) [[unlikely]] return; }
L_0041264C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412BD0; } }
    c.budget -= 1;
L_00412658:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_00412660:
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[3], 0u - 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[21].w[0] + 8u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 8u));
    c.r[5].d[0] = ld8((c.r[21].w[0] + 12u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[21].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00412690:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[19], ld32((c.r[3].w[0] + 16u)));
    c.r[3].d[0] = c.r[30].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[19].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412624u | kUnwind; return; } goto L_00412624; } }
L_004126B8:
    c.r[3].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00412748; } }
L_004126D4:
    c.r[3].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00412720; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004126FCu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004126FCu) [[unlikely]] return; }
L_004126FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412C58; } }
    c.budget -= 1;
L_00412708:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_00412710:
    c.r[3].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[21].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00412720:
    c.r[3].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[22], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[22].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004126D4u | kUnwind; return; } goto L_004126D4; } }
L_00412748:
    c.r[3].d[0] = c.r[23].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004127D8; } }
L_00412764:
    c.r[3].d[0] = c.r[23].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_004127B0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041278Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0041278Cu) [[unlikely]] return; }
L_0041278C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412CC8; } }
    c.budget -= 1;
L_00412798:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_004127A0:
    c.r[3].d[0] = c.r[23].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[21].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_004127B0:
    c.r[3].d[0] = c.r[23].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[23], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[23].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412764u | kUnwind; return; } goto L_00412764; } }
L_004127D8:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004128D0; } }
L_004127F4:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_004128A8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00412870; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00412830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004128A8; } }
    c.budget -= 1;
L_00412830:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412CF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412844u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412844u) [[unlikely]] return; }
L_00412844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412D58; } }
    c.budget -= 1;
L_00412850:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_00412858:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_004128A8; } }
    c.budget -= 1;
L_00412870:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412884u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412884u) [[unlikely]] return; }
L_00412884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412E08; } }
    c.budget -= 1;
L_00412890:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_00412898:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[21].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
L_004128A8:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[3].w[0] + 16u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[18].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004127F4u | kUnwind; return; } goto L_004127F4; } }
L_004128D0:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00412A18; } }
L_004128EC:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_004129F0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004129B8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004129B8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00412980; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00412948; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004129F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004129F0; } }
    c.budget -= 1;
L_00412948:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412E50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041295Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0041295Cu) [[unlikely]] return; }
L_0041295C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412E98; } }
    c.budget -= 1;
L_00412968:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_00412970:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_004129F0; } }
L_00412980:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412EC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412994u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412994u) [[unlikely]] return; }
L_00412994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412F08; } }
    c.budget -= 1;
L_004129A0:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_004129A8:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_004129F0; } }
L_004129B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00412F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004129CCu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004129CCu) [[unlikely]] return; }
L_004129CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412F78; } }
    c.budget -= 1;
L_004129D8:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_004129E0:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004129F0:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[3].w[0] + 44u)));
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[17].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004128ECu | kUnwind; return; } goto L_004128EC; } }
L_00412A18:
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00412FA0; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00412FA0; } }
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_00412A4C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00412A74; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[5].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 4;
L_00412A74:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412A4Cu | kUnwind; return; } goto L_00412A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00412FA0; } }
L_00412AA4:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412AB8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00412AB8u) [[unlikely]] return; }
L_00412AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412AD0; } }
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412568u | kUnwind; return; } goto L_00412568; } }
L_00412AD0:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[20], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[20].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412AA4u | kUnwind; return; } goto L_00412AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull | 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412564u | kUnwind; return; } goto L_00412564; } }
L_00412B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412B08u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412B08u) [[unlikely]] return; }
L_00412B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412B20; } }
L_00412B10:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004125D0u | kUnwind; return; } goto L_004125D0; } }
    c.budget -= 1;
L_00412B20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 4928u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412B10u | kUnwind; return; } goto L_00412B10; } }
    c.budget -= 1;
L_00412B48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 4928u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004125C8u | kUnwind; return; } goto L_004125C8; } }
    c.budget -= 1;
L_00412B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412B78u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412B78u) [[unlikely]] return; }
L_00412B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412B90; } }
L_00412B80:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412660u | kUnwind; return; } goto L_00412660; } }
    c.budget -= 1;
L_00412B90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 4976u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[2].w[0] + 12u));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412B80u | kUnwind; return; } goto L_00412B80; } }
L_00412BD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 4976u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[2].w[0] + 12u));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412658u | kUnwind; return; } goto L_00412658; } }
L_00412C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C18u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412C18u) [[unlikely]] return; }
L_00412C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412C30; } }
L_00412C20:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412710u | kUnwind; return; } goto L_00412710; } }
    c.budget -= 1;
L_00412C30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 5072u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412C20u | kUnwind; return; } goto L_00412C20; } }
L_00412C58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 5072u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412708u | kUnwind; return; } goto L_00412708; } }
L_00412C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412C88u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412C88u) [[unlikely]] return; }
L_00412C88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412CA0; } }
L_00412C90:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004127A0u | kUnwind; return; } goto L_004127A0; } }
    c.budget -= 1;
L_00412CA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 5024u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412C90u | kUnwind; return; } goto L_00412C90; } }
L_00412CC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 5024u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412798u | kUnwind; return; } goto L_00412798; } }
L_00412CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412CF8u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412CF8u) [[unlikely]] return; }
L_00412CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412D10; } }
L_00412D00:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412858u | kUnwind; return; } goto L_00412858; } }
    c.budget -= 1;
L_00412D10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5168u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 16u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412D00u | kUnwind; return; } goto L_00412D00; } }
L_00412D58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5168u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 16u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412850u | kUnwind; return; } goto L_00412850; } }
L_00412DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412DA8u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412DA8u) [[unlikely]] return; }
L_00412DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412DC0; } }
L_00412DB0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412898u | kUnwind; return; } goto L_00412898; } }
    c.budget -= 1;
L_00412DC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5216u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 16u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412DB0u | kUnwind; return; } goto L_00412DB0; } }
L_00412E08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5216u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 16u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412890u | kUnwind; return; } goto L_00412890; } }
L_00412E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412E58u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412E58u) [[unlikely]] return; }
L_00412E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412E70; } }
L_00412E60:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412970u | kUnwind; return; } goto L_00412970; } }
    c.budget -= 1;
L_00412E70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5312u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412E60u | kUnwind; return; } goto L_00412E60; } }
    c.budget -= 1;
L_00412E98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5312u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412968u | kUnwind; return; } goto L_00412968; } }
    c.budget -= 1;
L_00412EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412EC8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412EC8u) [[unlikely]] return; }
L_00412EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412EE0; } }
L_00412ED0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004129A8u | kUnwind; return; } goto L_004129A8; } }
    c.budget -= 1;
L_00412EE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5264u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412ED0u | kUnwind; return; } goto L_00412ED0; } }
    c.budget -= 1;
L_00412F08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5264u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004129A0u | kUnwind; return; } goto L_004129A0; } }
    c.budget -= 1;
L_00412F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00412F38u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00412F38u) [[unlikely]] return; }
L_00412F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00412F50; } }
L_00412F40:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004129E0u | kUnwind; return; } goto L_004129E0; } }
    c.budget -= 1;
L_00412F50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5120u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00412F40u | kUnwind; return; } goto L_00412F40; } }
L_00412F78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 4880u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5120u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004129D8u | kUnwind; return; } goto L_004129D8; } }
L_00412FA0:
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
L_00412FD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 28824u)));
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004130AC; } }
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 1;
L_0041300C:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00413010:
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00413108; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28764u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413034u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00413034u) [[unlikely]] return; }
L_00413034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413058; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 28764u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[3], 0u - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 7;
L_00413058:
    set32(c.r[3], ld32((c.r[28].w[0] - 28764u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28764u), c.r[2].w[0]);  if (t) { goto L_00413098; } }
L_00413068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413070u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00413070u) [[unlikely]] return; }
L_00413070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413090; } }
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[3], 0u - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 6;
L_00413090:
    st32((c.r[28].w[0] - 28768u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28764u), c.r[2].w[0]);
    c.budget -= 2;
L_00413098:
    set32(c.r[3], ld32((c.r[28].w[0] - 28764u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0041310C; } }
L_004130AC:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004130C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004130C0u) [[unlikely]] return; }
L_004130C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004130D8; } }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[3].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413010u | kUnwind; return; } goto L_00413010; } }
L_004130D8:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004130ACu | kUnwind; return; } goto L_004130AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull | 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041300Cu | kUnwind; return; } goto L_0041300C; } }
L_00413108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0041310C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00413130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413140u);  if (depth < kMaxDepth) unit_0077(c, 224u, depth + 1u); else { c.pc = 0x003DE8E0u; return; } if (c.pc != 0x00413140u) [[unlikely]] return; }
L_00413140:
    set32(c.r[3], ld32((c.r[28].w[0] - 30160u)));
    st32((c.r[28].w[0] - 30156u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00413160:
    set32(c.r[29], c.r[29].w[0] - 624u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[5].w[0] + 11886u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413188u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0044(c, 458u, depth + 1u); else { c.pc = 0x00313DD0u; return; } if (c.pc != 0x00413188u) [[unlikely]] return; }
L_00413188:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 476u));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 28884u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00413868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_00413858; } }
L_004131A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004131ACu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 435u, depth + 1u); else { c.pc = 0x003139B0u; return; } if (c.pc != 0x004131ACu) [[unlikely]] return; }
L_004131AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413854; } }
    c.budget -= 1;
L_004131B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004131C0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 434u, depth + 1u); else { c.pc = 0x003139A0u; return; } if (c.pc != 0x004131C0u) [[unlikely]] return; }
L_004131C0:
    set32(c.r[7], c.r[29].w[0] + 512u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_004131C8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004131E8; } }
    c.r[1].d[0] = c.r[5].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004131E8; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_004131E8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004131FC; } }
    set32(c.r[3], c.r[5].w[0] - 32u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_004131FC:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004131C8u | kUnwind; return; } goto L_004131C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413220u); set32(c.r[5], c.r[5].w[0] + 11914u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413220u) [[unlikely]] return; }
L_00413220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041325C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413230u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413230u) [[unlikely]] return; }
L_00413230:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413240u); set32(c.r[5], c.r[5].w[0] + 11927u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413240u) [[unlikely]] return; }
L_00413240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0041325C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413250u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413250u) [[unlikely]] return; }
L_00413250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413258u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413258u) [[unlikely]] return; }
L_00413258:
    st32((c.r[28].w[0] - 28684u), c.f[0]);
    c.budget -= 1;
L_0041325C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041326Cu); set32(c.r[5], c.r[5].w[0] + 11933u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x0041326Cu) [[unlikely]] return; }
L_0041326C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004132D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041327Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x0041327Cu) [[unlikely]] return; }
L_0041327C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041328Cu); set32(c.r[5], c.r[5].w[0] + 11949u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x0041328Cu) [[unlikely]] return; }
L_0041328C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004132D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041329Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x0041329Cu) [[unlikely]] return; }
L_0041329C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004132A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x004132A4u) [[unlikely]] return; }
L_004132A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[28].w[0] - 28944u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[28].w[0] - 28940u), c.f[0]);
    c.budget -= 11;
L_004132D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004132E0u); set32(c.r[5], c.r[5].w[0] + 11960u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004132E0u) [[unlikely]] return; }
L_004132E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004132F0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004132F0u) [[unlikely]] return; }
L_004132F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413300u); set32(c.r[5], c.r[5].w[0] + 11977u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413300u) [[unlikely]] return; }
L_00413300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413310u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413310u) [[unlikely]] return; }
L_00413310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413318u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413318u) [[unlikely]] return; }
L_00413318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041332C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28636u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00413330; } }
L_0041332C:
    st8((c.r[28].w[0] - 28636u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00413330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413338u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413338u) [[unlikely]] return; }
L_00413338:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413348u); set32(c.r[5], c.r[5].w[0] + 11991u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413348u) [[unlikely]] return; }
L_00413348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0041387C; } }
L_00413350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413358u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413358u) [[unlikely]] return; }
L_00413358:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413368u); set32(c.r[5], c.r[5].w[0] + 12008u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413368u) [[unlikely]] return; }
L_00413368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413894; } }
L_00413370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413378u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413378u) [[unlikely]] return; }
L_00413378:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413388u); set32(c.r[5], c.r[5].w[0] + 12024u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413388u) [[unlikely]] return; }
L_00413388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004138B0; } }
L_00413390:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041339Cu); st8((c.r[28].w[0] - 28640u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x0041339Cu) [[unlikely]] return; }
L_0041339C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133ACu); set32(c.r[5], c.r[5].w[0] + 12047u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004133ACu) [[unlikely]] return; }
L_004133AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004138C8; } }
L_004133B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133BCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004133BCu) [[unlikely]] return; }
L_004133BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133CCu); set32(c.r[5], c.r[5].w[0] + 12062u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004133CCu) [[unlikely]] return; }
L_004133CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004133F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133DCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x004133DCu) [[unlikely]] return; }
L_004133DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x004133E4u) [[unlikely]] return; }
L_004133E4:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133F0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x003DCFF0u; return; } if (c.pc != 0x004133F0u) [[unlikely]] return; }
L_004133F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004133F8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004133F8u) [[unlikely]] return; }
L_004133F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413408u); set32(c.r[5], c.r[5].w[0] + 12082u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413408u) [[unlikely]] return; }
L_00413408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004138F4; } }
L_00413410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413418u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413418u) [[unlikely]] return; }
L_00413418:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413428u); set32(c.r[5], c.r[5].w[0] + 12099u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413428u) [[unlikely]] return; }
L_00413428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413438u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413438u) [[unlikely]] return; }
L_00413438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413440u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413440u) [[unlikely]] return; }
L_00413440:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041344Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x003DCFF0u; return; } if (c.pc != 0x0041344Cu) [[unlikely]] return; }
L_0041344C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413454u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0077(c, 68u, depth + 1u); else { c.pc = 0x003DD020u; return; } if (c.pc != 0x00413454u) [[unlikely]] return; }
L_00413454:
    st32((c.r[28].w[0] - 28692u), c.f[0]);
    c.budget -= 1;
L_00413458:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413468u); set32(c.r[5], c.r[5].w[0] + 12117u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413468u) [[unlikely]] return; }
L_00413468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413478u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413478u) [[unlikely]] return; }
L_00413478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413488u); set32(c.r[5], c.r[5].w[0] + 12124u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413488u) [[unlikely]] return; }
L_00413488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413920; } }
L_00413490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413498u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413498u) [[unlikely]] return; }
L_00413498:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004134A8u); set32(c.r[5], c.r[5].w[0] + 12143u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004134A8u) [[unlikely]] return; }
L_004134A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413938; } }
L_004134B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004134B8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004134B8u) [[unlikely]] return; }
L_004134B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004134C8u); set32(c.r[5], c.r[5].w[0] + 12168u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004134C8u) [[unlikely]] return; }
L_004134C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413950; } }
L_004134D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004134D8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004134D8u) [[unlikely]] return; }
L_004134D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004134E8u); set32(c.r[5], c.r[5].w[0] + 12183u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004134E8u) [[unlikely]] return; }
L_004134E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004134F8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x004134F8u) [[unlikely]] return; }
L_004134F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413500u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413500u) [[unlikely]] return; }
L_00413500:
    st32((c.r[28].w[0] - 28656u), c.f[0]);
    c.budget -= 1;
L_00413504:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413514u); set32(c.r[5], c.r[5].w[0] + 12199u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413514u) [[unlikely]] return; }
L_00413514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413524u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413524u) [[unlikely]] return; }
L_00413524:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413534u); set32(c.r[5], c.r[5].w[0] + 12211u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413534u) [[unlikely]] return; }
L_00413534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413968; } }
L_0041353C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413544u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413544u) [[unlikely]] return; }
L_00413544:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413554u); set32(c.r[5], c.r[5].w[0] + 12223u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413554u) [[unlikely]] return; }
L_00413554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004135A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413564u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413564u) [[unlikely]] return; }
L_00413564:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413574u); set32(c.r[5], c.r[5].w[0] + 12235u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413574u) [[unlikely]] return; }
L_00413574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004139EC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 9;
L_004135A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004135A8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004135A8u) [[unlikely]] return; }
L_004135A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004135B8u); set32(c.r[5], c.r[5].w[0] + 12249u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004135B8u) [[unlikely]] return; }
L_004135B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413C2C; } }
L_004135C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004135C8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004135C8u) [[unlikely]] return; }
L_004135C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004135D8u); set32(c.r[5], c.r[5].w[0] + 12267u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004135D8u) [[unlikely]] return; }
L_004135D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413C60; } }
L_004135E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004135E8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004135E8u) [[unlikely]] return; }
L_004135E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004135F8u); set32(c.r[5], c.r[5].w[0] + 12286u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004135F8u) [[unlikely]] return; }
L_004135F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413C94; } }
L_00413600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413608u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413608u) [[unlikely]] return; }
L_00413608:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413618u); set32(c.r[5], c.r[5].w[0] + 12299u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413618u) [[unlikely]] return; }
L_00413618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413CC8; } }
L_00413620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413628u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413628u) [[unlikely]] return; }
L_00413628:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413638u); set32(c.r[5], c.r[5].w[0] + 12315u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413638u) [[unlikely]] return; }
L_00413638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413648u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413648u) [[unlikely]] return; }
L_00413648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413650u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413650u) [[unlikely]] return; }
L_00413650:
    set32(c.r[6], ld32((c.r[28].w[0] - 28884u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 752u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    st32((c.r[28].w[0] - 28884u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 10;
L_00413678:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413688u); set32(c.r[5], c.r[5].w[0] + 12336u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413688u) [[unlikely]] return; }
L_00413688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413698u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413698u) [[unlikely]] return; }
L_00413698:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004136A8u); set32(c.r[5], c.r[5].w[0] + 12347u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004136A8u) [[unlikely]] return; }
L_004136A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004136C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004136B8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x004136B8u) [[unlikely]] return; }
L_004136B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004136C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x004136C0u) [[unlikely]] return; }
L_004136C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004136C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004136CCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004136CCu) [[unlikely]] return; }
L_004136CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004136DCu); set32(c.r[5], c.r[5].w[0] + 12353u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004136DCu) [[unlikely]] return; }
L_004136DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004136F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004136ECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x004136ECu) [[unlikely]] return; }
L_004136EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004136F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x004136F4u) [[unlikely]] return; }
L_004136F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004136F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413700u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413700u) [[unlikely]] return; }
L_00413700:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413710u); set32(c.r[5], c.r[5].w[0] + 12360u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413710u) [[unlikely]] return; }
L_00413710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413CFC; } }
L_00413718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413720u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413720u) [[unlikely]] return; }
L_00413720:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413730u); set32(c.r[5], c.r[5].w[0] + 12376u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413730u) [[unlikely]] return; }
L_00413730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413D18; } }
L_00413738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413740u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413740u) [[unlikely]] return; }
L_00413740:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413750u); set32(c.r[5], c.r[5].w[0] + 12393u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413750u) [[unlikely]] return; }
L_00413750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413D34; } }
L_00413758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413760u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413760u) [[unlikely]] return; }
L_00413760:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413770u); set32(c.r[5], c.r[5].w[0] + 12409u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413770u) [[unlikely]] return; }
L_00413770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413D50; } }
L_00413778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413780u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413780u) [[unlikely]] return; }
L_00413780:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413790u); set32(c.r[5], c.r[5].w[0] + 12437u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413790u) [[unlikely]] return; }
L_00413790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413D80; } }
L_00413798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137A0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004137A0u) [[unlikely]] return; }
L_004137A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137B0u); set32(c.r[5], c.r[5].w[0] + 12484u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004137B0u) [[unlikely]] return; }
L_004137B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413DAC; } }
L_004137B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137C0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004137C0u) [[unlikely]] return; }
L_004137C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137D0u); set32(c.r[5], c.r[5].w[0] + 12168u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004137D0u) [[unlikely]] return; }
L_004137D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413E10; } }
L_004137D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137E0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x004137E0u) [[unlikely]] return; }
L_004137E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004137F0u); set32(c.r[5], c.r[5].w[0] + 12183u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004137F0u) [[unlikely]] return; }
L_004137F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00413E34; } }
L_004137F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413800u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 433u, depth + 1u); else { c.pc = 0x00313990u; return; } if (c.pc != 0x00413800u) [[unlikely]] return; }
L_00413800:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413810u); set32(c.r[5], c.r[5].w[0] + 12504u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00413810u) [[unlikely]] return; }
L_00413810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413820u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413820u) [[unlikely]] return; }
L_00413820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413828u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413828u) [[unlikely]] return; }
L_00413828:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 1024u);
    st32((c.r[3].w[0] + 1036u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413844u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 81u, depth + 1u); else { c.pc = 0x004158A0u; return; } if (c.pc != 0x00413844u) [[unlikely]] return; }
L_00413844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041384Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 435u, depth + 1u); else { c.pc = 0x003139B0u; return; } if (c.pc != 0x0041384Cu) [[unlikely]] return; }
L_0041384C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004131B8u | kUnwind; return; } goto L_004131B8; } }
L_00413854:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00413858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413860u);  if (depth < kMaxDepth) unit_0044(c, 447u, depth + 1u); else { c.pc = 0x00313C40u; return; } if (c.pc != 0x00413860u) [[unlikely]] return; }
L_00413860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004131A4u | kUnwind; return; } goto L_004131A4; } }
L_00413868:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413874u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0044(c, 451u, depth + 1u); else { c.pc = 0x00313D00u; return; } if (c.pc != 0x00413874u) [[unlikely]] return; }
L_00413874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00413E58; } }
L_0041387C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413884u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413884u) [[unlikely]] return; }
L_00413884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041388Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x0041388Cu) [[unlikely]] return; }
L_0041388C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28676u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413350u | kUnwind; return; } goto L_00413350; } }
L_00413894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041389Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x0041389Cu) [[unlikely]] return; }
L_0041389C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x004138A4u) [[unlikely]] return; }
L_004138A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1024u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413370u | kUnwind; return; } goto L_00413370; } }
L_004138B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138B8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x004138B8u) [[unlikely]] return; }
L_004138B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x004138C0u) [[unlikely]] return; }
L_004138C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30084u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413390u | kUnwind; return; } goto L_00413390; } }
L_004138C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138D0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x004138D0u) [[unlikely]] return; }
L_004138D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x004138D8u) [[unlikely]] return; }
L_004138D8:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138E4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x003DCFF0u; return; } if (c.pc != 0x004138E4u) [[unlikely]] return; }
L_004138E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138ECu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 68u, depth + 1u); else { c.pc = 0x003DD020u; return; } if (c.pc != 0x004138ECu) [[unlikely]] return; }
L_004138EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28688u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004133B4u | kUnwind; return; } goto L_004133B4; } }
L_004138F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004138FCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x004138FCu) [[unlikely]] return; }
L_004138FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413904u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413904u) [[unlikely]] return; }
L_00413904:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413910u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x003DCFF0u; return; } if (c.pc != 0x00413910u) [[unlikely]] return; }
L_00413910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413918u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0077(c, 68u, depth + 1u); else { c.pc = 0x003DD020u; return; } if (c.pc != 0x00413918u) [[unlikely]] return; }
L_00413918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28696u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413410u | kUnwind; return; } goto L_00413410; } }
L_00413920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413928u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413928u) [[unlikely]] return; }
L_00413928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413930u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413930u) [[unlikely]] return; }
L_00413930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28680u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413490u | kUnwind; return; } goto L_00413490; } }
L_00413938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413940u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413940u) [[unlikely]] return; }
L_00413940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413948u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413948u) [[unlikely]] return; }
L_00413948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28672u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004134B0u | kUnwind; return; } goto L_004134B0; } }
L_00413950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413958u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413958u) [[unlikely]] return; }
L_00413958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413960u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413960u) [[unlikely]] return; }
L_00413960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28660u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004134D0u | kUnwind; return; } goto L_004134D0; } }
L_00413968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413970u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413970u) [[unlikely]] return; }
L_00413970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413978u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00413978u) [[unlikely]] return; }
L_00413978:
    set32(c.r[5], ld32((c.r[28].w[0] - 28884u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004139A0u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x004139A0u) [[unlikely]] return; }
L_004139A0:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004139B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x004139B4u) [[unlikely]] return; }
L_004139B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004139BCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x004139BCu) [[unlikely]] return; }
L_004139BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004139E4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004139E4u) [[unlikely]] return; }
L_004139E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0041353Cu | kUnwind; return; } goto L_0041353C; } }
L_004139EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004139F4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x004139F4u) [[unlikely]] return; }
L_004139F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A04u); set32(c.r[5], c.r[5].w[0] + 12520u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413A04u) [[unlikely]] return; }
L_00413A04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413A34; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135A0u | kUnwind; return; } goto L_004135A0; } }
L_00413A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A3Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413A3Cu) [[unlikely]] return; }
L_00413A3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A4Cu); set32(c.r[5], c.r[5].w[0] + 12538u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413A4Cu) [[unlikely]] return; }
L_00413A4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413A7C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135A0u | kUnwind; return; } goto L_004135A0; } }
L_00413A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A84u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413A84u) [[unlikely]] return; }
L_00413A84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413A94u); set32(c.r[5], c.r[5].w[0] + 12556u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413A94u) [[unlikely]] return; }
L_00413A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413AC4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135A0u | kUnwind; return; } goto L_004135A0; } }
L_00413AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413ACCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413ACCu) [[unlikely]] return; }
L_00413ACC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413ADCu); set32(c.r[5], c.r[5].w[0] + 12574u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413ADCu) [[unlikely]] return; }
L_00413ADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413B0C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135A0u | kUnwind; return; } goto L_004135A0; } }
L_00413B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413B14u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413B14u) [[unlikely]] return; }
L_00413B14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413B24u); set32(c.r[5], c.r[5].w[0] + 12588u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413B24u) [[unlikely]] return; }
L_00413B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413B54; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135A0u | kUnwind; return; } goto L_004135A0; } }
L_00413B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413B5Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413B5Cu) [[unlikely]] return; }
L_00413B5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413B6Cu); set32(c.r[5], c.r[5].w[0] + 12603u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413B6Cu) [[unlikely]] return; }
L_00413B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413B9C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135A0u | kUnwind; return; } goto L_004135A0; } }
L_00413B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413BA4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413BA4u) [[unlikely]] return; }
L_00413BA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413BB4u); set32(c.r[5], c.r[5].w[0] + 12617u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413BB4u) [[unlikely]] return; }
L_00413BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00413BE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135A0u | kUnwind; return; } goto L_004135A0; } }
L_00413BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413BECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413BECu) [[unlikely]] return; }
L_00413BEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413BFCu); set32(c.r[5], c.r[5].w[0] + 12632u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00413BFCu) [[unlikely]] return; }
L_00413BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135A0u | kUnwind; return; } goto L_004135A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28884u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 752u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135A0u | kUnwind; return; } goto L_004135A0; } }
L_00413C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413C34u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413C34u) [[unlikely]] return; }
L_00413C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413C3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413C3Cu) [[unlikely]] return; }
L_00413C3C:
    set32(c.r[5], ld32((c.r[28].w[0] - 28884u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 752u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135C0u | kUnwind; return; } goto L_004135C0; } }
L_00413C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413C68u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413C68u) [[unlikely]] return; }
L_00413C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413C70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413C70u) [[unlikely]] return; }
L_00413C70:
    set32(c.r[5], ld32((c.r[28].w[0] - 28884u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 752u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004135E0u | kUnwind; return; } goto L_004135E0; } }
L_00413C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413C9Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413C9Cu) [[unlikely]] return; }
L_00413C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413CA4u) [[unlikely]] return; }
L_00413CA4:
    set32(c.r[5], ld32((c.r[28].w[0] - 28884u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 752u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413600u | kUnwind; return; } goto L_00413600; } }
L_00413CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CD0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413CD0u) [[unlikely]] return; }
L_00413CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413CD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413CD8u) [[unlikely]] return; }
L_00413CD8:
    set32(c.r[5], ld32((c.r[28].w[0] - 28884u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 752u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413620u | kUnwind; return; } goto L_00413620; } }
L_00413CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D04u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413D04u) [[unlikely]] return; }
L_00413D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413D0Cu) [[unlikely]] return; }
L_00413D0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1052u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413718u | kUnwind; return; } goto L_00413718; } }
L_00413D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D20u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413D20u) [[unlikely]] return; }
L_00413D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413D28u) [[unlikely]] return; }
L_00413D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1056u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413738u | kUnwind; return; } goto L_00413738; } }
L_00413D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D3Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413D3Cu) [[unlikely]] return; }
L_00413D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413D44u) [[unlikely]] return; }
L_00413D44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1060u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413758u | kUnwind; return; } goto L_00413758; } }
L_00413D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D58u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413D58u) [[unlikely]] return; }
L_00413D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413D60u) [[unlikely]] return; }
L_00413D60:
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1064u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413778u | kUnwind; return; } goto L_00413778; } }
L_00413D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D88u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413D88u) [[unlikely]] return; }
L_00413D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413D90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 424u, depth + 1u); else { c.pc = 0x0023FDC0u; return; } if (c.pc != 0x00413D90u) [[unlikely]] return; }
L_00413D90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 1068u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413798u | kUnwind; return; } goto L_00413798; } }
    set32(c.r[3], 0u + 1000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1068u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00413798u | kUnwind; return; } goto L_00413798; } }
L_00413DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413DB4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413DB4u) [[unlikely]] return; }
L_00413DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413DBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413DBCu) [[unlikely]] return; }
L_00413DBC:
    c.f[2] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00413DEC; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00413E04; } }
L_00413DEC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00413E04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1248u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004137B8u | kUnwind; return; } goto L_004137B8; } }
L_00413E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413E18u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413E18u) [[unlikely]] return; }
L_00413E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413E20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413E20u) [[unlikely]] return; }
L_00413E20:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1240u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004137D8u | kUnwind; return; } goto L_004137D8; } }
L_00413E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413E3Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00313980u; return; } if (c.pc != 0x00413E3Cu) [[unlikely]] return; }
L_00413E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413E44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 420u, depth + 1u); else { c.pc = 0x0023FCD0u; return; } if (c.pc != 0x00413E44u) [[unlikely]] return; }
L_00413E44:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1244u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004137F8u | kUnwind; return; } goto L_004137F8; } }
L_00413E58:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_00413E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00413EC4; } }
    c.r[2].d[0] = 0ull | 65535ull;
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00413EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413EA8u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00413EA8u) [[unlikely]] return; }
L_00413EA8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00413EAC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00413EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00413EC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00413EC4u) [[unlikely]] return; }
L_00413EC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00413EE0:
    set32(c.r[29], c.r[29].w[0] - 528u);
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
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0085(c, 71u, depth); } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0085(c, 71u, depth); } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].d[0] = ld8((c.r[20].w[0] + 108u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 336u), 0u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.r[3].w[0] >> 4);
    set32(c.r[3], c.f[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] >> 4);  if (t) { [[clang::musttail]] return unit_0085(c, 27u, depth); } }
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    st32((c.r[29].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 4;
L_00413F74:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 109u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0085(c, 29u, depth); } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 109u));
    c.budget -= 1;
L_00413F84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0085(c, 60u, depth); } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0085(c, 6u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 7;
L_00413FB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0085(c, 5u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0085(c, 5u, depth); } }
    set32(c.r[7], ld32((c.r[29].w[0] + 368u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[10], 0u + 255u);
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    st32((c.r[29].w[0] + 320u), 0u);
    c.r[9].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 11;
    [[clang::musttail]] return unit_0085(c, 1u, depth);
}

}

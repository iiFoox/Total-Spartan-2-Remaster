#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0060[4096] = {
    1, 0, 2, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0,
    0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0,
    0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210,
    0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226,
    0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 249,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    259, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0,
    0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0,
    0, 311, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0,
    0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 0,
    343, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 400,
    0, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 440, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 445, 0, 446, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0,
    0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0,
    476, 0, 0, 477, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0,
    489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0,
    0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0,
    0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0,
    0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0,
    0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0,
};

void unit_0060(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00380000;
    case 2u: goto L_00380008;
    case 3u: goto L_0038000C;
    case 4u: goto L_00380028;
    case 5u: goto L_00380040;
    case 6u: goto L_00380050;
    case 7u: goto L_00380070;
    case 8u: goto L_00380088;
    case 9u: goto L_003800AC;
    case 10u: goto L_003800B8;
    case 11u: goto L_003800C4;
    case 12u: goto L_003800CC;
    case 13u: goto L_003800D4;
    case 14u: goto L_003800E8;
    case 15u: goto L_003800F8;
    case 16u: goto L_00380104;
    case 17u: goto L_00380110;
    case 18u: goto L_00380120;
    case 19u: goto L_00380134;
    case 20u: goto L_00380140;
    case 21u: goto L_0038014C;
    case 22u: goto L_00380170;
    case 23u: goto L_00380188;
    case 24u: goto L_003801A0;
    case 25u: goto L_003801C0;
    case 26u: goto L_003801D0;
    case 27u: goto L_003801E4;
    case 28u: goto L_00380200;
    case 29u: goto L_00380240;
    case 30u: goto L_00380258;
    case 31u: goto L_003802E0;
    case 32u: goto L_003802F0;
    case 33u: goto L_00380310;
    case 34u: goto L_00380330;
    case 35u: goto L_00380338;
    case 36u: goto L_0038033C;
    case 37u: goto L_00380358;
    case 38u: goto L_00380370;
    case 39u: goto L_00380380;
    case 40u: goto L_003803A0;
    case 41u: goto L_003803B8;
    case 42u: goto L_003803D0;
    case 43u: goto L_0038040C;
    case 44u: goto L_00380430;
    case 45u: goto L_00380454;
    case 46u: goto L_00380458;
    case 47u: goto L_00380478;
    case 48u: goto L_003804A4;
    case 49u: goto L_003804B4;
    case 50u: goto L_003804CC;
    case 51u: goto L_003804F0;
    case 52u: goto L_00380500;
    case 53u: goto L_00380528;
    case 54u: goto L_00380538;
    case 55u: goto L_00380548;
    case 56u: goto L_0038055C;
    case 57u: goto L_0038057C;
    case 58u: goto L_0038058C;
    case 59u: goto L_0038059C;
    case 60u: goto L_003805B0;
    case 61u: goto L_003805F4;
    case 62u: goto L_0038060C;
    case 63u: goto L_0038062C;
    case 64u: goto L_00380650;
    case 65u: goto L_003806B4;
    case 66u: goto L_003806C8;
    case 67u: goto L_003806DC;
    case 68u: goto L_003806F0;
    case 69u: goto L_00380704;
    case 70u: goto L_00380710;
    case 71u: goto L_0038074C;
    case 72u: goto L_00380758;
    case 73u: goto L_00380764;
    case 74u: goto L_0038076C;
    case 75u: goto L_00380774;
    case 76u: goto L_00380788;
    case 77u: goto L_00380798;
    case 78u: goto L_003807A4;
    case 79u: goto L_003807B0;
    case 80u: goto L_003807C0;
    case 81u: goto L_003807D4;
    case 82u: goto L_003807E0;
    case 83u: goto L_003807EC;
    case 84u: goto L_00380810;
    case 85u: goto L_00380828;
    case 86u: goto L_00380840;
    case 87u: goto L_00380860;
    case 88u: goto L_00380870;
    case 89u: goto L_00380884;
    case 90u: goto L_003808A0;
    case 91u: goto L_003808E0;
    case 92u: goto L_003808F8;
    case 93u: goto L_00380980;
    case 94u: goto L_00380990;
    case 95u: goto L_003809B0;
    case 96u: goto L_00380A30;
    case 97u: goto L_00380A70;
    case 98u: goto L_00380A80;
    case 99u: goto L_00380A90;
    case 100u: goto L_00380AD0;
    case 101u: goto L_00380B0C;
    case 102u: goto L_00380B20;
    case 103u: goto L_00380B30;
    case 104u: goto L_00380B70;
    case 105u: goto L_00380BB4;
    case 106u: goto L_00380BD0;
    case 107u: goto L_00380BE0;
    case 108u: goto L_00380C30;
    case 109u: goto L_00380C70;
    case 110u: goto L_00380CB0;
    case 111u: goto L_00380CF4;
    case 112u: goto L_00380D08;
    case 113u: goto L_00380D20;
    case 114u: goto L_00380D70;
    case 115u: goto L_00380DBC;
    case 116u: goto L_00380DD8;
    case 117u: goto L_00380DF0;
    case 118u: goto L_00380E40;
    case 119u: goto L_00380E80;
    case 120u: goto L_00380EC0;
    case 121u: goto L_00380ED0;
    case 122u: goto L_00380EE0;
    case 123u: goto L_00380EF0;
    case 124u: goto L_00380F18;
    case 125u: goto L_00380F58;
    case 126u: goto L_00380F68;
    case 127u: goto L_00380F80;
    case 128u: goto L_00380FA0;
    case 129u: goto L_00380FB4;
    case 130u: goto L_00380FC8;
    case 131u: goto L_00381030;
    case 132u: goto L_00381044;
    case 133u: goto L_00381054;
    case 134u: goto L_00381068;
    case 135u: goto L_00381164;
    case 136u: goto L_0038117C;
    case 137u: goto L_0038118C;
    case 138u: goto L_0038119C;
    case 139u: goto L_003811B0;
    case 140u: goto L_003811C8;
    case 141u: goto L_003811DC;
    case 142u: goto L_003811F0;
    case 143u: goto L_00381204;
    case 144u: goto L_00381218;
    case 145u: goto L_00381228;
    case 146u: goto L_00381240;
    case 147u: goto L_00381274;
    case 148u: goto L_00381280;
    case 149u: goto L_0038128C;
    case 150u: goto L_00381294;
    case 151u: goto L_0038129C;
    case 152u: goto L_003812A4;
    case 153u: goto L_003812B8;
    case 154u: goto L_003812C8;
    case 155u: goto L_003812D4;
    case 156u: goto L_003812E0;
    case 157u: goto L_00381310;
    case 158u: goto L_0038133C;
    case 159u: goto L_00381350;
    case 160u: goto L_0038136C;
    case 161u: goto L_00381388;
    case 162u: goto L_003813A4;
    case 163u: goto L_003813C0;
    case 164u: goto L_003813E8;
    case 165u: goto L_00381410;
    case 166u: goto L_00381444;
    case 167u: goto L_00381454;
    case 168u: goto L_00381468;
    case 169u: goto L_0038147C;
    case 170u: goto L_00381490;
    case 171u: goto L_003814A4;
    case 172u: goto L_003814B8;
    case 173u: goto L_003814BC;
    case 174u: goto L_003814D0;
    case 175u: goto L_003814E4;
    case 176u: goto L_003814F4;
    case 177u: goto L_00381508;
    case 178u: goto L_00381518;
    case 179u: goto L_00381528;
    case 180u: goto L_00381538;
    case 181u: goto L_00381548;
    case 182u: goto L_00381558;
    case 183u: goto L_00381568;
    case 184u: goto L_00381578;
    case 185u: goto L_003815A0;
    case 186u: goto L_003815B0;
    case 187u: goto L_003815C0;
    case 188u: goto L_003815D0;
    case 189u: goto L_003815D4;
    case 190u: goto L_003815E4;
    case 191u: goto L_003815F8;
    case 192u: goto L_00381610;
    case 193u: goto L_00381620;
    case 194u: goto L_00381634;
    case 195u: goto L_0038164C;
    case 196u: goto L_0038165C;
    case 197u: goto L_00381670;
    case 198u: goto L_003816B0;
    case 199u: goto L_003816C0;
    case 200u: goto L_003816D0;
    case 201u: goto L_003816E0;
    case 202u: goto L_003816F0;
    case 203u: goto L_00381700;
    case 204u: goto L_00381740;
    case 205u: goto L_0038174C;
    case 206u: goto L_00381754;
    case 207u: goto L_00381760;
    case 208u: goto L_00381768;
    case 209u: goto L_00381774;
    case 210u: goto L_0038177C;
    case 211u: goto L_00381788;
    case 212u: goto L_00381790;
    case 213u: goto L_0038179C;
    case 214u: goto L_003817A4;
    case 215u: goto L_003817B0;
    case 216u: goto L_003817B8;
    case 217u: goto L_003817C4;
    case 218u: goto L_003817CC;
    case 219u: goto L_003817D8;
    case 220u: goto L_003817F0;
    case 221u: goto L_00381800;
    case 222u: goto L_00381824;
    case 223u: goto L_00381838;
    case 224u: goto L_003818C4;
    case 225u: goto L_003818F0;
    case 226u: goto L_003818FC;
    case 227u: goto L_00381908;
    case 228u: goto L_00381914;
    case 229u: goto L_00381920;
    case 230u: goto L_0038192C;
    case 231u: goto L_00381938;
    case 232u: goto L_00381944;
    case 233u: goto L_00381954;
    case 234u: goto L_00381968;
    case 235u: goto L_0038197C;
    case 236u: goto L_00381990;
    case 237u: goto L_003819A4;
    case 238u: goto L_003819B0;
    case 239u: goto L_003819C0;
    case 240u: goto L_003819D4;
    case 241u: goto L_003819E4;
    case 242u: goto L_003819F8;
    case 243u: goto L_00381A08;
    case 244u: goto L_00381A1C;
    case 245u: goto L_00381A2C;
    case 246u: goto L_00381A40;
    case 247u: goto L_00381A64;
    case 248u: goto L_00381A6C;
    case 249u: goto L_00381A7C;
    case 250u: goto L_00381A90;
    case 251u: goto L_00381AAC;
    case 252u: goto L_00381ABC;
    case 253u: goto L_00381AD0;
    case 254u: goto L_00381AEC;
    case 255u: goto L_00381AFC;
    case 256u: goto L_00381B10;
    case 257u: goto L_00381B40;
    case 258u: goto L_00381B74;
    case 259u: goto L_00381B80;
    case 260u: goto L_00381B8C;
    case 261u: goto L_00381B94;
    case 262u: goto L_00381B9C;
    case 263u: goto L_00381BA4;
    case 264u: goto L_00381BB8;
    case 265u: goto L_00381BC8;
    case 266u: goto L_00381BD4;
    case 267u: goto L_00381BE0;
    case 268u: goto L_00381C10;
    case 269u: goto L_00381C34;
    case 270u: goto L_00381C48;
    case 271u: goto L_00381C70;
    case 272u: goto L_00381C88;
    case 273u: goto L_00381C9C;
    case 274u: goto L_00381CB0;
    case 275u: goto L_00381CC4;
    case 276u: goto L_00381CD8;
    case 277u: goto L_00381CEC;
    case 278u: goto L_00381D00;
    case 279u: goto L_00381D14;
    case 280u: goto L_00381D28;
    case 281u: goto L_00381D3C;
    case 282u: goto L_00381D8C;
    case 283u: goto L_00381DA0;
    case 284u: goto L_00381DB8;
    case 285u: goto L_00381DE0;
    case 286u: goto L_00381DF0;
    case 287u: goto L_00381E0C;
    case 288u: goto L_00381E20;
    case 289u: goto L_00381E34;
    case 290u: goto L_00381E3C;
    case 291u: goto L_00381E44;
    case 292u: goto L_00381E54;
    case 293u: goto L_00381E60;
    case 294u: goto L_00381EA0;
    case 295u: goto L_00381EA8;
    case 296u: goto L_00381EC0;
    case 297u: goto L_00381EC8;
    case 298u: goto L_00381ED0;
    case 299u: goto L_00381EDC;
    case 300u: goto L_00381EE8;
    case 301u: goto L_00381EF0;
    case 302u: goto L_00381F08;
    case 303u: goto L_00381F14;
    case 304u: goto L_00381F20;
    case 305u: goto L_00381F28;
    case 306u: goto L_00381F34;
    case 307u: goto L_00381F40;
    case 308u: goto L_00381F4C;
    case 309u: goto L_00381F60;
    case 310u: goto L_00381F70;
    case 311u: goto L_00381F84;
    case 312u: goto L_00381F8C;
    case 313u: goto L_00381F98;
    case 314u: goto L_00381FA4;
    case 315u: goto L_00381FB8;
    case 316u: goto L_00381FCC;
    case 317u: goto L_00381FD4;
    case 318u: goto L_00381FE0;
    case 319u: goto L_00381FEC;
    case 320u: goto L_00381FF8;
    case 321u: goto L_00382010;
    case 322u: goto L_0038201C;
    case 323u: goto L_00382028;
    case 324u: goto L_00382030;
    case 325u: goto L_00382040;
    case 326u: goto L_00382060;
    case 327u: goto L_00382080;
    case 328u: goto L_003820BC;
    case 329u: goto L_003820D4;
    case 330u: goto L_003820EC;
    case 331u: goto L_00382118;
    case 332u: goto L_0038212C;
    case 333u: goto L_00382140;
    case 334u: goto L_00382164;
    case 335u: goto L_00382180;
    case 336u: goto L_003821B4;
    case 337u: goto L_003821C4;
    case 338u: goto L_003821D0;
    case 339u: goto L_003821DC;
    case 340u: goto L_003821E4;
    case 341u: goto L_003821EC;
    case 342u: goto L_003821F4;
    case 343u: goto L_00382200;
    case 344u: goto L_00382208;
    case 345u: goto L_00382214;
    case 346u: goto L_00382220;
    case 347u: goto L_00382250;
    case 348u: goto L_00382268;
    case 349u: goto L_00382280;
    case 350u: goto L_003822A0;
    case 351u: goto L_003822B0;
    case 352u: goto L_003822F0;
    case 353u: goto L_00382308;
    case 354u: goto L_00382390;
    case 355u: goto L_003823A0;
    case 356u: goto L_003823C0;
    case 357u: goto L_003823E0;
    case 358u: goto L_00382404;
    case 359u: goto L_00382420;
    case 360u: goto L_0038245C;
    case 361u: goto L_00382474;
    case 362u: goto L_0038248C;
    case 363u: goto L_003824B0;
    case 364u: goto L_003824C4;
    case 365u: goto L_003824E0;
    case 366u: goto L_0038251C;
    case 367u: goto L_00382540;
    case 368u: goto L_0038255C;
    case 369u: goto L_00382580;
    case 370u: goto L_00382590;
    case 371u: goto L_003825B0;
    case 372u: goto L_003825CC;
    case 373u: goto L_003825F0;
    case 374u: goto L_00382610;
    case 375u: goto L_0038263C;
    case 376u: goto L_00382660;
    case 377u: goto L_00382688;
    case 378u: goto L_003826A4;
    case 379u: goto L_003826C0;
    case 380u: goto L_003826E0;
    case 381u: goto L_003826F0;
    case 382u: goto L_00382700;
    case 383u: goto L_00382720;
    case 384u: goto L_00382740;
    case 385u: goto L_00382758;
    case 386u: goto L_00382770;
    case 387u: goto L_00382790;
    case 388u: goto L_003827C4;
    case 389u: goto L_003827D4;
    case 390u: goto L_003827E0;
    case 391u: goto L_003827E8;
    case 392u: goto L_003827F0;
    case 393u: goto L_003827F8;
    case 394u: goto L_00382810;
    case 395u: goto L_00382830;
    case 396u: goto L_0038283C;
    case 397u: goto L_00382850;
    case 398u: goto L_00382858;
    case 399u: goto L_00382868;
    case 400u: goto L_0038287C;
    case 401u: goto L_00382888;
    case 402u: goto L_00382890;
    case 403u: goto L_0038289C;
    case 404u: goto L_003828A4;
    case 405u: goto L_003828D0;
    case 406u: goto L_003828E0;
    case 407u: goto L_003828EC;
    case 408u: goto L_00382920;
    case 409u: goto L_00382938;
    case 410u: goto L_00382950;
    case 411u: goto L_00382970;
    case 412u: goto L_00382980;
    case 413u: goto L_00382994;
    case 414u: goto L_003829B0;
    case 415u: goto L_003829F0;
    case 416u: goto L_00382A08;
    case 417u: goto L_00382A90;
    case 418u: goto L_00382AA0;
    case 419u: goto L_00382AC0;
    case 420u: goto L_00382AD0;
    case 421u: goto L_00382AF0;
    case 422u: goto L_00382B40;
    case 423u: goto L_00382B48;
    case 424u: goto L_00382B84;
    case 425u: goto L_00382B8C;
    case 426u: goto L_00382BA8;
    case 427u: goto L_00382C84;
    case 428u: goto L_00382C90;
    case 429u: goto L_00382D50;
    case 430u: goto L_00382E1C;
    case 431u: goto L_00382EF0;
    case 432u: goto L_00382F00;
    case 433u: goto L_00382F64;
    case 434u: goto L_00382FCC;
    case 435u: goto L_00382FDC;
    case 436u: goto L_003830A4;
    case 437u: goto L_003830B4;
    case 438u: goto L_003830DC;
    case 439u: goto L_003830E4;
    case 440u: goto L_003830F4;
    case 441u: goto L_0038311C;
    case 442u: goto L_00383124;
    case 443u: goto L_00383134;
    case 444u: goto L_0038315C;
    case 445u: goto L_00383160;
    case 446u: goto L_00383168;
    case 447u: goto L_003831AC;
    case 448u: goto L_003831F4;
    case 449u: goto L_00383234;
    case 450u: goto L_00383260;
    case 451u: goto L_00383270;
    case 452u: goto L_00383298;
    case 453u: goto L_003832A0;
    case 454u: goto L_003832B0;
    case 455u: goto L_003832D8;
    case 456u: goto L_003832E0;
    case 457u: goto L_003832F0;
    case 458u: goto L_00383318;
    case 459u: goto L_00383340;
    case 460u: goto L_00383348;
    case 461u: goto L_003833B8;
    case 462u: goto L_003833D0;
    case 463u: goto L_003833E8;
    case 464u: goto L_00383408;
    case 465u: goto L_0038342C;
    case 466u: goto L_00383454;
    case 467u: goto L_00383464;
    case 468u: goto L_0038347C;
    case 469u: goto L_003834A4;
    case 470u: goto L_00383520;
    case 471u: goto L_00383530;
    case 472u: goto L_00383558;
    case 473u: goto L_00383564;
    case 474u: goto L_00383570;
    case 475u: goto L_00383578;
    case 476u: goto L_00383580;
    case 477u: goto L_0038358C;
    case 478u: goto L_00383594;
    case 479u: goto L_003835A0;
    case 480u: goto L_003835B0;
    case 481u: goto L_003835C8;
    case 482u: goto L_003835D8;
    case 483u: goto L_003835E4;
    case 484u: goto L_003835F0;
    case 485u: goto L_00383620;
    case 486u: goto L_00383638;
    case 487u: goto L_00383650;
    case 488u: goto L_00383670;
    case 489u: goto L_00383680;
    case 490u: goto L_00383694;
    case 491u: goto L_003836B0;
    case 492u: goto L_003836F0;
    case 493u: goto L_00383708;
    case 494u: goto L_00383790;
    case 495u: goto L_003837A0;
    case 496u: goto L_003837B0;
    case 497u: goto L_003837D0;
    case 498u: goto L_003837EC;
    case 499u: goto L_00383804;
    case 500u: goto L_00383820;
    case 501u: goto L_0038383C;
    case 502u: goto L_00383854;
    case 503u: goto L_00383870;
    case 504u: goto L_0038389C;
    case 505u: goto L_003838B4;
    case 506u: goto L_003838D0;
    case 507u: goto L_003838E0;
    case 508u: goto L_003838F0;
    case 509u: goto L_0038390C;
    case 510u: goto L_00383924;
    case 511u: goto L_00383940;
    case 512u: goto L_00383960;
    case 513u: goto L_00383974;
    case 514u: goto L_003839C0;
    case 515u: goto L_00383A10;
    case 516u: goto L_00383A40;
    case 517u: goto L_00383B28;
    case 518u: goto L_00383B34;
    case 519u: goto L_00383BF4;
    case 520u: goto L_00383CDC;
    case 521u: goto L_00383D34;
    case 522u: goto L_00383D78;
    case 523u: goto L_00383DA4;
    case 524u: goto L_00383DB4;
    case 525u: goto L_00383DDC;
    case 526u: goto L_00383DE4;
    case 527u: goto L_00383DF4;
    case 528u: goto L_00383E1C;
    case 529u: goto L_00383E24;
    case 530u: goto L_00383E34;
    case 531u: goto L_00383E5C;
    case 532u: goto L_00383E84;
    case 533u: goto L_00383E8C;
    case 534u: goto L_00383EA0;
    case 535u: goto L_00383EBC;
    case 536u: goto L_00383ED4;
    case 537u: goto L_00383EF0;
    case 538u: goto L_00383F0C;
    case 539u: goto L_00383F24;
    case 540u: goto L_00383F40;
    case 541u: goto L_00383F6C;
    case 542u: goto L_00383F84;
    case 543u: goto L_00383FA0;
    case 544u: goto L_00383FB0;
    case 545u: goto L_00383FC0;
    case 546u: goto L_00383FDC;
    case 547u: goto L_00383FF4;
    default: bad_entry(c, 0x00380000u); return;
    }
L_00380000:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00380018; } }
L_00380008:
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 1;
L_0038000C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 198u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00380058; } }
L_00380018:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380028u); set32(c.r[4], c.r[4].w[0] - 15920u);  if (depth < kMaxDepth) unit_0094(c, 128u, depth + 1u); else { c.pc = 0x00451970u; return; } if (c.pc != 0x00380028u) [[unlikely]] return; }
L_00380028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380048; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380040u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380040u) [[unlikely]] return; }
L_00380040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038000Cu | kUnwind; return; } goto L_0038000C; } }
L_00380048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380050u); set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));  if (depth < kMaxDepth) unit_0060(c, 157u, depth + 1u); else { c.pc = 0x00381310u; return; } if (c.pc != 0x00380050u) [[unlikely]] return; }
L_00380050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00380008u | kUnwind; return; } goto L_00380008; } }
L_00380058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380070:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 168u)));  goto L_00380080; }
L_00380080:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 2;
L_00380088:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003800ACu); set32(c.r[5], c.r[16].w[0] + 712u);  if (depth < kMaxDepth) unit_0060(c, 32u, depth + 1u); else { c.pc = 0x003802F0u; return; } if (c.pc != 0x003800ACu) [[unlikely]] return; }
L_003800AC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003800B8u); set32(c.r[5], c.r[16].w[0] + 712u);  if (depth < kMaxDepth) unit_0060(c, 25u, depth + 1u); else { c.pc = 0x003801C0u; return; } if (c.pc != 0x003800B8u) [[unlikely]] return; }
L_003800B8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003800C4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0060(c, 22u, depth + 1u); else { c.pc = 0x00380170u; return; } if (c.pc != 0x003800C4u) [[unlikely]] return; }
L_003800C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380118; } }
L_003800CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003800D4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 31u, depth + 1u); else { c.pc = 0x003802E0u; return; } if (c.pc != 0x003800D4u) [[unlikely]] return; }
L_003800D4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_003800F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003800E8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 31u, depth + 1u); else { c.pc = 0x003802E0u; return; } if (c.pc != 0x003800E8u) [[unlikely]] return; }
L_003800E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_00380154; } }
L_003800F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003800F8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 29u, depth + 1u); else { c.pc = 0x00380240u; return; } if (c.pc != 0x003800F8u) [[unlikely]] return; }
L_003800F8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380104u); set32(c.r[5], c.r[16].w[0] + 712u);  if (depth < kMaxDepth) unit_0060(c, 25u, depth + 1u); else { c.pc = 0x003801C0u; return; } if (c.pc != 0x00380104u) [[unlikely]] return; }
L_00380104:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380110u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0060(c, 22u, depth + 1u); else { c.pc = 0x00380170u; return; } if (c.pc != 0x00380110u) [[unlikely]] return; }
L_00380110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003800CCu | kUnwind; return; } goto L_003800CC; } }
L_00380118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380120u); set32(c.r[4], c.r[16].w[0] + 712u);  if (depth < kMaxDepth) unit_005B(c, 156u, depth + 1u); else { c.pc = 0x0036CFD0u; return; } if (c.pc != 0x00380120u) [[unlikely]] return; }
L_00380120:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380134u); set32(c.r[5], c.r[5].w[0] + 13888u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00380134u) [[unlikely]] return; }
L_00380134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380140u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00380140u) [[unlikely]] return; }
L_00380140:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038014Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0038014Cu) [[unlikely]] return; }
L_0038014C:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 2;
L_00380154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00380170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380188u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 24u, depth + 1u); else { c.pc = 0x003801A0u; return; } if (c.pc != 0x00380188u) [[unlikely]] return; }
L_00380188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003801A0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003801C0:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  goto L_003801D0; }
L_003801D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003801E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 28u, depth + 1u); else { c.pc = 0x00380200u; return; } if (c.pc != 0x003801E4u) [[unlikely]] return; }
L_003801E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380200:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], c.r[8].w[0] - 16u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_00380240:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 16u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380260; } }
L_00380258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003802CC; } }
L_00380260:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003802C4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003802C4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00380258u | kUnwind; return; } goto L_00380258; } }
L_003802C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00380258u | kUnwind; return; } goto L_00380258; } }
L_003802CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003802E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_003802F0:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_00380308; } }
L_00380304:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00380308:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003801D0u | kUnwind; return; } goto L_003801D0; }
L_00380310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380330u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380330u) [[unlikely]] return; }
L_00380330:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00380348; } }
L_00380338:
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 1;
L_0038033C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 198u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00380388; } }
L_00380348:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 1756u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380358u); set32(c.r[4], c.r[4].w[0] - 17680u);  if (depth < kMaxDepth) unit_0094(c, 128u, depth + 1u); else { c.pc = 0x00451970u; return; } if (c.pc != 0x00380358u) [[unlikely]] return; }
L_00380358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380378; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380370u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380370u) [[unlikely]] return; }
L_00380370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038033Cu | kUnwind; return; } goto L_0038033C; } }
L_00380378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380380u); set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));  if (depth < kMaxDepth) unit_0060(c, 127u, depth + 1u); else { c.pc = 0x00380F80u; return; } if (c.pc != 0x00380380u) [[unlikely]] return; }
L_00380380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00380338u | kUnwind; return; } goto L_00380338; } }
L_00380388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003803A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003803B8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003803B8u) [[unlikely]] return; }
L_003803B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 198u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003803D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00380414; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00380414; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 196u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00380414; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00380000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038040Cu); set32(c.r[4], c.r[4].w[0] + 976u);  if (depth < kMaxDepth) unit_0094(c, 141u, depth + 1u); else { c.pc = 0x00451E80u; return; } if (c.pc != 0x0038040Cu) [[unlikely]] return; }
L_0038040C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00380424; } }
L_00380414:
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 198u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038040Cu | kUnwind; return; } goto L_0038040C; } }
L_00380424:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00380430:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380454u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380454u) [[unlikely]] return; }
L_00380454:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00380458:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 12192u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380478u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 95u, depth + 1u); else { c.pc = 0x003809B0u; return; } if (c.pc != 0x00380478u) [[unlikely]] return; }
L_00380478:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380508; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00380508; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[18].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003804A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003804A4u) [[unlikely]] return; }
L_003804A4:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003804B4u); set32(c.r[5], c.r[18].w[0] + 10u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003804B4u) [[unlikely]] return; }
L_003804B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 999ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003804CCu); c.r[6].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0060(c, 70u, depth + 1u); else { c.pc = 0x00380710u; return; } if (c.pc != 0x003804CCu) [[unlikely]] return; }
L_003804CC:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 19u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 22u));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 21u));
    c.r[10].d[0] = ld8((c.r[16].w[0] + 23u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003804F0u); set32(c.r[5], c.r[5].w[0] + 14012u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003804F0u) [[unlikely]] return; }
L_003804F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380500u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0060(c, 64u, depth + 1u); else { c.pc = 0x00380650u; return; } if (c.pc != 0x00380500u) [[unlikely]] return; }
L_00380500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003805B0; } }
L_00380508:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380568; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], c.r[16].w[0] + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380528u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380528u) [[unlikely]] return; }
L_00380528:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[5], c.r[16].w[0] + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380538u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380538u) [[unlikely]] return; }
L_00380538:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380548u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 70u, depth + 1u); else { c.pc = 0x00380710u; return; } if (c.pc != 0x00380548u) [[unlikely]] return; }
L_00380548:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038055Cu); set32(c.r[6], c.r[6].w[0] + 14032u);  if (depth < kMaxDepth) unit_0060(c, 64u, depth + 1u); else { c.pc = 0x00380650u; return; } if (c.pc != 0x0038055Cu) [[unlikely]] return; }
L_0038055C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003805B0; } }
    c.budget -= 1;
L_00380568:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038057Cu); set32(c.r[5], c.r[16].w[0] + 5u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038057Cu) [[unlikely]] return; }
L_0038057C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[5], c.r[16].w[0] + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038058Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038058Cu) [[unlikely]] return; }
L_0038058C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038059Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 70u, depth + 1u); else { c.pc = 0x00380710u; return; } if (c.pc != 0x0038059Cu) [[unlikely]] return; }
L_0038059C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003805B0u); set32(c.r[6], c.r[6].w[0] + 14032u);  if (depth < kMaxDepth) unit_0060(c, 64u, depth + 1u); else { c.pc = 0x00380650u; return; } if (c.pc != 0x003805B0u) [[unlikely]] return; }
L_003805B0:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00380458u | kUnwind; return; } goto L_00380458; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 12016u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038061C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 12015u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003805FC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003805F4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003805F4u) [[unlikely]] return; }
L_003805F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));  if (t) { goto L_00380610; } }
L_003805FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038060Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038060Cu) [[unlikely]] return; }
L_0038060C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 1;
L_00380610:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 198u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00380634; } }
L_0038061C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038062Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038062Cu) [[unlikely]] return; }
L_0038062C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038060Cu | kUnwind; return; } goto L_0038060C; } }
L_00380634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00380650:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 168u)));  goto L_00380660; }
L_00380660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003806F8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003806E4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003806D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003806BC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003806A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00380708; } }
L_003806A8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003806B4u); set32(c.r[4], c.r[4].w[0] + 24u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003806B4u) [[unlikely]] return; }
L_003806B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380704; } }
L_003806BC:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003806C8u); set32(c.r[4], c.r[4].w[0] + 56u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003806C8u) [[unlikely]] return; }
L_003806C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380704; } }
L_003806D0:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003806DCu); set32(c.r[4], c.r[4].w[0] + 88u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003806DCu) [[unlikely]] return; }
L_003806DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380704; } }
L_003806E4:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003806F0u); set32(c.r[4], c.r[4].w[0] + 120u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003806F0u) [[unlikely]] return; }
L_003806F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380704; } }
L_003806F8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380704u); set32(c.r[4], c.r[4].w[0] + 152u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00380704u) [[unlikely]] return; }
L_00380704:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00380708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00380710:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 168u)));  goto L_00380720; }
L_00380720:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038074Cu); set32(c.r[5], c.r[16].w[0] + 692u);  if (depth < kMaxDepth) unit_0060(c, 94u, depth + 1u); else { c.pc = 0x00380990u; return; } if (c.pc != 0x0038074Cu) [[unlikely]] return; }
L_0038074C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380758u); set32(c.r[5], c.r[16].w[0] + 692u);  if (depth < kMaxDepth) unit_0060(c, 87u, depth + 1u); else { c.pc = 0x00380860u; return; } if (c.pc != 0x00380758u) [[unlikely]] return; }
L_00380758:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380764u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0060(c, 84u, depth + 1u); else { c.pc = 0x00380810u; return; } if (c.pc != 0x00380764u) [[unlikely]] return; }
L_00380764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003807B8; } }
L_0038076C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380774u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 93u, depth + 1u); else { c.pc = 0x00380980u; return; } if (c.pc != 0x00380774u) [[unlikely]] return; }
L_00380774:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00380790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380788u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 93u, depth + 1u); else { c.pc = 0x00380980u; return; } if (c.pc != 0x00380788u) [[unlikely]] return; }
L_00380788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_003807F4; } }
L_00380790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380798u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 91u, depth + 1u); else { c.pc = 0x003808E0u; return; } if (c.pc != 0x00380798u) [[unlikely]] return; }
L_00380798:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003807A4u); set32(c.r[5], c.r[16].w[0] + 692u);  if (depth < kMaxDepth) unit_0060(c, 87u, depth + 1u); else { c.pc = 0x00380860u; return; } if (c.pc != 0x003807A4u) [[unlikely]] return; }
L_003807A4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003807B0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0060(c, 84u, depth + 1u); else { c.pc = 0x00380810u; return; } if (c.pc != 0x003807B0u) [[unlikely]] return; }
L_003807B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038076Cu | kUnwind; return; } goto L_0038076C; } }
L_003807B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003807C0u); set32(c.r[4], c.r[16].w[0] + 692u);  if (depth < kMaxDepth) unit_005A(c, 288u, depth + 1u); else { c.pc = 0x00369710u; return; } if (c.pc != 0x003807C0u) [[unlikely]] return; }
L_003807C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003807D4u); set32(c.r[5], c.r[5].w[0] + 13904u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003807D4u) [[unlikely]] return; }
L_003807D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003807E0u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003807E0u) [[unlikely]] return; }
L_003807E0:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003807ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003807ECu) [[unlikely]] return; }
L_003807EC:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 2;
L_003807F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00380810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380828u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 86u, depth + 1u); else { c.pc = 0x00380840u; return; } if (c.pc != 0x00380828u) [[unlikely]] return; }
L_00380828:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00380840:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00380860:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  goto L_00380870; }
L_00380870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380884u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 90u, depth + 1u); else { c.pc = 0x003808A0u; return; } if (c.pc != 0x00380884u) [[unlikely]] return; }
L_00380884:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003808A0:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], c.r[8].w[0] - 16u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_003808E0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 16u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380900; } }
L_003808F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038096C; } }
L_00380900:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00380964; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380964; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003808F8u | kUnwind; return; } goto L_003808F8; } }
L_00380964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003808F8u | kUnwind; return; } goto L_003808F8; } }
L_0038096C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00380980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00380990:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003809A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_003809A8; } }
L_003809A4:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003809A8:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00380870u | kUnwind; return; } goto L_00380870; }
L_003809B0:
    set32(c.r[10], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 16u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 17u));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 18u));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 19u));
    c.r[8].d[0] = ld8((c.r[5].w[0] + 20u));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 21u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 22u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 23u));
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 24u));
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_00380A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[3].w[0] + 196u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[7], c.r[3].w[0] + 184u);
    set32(c.r[3], ld32((c.r[3].w[0] + 184u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00380A78; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[3].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[3].w[0] + 192u), c.r[6].w[0]);
    c.budget -= 6;
L_00380A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00380A88; } }
L_00380A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380A80u);  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x00370B30u; return; } if (c.pc != 0x00380A80u) [[unlikely]] return; }
L_00380A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00380A70u | kUnwind; return; } goto L_00380A70; } }
L_00380A88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00380A90:
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 196u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00380000u);
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 976u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 16;
    { st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0094(c, 141u, depth); }
L_00380AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B0Cu); set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));  if (depth < kMaxDepth) unit_0060(c, 221u, depth + 1u); else { c.pc = 0x00381800u; return; } if (c.pc != 0x00380B0Cu) [[unlikely]] return; }
L_00380B0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[4], c.r[4].w[0] - 15920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B20u); set32(c.r[5], c.r[5].w[0] + 928u);  if (depth < kMaxDepth) unit_0094(c, 130u, depth + 1u); else { c.pc = 0x00451A10u; return; } if (c.pc != 0x00380B20u) [[unlikely]] return; }
L_00380B20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00380B30:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 15920u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[5], c.r[5].w[0] - 32u);
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 16;
    { st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0094(c, 134u, depth); }
L_00380B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380BB4u); set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));  if (depth < kMaxDepth) unit_0060(c, 139u, depth + 1u); else { c.pc = 0x003811B0u; return; } if (c.pc != 0x00380BB4u) [[unlikely]] return; }
L_00380BB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[5], c.r[5].w[0] - 17680u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380BD0u); set32(c.r[6], c.r[6].w[0] + 928u);  if (depth < kMaxDepth) unit_0094(c, 135u, depth + 1u); else { c.pc = 0x00451C00u; return; } if (c.pc != 0x00380BD0u) [[unlikely]] return; }
L_00380BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380BE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] - 17680u);
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00380000u);
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 18;
    { set32(c.r[6], c.r[6].w[0] + 784u);  [[clang::musttail]] return unit_0094(c, 139u, depth); }
L_00380C30:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00380000u);
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 928u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 14;
    { st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0094(c, 140u, depth); }
L_00380C70:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00380000u);
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1072u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 14;
    { st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0094(c, 141u, depth); }
L_00380CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32268u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380CF4u); set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));  if (depth < kMaxDepth) unit_0060(c, 221u, depth + 1u); else { c.pc = 0x00381800u; return; } if (c.pc != 0x00380CF4u) [[unlikely]] return; }
L_00380CF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[4], c.r[4].w[0] - 15920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D08u); set32(c.r[5], c.r[5].w[0] + 928u);  if (depth < kMaxDepth) unit_0094(c, 130u, depth + 1u); else { c.pc = 0x00451A10u; return; } if (c.pc != 0x00380D08u) [[unlikely]] return; }
L_00380D08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00380D20:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 15920u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[5], c.r[5].w[0] - 32u);
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32268u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 18;
    { st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0094(c, 134u, depth); }
L_00380D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32268u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380DBCu); set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));  if (depth < kMaxDepth) unit_0060(c, 139u, depth + 1u); else { c.pc = 0x003811B0u; return; } if (c.pc != 0x00380DBCu) [[unlikely]] return; }
L_00380DBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[5], c.r[5].w[0] - 17680u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380DD8u); set32(c.r[6], c.r[6].w[0] + 928u);  if (depth < kMaxDepth) unit_0094(c, 135u, depth + 1u); else { c.pc = 0x00451C00u; return; } if (c.pc != 0x00380DD8u) [[unlikely]] return; }
L_00380DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00380DF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] - 17680u);
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32268u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 20;
    { set32(c.r[6], c.r[6].w[0] + 784u);  [[clang::musttail]] return unit_0094(c, 139u, depth); }
L_00380E40:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00380000u);
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 928u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32268u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 16;
    { st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0094(c, 140u, depth); }
L_00380E80:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00380000u);
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1072u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    st32((c.r[2].w[0] + 192u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32268u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[2].w[0] + 197u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 16;
    { st8((c.r[2].w[0] + 198u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0094(c, 141u, depth); }
L_00380EC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00370B30u | kUnwind; return; } [[clang::musttail]] return unit_005C(c, 121u, depth); }
L_00380ED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00380EE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    c.budget -= 4;
    { st32((c.r[2].w[0] + 164u), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00370B30u | kUnwind; return; } [[clang::musttail]] return unit_005C(c, 121u, depth); }
L_00380EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F18u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 139u, depth + 1u); else { c.pc = 0x003811B0u; return; } if (c.pc != 0x00380F18u) [[unlikely]] return; }
L_00380F18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] - 17648u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] - 17647u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] - 17646u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] - 17644u), 0u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    st8((c.r[2].w[0] - 17656u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 999u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F58u); st32((c.r[2].w[0] - 17652u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0060(c, 127u, depth + 1u); else { c.pc = 0x00380F80u; return; } if (c.pc != 0x00380F58u) [[unlikely]] return; }
L_00380F58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F68u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x00370B30u; return; } if (c.pc != 0x00380F68u) [[unlikely]] return; }
L_00380F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00380F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[2].w[0] - 17648u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FA0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380FA0u) [[unlikely]] return; }
L_00380FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 17647u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FB4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380FB4u) [[unlikely]] return; }
L_00380FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 17646u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380FC8u) [[unlikely]] return; }
L_00380FC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10620000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17644u)));
    c.r[2].d[0] = c.r[3].d[0] | 19923ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = ld8((c.r[2].w[0] - 17648u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 6));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 17646u));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 17647u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381030u); c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381030u) [[unlikely]] return; }
L_00381030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 17656u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381044u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381044u) [[unlikely]] return; }
L_00381044:
    c.r[6].d[0] = ld8((c.r[28].w[0] - 29220u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381054u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381054u) [[unlikely]] return; }
L_00381054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 17640u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381068u); set32(c.r[5], 0u + 87u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381068u) [[unlikely]] return; }
L_00381068:
    c.f[2] = ld32((c.r[28].w[0] - 29204u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003810A8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] << 4);  if (t) { goto L_003810C4; } }
L_003810A8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[6].w[0] << 4);
    c.budget -= 7;
L_003810C4:
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003810E0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003810FC; } }
L_003810E0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003810FC:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00381128; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;  if (t) { goto L_00381144; } }
L_00381128:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 7;
L_00381144:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00381150; } }
    set32(c.r[6], 0u + 99u);
    c.budget -= 1;
L_00381150:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] + 14049u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381164u); set32(c.r[4], c.r[2].w[0] + 584u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00381164u) [[unlikely]] return; }
L_00381164:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 29208u)));
    set32(c.r[5], c.r[5].w[0] + 14059u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038117Cu); set32(c.r[4], c.r[2].w[0] + 616u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0038117Cu) [[unlikely]] return; }
L_0038117C:
    c.r[6].d[0] = ld8((c.r[28].w[0] - 29200u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038118Cu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038118Cu) [[unlikely]] return; }
L_0038118C:
    c.r[6].d[0] = ld8((c.r[28].w[0] - 29196u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038119Cu); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038119Cu) [[unlikely]] return; }
L_0038119C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003811B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003811C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x003811C8u) [[unlikely]] return; }
L_003811C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0] - 17648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003811DCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x003811DCu) [[unlikely]] return; }
L_003811DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0] - 17647u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003811F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x003811F0u) [[unlikely]] return; }
L_003811F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0] - 17646u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381204u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381204u) [[unlikely]] return; }
L_00381204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0] - 17656u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381218u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381218u) [[unlikely]] return; }
L_00381218:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[28].w[0] - 29220u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381228u); set32(c.r[5], 0u + 87u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381228u) [[unlikely]] return; }
L_00381228:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] - 17640u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00381240:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 168u)));  goto L_00381250; }
L_00381250:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381274u); set32(c.r[5], c.r[17].w[0] + 712u);  if (depth < kMaxDepth) unit_0060(c, 32u, depth + 1u); else { c.pc = 0x003802F0u; return; } if (c.pc != 0x00381274u) [[unlikely]] return; }
L_00381274:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381280u); set32(c.r[5], c.r[17].w[0] + 712u);  if (depth < kMaxDepth) unit_0060(c, 25u, depth + 1u); else { c.pc = 0x003801C0u; return; } if (c.pc != 0x00381280u) [[unlikely]] return; }
L_00381280:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038128Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0060(c, 22u, depth + 1u); else { c.pc = 0x00380170u; return; } if (c.pc != 0x0038128Cu) [[unlikely]] return; }
L_0038128C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038129C; } }
L_00381294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003812F0; } }
L_0038129C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003812A4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 31u, depth + 1u); else { c.pc = 0x003802E0u; return; } if (c.pc != 0x003812A4u) [[unlikely]] return; }
L_003812A4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003812C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003812B8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 31u, depth + 1u); else { c.pc = 0x003802E0u; return; } if (c.pc != 0x003812B8u) [[unlikely]] return; }
L_003812B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));  if (t) { goto L_003812F0; } }
L_003812C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003812C8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 29u, depth + 1u); else { c.pc = 0x00380240u; return; } if (c.pc != 0x003812C8u) [[unlikely]] return; }
L_003812C8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003812D4u); set32(c.r[5], c.r[17].w[0] + 712u);  if (depth < kMaxDepth) unit_0060(c, 25u, depth + 1u); else { c.pc = 0x003801C0u; return; } if (c.pc != 0x003812D4u) [[unlikely]] return; }
L_003812D4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003812E0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0060(c, 22u, depth + 1u); else { c.pc = 0x00380170u; return; } if (c.pc != 0x003812E0u) [[unlikely]] return; }
L_003812E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038129Cu | kUnwind; return; } goto L_0038129C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381294u | kUnwind; return; } goto L_00381294; } }
L_003812F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00381310:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], 0u + 21u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[2].w[0] - 15896u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038133Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038133Cu) [[unlikely]] return; }
L_0038133C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 15816u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381350u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381350u) [[unlikely]] return; }
L_00381350:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 15888u));
    set32(c.r[25], ld32((c.r[3].w[0] + 196u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038136Cu); set32(c.r[4], c.r[3].w[0] + 184u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038136Cu) [[unlikely]] return; }
L_0038136C:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 15887u));
    set32(c.r[25], ld32((c.r[3].w[0] + 228u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381388u); set32(c.r[4], c.r[3].w[0] + 216u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381388u) [[unlikely]] return; }
L_00381388:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 15886u));
    set32(c.r[25], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003813A4u); set32(c.r[4], c.r[3].w[0] + 200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003813A4u) [[unlikely]] return; }
L_003813A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 15885u));
    set32(c.r[25], ld32((c.r[3].w[0] + 244u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003813C0u); set32(c.r[4], c.r[3].w[0] + 232u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003813C0u) [[unlikely]] return; }
L_003813C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 15884u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[25], ld32((c.r[5].w[0] + 308u)));
    set32(c.r[4], c.r[5].w[0] + 296u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003813E8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003813E8u) [[unlikely]] return; }
L_003813E8:
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 15882u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[25], ld32((c.r[5].w[0] + 324u)));
    set32(c.r[4], c.r[5].w[0] + 312u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381410u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381410u) [[unlikely]] return; }
L_00381410:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 31776u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    st8((c.r[3].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31776u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0038168C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0038168C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F920000u);
    c.r[2].d[0] = c.r[2].d[0] | 18725ull;
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 3;
L_00381444:
    c.r[6].d[0] = ld8((c.r[28].w[0] - 29192u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381454u); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381454u) [[unlikely]] return; }
L_00381454:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 15880u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381468u); set32(c.r[5], 0u + 82u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381468u) [[unlikely]] return; }
L_00381468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 15879u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038147Cu); set32(c.r[5], 0u + 83u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038147Cu) [[unlikely]] return; }
L_0038147C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 15878u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381490u); set32(c.r[5], 0u + 84u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381490u) [[unlikely]] return; }
L_00381490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 15877u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814A4u); set32(c.r[5], 0u + 85u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003814A4u) [[unlikely]] return; }
L_003814A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] - 15876u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814B8u); set32(c.r[5], 0u + 86u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003814B8u) [[unlikely]] return; }
L_003814B8:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003814BC:
    c.r[18].d[0] = c.r[19].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x003817F0u; return; } if (c.pc != 0x003814D0u) [[unlikely]] return; }
L_003814D0:
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814E4u); set32(c.r[5], c.r[5].w[0] + 14059u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003814E4u) [[unlikely]] return; }
L_003814E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814F4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 203u, depth + 1u); else { c.pc = 0x00381700u; return; } if (c.pc != 0x003814F4u) [[unlikely]] return; }
L_003814F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381508u); c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381508u) [[unlikely]] return; }
L_00381508:
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 51u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381518u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381518u) [[unlikely]] return; }
L_00381518:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381528u); set32(c.r[4], c.r[4].w[0] - 15837u);  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381528u) [[unlikely]] return; }
L_00381528:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[5], c.r[17].w[0] + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381538u) [[unlikely]] return; }
L_00381538:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381548u); set32(c.r[4], c.r[4].w[0] - 15837u);  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381548u) [[unlikely]] return; }
L_00381548:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[5], c.r[17].w[0] + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381558u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381558u) [[unlikely]] return; }
L_00381558:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381568u); set32(c.r[4], c.r[4].w[0] - 15844u);  if (depth < kMaxDepth) unit_0060(c, 201u, depth + 1u); else { c.pc = 0x003816E0u; return; } if (c.pc != 0x00381568u) [[unlikely]] return; }
L_00381568:
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381578u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381578u) [[unlikely]] return; }
L_00381578:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[19].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003814BCu | kUnwind; return; } goto L_003814BC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 29216u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003815A0u); set32(c.r[5], c.r[5].w[0] + 14059u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003815A0u) [[unlikely]] return; }
L_003815A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003815B0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 203u, depth + 1u); else { c.pc = 0x00381700u; return; } if (c.pc != 0x003815B0u) [[unlikely]] return; }
L_003815B0:
    c.r[6].d[0] = ld8((c.r[28].w[0] - 29212u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003815C0u); set32(c.r[5], 0u + 79u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003815C0u) [[unlikely]] return; }
L_003815C0:
    c.r[6].d[0] = ld8((c.r[28].w[0] - 29184u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003815D0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0060(c, 70u, depth + 1u); else { c.pc = 0x00380710u; return; } if (c.pc != 0x003815D0u) [[unlikely]] return; }
L_003815D0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003815D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003815E4u); set32(c.r[4], c.r[4].w[0] - 15815u);  if (depth < kMaxDepth) unit_0060(c, 200u, depth + 1u); else { c.pc = 0x003816D0u; return; } if (c.pc != 0x003815E4u) [[unlikely]] return; }
L_003815E4:
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003815F8u); set32(c.r[5], c.r[2].w[0] + 26u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003815F8u) [[unlikely]] return; }
L_003815F8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003815D4u | kUnwind; return; } goto L_003815D4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00381610:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381620u); set32(c.r[4], c.r[4].w[0] - 15790u);  if (depth < kMaxDepth) unit_0060(c, 199u, depth + 1u); else { c.pc = 0x003816C0u; return; } if (c.pc != 0x00381620u) [[unlikely]] return; }
L_00381620:
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381634u); set32(c.r[5], c.r[2].w[0] + 88u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381634u) [[unlikely]] return; }
L_00381634:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 42ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381610u | kUnwind; return; } goto L_00381610; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038164C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038165Cu); set32(c.r[4], c.r[4].w[0] - 15748u);  if (depth < kMaxDepth) unit_0060(c, 198u, depth + 1u); else { c.pc = 0x003816B0u; return; } if (c.pc != 0x0038165Cu) [[unlikely]] return; }
L_0038165C:
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381670u); set32(c.r[5], c.r[3].w[0] + 130u);  if (depth < kMaxDepth) unit_0060(c, 7u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381670u) [[unlikely]] return; }
L_00381670:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038164Cu | kUnwind; return; } goto L_0038164C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00381698; } }
L_0038168C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 180u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381444u | kUnwind; return; } goto L_00381444; } }
L_00381698:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003816B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);  c.pc = t; return; }
L_003816C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);  c.pc = t; return; }
L_003816D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);  c.pc = t; return; }
L_003816E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);  c.pc = t; return; }
L_003816F0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_00381700:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 168u)));  goto L_00381710; }
L_00381710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003817D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 13616u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_0060[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00381740:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038174Cu); set32(c.r[4], c.r[4].w[0] + 328u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0038174Cu) [[unlikely]] return; }
L_0038174C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003817DC; } }
L_00381754:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381760u); set32(c.r[4], c.r[4].w[0] + 360u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00381760u) [[unlikely]] return; }
L_00381760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003817D8; } }
L_00381768:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381774u); set32(c.r[4], c.r[4].w[0] + 392u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00381774u) [[unlikely]] return; }
L_00381774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003817D8; } }
L_0038177C:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381788u); set32(c.r[4], c.r[4].w[0] + 424u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00381788u) [[unlikely]] return; }
L_00381788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003817D8; } }
L_00381790:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038179Cu); set32(c.r[4], c.r[4].w[0] + 456u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0038179Cu) [[unlikely]] return; }
L_0038179C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003817D8; } }
L_003817A4:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003817B0u); set32(c.r[4], c.r[4].w[0] + 488u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003817B0u) [[unlikely]] return; }
L_003817B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003817D8; } }
L_003817B8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003817C4u); set32(c.r[4], c.r[4].w[0] + 520u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003817C4u) [[unlikely]] return; }
L_003817C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003817D8; } }
L_003817CC:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003817D8u); set32(c.r[4], c.r[4].w[0] + 552u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003817D8u) [[unlikely]] return; }
L_003817D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003817DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003817F0:
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_00381800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 21u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381824u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381824u) [[unlikely]] return; }
L_00381824:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[3].w[0] - 15896u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381838u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381838u) [[unlikely]] return; }
L_00381838:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[3].w[0] - 15816u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[11], ld32((c.r[18].w[0] + 168u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[10], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 80u);
    c.r[11].d[0] = ld8((c.r[11].w[0] + 188u));
    st8((c.r[9].w[0] - 15888u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[9], ld32((c.r[18].w[0] + 168u)));
    c.r[9].d[0] = ld8((c.r[9].w[0] + 220u));
    st8((c.r[8].w[0] - 15887u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], ld32((c.r[18].w[0] + 168u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 204u));
    st8((c.r[7].w[0] - 15886u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], ld32((c.r[18].w[0] + 168u)));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 236u));
    st8((c.r[6].w[0] - 15885u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 300u));
    set32(c.r[6], c.r[10].w[0] - c.r[6].w[0]);
    st16((c.r[3].w[0] - 15884u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 316u));
    set32(c.r[3], c.r[10].w[0] - c.r[3].w[0]);
    st16((c.r[2].w[0] - 15882u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 168u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 268u));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003818C4u); st8((c.r[28].w[0] - 31776u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x003818C4u) [[unlikely]] return; }
L_003818C4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00381944; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 13648u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_0060[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003818F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381948; } }
L_003818FC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381948; } }
L_00381908:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381948; } }
L_00381914:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381948; } }
L_00381920:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381948; } }
L_0038192C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381948; } }
L_00381938:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29192u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381948; } }
L_00381944:
    st8((c.r[28].w[0] - 29192u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00381948:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381954u); set32(c.r[5], 0u + 82u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381954u) [[unlikely]] return; }
L_00381954:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[3].w[0] - 15880u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381968u); set32(c.r[5], 0u + 83u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381968u) [[unlikely]] return; }
L_00381968:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[3].w[0] - 15879u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038197Cu); set32(c.r[5], 0u + 84u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x0038197Cu) [[unlikely]] return; }
L_0038197C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[3].w[0] - 15878u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381990u); set32(c.r[5], 0u + 85u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381990u) [[unlikely]] return; }
L_00381990:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[3].w[0] - 15877u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819A4u); set32(c.r[5], 0u + 86u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x003819A4u) [[unlikely]] return; }
L_003819A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] - 15876u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003819B0:
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819C0u); set32(c.r[5], c.r[16].w[0] + 51u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x003819C0u) [[unlikely]] return; }
L_003819C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x003819D4u) [[unlikely]] return; }
L_003819D4:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[5], c.r[16].w[0] + 58u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x003819E4u) [[unlikely]] return; }
L_003819E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x003819F8u) [[unlikely]] return; }
L_003819F8:
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[5], c.r[16].w[0] + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381A08u) [[unlikely]] return; }
L_00381A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A1Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381A1Cu) [[unlikely]] return; }
L_00381A1C:
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[5], c.r[16].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381A2Cu) [[unlikely]] return; }
L_00381A2C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A40u); set32(c.r[4], c.r[4].w[0] - 15844u);  if (depth < kMaxDepth) unit_0060(c, 201u, depth + 1u); else { c.pc = 0x003816E0u; return; } if (c.pc != 0x00381A40u) [[unlikely]] return; }
L_00381A40:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003819B0u | kUnwind; return; } goto L_003819B0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A64u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0060(c, 257u, depth + 1u); else { c.pc = 0x00381B40u; return; } if (c.pc != 0x00381A64u) [[unlikely]] return; }
L_00381A64:
    st8((c.r[28].w[0] - 29184u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00381A6C:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A7Cu); set32(c.r[5], c.r[2].w[0] + 26u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381A7Cu) [[unlikely]] return; }
L_00381A7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A90u); set32(c.r[4], c.r[4].w[0] - 15815u);  if (depth < kMaxDepth) unit_0060(c, 200u, depth + 1u); else { c.pc = 0x003816D0u; return; } if (c.pc != 0x00381A90u) [[unlikely]] return; }
L_00381A90:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381A6Cu | kUnwind; return; } goto L_00381A6C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00381AAC:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381ABCu); set32(c.r[5], c.r[2].w[0] + 88u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381ABCu) [[unlikely]] return; }
L_00381ABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381AD0u); set32(c.r[4], c.r[4].w[0] - 15790u);  if (depth < kMaxDepth) unit_0060(c, 199u, depth + 1u); else { c.pc = 0x003816C0u; return; } if (c.pc != 0x00381AD0u) [[unlikely]] return; }
L_00381AD0:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 42ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381AACu | kUnwind; return; } goto L_00381AAC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00381AEC:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381AFCu); set32(c.r[5], c.r[2].w[0] + 130u);  if (depth < kMaxDepth) unit_0060(c, 146u, depth + 1u); else { c.pc = 0x00381240u; return; } if (c.pc != 0x00381AFCu) [[unlikely]] return; }
L_00381AFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381B10u); set32(c.r[4], c.r[4].w[0] - 15748u);  if (depth < kMaxDepth) unit_0060(c, 198u, depth + 1u); else { c.pc = 0x003816B0u; return; } if (c.pc != 0x00381B10u) [[unlikely]] return; }
L_00381B10:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[17].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381AECu | kUnwind; return; } goto L_00381AEC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00381B40:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 168u)));  goto L_00381B50; }
L_00381B50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381B74u); set32(c.r[5], c.r[17].w[0] + 692u);  if (depth < kMaxDepth) unit_0060(c, 94u, depth + 1u); else { c.pc = 0x00380990u; return; } if (c.pc != 0x00381B74u) [[unlikely]] return; }
L_00381B74:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381B80u); set32(c.r[5], c.r[17].w[0] + 692u);  if (depth < kMaxDepth) unit_0060(c, 87u, depth + 1u); else { c.pc = 0x00380860u; return; } if (c.pc != 0x00381B80u) [[unlikely]] return; }
L_00381B80:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381B8Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0060(c, 84u, depth + 1u); else { c.pc = 0x00380810u; return; } if (c.pc != 0x00381B8Cu) [[unlikely]] return; }
L_00381B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381B9C; } }
L_00381B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00381BF0; } }
L_00381B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381BA4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 93u, depth + 1u); else { c.pc = 0x00380980u; return; } if (c.pc != 0x00381BA4u) [[unlikely]] return; }
L_00381BA4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00381BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381BB8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 93u, depth + 1u); else { c.pc = 0x00380980u; return; } if (c.pc != 0x00381BB8u) [[unlikely]] return; }
L_00381BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));  if (t) { goto L_00381BF0; } }
L_00381BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381BC8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 91u, depth + 1u); else { c.pc = 0x003808E0u; return; } if (c.pc != 0x00381BC8u) [[unlikely]] return; }
L_00381BC8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381BD4u); set32(c.r[5], c.r[17].w[0] + 692u);  if (depth < kMaxDepth) unit_0060(c, 87u, depth + 1u); else { c.pc = 0x00380860u; return; } if (c.pc != 0x00381BD4u) [[unlikely]] return; }
L_00381BD4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381BE0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0060(c, 84u, depth + 1u); else { c.pc = 0x00380810u; return; } if (c.pc != 0x00381BE0u) [[unlikely]] return; }
L_00381BE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381B9Cu | kUnwind; return; } goto L_00381B9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381B94u | kUnwind; return; } goto L_00381B94; } }
L_00381BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00381C10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[28].w[0] - 29216u), c.r[4].w[0]);
    st8((c.r[28].w[0] - 29212u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00381C34:
    set32(c.r[16], ld32((c.r[28].w[0] - 29216u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381C48u); set32(c.r[4], c.r[4].w[0] - 15872u);  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x003817F0u; return; } if (c.pc != 0x00381C48u) [[unlikely]] return; }
L_00381C48:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00381D60; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29184u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29212u));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(6ll);  if (t) { goto L_00381D84; } }
L_00381C70:
    c.r[16].d[0] = c.r[18].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[17], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381C88u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381C88u) [[unlikely]] return; }
L_00381C88:
    c.r[19].d[0] = ld8((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381C9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381C9Cu) [[unlikely]] return; }
L_00381C9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381CB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381CB0u) [[unlikely]] return; }
L_00381CB0:
    c.r[19].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381CC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381CC4u) [[unlikely]] return; }
L_00381CC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381CD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381CD8u) [[unlikely]] return; }
L_00381CD8:
    c.r[19].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15837u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381CECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 202u, depth + 1u); else { c.pc = 0x003816F0u; return; } if (c.pc != 0x00381CECu) [[unlikely]] return; }
L_00381CEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15844u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381D00u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 201u, depth + 1u); else { c.pc = 0x003816E0u; return; } if (c.pc != 0x00381D00u) [[unlikely]] return; }
L_00381D00:
    c.r[19].d[0] = ld8((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15844u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381D14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 201u, depth + 1u); else { c.pc = 0x003816E0u; return; } if (c.pc != 0x00381D14u) [[unlikely]] return; }
L_00381D14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381D28u); set32(c.r[4], c.r[4].w[0] - 15872u);  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x003817F0u; return; } if (c.pc != 0x00381D28u) [[unlikely]] return; }
L_00381D28:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381D3Cu); set32(c.r[4], c.r[4].w[0] - 15872u);  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x003817F0u; return; } if (c.pc != 0x00381D3Cu) [[unlikely]] return; }
L_00381D3C:
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29212u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381C70u | kUnwind; return; } goto L_00381C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381D84; } }
L_00381D60:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29212u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 29212u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29212u));
    c.r[3].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381C34u | kUnwind; return; } goto L_00381C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00381DC0; } }
L_00381D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381D8Cu);  if (depth < kMaxDepth) unit_0060(c, 285u, depth + 1u); else { c.pc = 0x00381DE0u; return; } if (c.pc != 0x00381D8Cu) [[unlikely]] return; }
L_00381D8C:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 29212u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381DA0u); set32(c.r[4], c.r[4].w[0] - 15844u);  if (depth < kMaxDepth) unit_0060(c, 201u, depth + 1u); else { c.pc = 0x003816E0u; return; } if (c.pc != 0x00381DA0u) [[unlikely]] return; }
L_00381DA0:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 29212u));
    set32(c.r[16], ld32((c.r[28].w[0] - 29216u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381DB8u); set32(c.r[4], c.r[4].w[0] - 15872u);  if (depth < kMaxDepth) unit_0060(c, 220u, depth + 1u); else { c.pc = 0x003817F0u; return; } if (c.pc != 0x00381DB8u) [[unlikely]] return; }
L_00381DB8:
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00381DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00381DE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29692u)));  c.pc = t; return; }
L_00381DF0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381E0Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0060(c, 376u, depth + 1u); else { c.pc = 0x00382660u; return; } if (c.pc != 0x00381E0Cu) [[unlikely]] return; }
L_00381E0C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00381E20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00381E20u) [[unlikely]] return; }
L_00381E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00381F54; } }
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381E34u); st8((c.r[29].w[0] + 191u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00381E34u) [[unlikely]] return; }
L_00381E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381E3Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 374u, depth + 1u); else { c.pc = 0x00382610u; return; } if (c.pc != 0x00381E3Cu) [[unlikely]] return; }
L_00381E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381E44u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0060(c, 326u, depth + 1u); else { c.pc = 0x00382060u; return; } if (c.pc != 0x00381E44u) [[unlikely]] return; }
L_00381E44:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382038; } }
L_00381E54:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381E60u); set32(c.r[5], c.r[29].w[0] + 191u);  if (depth < kMaxDepth) unit_0060(c, 367u, depth + 1u); else { c.pc = 0x00382540u; return; } if (c.pc != 0x00381E60u) [[unlikely]] return; }
L_00381E60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 191u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00381F68; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00381F68; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00381FB0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00381FB0; } }
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381EA0u); set32(c.r[5], c.r[29].w[0] + 191u);  if (depth < kMaxDepth) unit_000E(c, 311u, depth + 1u); else { c.pc = 0x0023B9B0u; return; } if (c.pc != 0x00381EA0u) [[unlikely]] return; }
L_00381EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381EA8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0060(c, 326u, depth + 1u); else { c.pc = 0x00382060u; return; } if (c.pc != 0x00381EA8u) [[unlikely]] return; }
L_00381EA8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381E54u | kUnwind; return; } goto L_00381E54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382038; } }
L_00381EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381EC8u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x00382420u; return; } if (c.pc != 0x00381EC8u) [[unlikely]] return; }
L_00381EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381ED0u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00381ED0u) [[unlikely]] return; }
L_00381ED0:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381EDCu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00381EDCu) [[unlikely]] return; }
L_00381EDC:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381EE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00381EE8u) [[unlikely]] return; }
L_00381EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381EF0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00381EF0u) [[unlikely]] return; }
L_00381EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00381F28; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[28].w[0] - 31768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F08u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 357u, depth + 1u); else { c.pc = 0x003823E0u; return; } if (c.pc != 0x00381F08u) [[unlikely]] return; }
L_00381F08:
    set32(c.r[4], c.r[16].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F14u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0060(c, 327u, depth + 1u); else { c.pc = 0x00382080u; return; } if (c.pc != 0x00381F14u) [[unlikely]] return; }
L_00381F14:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005B(c, 281u, depth + 1u); else { c.pc = 0x0036DE30u; return; } if (c.pc != 0x00381F20u) [[unlikely]] return; }
L_00381F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F28u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005B(c, 422u, depth + 1u); else { c.pc = 0x0036EBF0u; return; } if (c.pc != 0x00381F28u) [[unlikely]] return; }
L_00381F28:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005B(c, 284u, depth + 1u); else { c.pc = 0x0036DE90u; return; } if (c.pc != 0x00381F34u) [[unlikely]] return; }
L_00381F34:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00381F40u) [[unlikely]] return; }
L_00381F40:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00381F4Cu) [[unlikely]] return; }
L_00381F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00382050; } }
L_00381F54:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00381F60u) [[unlikely]] return; }
L_00381F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00382050; } }
L_00381F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F70u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x00381F70u) [[unlikely]] return; }
L_00381F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381EA0u | kUnwind; return; } goto L_00381EA0; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F84u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x00382420u; return; } if (c.pc != 0x00381F84u) [[unlikely]] return; }
L_00381F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F8Cu); set32(c.r[4], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00381F8Cu) [[unlikely]] return; }
L_00381F8C:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381F98u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00381F98u) [[unlikely]] return; }
L_00381F98:
    set32(c.r[4], c.r[29].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00381FA4u) [[unlikely]] return; }
L_00381FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381EA0u | kUnwind; return; } goto L_00381EA0; } }
    c.budget -= 1;
L_00381FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FB8u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x00381FB8u) [[unlikely]] return; }
L_00381FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00381FF0; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FCCu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x00382420u; return; } if (c.pc != 0x00381FCCu) [[unlikely]] return; }
L_00381FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FD4u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00381FD4u) [[unlikely]] return; }
L_00381FD4:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FE0u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00381FE0u) [[unlikely]] return; }
L_00381FE0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00381FECu) [[unlikely]] return; }
L_00381FEC:
    c.budget -= 1;
L_00381FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FF8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00381FF8u) [[unlikely]] return; }
L_00381FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381EA0u | kUnwind; return; } goto L_00381EA0; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[28].w[0] - 31772u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382010u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 357u, depth + 1u); else { c.pc = 0x003823E0u; return; } if (c.pc != 0x00382010u) [[unlikely]] return; }
L_00382010:
    set32(c.r[4], c.r[16].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038201Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0060(c, 327u, depth + 1u); else { c.pc = 0x00382080u; return; } if (c.pc != 0x0038201Cu) [[unlikely]] return; }
L_0038201C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382028u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005B(c, 281u, depth + 1u); else { c.pc = 0x0036DE30u; return; } if (c.pc != 0x00382028u) [[unlikely]] return; }
L_00382028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382030u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005B(c, 422u, depth + 1u); else { c.pc = 0x0036EBF0u; return; } if (c.pc != 0x00382030u) [[unlikely]] return; }
L_00382030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381EA0u | kUnwind; return; } goto L_00381EA0; } }
L_00382038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382040u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x00382040u) [[unlikely]] return; }
L_00382040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381EE8u | kUnwind; return; } goto L_00381EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00381EC0u | kUnwind; return; } goto L_00381EC0; } }
L_00382050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00382060:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00382080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003820F4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003820E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003820BCu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003820BCu) [[unlikely]] return; }
L_003820BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003820D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003820D4u); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_005B(c, 571u, depth + 1u); else { c.pc = 0x0036F850u; return; } if (c.pc != 0x003820D4u) [[unlikely]] return; }
L_003820D4:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_003820E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003820ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 327u, depth + 1u); else { c.pc = 0x00382080u; return; } if (c.pc != 0x003820ECu) [[unlikely]] return; }
L_003820EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00382130; } }
L_003820F4:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382118u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00382118u) [[unlikely]] return; }
L_00382118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038212C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038212Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 333u, depth + 1u); else { c.pc = 0x00382140u; return; } if (c.pc != 0x0038212Cu) [[unlikely]] return; }
L_0038212C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00382130:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00382140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382164u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0060(c, 335u, depth + 1u); else { c.pc = 0x00382180u; return; } if (c.pc != 0x00382164u) [[unlikely]] return; }
L_00382164:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382180:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821B4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 356u, depth + 1u); else { c.pc = 0x003823C0u; return; } if (c.pc != 0x003821B4u) [[unlikely]] return; }
L_003821B4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 355u, depth + 1u); else { c.pc = 0x003823A0u; return; } if (c.pc != 0x003821C4u) [[unlikely]] return; }
L_003821C4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x003822A0u; return; } if (c.pc != 0x003821D0u) [[unlikely]] return; }
L_003821D0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821DCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0060(c, 347u, depth + 1u); else { c.pc = 0x00382250u; return; } if (c.pc != 0x003821DCu) [[unlikely]] return; }
L_003821DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003821EC; } }
L_003821E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00382230; } }
L_003821EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821F4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 354u, depth + 1u); else { c.pc = 0x00382390u; return; } if (c.pc != 0x003821F4u) [[unlikely]] return; }
L_003821F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382200u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x00382420u; return; } if (c.pc != 0x00382200u) [[unlikely]] return; }
L_00382200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382208u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x003822F0u; return; } if (c.pc != 0x00382208u) [[unlikely]] return; }
L_00382208:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382214u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 350u, depth + 1u); else { c.pc = 0x003822A0u; return; } if (c.pc != 0x00382214u) [[unlikely]] return; }
L_00382214:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382220u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0060(c, 347u, depth + 1u); else { c.pc = 0x00382250u; return; } if (c.pc != 0x00382220u) [[unlikely]] return; }
L_00382220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003821ECu | kUnwind; return; } goto L_003821EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003821E4u | kUnwind; return; } goto L_003821E4; } }
L_00382230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00382250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382268u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 349u, depth + 1u); else { c.pc = 0x00382280u; return; } if (c.pc != 0x00382268u) [[unlikely]] return; }
L_00382268:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00382280:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003822A0:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  goto L_003822B0; }
L_003822B0:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], c.r[8].w[0] - 4u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_003822F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00382310; } }
L_00382308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038237C; } }
L_00382310:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00382374; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382374; } }
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
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382308u | kUnwind; return; } goto L_00382308; } }
L_00382374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382308u | kUnwind; return; } goto L_00382308; } }
L_0038237C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00382390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_003823A0:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003823B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_003823B8; } }
L_003823B4:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003823B8:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003822B0u | kUnwind; return; } goto L_003822B0; }
L_003823C0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_003823E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382404u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0060(c, 335u, depth + 1u); else { c.pc = 0x00382180u; return; } if (c.pc != 0x00382404u) [[unlikely]] return; }
L_00382404:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00382494; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00382480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038245Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0038245Cu) [[unlikely]] return; }
L_0038245C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382474; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382474u); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00382474u) [[unlikely]] return; }
L_00382474:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00382480:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038248Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x00382420u; return; } if (c.pc != 0x0038248Cu) [[unlikely]] return; }
L_0038248C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003824C8; } }
L_00382494:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003824B0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003824B0u) [[unlikely]] return; }
L_003824B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003824C4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003824C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003824C4u) [[unlikely]] return; }
L_003824C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003824C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003824E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00382504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0038250C; } }
L_00382504:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0038250C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038251Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 356u, depth + 1u); else { c.pc = 0x003823C0u; return; } if (c.pc != 0x0038251Cu) [[unlikely]] return; }
L_0038251C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038255Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 369u, depth + 1u); else { c.pc = 0x00382580u; return; } if (c.pc != 0x0038255Cu) [[unlikely]] return; }
L_0038255C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00382580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382590u);  if (depth < kMaxDepth) unit_0060(c, 371u, depth + 1u); else { c.pc = 0x003825B0u; return; } if (c.pc != 0x00382590u) [[unlikely]] return; }
L_00382590:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003825B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003825E0; } }
L_003825CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_003825FC; } }
L_003825E0:
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003825F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003825F0u) [[unlikely]] return; }
L_003825F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003825CCu | kUnwind; return; } goto L_003825CC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003825FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038263Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 356u, depth + 1u); else { c.pc = 0x003823C0u; return; } if (c.pc != 0x0038263Cu) [[unlikely]] return; }
L_0038263C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 386u, depth + 1u); else { c.pc = 0x00382770u; return; } if (c.pc != 0x00382688u) [[unlikely]] return; }
L_00382688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28400u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003826A4u); st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 379u, depth + 1u); else { c.pc = 0x003826C0u; return; } if (c.pc != 0x003826A4u) [[unlikely]] return; }
L_003826A4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003826C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003826E0u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003826E0u) [[unlikely]] return; }
L_003826E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003826F0u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0060(c, 383u, depth + 1u); else { c.pc = 0x00382720u; return; } if (c.pc != 0x003826F0u) [[unlikely]] return; }
L_003826F0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382700u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00382700u) [[unlikely]] return; }
L_00382700:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00382720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382740u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00382740u) [[unlikely]] return; }
L_00382740:
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00382758u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00382758u) [[unlikely]] return; }
L_00382758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00382770:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00382790:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], c.r[2].w[0] + 792u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003827C4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0060(c, 420u, depth + 1u); else { c.pc = 0x00382AD0u; return; } if (c.pc != 0x003827C4u) [[unlikely]] return; }
L_003827C4:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003827D4u); set32(c.r[5], c.r[2].w[0] + 792u);  if (depth < kMaxDepth) unit_0060(c, 411u, depth + 1u); else { c.pc = 0x00382970u; return; } if (c.pc != 0x003827D4u) [[unlikely]] return; }
L_003827D4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003827E0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 408u, depth + 1u); else { c.pc = 0x00382920u; return; } if (c.pc != 0x003827E0u) [[unlikely]] return; }
L_003827E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003827F0; } }
L_003827E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003828FC; } }
L_003827F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003827F8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0060(c, 419u, depth + 1u); else { c.pc = 0x00382AC0u; return; } if (c.pc != 0x003827F8u) [[unlikely]] return; }
L_003827F8:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[18], c.r[2].w[0] >> 4);
    set32(c.r[2], c.r[18].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382810u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00382810u) [[unlikely]] return; }
L_00382810:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382830u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x00382830u) [[unlikely]] return; }
L_00382830:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038283Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0060(c, 419u, depth + 1u); else { c.pc = 0x00382AC0u; return; } if (c.pc != 0x0038283Cu) [[unlikely]] return; }
L_0038283C:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003828C8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00382850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382858u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0060(c, 419u, depth + 1u); else { c.pc = 0x00382AC0u; return; } if (c.pc != 0x00382858u) [[unlikely]] return; }
L_00382858:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382868u); set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0060(c, 419u, depth + 1u); else { c.pc = 0x00382AC0u; return; } if (c.pc != 0x00382868u) [[unlikely]] return; }
L_00382868:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038287Cu); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 49u, depth + 1u); else { c.pc = 0x00304960u; return; } if (c.pc != 0x0038287Cu) [[unlikely]] return; }
L_0038287C:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00382888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382890u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0060(c, 419u, depth + 1u); else { c.pc = 0x00382AC0u; return; } if (c.pc != 0x00382890u) [[unlikely]] return; }
L_00382890:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038289Cu); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0060(c, 418u, depth + 1u); else { c.pc = 0x00382AA0u; return; } if (c.pc != 0x0038289Cu) [[unlikely]] return; }
L_0038289C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003828A4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0060(c, 417u, depth + 1u); else { c.pc = 0x00382A90u; return; } if (c.pc != 0x003828A4u) [[unlikely]] return; }
L_003828A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382888u | kUnwind; return; } goto L_00382888; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382850u | kUnwind; return; } goto L_00382850; } }
    c.budget -= 1;
L_003828C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003828D0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0060(c, 415u, depth + 1u); else { c.pc = 0x003829F0u; return; } if (c.pc != 0x003828D0u) [[unlikely]] return; }
L_003828D0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003828E0u); set32(c.r[5], c.r[2].w[0] + 792u);  if (depth < kMaxDepth) unit_0060(c, 411u, depth + 1u); else { c.pc = 0x00382970u; return; } if (c.pc != 0x003828E0u) [[unlikely]] return; }
L_003828E0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003828ECu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0060(c, 408u, depth + 1u); else { c.pc = 0x00382920u; return; } if (c.pc != 0x003828ECu) [[unlikely]] return; }
L_003828EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003827F0u | kUnwind; return; } goto L_003827F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003827E8u | kUnwind; return; } goto L_003827E8; } }
L_003828FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00382920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382938u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 410u, depth + 1u); else { c.pc = 0x00382950u; return; } if (c.pc != 0x00382938u) [[unlikely]] return; }
L_00382938:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00382950:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00382970:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  goto L_00382980; }
L_00382980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382994u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 414u, depth + 1u); else { c.pc = 0x003829B0u; return; } if (c.pc != 0x00382994u) [[unlikely]] return; }
L_00382994:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003829B0:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], c.r[8].w[0] - 16u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_003829F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 16u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00382A10; } }
L_00382A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00382A7C; } }
L_00382A10:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00382A74; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382A74; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382A08u | kUnwind; return; } goto L_00382A08; } }
L_00382A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382A08u | kUnwind; return; } goto L_00382A08; } }
L_00382A7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00382A90:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_00382AA0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00382AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00382AD0:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_00382AE8; } }
L_00382AE4:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00382AE8:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00382980u | kUnwind; return; } goto L_00382980; }
L_00382AF0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 132u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00383320; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_00383350; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 133u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00382B3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 244u)));  if (t) { goto L_00382B40; } }
L_00382B3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 1;
L_00382B40:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00383370; } }
L_00382B48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00383378; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00382B8C; } }
    st32((c.r[16].w[0] + 276u), c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00382B8C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B84u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00382B84u) [[unlikely]] return; }
L_00382B84:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 2;
L_00382B8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 200u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038343C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 1;
L_00382BA8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00382BEC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00382BEC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00382BEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382BDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_00382BF8; } }
L_00382BDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382BF4; } }
L_00382BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 2;
L_00382BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_00382BF8:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[2].d[0] | 1ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 15));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[3].w[0] + 180u));
    set32(c.r[2], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 15));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C84u); c.f[13] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_005F(c, 521u, depth + 1u); else { c.pc = 0x0037F3F0u; return; } if (c.pc != 0x00382C84u) [[unlikely]] return; }
L_00382C84:
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00382CAC; } }
L_00382C90:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382C90u | kUnwind; return; } goto L_00382C90; } }
L_00382CAC:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = c.r[3].d[0] | 1ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[29].w[0] + 412u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[29].w[0] + 413u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[29].w[0] + 414u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 92u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 15));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 41;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[29].w[0] + 415u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00382D6C; } }
L_00382D50:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382D50u | kUnwind; return; } goto L_00382D50; } }
L_00382D6C:
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[8].d[0] | 1ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[29].w[0] + 404u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 48u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 30;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00382DF4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_00382E0C; } }
L_00382DF4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00382E0C:
    set32(c.r[18], ld32((c.r[16].w[0] + 276u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00383454; } }
L_00382E1C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00382E30; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00382E4C; } }
L_00382E30:
    set32(c.r[4], c.r[17].w[0] >> 1);
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_00382E4C:
    set32(c.r[3], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00382E68; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00382E84; } }
L_00382E68:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00382E84:
    c.f[1] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00382EB8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[18], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0])));  if (t) { goto L_00382ED4; } }
L_00382EB8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.r[18].d[0] = c.r[18].d[0] | c.r[3].d[0];
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 7;
L_00382ED4:
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00383170; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00383494; } }
L_00382EF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382F00u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 70u, depth + 1u); else { c.pc = 0x00380710u; return; } if (c.pc != 0x00382F00u) [[unlikely]] return; }
L_00382F00:
    set32(c.r[17], c.r[29].w[0] + 116u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.f[1] = ld32((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[20], ld32((c.r[16].w[0] + 276u)));  if (t) { goto L_00382F20; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00382F3C; } }
L_00382F20:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00382F3C:
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382F64u); c.f[12] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_003B(c, 134u, depth + 1u); else { c.pc = 0x002EEE40u; return; } if (c.pc != 0x00382F64u) [[unlikely]] return; }
L_00382F64:
    set32(c.r[2], ld32((c.r[28].w[0] - 29696u)));
    c.f[1] = ld32((c.r[16].w[0] + 284u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 200u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 284u), c.f[1]);  if (t) { goto L_003834B0; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[18].w[0] + 4u);
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00382FA4; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00382FC0; } }
L_00382FA4:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00382FC0:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003834B8; } }
L_00382FCC:
    c.f[1] = ld32((c.r[16].w[0] + 284u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 4;
L_00382FDC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00382FF4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00383010; } }
L_00382FF4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00383010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00383048; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 400u)));  if (t) { goto L_00383064; } }
L_00383048:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 400u)));
    c.budget -= 7;
L_00383064:
    set32(c.r[2], c.r[18].w[0] + 2u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 396u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 392u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00383160; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 13760u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_0060[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003830A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003830B4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x003830B4u) [[unlikely]] return; }
L_003830B4:
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 392u);
    set32(c.r[8], c.r[29].w[0] + 412u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003830DCu); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x003830DCu) [[unlikely]] return; }
L_003830DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_00383160; } }
L_003830E4:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003830F4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x003830F4u) [[unlikely]] return; }
L_003830F4:
    c.f[13] = 0u;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 392u);
    set32(c.r[8], c.r[29].w[0] + 412u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038311Cu); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0038311Cu) [[unlikely]] return; }
L_0038311C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_00383160; } }
L_00383124:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383134u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x00383134u) [[unlikely]] return; }
L_00383134:
    set32(c.r[9], 0u + 2u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[21];
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 392u);
    set32(c.r[8], c.r[29].w[0] + 412u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038315Cu); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0038315Cu) [[unlikely]] return; }
L_0038315C:
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 1;
L_00383160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383168u);  if (depth < kMaxDepth) unit_003B(c, 133u, depth + 1u); else { c.pc = 0x002EEE30u; return; } if (c.pc != 0x00383168u) [[unlikely]] return; }
L_00383168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383348; } }
L_00383170:
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003834F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00383234; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13728u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_0060[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003831AC:
    set32(c.r[3], c.r[5].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003831C8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003831E4; } }
L_003831C8:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003831E4:
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 116u), c.f[0]);  if (t) { goto L_00383234; } }
L_003831F4:
    set32(c.r[3], c.r[5].w[0] - c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0038320C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00383228; } }
L_0038320C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00383228:
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.budget -= 3;
L_00383234:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003834F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13680u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_0060[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00383260:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383270u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x00383270u) [[unlikely]] return; }
L_00383270:
    set32(c.r[5], ld32((c.r[16].w[0] + 276u)));
    c.f[13] = 0u;
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 400u);
    set32(c.r[8], c.r[29].w[0] + 412u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383298u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00383298u) [[unlikely]] return; }
L_00383298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_00383348; } }
L_003832A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003832B0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x003832B0u) [[unlikely]] return; }
L_003832B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 276u)));
    c.f[13] = 0u;
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 400u);
    set32(c.r[8], c.r[29].w[0] + 412u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003832D8u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x003832D8u) [[unlikely]] return; }
L_003832D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_00383348; } }
L_003832E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003832F0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x003832F0u) [[unlikely]] return; }
L_003832F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[9], 0u + 2u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[21];
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 400u);
    set32(c.r[8], c.r[29].w[0] + 412u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383318u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00383318u) [[unlikely]] return; }
L_00383318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_00383348; } }
L_00383320:
    set32(c.r[5], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003834F0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383340u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383340u) [[unlikely]] return; }
L_00383340:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    c.budget -= 2;
L_00383348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003834F4; } }
L_00383350:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 133u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00383364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 252u)));  if (t) { goto L_00383368; } }
L_00383364:
    set32(c.r[4], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 1;
L_00383368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382B40u | kUnwind; return; } goto L_00382B40; } }
L_00383370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 240u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382B48u | kUnwind; return; } goto L_00382B48; } }
L_00383378:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[5].d[0];  if (t) { goto L_0038339C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00383390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 268u)));  if (t) { goto L_00383394; } }
L_00383390:
    set32(c.r[17], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 1;
L_00383394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003833B0; } }
L_0038339C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003833AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 260u)));  if (t) { goto L_003833B0; } }
L_003833AC:
    set32(c.r[17], ld32((c.r[16].w[0] + 256u)));
    c.budget -= 1;
L_003833B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00383414; } }
L_003833B8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[3], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382B8Cu | kUnwind; return; } goto L_00382B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003833D0u); set32(c.r[4], ld32((c.r[16].w[0] + 272u)));  if (depth < kMaxDepth) unit_0060(c, 471u, depth + 1u); else { c.pc = 0x00383530u; return; } if (c.pc != 0x003833D0u) [[unlikely]] return; }
L_003833D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038341C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 4;
L_003833E8:
    set32(c.r[5], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382B8Cu | kUnwind; return; } goto L_00382B8C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383408u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383408u) [[unlikely]] return; }
L_00383408:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382B8Cu | kUnwind; return; } goto L_00382B8C; } }
L_00383414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 256u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003833B8u | kUnwind; return; } goto L_003833B8; } }
L_0038341C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038342Cu); set32(c.r[5], c.r[5].w[0] + 13937u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0038342Cu) [[unlikely]] return; }
L_0038342C:
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 276u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003833E8u | kUnwind; return; } goto L_003833E8; } }
L_0038343C:
    set32(c.r[5], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003834F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 288u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382BA8u | kUnwind; return; } goto L_00382BA8; } }
L_00383454:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383464u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x00383464u) [[unlikely]] return; }
L_00383464:
    set32(c.r[6], ld32((c.r[29].w[0] + 400u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 408u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038347Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_003B(c, 78u, depth + 1u); else { c.pc = 0x002ED590u; return; } if (c.pc != 0x0038347Cu) [[unlikely]] return; }
L_0038347C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383454u | kUnwind; return; } goto L_00383454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382E1Cu | kUnwind; return; } goto L_00382E1C; } }
L_00383494:
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003834A4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x003834A4u) [[unlikely]] return; }
L_003834A4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382EF0u | kUnwind; return; } goto L_00382EF0; } }
L_003834B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 284u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382FDCu | kUnwind; return; } goto L_00382FDC; } }
L_003834B8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003834CC; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003834E8; } }
L_003834CC:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003834E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 284u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382FCCu | kUnwind; return; } goto L_00382FCC; } }
L_003834F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003834F4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00383520:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_00383530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 852u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383558u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 496u, depth + 1u); else { c.pc = 0x003837B0u; return; } if (c.pc != 0x00383558u) [[unlikely]] return; }
L_00383558:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383564u); set32(c.r[5], c.r[18].w[0] + 852u);  if (depth < kMaxDepth) unit_0060(c, 488u, depth + 1u); else { c.pc = 0x00383670u; return; } if (c.pc != 0x00383564u) [[unlikely]] return; }
L_00383564:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383570u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0060(c, 485u, depth + 1u); else { c.pc = 0x00383620u; return; } if (c.pc != 0x00383570u) [[unlikely]] return; }
L_00383570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00383580; } }
L_00383578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00383600; } }
L_00383580:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038358Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0023BF40u; return; } if (c.pc != 0x0038358Cu) [[unlikely]] return; }
L_0038358C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383594u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 495u, depth + 1u); else { c.pc = 0x003837A0u; return; } if (c.pc != 0x00383594u) [[unlikely]] return; }
L_00383594:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003835A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 290u, depth + 1u); else { c.pc = 0x0023B4B0u; return; } if (c.pc != 0x003835A0u) [[unlikely]] return; }
L_003835A0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003835B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003835B0u) [[unlikely]] return; }
L_003835B0:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003835D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003835C8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 494u, depth + 1u); else { c.pc = 0x00383790u; return; } if (c.pc != 0x003835C8u) [[unlikely]] return; }
L_003835C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00383604; } }
L_003835D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003835D8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0060(c, 492u, depth + 1u); else { c.pc = 0x003836F0u; return; } if (c.pc != 0x003835D8u) [[unlikely]] return; }
L_003835D8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003835E4u); set32(c.r[5], c.r[18].w[0] + 852u);  if (depth < kMaxDepth) unit_0060(c, 488u, depth + 1u); else { c.pc = 0x00383670u; return; } if (c.pc != 0x003835E4u) [[unlikely]] return; }
L_003835E4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003835F0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0060(c, 485u, depth + 1u); else { c.pc = 0x00383620u; return; } if (c.pc != 0x003835F0u) [[unlikely]] return; }
L_003835F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383580u | kUnwind; return; } goto L_00383580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383578u | kUnwind; return; } goto L_00383578; } }
L_00383600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00383604:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00383620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383638u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 487u, depth + 1u); else { c.pc = 0x00383650u; return; } if (c.pc != 0x00383638u) [[unlikely]] return; }
L_00383638:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00383650:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00383670:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  goto L_00383680; }
L_00383680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 491u, depth + 1u); else { c.pc = 0x003836B0u; return; } if (c.pc != 0x00383694u) [[unlikely]] return; }
L_00383694:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003836B0:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], c.r[8].w[0] - 8u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_003836F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 8u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00383710; } }
L_00383708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038377C; } }
L_00383710:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00383774; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383774; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 8u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383708u | kUnwind; return; } goto L_00383708; } }
L_00383774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383708u | kUnwind; return; } goto L_00383708; } }
L_0038377C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00383790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_003837A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_003837B0:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003837C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_003837C8; } }
L_003837C4:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003837C8:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00383680u | kUnwind; return; } goto L_00383680; }
L_003837D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003837F4; } }
L_003837EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00383810; } }
L_003837F4:
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383804u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383804u) [[unlikely]] return; }
L_00383804:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003837ECu | kUnwind; return; } goto L_003837EC; } }
L_00383810:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00383844; } }
L_0038383C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00383860; } }
L_00383844:
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383854u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383854u) [[unlikely]] return; }
L_00383854:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038383Cu | kUnwind; return; } goto L_0038383C; } }
L_00383860:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003838D8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038389Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038389Cu) [[unlikely]] return; }
L_0038389C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003838BC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003838B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003838B4u) [[unlikely]] return; }
L_003838B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003838D8; } }
L_003838BC:
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003838D0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x003838D0u) [[unlikely]] return; }
L_003838D0:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 2;
L_003838D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003838E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00374BC0u; return; } if (c.pc != 0x003838E0u) [[unlikely]] return; }
L_003838E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003838F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00383914; } }
L_0038390C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00383930; } }
L_00383914:
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383924u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383924u) [[unlikely]] return; }
L_00383924:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 292u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038390Cu | kUnwind; return; } goto L_0038390C; } }
L_00383930:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383940:
    st32((c.r[4].w[0] + 284u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 276u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 280u), c.r[3].w[0]);  c.pc = t; return; }
L_00383960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383974u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 150u, depth + 1u); else { c.pc = 0x003752B0u; return; } if (c.pc != 0x00383974u) [[unlikely]] return; }
L_00383974:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 9104u);
    st32((c.r[16].w[0] + 236u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 284u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 240u), 0u);
    st32((c.r[16].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 248u), 0u);
    st32((c.r[16].w[0] + 252u), 0u);
    st32((c.r[16].w[0] + 256u), 0u);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), 0u);
    st32((c.r[16].w[0] + 268u), 0u);
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003839C0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 132u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00383E64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 248u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00383A18; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00383A18; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383A10u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383A10u) [[unlikely]] return; }
L_00383A10:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 2;
L_00383A18:
    set32(c.r[4], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00383E8C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383A40u); set32(c.r[5], c.r[5].w[0] + 14059u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00383A40u) [[unlikely]] return; }
L_00383A40:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00383A94; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00383A94; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00383A94; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00383A84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_00383AA0; } }
L_00383A84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383A9C; } }
L_00383A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_00383A9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00383AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[2].d[0] | 1ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 15));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 15));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = c.r[5].w[0];
    c.f[14] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 180u));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383B28u); c.f[13] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_005F(c, 521u, depth + 1u); else { c.pc = 0x0037F3F0u; return; } if (c.pc != 0x00383B28u) [[unlikely]] return; }
L_00383B28:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00383B50; } }
L_00383B34:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383B34u | kUnwind; return; } goto L_00383B34; } }
L_00383B50:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = c.r[3].d[0] | 1ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[29].w[0] + 332u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[29].w[0] + 333u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[29].w[0] + 334u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 92u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 15));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 41;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[29].w[0] + 335u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00383C10; } }
L_00383BF4:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383BF4u | kUnwind; return; } goto L_00383BF4; } }
L_00383C10:
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[9].d[0] | 1ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[29].w[0] + 324u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 48u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[5].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 29696u)));
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 15));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 30;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00383C98; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_00383CB0; } }
L_00383C98:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00383CB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00383D78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13856u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_0060[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00383CDC:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00383CF4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00383D10; } }
L_00383CF4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00383D10:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { goto L_00383D78; } }
L_00383D34:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00383D4C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00383D68; } }
L_00383D4C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00383D68:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_00383D78:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00383E8C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13808u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_0060[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00383DA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DB4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x00383DB4u) [[unlikely]] return; }
L_00383DB4:
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 320u);
    set32(c.r[8], c.r[29].w[0] + 332u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DDCu); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00383DDCu) [[unlikely]] return; }
L_00383DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_00383E8C; } }
L_00383DE4:
    set32(c.r[5], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DF4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x00383DF4u) [[unlikely]] return; }
L_00383DF4:
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 320u);
    set32(c.r[8], c.r[29].w[0] + 332u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E1Cu); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00383E1Cu) [[unlikely]] return; }
L_00383E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_00383E8C; } }
L_00383E24:
    set32(c.r[5], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E34u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_0060(c, 470u, depth + 1u); else { c.pc = 0x00383520u; return; } if (c.pc != 0x00383E34u) [[unlikely]] return; }
L_00383E34:
    set32(c.r[9], 0u + 2u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[12] = c.f[20];
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 320u);
    set32(c.r[8], c.r[29].w[0] + 332u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E5Cu); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00383E5Cu) [[unlikely]] return; }
L_00383E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_00383E8C; } }
L_00383E64:
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00383E8C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E84u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383E84u) [[unlikely]] return; }
L_00383E84:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 2;
L_00383E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00383EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 252u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00383EC4; } }
L_00383EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00383EE0; } }
L_00383EC4:
    set32(c.r[6], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383ED4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383ED4u) [[unlikely]] return; }
L_00383ED4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 252u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383EBCu | kUnwind; return; } goto L_00383EBC; } }
L_00383EE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 252u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00383F14; } }
L_00383F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00383F30; } }
L_00383F14:
    set32(c.r[6], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383F24u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383F24u) [[unlikely]] return; }
L_00383F24:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 252u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383F0Cu | kUnwind; return; } goto L_00383F0C; } }
L_00383F30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 252u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00383FA8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383F6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383F6Cu) [[unlikely]] return; }
L_00383F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00383F8C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00383F84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00383F84u) [[unlikely]] return; }
L_00383F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383FA8; } }
L_00383F8C:
    set32(c.r[6], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 252u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383FA0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383FA0u) [[unlikely]] return; }
L_00383FA0:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 2;
L_00383FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383FB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 77u, depth + 1u); else { c.pc = 0x00374BC0u; return; } if (c.pc != 0x00383FB0u) [[unlikely]] return; }
L_00383FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 252u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00383FE4; } }
L_00383FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_0061(c, 1u, depth); } }
L_00383FE4:
    set32(c.r[6], ld32((c.r[16].w[0] + 244u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383FF4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00383FF4u) [[unlikely]] return; }
L_00383FF4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 252u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383FDCu | kUnwind; return; } goto L_00383FDC; } }
    [[clang::musttail]] return unit_0061(c, 1u, depth);
}

}

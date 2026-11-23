#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0057[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0,
    0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0,
    0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0,
    192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0,
    203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0,
    0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0,
    0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233,
    0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248,
    0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263,
    0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278,
    0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293,
    0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 307,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321,
    0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 367,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0,
    0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0,
    0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0,
    0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0,
    505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0,
    508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0,
    0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0,
    0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0,
    535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550,
    0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0,
    0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569,
    0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0,
    573, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581,
    0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0,
    0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0,
    593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0,
    596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0,
    0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0,
    0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611,
    0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0,
    623, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0,
    0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638,
    0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0,
    0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0,
};

void unit_0057(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0035C000;
    case 2u: goto L_0035C004;
    case 3u: goto L_0035C014;
    case 4u: goto L_0035C028;
    case 5u: goto L_0035C044;
    case 6u: goto L_0035C054;
    case 7u: goto L_0035C068;
    case 8u: goto L_0035C084;
    case 9u: goto L_0035C094;
    case 10u: goto L_0035C0A8;
    case 11u: goto L_0035C0C4;
    case 12u: goto L_0035C0D4;
    case 13u: goto L_0035C0E8;
    case 14u: goto L_0035C104;
    case 15u: goto L_0035C114;
    case 16u: goto L_0035C128;
    case 17u: goto L_0035C144;
    case 18u: goto L_0035C154;
    case 19u: goto L_0035C168;
    case 20u: goto L_0035C184;
    case 21u: goto L_0035C194;
    case 22u: goto L_0035C1A8;
    case 23u: goto L_0035C1C4;
    case 24u: goto L_0035C1D4;
    case 25u: goto L_0035C1E8;
    case 26u: goto L_0035C204;
    case 27u: goto L_0035C214;
    case 28u: goto L_0035C228;
    case 29u: goto L_0035C244;
    case 30u: goto L_0035C254;
    case 31u: goto L_0035C268;
    case 32u: goto L_0035C284;
    case 33u: goto L_0035C294;
    case 34u: goto L_0035C2A8;
    case 35u: goto L_0035C2B8;
    case 36u: goto L_0035C2CC;
    case 37u: goto L_0035C2DC;
    case 38u: goto L_0035C2F0;
    case 39u: goto L_0035C30C;
    case 40u: goto L_0035C31C;
    case 41u: goto L_0035C330;
    case 42u: goto L_0035C34C;
    case 43u: goto L_0035C35C;
    case 44u: goto L_0035C370;
    case 45u: goto L_0035C380;
    case 46u: goto L_0035C394;
    case 47u: goto L_0035C3A0;
    case 48u: goto L_0035C3B8;
    case 49u: goto L_0035C3D0;
    case 50u: goto L_0035C3E0;
    case 51u: goto L_0035C3E8;
    case 52u: goto L_0035C3F0;
    case 53u: goto L_0035C410;
    case 54u: goto L_0035C428;
    case 55u: goto L_0035C434;
    case 56u: goto L_0035C44C;
    case 57u: goto L_0035C458;
    case 58u: goto L_0035C470;
    case 59u: goto L_0035C490;
    case 60u: goto L_0035C4A4;
    case 61u: goto L_0035C4B4;
    case 62u: goto L_0035C4C0;
    case 63u: goto L_0035C4D8;
    case 64u: goto L_0035C4E4;
    case 65u: goto L_0035C504;
    case 66u: goto L_0035C510;
    case 67u: goto L_0035C518;
    case 68u: goto L_0035C528;
    case 69u: goto L_0035C560;
    case 70u: goto L_0035C56C;
    case 71u: goto L_0035C578;
    case 72u: goto L_0035C590;
    case 73u: goto L_0035C5AC;
    case 74u: goto L_0035C5B8;
    case 75u: goto L_0035C5D8;
    case 76u: goto L_0035C5EC;
    case 77u: goto L_0035C5F8;
    case 78u: goto L_0035C610;
    case 79u: goto L_0035C620;
    case 80u: goto L_0035C628;
    case 81u: goto L_0035C63C;
    case 82u: goto L_0035C648;
    case 83u: goto L_0035C66C;
    case 84u: goto L_0035C67C;
    case 85u: goto L_0035C6A0;
    case 86u: goto L_0035C6B0;
    case 87u: goto L_0035C6C4;
    case 88u: goto L_0035C6D0;
    case 89u: goto L_0035C6F8;
    case 90u: goto L_0035C708;
    case 91u: goto L_0035C71C;
    case 92u: goto L_0035C728;
    case 93u: goto L_0035C754;
    case 94u: goto L_0035C764;
    case 95u: goto L_0035C778;
    case 96u: goto L_0035C784;
    case 97u: goto L_0035C7B0;
    case 98u: goto L_0035C7C0;
    case 99u: goto L_0035C7D4;
    case 100u: goto L_0035C7E0;
    case 101u: goto L_0035C820;
    case 102u: goto L_0035C82C;
    case 103u: goto L_0035C840;
    case 104u: goto L_0035C84C;
    case 105u: goto L_0035C864;
    case 106u: goto L_0035C874;
    case 107u: goto L_0035C87C;
    case 108u: goto L_0035C8A0;
    case 109u: goto L_0035C8AC;
    case 110u: goto L_0035C8C0;
    case 111u: goto L_0035C8CC;
    case 112u: goto L_0035C8E4;
    case 113u: goto L_0035C8F4;
    case 114u: goto L_0035C8FC;
    case 115u: goto L_0035C920;
    case 116u: goto L_0035C92C;
    case 117u: goto L_0035C93C;
    case 118u: goto L_0035C948;
    case 119u: goto L_0035C958;
    case 120u: goto L_0035C964;
    case 121u: goto L_0035C978;
    case 122u: goto L_0035C984;
    case 123u: goto L_0035C9A8;
    case 124u: goto L_0035C9B4;
    case 125u: goto L_0035C9C8;
    case 126u: goto L_0035C9D4;
    case 127u: goto L_0035C9F8;
    case 128u: goto L_0035CA04;
    case 129u: goto L_0035CA14;
    case 130u: goto L_0035CA20;
    case 131u: goto L_0035CA30;
    case 132u: goto L_0035CA3C;
    case 133u: goto L_0035CA4C;
    case 134u: goto L_0035CA58;
    case 135u: goto L_0035CA68;
    case 136u: goto L_0035CA74;
    case 137u: goto L_0035CA88;
    case 138u: goto L_0035CA94;
    case 139u: goto L_0035CAB8;
    case 140u: goto L_0035CAC4;
    case 141u: goto L_0035CAD8;
    case 142u: goto L_0035CAE4;
    case 143u: goto L_0035CB08;
    case 144u: goto L_0035CB14;
    case 145u: goto L_0035CB24;
    case 146u: goto L_0035CB30;
    case 147u: goto L_0035CB40;
    case 148u: goto L_0035CB4C;
    case 149u: goto L_0035CB5C;
    case 150u: goto L_0035CB68;
    case 151u: goto L_0035CB78;
    case 152u: goto L_0035CB84;
    case 153u: goto L_0035CB94;
    case 154u: goto L_0035CBA0;
    case 155u: goto L_0035CBB0;
    case 156u: goto L_0035CBBC;
    case 157u: goto L_0035CBCC;
    case 158u: goto L_0035CBE8;
    case 159u: goto L_0035CBF4;
    case 160u: goto L_0035CC14;
    case 161u: goto L_0035CC24;
    case 162u: goto L_0035CC34;
    case 163u: goto L_0035CC40;
    case 164u: goto L_0035CC50;
    case 165u: goto L_0035CC5C;
    case 166u: goto L_0035CC6C;
    case 167u: goto L_0035CC88;
    case 168u: goto L_0035CC94;
    case 169u: goto L_0035CCB4;
    case 170u: goto L_0035CCC4;
    case 171u: goto L_0035CCD4;
    case 172u: goto L_0035CCE0;
    case 173u: goto L_0035CCF0;
    case 174u: goto L_0035CD0C;
    case 175u: goto L_0035CD18;
    case 176u: goto L_0035CD28;
    case 177u: goto L_0035CD38;
    case 178u: goto L_0035CD5C;
    case 179u: goto L_0035CD80;
    case 180u: goto L_0035CD8C;
    case 181u: goto L_0035CD9C;
    case 182u: goto L_0035CDB8;
    case 183u: goto L_0035CDC4;
    case 184u: goto L_0035CDD4;
    case 185u: goto L_0035CDE4;
    case 186u: goto L_0035CE08;
    case 187u: goto L_0035CE2C;
    case 188u: goto L_0035CE38;
    case 189u: goto L_0035CE48;
    case 190u: goto L_0035CE64;
    case 191u: goto L_0035CE70;
    case 192u: goto L_0035CE80;
    case 193u: goto L_0035CE90;
    case 194u: goto L_0035CEAC;
    case 195u: goto L_0035CEB8;
    case 196u: goto L_0035CEC8;
    case 197u: goto L_0035CED8;
    case 198u: goto L_0035CF04;
    case 199u: goto L_0035CF44;
    case 200u: goto L_0035CF50;
    case 201u: goto L_0035CF64;
    case 202u: goto L_0035CF70;
    case 203u: goto L_0035CF80;
    case 204u: goto L_0035CF8C;
    case 205u: goto L_0035CF98;
    case 206u: goto L_0035CFA4;
    case 207u: goto L_0035CFB0;
    case 208u: goto L_0035CFC8;
    case 209u: goto L_0035CFD4;
    case 210u: goto L_0035CFEC;
    case 211u: goto L_0035CFF8;
    case 212u: goto L_0035D010;
    case 213u: goto L_0035D01C;
    case 214u: goto L_0035D034;
    case 215u: goto L_0035D040;
    case 216u: goto L_0035D064;
    case 217u: goto L_0035D070;
    case 218u: goto L_0035D090;
    case 219u: goto L_0035D0A0;
    case 220u: goto L_0035D0B0;
    case 221u: goto L_0035D0BC;
    case 222u: goto L_0035D0D0;
    case 223u: goto L_0035D0DC;
    case 224u: goto L_0035D0EC;
    case 225u: goto L_0035D0F8;
    case 226u: goto L_0035D104;
    case 227u: goto L_0035D110;
    case 228u: goto L_0035D11C;
    case 229u: goto L_0035D134;
    case 230u: goto L_0035D140;
    case 231u: goto L_0035D158;
    case 232u: goto L_0035D164;
    case 233u: goto L_0035D17C;
    case 234u: goto L_0035D188;
    case 235u: goto L_0035D1A0;
    case 236u: goto L_0035D1AC;
    case 237u: goto L_0035D1D0;
    case 238u: goto L_0035D1DC;
    case 239u: goto L_0035D1FC;
    case 240u: goto L_0035D20C;
    case 241u: goto L_0035D21C;
    case 242u: goto L_0035D228;
    case 243u: goto L_0035D23C;
    case 244u: goto L_0035D248;
    case 245u: goto L_0035D258;
    case 246u: goto L_0035D264;
    case 247u: goto L_0035D270;
    case 248u: goto L_0035D27C;
    case 249u: goto L_0035D288;
    case 250u: goto L_0035D2A0;
    case 251u: goto L_0035D2AC;
    case 252u: goto L_0035D2D0;
    case 253u: goto L_0035D2DC;
    case 254u: goto L_0035D2FC;
    case 255u: goto L_0035D30C;
    case 256u: goto L_0035D31C;
    case 257u: goto L_0035D328;
    case 258u: goto L_0035D33C;
    case 259u: goto L_0035D348;
    case 260u: goto L_0035D358;
    case 261u: goto L_0035D364;
    case 262u: goto L_0035D370;
    case 263u: goto L_0035D37C;
    case 264u: goto L_0035D388;
    case 265u: goto L_0035D3A0;
    case 266u: goto L_0035D3AC;
    case 267u: goto L_0035D3D0;
    case 268u: goto L_0035D3DC;
    case 269u: goto L_0035D3FC;
    case 270u: goto L_0035D40C;
    case 271u: goto L_0035D41C;
    case 272u: goto L_0035D428;
    case 273u: goto L_0035D43C;
    case 274u: goto L_0035D448;
    case 275u: goto L_0035D458;
    case 276u: goto L_0035D464;
    case 277u: goto L_0035D470;
    case 278u: goto L_0035D47C;
    case 279u: goto L_0035D488;
    case 280u: goto L_0035D4A0;
    case 281u: goto L_0035D4AC;
    case 282u: goto L_0035D4D0;
    case 283u: goto L_0035D4DC;
    case 284u: goto L_0035D4FC;
    case 285u: goto L_0035D50C;
    case 286u: goto L_0035D51C;
    case 287u: goto L_0035D528;
    case 288u: goto L_0035D53C;
    case 289u: goto L_0035D548;
    case 290u: goto L_0035D558;
    case 291u: goto L_0035D564;
    case 292u: goto L_0035D570;
    case 293u: goto L_0035D57C;
    case 294u: goto L_0035D588;
    case 295u: goto L_0035D5A0;
    case 296u: goto L_0035D5AC;
    case 297u: goto L_0035D5D0;
    case 298u: goto L_0035D5DC;
    case 299u: goto L_0035D5FC;
    case 300u: goto L_0035D60C;
    case 301u: goto L_0035D628;
    case 302u: goto L_0035D63C;
    case 303u: goto L_0035D648;
    case 304u: goto L_0035D658;
    case 305u: goto L_0035D664;
    case 306u: goto L_0035D670;
    case 307u: goto L_0035D67C;
    case 308u: goto L_0035D688;
    case 309u: goto L_0035D6AC;
    case 310u: goto L_0035D6B8;
    case 311u: goto L_0035D6D8;
    case 312u: goto L_0035D6E8;
    case 313u: goto L_0035D704;
    case 314u: goto L_0035D718;
    case 315u: goto L_0035D724;
    case 316u: goto L_0035D734;
    case 317u: goto L_0035D740;
    case 318u: goto L_0035D74C;
    case 319u: goto L_0035D758;
    case 320u: goto L_0035D764;
    case 321u: goto L_0035D77C;
    case 322u: goto L_0035D788;
    case 323u: goto L_0035D7A0;
    case 324u: goto L_0035D7AC;
    case 325u: goto L_0035D7C4;
    case 326u: goto L_0035D7D0;
    case 327u: goto L_0035D7F4;
    case 328u: goto L_0035D800;
    case 329u: goto L_0035D820;
    case 330u: goto L_0035D830;
    case 331u: goto L_0035D84C;
    case 332u: goto L_0035D85C;
    case 333u: goto L_0035D878;
    case 334u: goto L_0035D884;
    case 335u: goto L_0035D894;
    case 336u: goto L_0035D8A4;
    case 337u: goto L_0035D8C8;
    case 338u: goto L_0035D8F0;
    case 339u: goto L_0035D8FC;
    case 340u: goto L_0035D914;
    case 341u: goto L_0035D928;
    case 342u: goto L_0035D934;
    case 343u: goto L_0035D944;
    case 344u: goto L_0035D95C;
    case 345u: goto L_0035D968;
    case 346u: goto L_0035D988;
    case 347u: goto L_0035D998;
    case 348u: goto L_0035D9B4;
    case 349u: goto L_0035D9CC;
    case 350u: goto L_0035D9D4;
    case 351u: goto L_0035D9E0;
    case 352u: goto L_0035D9F8;
    case 353u: goto L_0035DA10;
    case 354u: goto L_0035DA18;
    case 355u: goto L_0035DA24;
    case 356u: goto L_0035DA3C;
    case 357u: goto L_0035DA54;
    case 358u: goto L_0035DA5C;
    case 359u: goto L_0035DA68;
    case 360u: goto L_0035DA80;
    case 361u: goto L_0035DA98;
    case 362u: goto L_0035DAA0;
    case 363u: goto L_0035DAAC;
    case 364u: goto L_0035DAD0;
    case 365u: goto L_0035DAE8;
    case 366u: goto L_0035DAF0;
    case 367u: goto L_0035DAFC;
    case 368u: goto L_0035DB24;
    case 369u: goto L_0035DB3C;
    case 370u: goto L_0035DB44;
    case 371u: goto L_0035DB50;
    case 372u: goto L_0035DB78;
    case 373u: goto L_0035DBA8;
    case 374u: goto L_0035DBC8;
    case 375u: goto L_0035DBD4;
    case 376u: goto L_0035DBEC;
    case 377u: goto L_0035DC18;
    case 378u: goto L_0035DC2C;
    case 379u: goto L_0035DC34;
    case 380u: goto L_0035DC40;
    case 381u: goto L_0035DC58;
    case 382u: goto L_0035DC74;
    case 383u: goto L_0035DC8C;
    case 384u: goto L_0035DC98;
    case 385u: goto L_0035DCBC;
    case 386u: goto L_0035DCC8;
    case 387u: goto L_0035DCEC;
    case 388u: goto L_0035DCFC;
    case 389u: goto L_0035DD10;
    case 390u: goto L_0035DD40;
    case 391u: goto L_0035DD74;
    case 392u: goto L_0035DD8C;
    case 393u: goto L_0035DDA0;
    case 394u: goto L_0035DDCC;
    case 395u: goto L_0035DDDC;
    case 396u: goto L_0035DDF0;
    case 397u: goto L_0035DE2C;
    case 398u: goto L_0035DE50;
    case 399u: goto L_0035DE70;
    case 400u: goto L_0035DE84;
    case 401u: goto L_0035DEB0;
    case 402u: goto L_0035DEE8;
    case 403u: goto L_0035DF00;
    case 404u: goto L_0035DF20;
    case 405u: goto L_0035DF54;
    case 406u: goto L_0035DF6C;
    case 407u: goto L_0035DF80;
    case 408u: goto L_0035DFA4;
    case 409u: goto L_0035DFB4;
    case 410u: goto L_0035DFD0;
    case 411u: goto L_0035E00C;
    case 412u: goto L_0035E030;
    case 413u: goto L_0035E050;
    case 414u: goto L_0035E064;
    case 415u: goto L_0035E090;
    case 416u: goto L_0035E0C4;
    case 417u: goto L_0035E0DC;
    case 418u: goto L_0035E0F0;
    case 419u: goto L_0035E114;
    case 420u: goto L_0035E124;
    case 421u: goto L_0035E140;
    case 422u: goto L_0035E17C;
    case 423u: goto L_0035E1A0;
    case 424u: goto L_0035E1C0;
    case 425u: goto L_0035E1D4;
    case 426u: goto L_0035E200;
    case 427u: goto L_0035E234;
    case 428u: goto L_0035E24C;
    case 429u: goto L_0035E260;
    case 430u: goto L_0035E28C;
    case 431u: goto L_0035E29C;
    case 432u: goto L_0035E2B0;
    case 433u: goto L_0035E2EC;
    case 434u: goto L_0035E310;
    case 435u: goto L_0035E330;
    case 436u: goto L_0035E344;
    case 437u: goto L_0035E370;
    case 438u: goto L_0035E3A4;
    case 439u: goto L_0035E3BC;
    case 440u: goto L_0035E3D0;
    case 441u: goto L_0035E3FC;
    case 442u: goto L_0035E40C;
    case 443u: goto L_0035E420;
    case 444u: goto L_0035E45C;
    case 445u: goto L_0035E480;
    case 446u: goto L_0035E4A0;
    case 447u: goto L_0035E4B4;
    case 448u: goto L_0035E4E0;
    case 449u: goto L_0035E514;
    case 450u: goto L_0035E52C;
    case 451u: goto L_0035E540;
    case 452u: goto L_0035E564;
    case 453u: goto L_0035E574;
    case 454u: goto L_0035E590;
    case 455u: goto L_0035E5CC;
    case 456u: goto L_0035E5F0;
    case 457u: goto L_0035E610;
    case 458u: goto L_0035E640;
    case 459u: goto L_0035E674;
    case 460u: goto L_0035E68C;
    case 461u: goto L_0035E6A0;
    case 462u: goto L_0035E6D4;
    case 463u: goto L_0035E6E4;
    case 464u: goto L_0035E700;
    case 465u: goto L_0035E73C;
    case 466u: goto L_0035E760;
    case 467u: goto L_0035E790;
    case 468u: goto L_0035E7A4;
    case 469u: goto L_0035E7D0;
    case 470u: goto L_0035E804;
    case 471u: goto L_0035E81C;
    case 472u: goto L_0035E830;
    case 473u: goto L_0035E864;
    case 474u: goto L_0035E874;
    case 475u: goto L_0035E890;
    case 476u: goto L_0035E8CC;
    case 477u: goto L_0035E8F0;
    case 478u: goto L_0035E920;
    case 479u: goto L_0035E950;
    case 480u: goto L_0035E984;
    case 481u: goto L_0035E99C;
    case 482u: goto L_0035E9B0;
    case 483u: goto L_0035E9E4;
    case 484u: goto L_0035E9F4;
    case 485u: goto L_0035EA10;
    case 486u: goto L_0035EA4C;
    case 487u: goto L_0035EA70;
    case 488u: goto L_0035EAA0;
    case 489u: goto L_0035EAD0;
    case 490u: goto L_0035EB04;
    case 491u: goto L_0035EB1C;
    case 492u: goto L_0035EB30;
    case 493u: goto L_0035EB64;
    case 494u: goto L_0035EB74;
    case 495u: goto L_0035EB90;
    case 496u: goto L_0035EBCC;
    case 497u: goto L_0035EBF0;
    case 498u: goto L_0035EC20;
    case 499u: goto L_0035EC50;
    case 500u: goto L_0035EC84;
    case 501u: goto L_0035EC9C;
    case 502u: goto L_0035ECB0;
    case 503u: goto L_0035ECD4;
    case 504u: goto L_0035ECE4;
    case 505u: goto L_0035ED00;
    case 506u: goto L_0035ED3C;
    case 507u: goto L_0035ED60;
    case 508u: goto L_0035ED80;
    case 509u: goto L_0035ED94;
    case 510u: goto L_0035EDC0;
    case 511u: goto L_0035EDF4;
    case 512u: goto L_0035EE0C;
    case 513u: goto L_0035EE20;
    case 514u: goto L_0035EE4C;
    case 515u: goto L_0035EE5C;
    case 516u: goto L_0035EE70;
    case 517u: goto L_0035EEAC;
    case 518u: goto L_0035EED0;
    case 519u: goto L_0035EEF0;
    case 520u: goto L_0035EF04;
    case 521u: goto L_0035EF30;
    case 522u: goto L_0035EF64;
    case 523u: goto L_0035EF7C;
    case 524u: goto L_0035EF90;
    case 525u: goto L_0035EFBC;
    case 526u: goto L_0035EFCC;
    case 527u: goto L_0035EFE0;
    case 528u: goto L_0035F01C;
    case 529u: goto L_0035F040;
    case 530u: goto L_0035F060;
    case 531u: goto L_0035F074;
    case 532u: goto L_0035F0A0;
    case 533u: goto L_0035F0D4;
    case 534u: goto L_0035F0EC;
    case 535u: goto L_0035F100;
    case 536u: goto L_0035F12C;
    case 537u: goto L_0035F13C;
    case 538u: goto L_0035F150;
    case 539u: goto L_0035F18C;
    case 540u: goto L_0035F1B0;
    case 541u: goto L_0035F1D0;
    case 542u: goto L_0035F1E4;
    case 543u: goto L_0035F210;
    case 544u: goto L_0035F244;
    case 545u: goto L_0035F25C;
    case 546u: goto L_0035F270;
    case 547u: goto L_0035F29C;
    case 548u: goto L_0035F2AC;
    case 549u: goto L_0035F2C0;
    case 550u: goto L_0035F2FC;
    case 551u: goto L_0035F320;
    case 552u: goto L_0035F340;
    case 553u: goto L_0035F354;
    case 554u: goto L_0035F380;
    case 555u: goto L_0035F3B4;
    case 556u: goto L_0035F3CC;
    case 557u: goto L_0035F3E0;
    case 558u: goto L_0035F40C;
    case 559u: goto L_0035F41C;
    case 560u: goto L_0035F430;
    case 561u: goto L_0035F46C;
    case 562u: goto L_0035F490;
    case 563u: goto L_0035F4B0;
    case 564u: goto L_0035F4C4;
    case 565u: goto L_0035F4F0;
    case 566u: goto L_0035F524;
    case 567u: goto L_0035F53C;
    case 568u: goto L_0035F550;
    case 569u: goto L_0035F57C;
    case 570u: goto L_0035F58C;
    case 571u: goto L_0035F5A0;
    case 572u: goto L_0035F5DC;
    case 573u: goto L_0035F600;
    case 574u: goto L_0035F620;
    case 575u: goto L_0035F634;
    case 576u: goto L_0035F660;
    case 577u: goto L_0035F694;
    case 578u: goto L_0035F6AC;
    case 579u: goto L_0035F6C0;
    case 580u: goto L_0035F6EC;
    case 581u: goto L_0035F6FC;
    case 582u: goto L_0035F710;
    case 583u: goto L_0035F74C;
    case 584u: goto L_0035F770;
    case 585u: goto L_0035F790;
    case 586u: goto L_0035F7A4;
    case 587u: goto L_0035F7D0;
    case 588u: goto L_0035F804;
    case 589u: goto L_0035F81C;
    case 590u: goto L_0035F830;
    case 591u: goto L_0035F85C;
    case 592u: goto L_0035F86C;
    case 593u: goto L_0035F880;
    case 594u: goto L_0035F8BC;
    case 595u: goto L_0035F8E0;
    case 596u: goto L_0035F900;
    case 597u: goto L_0035F914;
    case 598u: goto L_0035F940;
    case 599u: goto L_0035F974;
    case 600u: goto L_0035F98C;
    case 601u: goto L_0035F9A0;
    case 602u: goto L_0035F9CC;
    case 603u: goto L_0035F9DC;
    case 604u: goto L_0035F9F0;
    case 605u: goto L_0035FA2C;
    case 606u: goto L_0035FA50;
    case 607u: goto L_0035FA70;
    case 608u: goto L_0035FA84;
    case 609u: goto L_0035FAB0;
    case 610u: goto L_0035FAE4;
    case 611u: goto L_0035FAFC;
    case 612u: goto L_0035FB10;
    case 613u: goto L_0035FB3C;
    case 614u: goto L_0035FB4C;
    case 615u: goto L_0035FB60;
    case 616u: goto L_0035FB9C;
    case 617u: goto L_0035FBC0;
    case 618u: goto L_0035FBE0;
    case 619u: goto L_0035FBF4;
    case 620u: goto L_0035FC20;
    case 621u: goto L_0035FC54;
    case 622u: goto L_0035FC6C;
    case 623u: goto L_0035FC80;
    case 624u: goto L_0035FCA4;
    case 625u: goto L_0035FCB4;
    case 626u: goto L_0035FCD0;
    case 627u: goto L_0035FD0C;
    case 628u: goto L_0035FD30;
    case 629u: goto L_0035FD50;
    case 630u: goto L_0035FD64;
    case 631u: goto L_0035FD90;
    case 632u: goto L_0035FDC4;
    case 633u: goto L_0035FDDC;
    case 634u: goto L_0035FDF0;
    case 635u: goto L_0035FE14;
    case 636u: goto L_0035FE24;
    case 637u: goto L_0035FE40;
    case 638u: goto L_0035FE7C;
    case 639u: goto L_0035FEA0;
    case 640u: goto L_0035FEC0;
    case 641u: goto L_0035FED4;
    case 642u: goto L_0035FF00;
    case 643u: goto L_0035FF34;
    case 644u: goto L_0035FF4C;
    case 645u: goto L_0035FF60;
    case 646u: goto L_0035FF84;
    case 647u: goto L_0035FF94;
    case 648u: goto L_0035FFB0;
    case 649u: goto L_0035FFEC;
    default: bad_entry(c, 0x0035C000u); return;
    }
L_0035C000:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0035C004:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C014u); set32(c.r[5], c.r[5].w[0] + 12819u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C014u) [[unlikely]] return; }
L_0035C014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C038; } }
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C028u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C028u) [[unlikely]] return; }
L_0035C028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D61C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C038:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C044u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C044u) [[unlikely]] return; }
L_0035C044:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C054u); set32(c.r[5], c.r[5].w[0] + 12826u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C054u) [[unlikely]] return; }
L_0035C054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C078; } }
    set32(c.r[5], c.r[18].w[0] + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C068u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C068u) [[unlikely]] return; }
L_0035C068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D6F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C078:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C084u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C084u) [[unlikely]] return; }
L_0035C084:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C094u); set32(c.r[5], c.r[5].w[0] + 12833u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C094u) [[unlikely]] return; }
L_0035C094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C0B8; } }
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C0A8u) [[unlikely]] return; }
L_0035C0A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C0B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C0C4u) [[unlikely]] return; }
L_0035C0C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0D4u); set32(c.r[5], c.r[5].w[0] + 12839u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C0D4u) [[unlikely]] return; }
L_0035C0D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C0F8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C0E8u) [[unlikely]] return; }
L_0035C0E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C0F8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C104u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C104u) [[unlikely]] return; }
L_0035C104:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C114u); set32(c.r[5], c.r[5].w[0] + 12849u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C114u) [[unlikely]] return; }
L_0035C114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C138; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C128u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C128u) [[unlikely]] return; }
L_0035C128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D9A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C138:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C144u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C144u) [[unlikely]] return; }
L_0035C144:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C154u); set32(c.r[5], c.r[5].w[0] + 12854u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C154u) [[unlikely]] return; }
L_0035C154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C178; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C168u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C168u) [[unlikely]] return; }
L_0035C168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D9EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C178:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C184u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C184u) [[unlikely]] return; }
L_0035C184:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C194u); set32(c.r[5], c.r[5].w[0] + 12860u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C194u) [[unlikely]] return; }
L_0035C194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C1B8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C1A8u) [[unlikely]] return; }
L_0035C1A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DA30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C1B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C1C4u) [[unlikely]] return; }
L_0035C1C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1D4u); set32(c.r[5], c.r[5].w[0] + 12867u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C1D4u) [[unlikely]] return; }
L_0035C1D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C1F8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C1E8u) [[unlikely]] return; }
L_0035C1E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DA74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C1F8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C204u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C204u) [[unlikely]] return; }
L_0035C204:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C214u); set32(c.r[5], c.r[5].w[0] + 12877u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C214u) [[unlikely]] return; }
L_0035C214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C238; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C228u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C228u) [[unlikely]] return; }
L_0035C228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DAC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C238:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C244u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C244u) [[unlikely]] return; }
L_0035C244:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C254u); set32(c.r[5], c.r[5].w[0] + 12894u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C254u) [[unlikely]] return; }
L_0035C254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C278; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C268u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C268u) [[unlikely]] return; }
L_0035C268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DB18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C278:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C284u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C284u) [[unlikely]] return; }
L_0035C284:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C294u); set32(c.r[5], c.r[5].w[0] + 12915u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C294u) [[unlikely]] return; }
L_0035C294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DB6C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C2A8u) [[unlikely]] return; }
L_0035C2A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2B8u); set32(c.r[5], c.r[5].w[0] + 12925u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C2B8u) [[unlikely]] return; }
L_0035C2B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DB9C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C2CCu) [[unlikely]] return; }
L_0035C2CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2DCu); set32(c.r[5], c.r[5].w[0] + 12937u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C2DCu) [[unlikely]] return; }
L_0035C2DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C300; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C2F0u) [[unlikely]] return; }
L_0035C2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DBBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C300:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C30Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C30Cu) [[unlikely]] return; }
L_0035C30C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C31Cu); set32(c.r[5], c.r[5].w[0] + 12948u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C31Cu) [[unlikely]] return; }
L_0035C31C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C340; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C330u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C330u) [[unlikely]] return; }
L_0035C330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DC0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C340:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C34Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C34Cu) [[unlikely]] return; }
L_0035C34C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C35Cu); set32(c.r[5], c.r[5].w[0] + 12954u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C35Cu) [[unlikely]] return; }
L_0035C35C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DC4C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C370u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C370u) [[unlikely]] return; }
L_0035C370:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C380u); set32(c.r[5], c.r[5].w[0] + 12967u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C380u) [[unlikely]] return; }
L_0035C380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DC68; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C394u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C394u) [[unlikely]] return; }
L_0035C394:
    set32(c.r[4], c.r[21].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 144u, depth + 1u); else { c.pc = 0x00358E50u; return; } if (c.pc != 0x0035C3A0u) [[unlikely]] return; }
L_0035C3A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035DD0C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3B8u); set32(c.r[4], c.r[2].w[0] + 1432u);  if (depth < kMaxDepth) unit_0057(c, 390u, depth + 1u); else { c.pc = 0x0035DD40u; return; } if (c.pc != 0x0035C3B8u) [[unlikely]] return; }
L_0035C3B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3D0u); st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0035C3D0u) [[unlikely]] return; }
L_0035C3D0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0035DC84; } }
L_0035C3E0:
    set32(c.r[20], c.r[16].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0035C3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0035C3F0u) [[unlikely]] return; }
L_0035C3F0:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035C418; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C410u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x0035C410u) [[unlikely]] return; }
L_0035C410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0035C420; } }
L_0035C418:
    set32(c.r[2], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0035C420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0035DD14; } }
L_0035C428:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C434u); set32(c.r[4], c.r[2].w[0] + 932u);  if (depth < kMaxDepth) unit_0058(c, 254u, depth + 1u); else { c.pc = 0x00362140u; return; } if (c.pc != 0x0035C434u) [[unlikely]] return; }
L_0035C434:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[17].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C44Cu); set32(c.r[20], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C44Cu) [[unlikely]] return; }
L_0035C44C:
    set32(c.r[4], c.r[21].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C458u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 417u, depth + 1u); else { c.pc = 0x0035B500u; return; } if (c.pc != 0x0035C458u) [[unlikely]] return; }
L_0035C458:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035C484; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C470u); set32(c.r[4], c.r[2].w[0] + 952u);  if (depth < kMaxDepth) unit_0058(c, 243u, depth + 1u); else { c.pc = 0x00361FD0u; return; } if (c.pc != 0x0035C470u) [[unlikely]] return; }
L_0035C470:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C484:
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C490u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035C490u) [[unlikely]] return; }
L_0035C490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C4A4u); set32(c.r[4], c.r[2].w[0] + 972u);  if (depth < kMaxDepth) unit_0058(c, 231u, depth + 1u); else { c.pc = 0x00361E40u; return; } if (c.pc != 0x0035C4A4u) [[unlikely]] return; }
L_0035C4A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C4B4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C4B4u) [[unlikely]] return; }
L_0035C4B4:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C4C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C4C0u) [[unlikely]] return; }
L_0035C4C0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0035C548; } }
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C4D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C4D8u) [[unlikely]] return; }
L_0035C4D8:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C4E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C4E4u) [[unlikely]] return; }
L_0035C4E4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0035C550; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C504u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C504u) [[unlikely]] return; }
L_0035C504:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C510u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0035C510u) [[unlikely]] return; }
L_0035C510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C518u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0058(c, 227u, depth + 1u); else { c.pc = 0x00361D90u; return; } if (c.pc != 0x0035C518u) [[unlikely]] return; }
L_0035C518:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C528u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0035C528u) [[unlikely]] return; }
L_0035C528:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C558; } }
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C560:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C56Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C56Cu) [[unlikely]] return; }
L_0035C56C:
    set32(c.r[4], c.r[21].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C578u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 417u, depth + 1u); else { c.pc = 0x0035B500u; return; } if (c.pc != 0x0035C578u) [[unlikely]] return; }
L_0035C578:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035C5CC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C590u); set32(c.r[4], c.r[2].w[0] + 1032u);  if (depth < kMaxDepth) unit_0058(c, 216u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x0035C590u) [[unlikely]] return; }
L_0035C590:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 2u);
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5ACu); st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C5ACu) [[unlikely]] return; }
L_0035C5AC:
    set32(c.r[4], c.r[21].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 417u, depth + 1u); else { c.pc = 0x0035B500u; return; } if (c.pc != 0x0035C5B8u) [[unlikely]] return; }
L_0035C5B8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 3u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C5CC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5D8u); set32(c.r[4], c.r[2].w[0] + 1052u);  if (depth < kMaxDepth) unit_0058(c, 206u, depth + 1u); else { c.pc = 0x00361AC0u; return; } if (c.pc != 0x0035C5D8u) [[unlikely]] return; }
L_0035C5D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5ECu); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C5ECu) [[unlikely]] return; }
L_0035C5EC:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C5F8u) [[unlikely]] return; }
L_0035C5F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035C684; } }
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C610u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C610u) [[unlikely]] return; }
L_0035C610:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C620u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x0035C620u) [[unlikely]] return; }
L_0035C620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C628u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0056(c, 188u, depth + 1u); else { c.pc = 0x003592C0u; return; } if (c.pc != 0x0035C628u) [[unlikely]] return; }
L_0035C628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C684; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C63Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C63Cu) [[unlikely]] return; }
L_0035C63C:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C648u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C648u) [[unlikely]] return; }
L_0035C648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C68C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 3u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C66Cu); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0035C66Cu) [[unlikely]] return; }
L_0035C66C:
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035C694; } }
L_0035C67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C694:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C6A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C6A0u) [[unlikely]] return; }
L_0035C6A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C6B0u); set32(c.r[5], ld32((c.r[2].w[0] - 22912u)));  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C6B0u) [[unlikely]] return; }
L_0035C6B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C6EC; } }
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C6C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C6C4u) [[unlikely]] return; }
L_0035C6C4:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C6D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C6D0u) [[unlikely]] return; }
L_0035C6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C800; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C67Cu | kUnwind; return; } goto L_0035C67C; } }
L_0035C6EC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C6F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C6F8u) [[unlikely]] return; }
L_0035C6F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C708u); set32(c.r[5], ld32((c.r[2].w[0] - 22908u)));  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C708u) [[unlikely]] return; }
L_0035C708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C748; } }
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C71Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C71Cu) [[unlikely]] return; }
L_0035C71C:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C728u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C728u) [[unlikely]] return; }
L_0035C728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C808; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C67Cu | kUnwind; return; } goto L_0035C67C; } }
L_0035C748:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C754u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C754u) [[unlikely]] return; }
L_0035C754:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C764u); set32(c.r[5], ld32((c.r[2].w[0] - 22904u)));  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C764u) [[unlikely]] return; }
L_0035C764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C7A4; } }
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C778u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C778u) [[unlikely]] return; }
L_0035C778:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C784u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C784u) [[unlikely]] return; }
L_0035C784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C810; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C67Cu | kUnwind; return; } goto L_0035C67C; } }
L_0035C7A4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C7B0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C7B0u) [[unlikely]] return; }
L_0035C7B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C7C0u); set32(c.r[5], ld32((c.r[2].w[0] - 22900u)));  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035C7C0u) [[unlikely]] return; }
L_0035C7C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C67Cu | kUnwind; return; } goto L_0035C67C; } }
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C7D4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C7D4u) [[unlikely]] return; }
L_0035C7D4:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C7E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C7E0u) [[unlikely]] return; }
L_0035C7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C818; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C67Cu | kUnwind; return; } goto L_0035C67C; } }
L_0035C800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C820:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C82Cu); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0058(c, 195u, depth + 1u); else { c.pc = 0x00361950u; return; } if (c.pc != 0x0035C82Cu) [[unlikely]] return; }
L_0035C82C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C840u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C840u) [[unlikely]] return; }
L_0035C840:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C84Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C84Cu) [[unlikely]] return; }
L_0035C84C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035C898; } }
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C864u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C864u) [[unlikely]] return; }
L_0035C864:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C874u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x0035C874u) [[unlikely]] return; }
L_0035C874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C87Cu); set32(c.r[4], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_0056(c, 188u, depth + 1u); else { c.pc = 0x003592C0u; return; } if (c.pc != 0x0035C87Cu) [[unlikely]] return; }
L_0035C87C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C898; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C8A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8ACu); set32(c.r[4], c.r[2].w[0] + 1092u);  if (depth < kMaxDepth) unit_0058(c, 184u, depth + 1u); else { c.pc = 0x003617E0u; return; } if (c.pc != 0x0035C8ACu) [[unlikely]] return; }
L_0035C8AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8C0u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C8C0u) [[unlikely]] return; }
L_0035C8C0:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8CCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C8CCu) [[unlikely]] return; }
L_0035C8CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035C918; } }
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C8E4u) [[unlikely]] return; }
L_0035C8E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x0035C8F4u) [[unlikely]] return; }
L_0035C8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8FCu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 188u, depth + 1u); else { c.pc = 0x003592C0u; return; } if (c.pc != 0x0035C8FCu) [[unlikely]] return; }
L_0035C8FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C918; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C920:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C92Cu); set32(c.r[4], c.r[2].w[0] + 1452u);  if (depth < kMaxDepth) unit_0058(c, 173u, depth + 1u); else { c.pc = 0x00361670u; return; } if (c.pc != 0x0035C92Cu) [[unlikely]] return; }
L_0035C92C:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C93C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C948u); set32(c.r[4], c.r[2].w[0] + 1472u);  if (depth < kMaxDepth) unit_0058(c, 162u, depth + 1u); else { c.pc = 0x00361500u; return; } if (c.pc != 0x0035C948u) [[unlikely]] return; }
L_0035C948:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C958:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C964u); set32(c.r[4], c.r[2].w[0] + 1492u);  if (depth < kMaxDepth) unit_0058(c, 151u, depth + 1u); else { c.pc = 0x00361390u; return; } if (c.pc != 0x0035C964u) [[unlikely]] return; }
L_0035C964:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C978u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C978u) [[unlikely]] return; }
L_0035C978:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C984u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C984u) [[unlikely]] return; }
L_0035C984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C9A0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C9A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9B4u); set32(c.r[4], c.r[2].w[0] + 1512u);  if (depth < kMaxDepth) unit_0058(c, 140u, depth + 1u); else { c.pc = 0x00361220u; return; } if (c.pc != 0x0035C9B4u) [[unlikely]] return; }
L_0035C9B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9C8u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C9C8u) [[unlikely]] return; }
L_0035C9C8:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035C9D4u) [[unlikely]] return; }
L_0035C9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C9F0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035C9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035C9F8:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA04u); set32(c.r[4], c.r[2].w[0] + 1612u);  if (depth < kMaxDepth) unit_0058(c, 129u, depth + 1u); else { c.pc = 0x003610B0u; return; } if (c.pc != 0x0035CA04u) [[unlikely]] return; }
L_0035CA04:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CA14:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA20u); set32(c.r[4], c.r[2].w[0] + 1632u);  if (depth < kMaxDepth) unit_0058(c, 118u, depth + 1u); else { c.pc = 0x00360F40u; return; } if (c.pc != 0x0035CA20u) [[unlikely]] return; }
L_0035CA20:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CA30:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA3Cu); set32(c.r[4], c.r[2].w[0] + 1532u);  if (depth < kMaxDepth) unit_0058(c, 107u, depth + 1u); else { c.pc = 0x00360DD0u; return; } if (c.pc != 0x0035CA3Cu) [[unlikely]] return; }
L_0035CA3C:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CA4C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA58u); set32(c.r[4], c.r[2].w[0] + 1552u);  if (depth < kMaxDepth) unit_0058(c, 96u, depth + 1u); else { c.pc = 0x00360C60u; return; } if (c.pc != 0x0035CA58u) [[unlikely]] return; }
L_0035CA58:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CA68:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA74u); set32(c.r[4], c.r[2].w[0] + 1572u);  if (depth < kMaxDepth) unit_0058(c, 85u, depth + 1u); else { c.pc = 0x00360AF0u; return; } if (c.pc != 0x0035CA74u) [[unlikely]] return; }
L_0035CA74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA88u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CA88u) [[unlikely]] return; }
L_0035CA88:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035CA94u) [[unlikely]] return; }
L_0035CA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CAB0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035CAB8:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAC4u); set32(c.r[4], c.r[2].w[0] + 1592u);  if (depth < kMaxDepth) unit_0058(c, 74u, depth + 1u); else { c.pc = 0x00360980u; return; } if (c.pc != 0x0035CAC4u) [[unlikely]] return; }
L_0035CAC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAD8u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CAD8u) [[unlikely]] return; }
L_0035CAD8:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035CAE4u) [[unlikely]] return; }
L_0035CAE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CB00; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035CB08:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB14u); set32(c.r[4], c.r[2].w[0] + 1652u);  if (depth < kMaxDepth) unit_0058(c, 63u, depth + 1u); else { c.pc = 0x00360810u; return; } if (c.pc != 0x0035CB14u) [[unlikely]] return; }
L_0035CB14:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CB24:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB30u); set32(c.r[4], c.r[2].w[0] + 1672u);  if (depth < kMaxDepth) unit_0058(c, 52u, depth + 1u); else { c.pc = 0x003606A0u; return; } if (c.pc != 0x0035CB30u) [[unlikely]] return; }
L_0035CB30:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CB40:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB4Cu); set32(c.r[4], c.r[2].w[0] + 1872u);  if (depth < kMaxDepth) unit_0058(c, 41u, depth + 1u); else { c.pc = 0x00360530u; return; } if (c.pc != 0x0035CB4Cu) [[unlikely]] return; }
L_0035CB4C:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CB5C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB68u); set32(c.r[4], c.r[2].w[0] + 1892u);  if (depth < kMaxDepth) unit_0058(c, 30u, depth + 1u); else { c.pc = 0x003603C0u; return; } if (c.pc != 0x0035CB68u) [[unlikely]] return; }
L_0035CB68:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CB78:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB84u); set32(c.r[4], c.r[2].w[0] + 1732u);  if (depth < kMaxDepth) unit_0058(c, 19u, depth + 1u); else { c.pc = 0x00360250u; return; } if (c.pc != 0x0035CB84u) [[unlikely]] return; }
L_0035CB84:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CB94:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CBA0u); set32(c.r[4], c.r[2].w[0] + 1112u);  if (depth < kMaxDepth) unit_0058(c, 8u, depth + 1u); else { c.pc = 0x003600E0u; return; } if (c.pc != 0x0035CBA0u) [[unlikely]] return; }
L_0035CBA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CBB0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CBB0u) [[unlikely]] return; }
L_0035CBB0:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CBBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035CBBCu) [[unlikely]] return; }
L_0035CBBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CBDC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035CBCC:
    st32((c.r[20].w[0]), c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CBDC:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CBE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CBE8u) [[unlikely]] return; }
L_0035CBE8:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CBF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035CBF4u) [[unlikely]] return; }
L_0035CBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CC08; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CBCCu | kUnwind; return; } goto L_0035CBCC; } }
L_0035CC08:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC14u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CC14u) [[unlikely]] return; }
L_0035CC14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC24u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035CC24u) [[unlikely]] return; }
L_0035CC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CBCCu | kUnwind; return; } goto L_0035CBCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035CC34:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC40u); set32(c.r[4], c.r[2].w[0] + 1132u);  if (depth < kMaxDepth) unit_0057(c, 642u, depth + 1u); else { c.pc = 0x0035FF00u; return; } if (c.pc != 0x0035CC40u) [[unlikely]] return; }
L_0035CC40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC50u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CC50u) [[unlikely]] return; }
L_0035CC50:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC5Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035CC5Cu) [[unlikely]] return; }
L_0035CC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CC7C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035CC6C:
    st32((c.r[20].w[0]), c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CC7C:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CC88u) [[unlikely]] return; }
L_0035CC88:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035CC94u) [[unlikely]] return; }
L_0035CC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CCA8; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CC6Cu | kUnwind; return; } goto L_0035CC6C; } }
L_0035CCA8:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CCB4u) [[unlikely]] return; }
L_0035CCB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCC4u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035CCC4u) [[unlikely]] return; }
L_0035CCC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CC6Cu | kUnwind; return; } goto L_0035CC6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035CCD4:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CCE0u) [[unlikely]] return; }
L_0035CCE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCF0u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035CCF0u) [[unlikely]] return; }
L_0035CCF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035CD1C; } }
L_0035CD00:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CD0Cu) [[unlikely]] return; }
L_0035CD0C:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD18u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035CD18u) [[unlikely]] return; }
L_0035CD18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035CD1C:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CD28u) [[unlikely]] return; }
L_0035CD28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD38u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035CD38u) [[unlikely]] return; }
L_0035CD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CD50; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0035CD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035CD50:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD5Cu); set32(c.r[4], c.r[2].w[0] + 1152u);  if (depth < kMaxDepth) unit_0057(c, 631u, depth + 1u); else { c.pc = 0x0035FD90u; return; } if (c.pc != 0x0035CD5Cu) [[unlikely]] return; }
L_0035CD5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_0035CD6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_0035CD70; } }
L_0035CD6C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035CD70:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[20], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CD80:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CD8Cu) [[unlikely]] return; }
L_0035CD8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD9Cu); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035CD9Cu) [[unlikely]] return; }
L_0035CD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CDAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035CDC8; } }
L_0035CDAC:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CDB8u) [[unlikely]] return; }
L_0035CDB8:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDC4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035CDC4u) [[unlikely]] return; }
L_0035CDC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035CDC8:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDD4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CDD4u) [[unlikely]] return; }
L_0035CDD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDE4u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035CDE4u) [[unlikely]] return; }
L_0035CDE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CDFC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0035CDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035CDFC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE08u); set32(c.r[4], c.r[2].w[0] + 1172u);  if (depth < kMaxDepth) unit_0057(c, 620u, depth + 1u); else { c.pc = 0x0035FC20u; return; } if (c.pc != 0x0035CE08u) [[unlikely]] return; }
L_0035CE08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_0035CE18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_0035CE1C; } }
L_0035CE18:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035CE1C:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[20], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CE2C:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CE38u) [[unlikely]] return; }
L_0035CE38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE48u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035CE48u) [[unlikely]] return; }
L_0035CE48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035CE74; } }
L_0035CE58:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE64u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CE64u) [[unlikely]] return; }
L_0035CE64:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035CE70u) [[unlikely]] return; }
L_0035CE70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035CE74:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE80u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CE80u) [[unlikely]] return; }
L_0035CE80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE90u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035CE90u) [[unlikely]] return; }
L_0035CE90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035CEBC; } }
L_0035CEA0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CEACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CEACu) [[unlikely]] return; }
L_0035CEAC:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CEB8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035CEB8u) [[unlikely]] return; }
L_0035CEB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035CEBC:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CEC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CEC8u) [[unlikely]] return; }
L_0035CEC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CED8u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035CED8u) [[unlikely]] return; }
L_0035CED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CEF8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0035CEF8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0035CEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035CEF8:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF04u); set32(c.r[4], c.r[2].w[0] + 1192u);  if (depth < kMaxDepth) unit_0057(c, 609u, depth + 1u); else { c.pc = 0x0035FAB0u; return; } if (c.pc != 0x0035CF04u) [[unlikely]] return; }
L_0035CF04:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0035CF1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_0035CF20; } }
L_0035CF1C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035CF20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0035CF30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_0035CF34; } }
L_0035CF30:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035CF34:
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[20], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035CF44:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF50u); set32(c.r[4], c.r[2].w[0] + 1752u);  if (depth < kMaxDepth) unit_0057(c, 598u, depth + 1u); else { c.pc = 0x0035F940u; return; } if (c.pc != 0x0035CF50u) [[unlikely]] return; }
L_0035CF50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF64u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CF64u) [[unlikely]] return; }
L_0035CF64:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035CF70u) [[unlikely]] return; }
L_0035CF70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D058; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035CF80:
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CF8Cu) [[unlikely]] return; }
L_0035CF8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF98u); set32(c.r[5], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035CF98u) [[unlikely]] return; }
L_0035CF98:
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CFA4u) [[unlikely]] return; }
L_0035CFA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFB0u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035CFB0u) [[unlikely]] return; }
L_0035CFB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFC8u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CFC8u) [[unlikely]] return; }
L_0035CFC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFD4u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035CFD4u) [[unlikely]] return; }
L_0035CFD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFECu); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035CFECu) [[unlikely]] return; }
L_0035CFEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFF8u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035CFF8u) [[unlikely]] return; }
L_0035CFF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], c.r[18].w[0] + 6u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D010u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D010u) [[unlikely]] return; }
L_0035D010:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D01Cu); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D01Cu) [[unlikely]] return; }
L_0035D01C:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], c.r[18].w[0] + 7u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D034u); st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D034u) [[unlikely]] return; }
L_0035D034:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D040u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D040u) [[unlikely]] return; }
L_0035D040:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D058:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D064u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D064u) [[unlikely]] return; }
L_0035D064:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D070u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D070u) [[unlikely]] return; }
L_0035D070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D084; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CF80u | kUnwind; return; } goto L_0035CF80; } }
L_0035D084:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D090u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D090u) [[unlikely]] return; }
L_0035D090:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0A0u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D0A0u) [[unlikely]] return; }
L_0035D0A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CF80u | kUnwind; return; } goto L_0035CF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D0B0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0BCu); set32(c.r[4], c.r[2].w[0] + 1212u);  if (depth < kMaxDepth) unit_0057(c, 587u, depth + 1u); else { c.pc = 0x0035F7D0u; return; } if (c.pc != 0x0035D0BCu) [[unlikely]] return; }
L_0035D0BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0D0u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D0D0u) [[unlikely]] return; }
L_0035D0D0:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035D0DCu) [[unlikely]] return; }
L_0035D0DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D1C4; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035D0EC:
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D0F8u) [[unlikely]] return; }
L_0035D0F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D104u); set32(c.r[5], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D104u) [[unlikely]] return; }
L_0035D104:
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D110u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D110u) [[unlikely]] return; }
L_0035D110:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D11Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D11Cu) [[unlikely]] return; }
L_0035D11C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D134u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D134u) [[unlikely]] return; }
L_0035D134:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D140u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D140u) [[unlikely]] return; }
L_0035D140:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D158u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D158u) [[unlikely]] return; }
L_0035D158:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D164u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D164u) [[unlikely]] return; }
L_0035D164:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], c.r[18].w[0] + 6u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D17Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D17Cu) [[unlikely]] return; }
L_0035D17C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D188u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D188u) [[unlikely]] return; }
L_0035D188:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], c.r[18].w[0] + 7u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1A0u); st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D1A0u) [[unlikely]] return; }
L_0035D1A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1ACu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D1ACu) [[unlikely]] return; }
L_0035D1AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D1C4:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D1D0u) [[unlikely]] return; }
L_0035D1D0:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D1DCu) [[unlikely]] return; }
L_0035D1DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D1F0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D0ECu | kUnwind; return; } goto L_0035D0EC; } }
L_0035D1F0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D1FCu) [[unlikely]] return; }
L_0035D1FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D20Cu); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D20Cu) [[unlikely]] return; }
L_0035D20C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D0ECu | kUnwind; return; } goto L_0035D0EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D21C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D228u); set32(c.r[4], c.r[2].w[0] + 1692u);  if (depth < kMaxDepth) unit_0057(c, 576u, depth + 1u); else { c.pc = 0x0035F660u; return; } if (c.pc != 0x0035D228u) [[unlikely]] return; }
L_0035D228:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D23Cu); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D23Cu) [[unlikely]] return; }
L_0035D23C:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D248u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035D248u) [[unlikely]] return; }
L_0035D248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D2C4; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035D258:
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D264u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D264u) [[unlikely]] return; }
L_0035D264:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D270u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D270u) [[unlikely]] return; }
L_0035D270:
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D27Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D27Cu) [[unlikely]] return; }
L_0035D27C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D288u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D288u) [[unlikely]] return; }
L_0035D288:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2A0u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D2A0u) [[unlikely]] return; }
L_0035D2A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2ACu); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D2ACu) [[unlikely]] return; }
L_0035D2AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[18], c.r[18].w[0] + 5u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D2C4:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D2D0u) [[unlikely]] return; }
L_0035D2D0:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D2DCu) [[unlikely]] return; }
L_0035D2DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D2F0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D258u | kUnwind; return; } goto L_0035D258; } }
L_0035D2F0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D2FCu) [[unlikely]] return; }
L_0035D2FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D30Cu); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D30Cu) [[unlikely]] return; }
L_0035D30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D258u | kUnwind; return; } goto L_0035D258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D31C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D328u); set32(c.r[4], c.r[2].w[0] + 1792u);  if (depth < kMaxDepth) unit_0057(c, 565u, depth + 1u); else { c.pc = 0x0035F4F0u; return; } if (c.pc != 0x0035D328u) [[unlikely]] return; }
L_0035D328:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D33Cu); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D33Cu) [[unlikely]] return; }
L_0035D33C:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D348u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035D348u) [[unlikely]] return; }
L_0035D348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D3C4; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035D358:
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D364u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D364u) [[unlikely]] return; }
L_0035D364:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D370u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D370u) [[unlikely]] return; }
L_0035D370:
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D37Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D37Cu) [[unlikely]] return; }
L_0035D37C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D388u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D388u) [[unlikely]] return; }
L_0035D388:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3A0u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D3A0u) [[unlikely]] return; }
L_0035D3A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3ACu); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D3ACu) [[unlikely]] return; }
L_0035D3AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[18], c.r[18].w[0] + 5u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D3C4:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D3D0u) [[unlikely]] return; }
L_0035D3D0:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D3DCu) [[unlikely]] return; }
L_0035D3DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D3F0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D358u | kUnwind; return; } goto L_0035D358; } }
L_0035D3F0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D3FCu) [[unlikely]] return; }
L_0035D3FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D40Cu); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D40Cu) [[unlikely]] return; }
L_0035D40C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D358u | kUnwind; return; } goto L_0035D358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D41C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D428u); set32(c.r[4], c.r[2].w[0] + 1252u);  if (depth < kMaxDepth) unit_0057(c, 554u, depth + 1u); else { c.pc = 0x0035F380u; return; } if (c.pc != 0x0035D428u) [[unlikely]] return; }
L_0035D428:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D43Cu); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D43Cu) [[unlikely]] return; }
L_0035D43C:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D448u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035D448u) [[unlikely]] return; }
L_0035D448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D4C4; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035D458:
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D464u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D464u) [[unlikely]] return; }
L_0035D464:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D470u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D470u) [[unlikely]] return; }
L_0035D470:
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D47Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D47Cu) [[unlikely]] return; }
L_0035D47C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D488u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D488u) [[unlikely]] return; }
L_0035D488:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4A0u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D4A0u) [[unlikely]] return; }
L_0035D4A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4ACu); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D4ACu) [[unlikely]] return; }
L_0035D4AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + 5u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D4C4:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D4D0u) [[unlikely]] return; }
L_0035D4D0:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D4DCu) [[unlikely]] return; }
L_0035D4DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D4F0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D458u | kUnwind; return; } goto L_0035D458; } }
L_0035D4F0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D4FCu) [[unlikely]] return; }
L_0035D4FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D50Cu); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D50Cu) [[unlikely]] return; }
L_0035D50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D458u | kUnwind; return; } goto L_0035D458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D51C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D528u); set32(c.r[4], c.r[2].w[0] + 1772u);  if (depth < kMaxDepth) unit_0057(c, 543u, depth + 1u); else { c.pc = 0x0035F210u; return; } if (c.pc != 0x0035D528u) [[unlikely]] return; }
L_0035D528:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D53Cu); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D53Cu) [[unlikely]] return; }
L_0035D53C:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D548u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035D548u) [[unlikely]] return; }
L_0035D548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D5C4; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035D558:
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D564u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D564u) [[unlikely]] return; }
L_0035D564:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D570u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D570u) [[unlikely]] return; }
L_0035D570:
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D57Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D57Cu) [[unlikely]] return; }
L_0035D57C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D588u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D588u) [[unlikely]] return; }
L_0035D588:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D5A0u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D5A0u) [[unlikely]] return; }
L_0035D5A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D5ACu); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D5ACu) [[unlikely]] return; }
L_0035D5AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + 5u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D5C4:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D5D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D5D0u) [[unlikely]] return; }
L_0035D5D0:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D5DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D5DCu) [[unlikely]] return; }
L_0035D5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D5F0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D558u | kUnwind; return; } goto L_0035D558; } }
L_0035D5F0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D5FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D5FCu) [[unlikely]] return; }
L_0035D5FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D60Cu); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D60Cu) [[unlikely]] return; }
L_0035D60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D558u | kUnwind; return; } goto L_0035D558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D61C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D628u); set32(c.r[4], c.r[2].w[0] + 1272u);  if (depth < kMaxDepth) unit_0057(c, 532u, depth + 1u); else { c.pc = 0x0035F0A0u; return; } if (c.pc != 0x0035D628u) [[unlikely]] return; }
L_0035D628:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D63Cu); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D63Cu) [[unlikely]] return; }
L_0035D63C:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D648u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035D648u) [[unlikely]] return; }
L_0035D648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D6A0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035D658:
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D664u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D664u) [[unlikely]] return; }
L_0035D664:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D670u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D670u) [[unlikely]] return; }
L_0035D670:
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D67Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D67Cu) [[unlikely]] return; }
L_0035D67C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D688u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D688u) [[unlikely]] return; }
L_0035D688:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D6A0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D6ACu) [[unlikely]] return; }
L_0035D6AC:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D6B8u) [[unlikely]] return; }
L_0035D6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D6CC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D658u | kUnwind; return; } goto L_0035D658; } }
L_0035D6CC:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D6D8u) [[unlikely]] return; }
L_0035D6D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6E8u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D6E8u) [[unlikely]] return; }
L_0035D6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D658u | kUnwind; return; } goto L_0035D658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D6F8:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D704u); set32(c.r[4], c.r[2].w[0] + 1232u);  if (depth < kMaxDepth) unit_0057(c, 521u, depth + 1u); else { c.pc = 0x0035EF30u; return; } if (c.pc != 0x0035D704u) [[unlikely]] return; }
L_0035D704:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D718u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D718u) [[unlikely]] return; }
L_0035D718:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D724u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035D724u) [[unlikely]] return; }
L_0035D724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D7E8; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035D734:
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D740u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D740u) [[unlikely]] return; }
L_0035D740:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D74Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D74Cu) [[unlikely]] return; }
L_0035D74C:
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D758u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D758u) [[unlikely]] return; }
L_0035D758:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D764u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D764u) [[unlikely]] return; }
L_0035D764:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D77Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D77Cu) [[unlikely]] return; }
L_0035D77C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D788u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D788u) [[unlikely]] return; }
L_0035D788:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7A0u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D7A0u) [[unlikely]] return; }
L_0035D7A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7ACu); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D7ACu) [[unlikely]] return; }
L_0035D7AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], c.r[18].w[0] + 6u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7C4u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D7C4u) [[unlikely]] return; }
L_0035D7C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7D0u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D7D0u) [[unlikely]] return; }
L_0035D7D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[18], c.r[18].w[0] + 7u);
    set32(c.r[20], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D7E8:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D7F4u) [[unlikely]] return; }
L_0035D7F4:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D800u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D800u) [[unlikely]] return; }
L_0035D800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D814; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D734u | kUnwind; return; } goto L_0035D734; } }
L_0035D814:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D820u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D820u) [[unlikely]] return; }
L_0035D820:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D830u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D830u) [[unlikely]] return; }
L_0035D830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D734u | kUnwind; return; } goto L_0035D734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D840:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D84Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D84Cu) [[unlikely]] return; }
L_0035D84C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D85Cu); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035D85Cu) [[unlikely]] return; }
L_0035D85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D86C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035D888; } }
L_0035D86C:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D878u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D878u) [[unlikely]] return; }
L_0035D878:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D884u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D884u) [[unlikely]] return; }
L_0035D884:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035D888:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D894u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D894u) [[unlikely]] return; }
L_0035D894:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8A4u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D8A4u) [[unlikely]] return; }
L_0035D8A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D8BC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0035D8BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D8BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8C8u); set32(c.r[4], c.r[2].w[0] + 1292u);  if (depth < kMaxDepth) unit_0057(c, 510u, depth + 1u); else { c.pc = 0x0035EDC0u; return; } if (c.pc != 0x0035D8C8u) [[unlikely]] return; }
L_0035D8C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_0035D8DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0])));  if (t) { goto L_0035D8E0; } }
L_0035D8DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035D8E0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D8F0u) [[unlikely]] return; }
L_0035D8F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8FCu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035D8FCu) [[unlikely]] return; }
L_0035D8FC:
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D908:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D914u); set32(c.r[4], c.r[2].w[0] + 1812u);  if (depth < kMaxDepth) unit_0057(c, 499u, depth + 1u); else { c.pc = 0x0035EC50u; return; } if (c.pc != 0x0035D914u) [[unlikely]] return; }
L_0035D914:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D928u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D928u) [[unlikely]] return; }
L_0035D928:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D934u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035D934u) [[unlikely]] return; }
L_0035D934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D950; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0035D944:
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D950:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D95Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D95Cu) [[unlikely]] return; }
L_0035D95C:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D968u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035D968u) [[unlikely]] return; }
L_0035D968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D97C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D944u | kUnwind; return; } goto L_0035D944; } }
L_0035D97C:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D988u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D988u) [[unlikely]] return; }
L_0035D988:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D998u); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x0035D998u) [[unlikely]] return; }
L_0035D998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D944u | kUnwind; return; } goto L_0035D944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035D9A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9B4u); set32(c.r[4], c.r[2].w[0] + 1312u);  if (depth < kMaxDepth) unit_0057(c, 489u, depth + 1u); else { c.pc = 0x0035EAD0u; return; } if (c.pc != 0x0035D9B4u) [[unlikely]] return; }
L_0035D9B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9CCu); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035D9CCu) [[unlikely]] return; }
L_0035D9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0035D9D4u) [[unlikely]] return; }
L_0035D9D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9E0u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x0035D9E0u) [[unlikely]] return; }
L_0035D9E0:
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035D9EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9F8u); set32(c.r[4], c.r[2].w[0] + 1332u);  if (depth < kMaxDepth) unit_0057(c, 479u, depth + 1u); else { c.pc = 0x0035E950u; return; } if (c.pc != 0x0035D9F8u) [[unlikely]] return; }
L_0035D9F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA10u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DA10u) [[unlikely]] return; }
L_0035DA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0035DA18u) [[unlikely]] return; }
L_0035DA18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA24u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x0035DA24u) [[unlikely]] return; }
L_0035DA24:
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DA30:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA3Cu); set32(c.r[4], c.r[2].w[0] + 1352u);  if (depth < kMaxDepth) unit_0057(c, 469u, depth + 1u); else { c.pc = 0x0035E7D0u; return; } if (c.pc != 0x0035DA3Cu) [[unlikely]] return; }
L_0035DA3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA54u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DA54u) [[unlikely]] return; }
L_0035DA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0035DA5Cu) [[unlikely]] return; }
L_0035DA5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA68u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x0035DA68u) [[unlikely]] return; }
L_0035DA68:
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DA74:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA80u); set32(c.r[4], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_0057(c, 458u, depth + 1u); else { c.pc = 0x0035E640u; return; } if (c.pc != 0x0035DA80u) [[unlikely]] return; }
L_0035DA80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA98u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DA98u) [[unlikely]] return; }
L_0035DA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0035DAA0u) [[unlikely]] return; }
L_0035DAA0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAACu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x0035DAACu) [[unlikely]] return; }
L_0035DAAC:
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 2u);
    st8((c.r[16].w[0] + 145u), static_cast<std::uint8_t>(0u));
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 146u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DAC4:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAD0u); set32(c.r[4], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_0057(c, 458u, depth + 1u); else { c.pc = 0x0035E640u; return; } if (c.pc != 0x0035DAD0u) [[unlikely]] return; }
L_0035DAD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAE8u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DAE8u) [[unlikely]] return; }
L_0035DAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0035DAF0u) [[unlikely]] return; }
L_0035DAF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAFCu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x0035DAFCu) [[unlikely]] return; }
L_0035DAFC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[20], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 145u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 146u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DB18:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB24u); set32(c.r[4], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_0057(c, 458u, depth + 1u); else { c.pc = 0x0035E640u; return; } if (c.pc != 0x0035DB24u) [[unlikely]] return; }
L_0035DB24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB3Cu); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DB3Cu) [[unlikely]] return; }
L_0035DB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0035DB44u) [[unlikely]] return; }
L_0035DB44:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB50u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x0035DB50u) [[unlikely]] return; }
L_0035DB50:
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 145u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 2u);
    st8((c.r[16].w[0] + 146u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DB6C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB78u); set32(c.r[4], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_0057(c, 458u, depth + 1u); else { c.pc = 0x0035E640u; return; } if (c.pc != 0x0035DB78u) [[unlikely]] return; }
L_0035DB78:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(0u));
    set32(c.r[20], c.r[2].w[0] + 8u);
    st8((c.r[2].w[0] + 145u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DB9C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBA8u); set32(c.r[4], c.r[2].w[0] + 1392u);  if (depth < kMaxDepth) unit_0057(c, 448u, depth + 1u); else { c.pc = 0x0035E4E0u; return; } if (c.pc != 0x0035DBA8u) [[unlikely]] return; }
L_0035DBA8:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DBBC:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DBC8u) [[unlikely]] return; }
L_0035DBC8:
    set32(c.r[4], c.r[21].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBD4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 385u, depth + 1u); else { c.pc = 0x0035B1A0u; return; } if (c.pc != 0x0035DBD4u) [[unlikely]] return; }
L_0035DBD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035DC04; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBECu); set32(c.r[4], c.r[2].w[0] + 1712u);  if (depth < kMaxDepth) unit_0057(c, 437u, depth + 1u); else { c.pc = 0x0035E370u; return; } if (c.pc != 0x0035DBECu) [[unlikely]] return; }
L_0035DBEC:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[20], c.r[2].w[0] + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DD10; } }
L_0035DC0C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC18u); set32(c.r[4], c.r[2].w[0] + 1412u);  if (depth < kMaxDepth) unit_0057(c, 426u, depth + 1u); else { c.pc = 0x0035E200u; return; } if (c.pc != 0x0035DC18u) [[unlikely]] return; }
L_0035DC18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC2Cu); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DC2Cu) [[unlikely]] return; }
L_0035DC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0035DC34u) [[unlikely]] return; }
L_0035DC34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC40u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x0035DC40u) [[unlikely]] return; }
L_0035DC40:
    set32(c.r[20], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DC4C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC58u); set32(c.r[4], c.r[2].w[0] + 1832u);  if (depth < kMaxDepth) unit_0057(c, 415u, depth + 1u); else { c.pc = 0x0035E090u; return; } if (c.pc != 0x0035DC58u) [[unlikely]] return; }
L_0035DC58:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DC68:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC74u); set32(c.r[4], c.r[2].w[0] + 1852u);  if (depth < kMaxDepth) unit_0057(c, 404u, depth + 1u); else { c.pc = 0x0035DF20u; return; } if (c.pc != 0x0035DC74u) [[unlikely]] return; }
L_0035DC74:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E8u | kUnwind; return; } goto L_0035C3E8; } }
L_0035DC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DC8Cu) [[unlikely]] return; }
L_0035DC8C:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC98u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0035DC98u) [[unlikely]] return; }
L_0035DC98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DCB0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E0u | kUnwind; return; } goto L_0035C3E0; } }
L_0035DCB0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCBCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DCBCu) [[unlikely]] return; }
L_0035DCBC:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCC8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x0035DCC8u) [[unlikely]] return; }
L_0035DCC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DCE0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E0u | kUnwind; return; } goto L_0035C3E0; } }
L_0035DCE0:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035DCECu) [[unlikely]] return; }
L_0035DCEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCFCu); set32(c.r[5], c.r[5].w[0] + 12979u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035DCFCu) [[unlikely]] return; }
L_0035DCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E0u | kUnwind; return; } goto L_0035C3E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3E0u | kUnwind; return; } goto L_0035C3E0; } }
L_0035DD0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035DD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0035DD14:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0035DD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035DDA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD74u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035DD74u) [[unlikely]] return; }
L_0035DD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DD8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD8Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 396u, depth + 1u); else { c.pc = 0x0035DDF0u; return; } if (c.pc != 0x0035DD8Cu) [[unlikely]] return; }
L_0035DD8C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035DD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDA0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 390u, depth + 1u); else { c.pc = 0x0035DD40u; return; } if (c.pc != 0x0035DDA0u) [[unlikely]] return; }
L_0035DDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035DDE0; } }
L_0035DDA8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDCCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035DDCCu) [[unlikely]] return; }
L_0035DDCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 399u, depth + 1u); else { c.pc = 0x0035DE70u; return; } if (c.pc != 0x0035DDDCu) [[unlikely]] return; }
L_0035DDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035DDE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DDF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035DE14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035DE1C; } }
L_0035DE14:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035DE1C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 398u, depth + 1u); else { c.pc = 0x0035DE50u; return; } if (c.pc != 0x0035DE2Cu) [[unlikely]] return; }
L_0035DE2C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DE50:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035DE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035DE84u) [[unlikely]] return; }
L_0035DE84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9712u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035DEE8; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 9952u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0035DEE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DEE8u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0035DEE8u) [[unlikely]] return; }
L_0035DEE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DF00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 9952u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0035DF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035DF88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF54u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035DF54u) [[unlikely]] return; }
L_0035DF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DF6C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF6Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 410u, depth + 1u); else { c.pc = 0x0035DFD0u; return; } if (c.pc != 0x0035DF6Cu) [[unlikely]] return; }
L_0035DF6C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035DF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF80u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 404u, depth + 1u); else { c.pc = 0x0035DF20u; return; } if (c.pc != 0x0035DF80u) [[unlikely]] return; }
L_0035DF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035DFB8; } }
L_0035DF88:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFA4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035DFA4u) [[unlikely]] return; }
L_0035DFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DFB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 413u, depth + 1u); else { c.pc = 0x0035E050u; return; } if (c.pc != 0x0035DFB4u) [[unlikely]] return; }
L_0035DFB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035DFB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035DFF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035DFFC; } }
L_0035DFF4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035DFFC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E00Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 412u, depth + 1u); else { c.pc = 0x0035E030u; return; } if (c.pc != 0x0035E00Cu) [[unlikely]] return; }
L_0035E00C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E030:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035E050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E064u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035E064u) [[unlikely]] return; }
L_0035E064:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9168u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035E0F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E0C4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035E0C4u) [[unlikely]] return; }
L_0035E0C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E0DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E0DCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 421u, depth + 1u); else { c.pc = 0x0035E140u; return; } if (c.pc != 0x0035E0DCu) [[unlikely]] return; }
L_0035E0DC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035E0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E0F0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 415u, depth + 1u); else { c.pc = 0x0035E090u; return; } if (c.pc != 0x0035E0F0u) [[unlikely]] return; }
L_0035E0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035E128; } }
L_0035E0F8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E114u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035E114u) [[unlikely]] return; }
L_0035E114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E124u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 424u, depth + 1u); else { c.pc = 0x0035E1C0u; return; } if (c.pc != 0x0035E124u) [[unlikely]] return; }
L_0035E124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035E128:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035E164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035E16C; } }
L_0035E164:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035E16C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E17Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 423u, depth + 1u); else { c.pc = 0x0035E1A0u; return; } if (c.pc != 0x0035E17Cu) [[unlikely]] return; }
L_0035E17C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E1A0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035E1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035E1D4u) [[unlikely]] return; }
L_0035E1D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9152u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035E268; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E234u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035E234u) [[unlikely]] return; }
L_0035E234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E24C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E24Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 432u, depth + 1u); else { c.pc = 0x0035E2B0u; return; } if (c.pc != 0x0035E24Cu) [[unlikely]] return; }
L_0035E24C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035E258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E260u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 426u, depth + 1u); else { c.pc = 0x0035E200u; return; } if (c.pc != 0x0035E260u) [[unlikely]] return; }
L_0035E260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035E2A0; } }
L_0035E268:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[4], 0u + 48u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E28Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035E28Cu) [[unlikely]] return; }
L_0035E28C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E29C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E29Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 435u, depth + 1u); else { c.pc = 0x0035E330u; return; } if (c.pc != 0x0035E29Cu) [[unlikely]] return; }
L_0035E29C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035E2A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035E2D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035E2DC; } }
L_0035E2D4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035E2DC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E2ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 434u, depth + 1u); else { c.pc = 0x0035E310u; return; } if (c.pc != 0x0035E2ECu) [[unlikely]] return; }
L_0035E2EC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E310:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035E330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E344u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035E344u) [[unlikely]] return; }
L_0035E344:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9136u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035E3D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E3C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3A4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035E3A4u) [[unlikely]] return; }
L_0035E3A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E3BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3BCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 443u, depth + 1u); else { c.pc = 0x0035E420u; return; } if (c.pc != 0x0035E3BCu) [[unlikely]] return; }
L_0035E3BC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035E3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3D0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 437u, depth + 1u); else { c.pc = 0x0035E370u; return; } if (c.pc != 0x0035E3D0u) [[unlikely]] return; }
L_0035E3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035E410; } }
L_0035E3D8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3FCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035E3FCu) [[unlikely]] return; }
L_0035E3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E40C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E40Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 446u, depth + 1u); else { c.pc = 0x0035E4A0u; return; } if (c.pc != 0x0035E40Cu) [[unlikely]] return; }
L_0035E40C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035E410:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035E444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035E44C; } }
L_0035E444:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035E44C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E45Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 445u, depth + 1u); else { c.pc = 0x0035E480u; return; } if (c.pc != 0x0035E45Cu) [[unlikely]] return; }
L_0035E45C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E480:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035E4A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E4B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035E4B4u) [[unlikely]] return; }
L_0035E4B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9968u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035E548; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E514u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035E514u) [[unlikely]] return; }
L_0035E514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E52C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E52Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 454u, depth + 1u); else { c.pc = 0x0035E590u; return; } if (c.pc != 0x0035E52Cu) [[unlikely]] return; }
L_0035E52C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035E538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E540u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 448u, depth + 1u); else { c.pc = 0x0035E4E0u; return; } if (c.pc != 0x0035E540u) [[unlikely]] return; }
L_0035E540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035E578; } }
L_0035E548:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E564u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035E564u) [[unlikely]] return; }
L_0035E564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E574u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 457u, depth + 1u); else { c.pc = 0x0035E610u; return; } if (c.pc != 0x0035E574u) [[unlikely]] return; }
L_0035E574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035E578:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035E5B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035E5BC; } }
L_0035E5B4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035E5BC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 456u, depth + 1u); else { c.pc = 0x0035E5F0u; return; } if (c.pc != 0x0035E5CCu) [[unlikely]] return; }
L_0035E5CC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E5F0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035E610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 9952u);
    set32(c.r[3], c.r[3].w[0] - 9472u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_0035E640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035E6A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E674u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035E674u) [[unlikely]] return; }
L_0035E674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E68C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E68Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 464u, depth + 1u); else { c.pc = 0x0035E700u; return; } if (c.pc != 0x0035E68Cu) [[unlikely]] return; }
L_0035E68C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035E698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6A0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 458u, depth + 1u); else { c.pc = 0x0035E640u; return; } if (c.pc != 0x0035E6A0u) [[unlikely]] return; }
L_0035E6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035E6E8; } }
L_0035E6A8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 148u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6D4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035E6D4u) [[unlikely]] return; }
L_0035E6D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E6E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 467u, depth + 1u); else { c.pc = 0x0035E790u; return; } if (c.pc != 0x0035E6E4u) [[unlikely]] return; }
L_0035E6E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035E6E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035E724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035E72C; } }
L_0035E724:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035E72C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E73Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 466u, depth + 1u); else { c.pc = 0x0035E760u; return; } if (c.pc != 0x0035E73Cu) [[unlikely]] return; }
L_0035E73C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E760:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035E790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E7A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035E7A4u) [[unlikely]] return; }
L_0035E7A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9408u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035E838; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E804u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035E804u) [[unlikely]] return; }
L_0035E804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E81C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E81Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 475u, depth + 1u); else { c.pc = 0x0035E890u; return; } if (c.pc != 0x0035E81Cu) [[unlikely]] return; }
L_0035E81C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035E828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E830u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 469u, depth + 1u); else { c.pc = 0x0035E7D0u; return; } if (c.pc != 0x0035E830u) [[unlikely]] return; }
L_0035E830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035E878; } }
L_0035E838:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 148u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E864u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035E864u) [[unlikely]] return; }
L_0035E864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E874u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 478u, depth + 1u); else { c.pc = 0x0035E920u; return; } if (c.pc != 0x0035E874u) [[unlikely]] return; }
L_0035E874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035E878:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035E8B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035E8BC; } }
L_0035E8B4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035E8BC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 477u, depth + 1u); else { c.pc = 0x0035E8F0u; return; } if (c.pc != 0x0035E8CCu) [[unlikely]] return; }
L_0035E8CC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E8F0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035E920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 9952u);
    set32(c.r[3], c.r[3].w[0] - 9424u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 144u), 0u);  c.pc = t; return; }
L_0035E950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035E9B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E984u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035E984u) [[unlikely]] return; }
L_0035E984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E99C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E99Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 485u, depth + 1u); else { c.pc = 0x0035EA10u; return; } if (c.pc != 0x0035E99Cu) [[unlikely]] return; }
L_0035E99C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035E9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9B0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 479u, depth + 1u); else { c.pc = 0x0035E950u; return; } if (c.pc != 0x0035E9B0u) [[unlikely]] return; }
L_0035E9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035E9F8; } }
L_0035E9B8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 148u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9E4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035E9E4u) [[unlikely]] return; }
L_0035E9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E9F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 488u, depth + 1u); else { c.pc = 0x0035EAA0u; return; } if (c.pc != 0x0035E9F4u) [[unlikely]] return; }
L_0035E9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035E9F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035EA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035EA3C; } }
L_0035EA34:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035EA3C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 487u, depth + 1u); else { c.pc = 0x0035EA70u; return; } if (c.pc != 0x0035EA4Cu) [[unlikely]] return; }
L_0035EA4C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EA70:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035EAA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 9952u);
    set32(c.r[3], c.r[3].w[0] - 9440u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 144u), 0u);  c.pc = t; return; }
L_0035EAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035EB38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB04u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035EB04u) [[unlikely]] return; }
L_0035EB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EB1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB1Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 495u, depth + 1u); else { c.pc = 0x0035EB90u; return; } if (c.pc != 0x0035EB1Cu) [[unlikely]] return; }
L_0035EB1C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035EB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB30u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 489u, depth + 1u); else { c.pc = 0x0035EAD0u; return; } if (c.pc != 0x0035EB30u) [[unlikely]] return; }
L_0035EB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035EB78; } }
L_0035EB38:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 148u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB64u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035EB64u) [[unlikely]] return; }
L_0035EB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EB74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 498u, depth + 1u); else { c.pc = 0x0035EC20u; return; } if (c.pc != 0x0035EB74u) [[unlikely]] return; }
L_0035EB74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035EB78:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035EBB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035EBBC; } }
L_0035EBB4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035EBBC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 497u, depth + 1u); else { c.pc = 0x0035EBF0u; return; } if (c.pc != 0x0035EBCCu) [[unlikely]] return; }
L_0035EBCC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EBF0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035EC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 9952u);
    set32(c.r[3], c.r[3].w[0] - 9456u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 144u), 0u);  c.pc = t; return; }
L_0035EC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035ECB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035ECA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC84u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035EC84u) [[unlikely]] return; }
L_0035EC84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EC9C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC9Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 505u, depth + 1u); else { c.pc = 0x0035ED00u; return; } if (c.pc != 0x0035EC9Cu) [[unlikely]] return; }
L_0035EC9C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035ECA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECB0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 499u, depth + 1u); else { c.pc = 0x0035EC50u; return; } if (c.pc != 0x0035ECB0u) [[unlikely]] return; }
L_0035ECB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035ECE8; } }
L_0035ECB8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECD4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035ECD4u) [[unlikely]] return; }
L_0035ECD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035ECE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 508u, depth + 1u); else { c.pc = 0x0035ED80u; return; } if (c.pc != 0x0035ECE4u) [[unlikely]] return; }
L_0035ECE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035ECE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035ED00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035ED24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035ED2C; } }
L_0035ED24:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035ED2C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 507u, depth + 1u); else { c.pc = 0x0035ED60u; return; } if (c.pc != 0x0035ED3Cu) [[unlikely]] return; }
L_0035ED3C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035ED60:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035ED80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035ED94u) [[unlikely]] return; }
L_0035ED94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9888u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035EE28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDF4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035EDF4u) [[unlikely]] return; }
L_0035EDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EE0C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE0Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 516u, depth + 1u); else { c.pc = 0x0035EE70u; return; } if (c.pc != 0x0035EE0Cu) [[unlikely]] return; }
L_0035EE0C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035EE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE20u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 510u, depth + 1u); else { c.pc = 0x0035EDC0u; return; } if (c.pc != 0x0035EE20u) [[unlikely]] return; }
L_0035EE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035EE60; } }
L_0035EE28:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE4Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035EE4Cu) [[unlikely]] return; }
L_0035EE4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EE5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 519u, depth + 1u); else { c.pc = 0x0035EEF0u; return; } if (c.pc != 0x0035EE5Cu) [[unlikely]] return; }
L_0035EE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035EE60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035EE94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035EE9C; } }
L_0035EE94:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035EE9C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EEACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 518u, depth + 1u); else { c.pc = 0x0035EED0u; return; } if (c.pc != 0x0035EEACu) [[unlikely]] return; }
L_0035EEAC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EED0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035EEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035EF04u) [[unlikely]] return; }
L_0035EF04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9872u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035EF98; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF64u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035EF64u) [[unlikely]] return; }
L_0035EF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EF7C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF7Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 527u, depth + 1u); else { c.pc = 0x0035EFE0u; return; } if (c.pc != 0x0035EF7Cu) [[unlikely]] return; }
L_0035EF7C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035EF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF90u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 521u, depth + 1u); else { c.pc = 0x0035EF30u; return; } if (c.pc != 0x0035EF90u) [[unlikely]] return; }
L_0035EF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035EFD0; } }
L_0035EF98:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 36u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EFBCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035EFBCu) [[unlikely]] return; }
L_0035EFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EFCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EFCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 530u, depth + 1u); else { c.pc = 0x0035F060u; return; } if (c.pc != 0x0035EFCCu) [[unlikely]] return; }
L_0035EFCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035EFD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035F004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035F00C; } }
L_0035F004:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035F00C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F01Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 529u, depth + 1u); else { c.pc = 0x0035F040u; return; } if (c.pc != 0x0035F01Cu) [[unlikely]] return; }
L_0035F01C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F040:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035F060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035F074u) [[unlikely]] return; }
L_0035F074:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9856u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035F108; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0D4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035F0D4u) [[unlikely]] return; }
L_0035F0D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F0EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0ECu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 538u, depth + 1u); else { c.pc = 0x0035F150u; return; } if (c.pc != 0x0035F0ECu) [[unlikely]] return; }
L_0035F0EC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035F0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F100u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 532u, depth + 1u); else { c.pc = 0x0035F0A0u; return; } if (c.pc != 0x0035F100u) [[unlikely]] return; }
L_0035F100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035F140; } }
L_0035F108:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F12Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035F12Cu) [[unlikely]] return; }
L_0035F12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F13Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 541u, depth + 1u); else { c.pc = 0x0035F1D0u; return; } if (c.pc != 0x0035F13Cu) [[unlikely]] return; }
L_0035F13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035F140:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035F174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035F17C; } }
L_0035F174:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035F17C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F18Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 540u, depth + 1u); else { c.pc = 0x0035F1B0u; return; } if (c.pc != 0x0035F18Cu) [[unlikely]] return; }
L_0035F18C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F1B0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035F1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035F1E4u) [[unlikely]] return; }
L_0035F1E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9840u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035F278; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F244u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035F244u) [[unlikely]] return; }
L_0035F244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F25C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F25Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 549u, depth + 1u); else { c.pc = 0x0035F2C0u; return; } if (c.pc != 0x0035F25Cu) [[unlikely]] return; }
L_0035F25C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035F268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F270u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 543u, depth + 1u); else { c.pc = 0x0035F210u; return; } if (c.pc != 0x0035F270u) [[unlikely]] return; }
L_0035F270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035F2B0; } }
L_0035F278:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 28u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F29Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035F29Cu) [[unlikely]] return; }
L_0035F29C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F2AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 552u, depth + 1u); else { c.pc = 0x0035F340u; return; } if (c.pc != 0x0035F2ACu) [[unlikely]] return; }
L_0035F2AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035F2B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035F2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035F2EC; } }
L_0035F2E4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035F2EC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 551u, depth + 1u); else { c.pc = 0x0035F320u; return; } if (c.pc != 0x0035F2FCu) [[unlikely]] return; }
L_0035F2FC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F320:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035F340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035F354u) [[unlikely]] return; }
L_0035F354:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9824u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035F3E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3B4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035F3B4u) [[unlikely]] return; }
L_0035F3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F3CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3CCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 560u, depth + 1u); else { c.pc = 0x0035F430u; return; } if (c.pc != 0x0035F3CCu) [[unlikely]] return; }
L_0035F3CC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035F3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3E0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 554u, depth + 1u); else { c.pc = 0x0035F380u; return; } if (c.pc != 0x0035F3E0u) [[unlikely]] return; }
L_0035F3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035F420; } }
L_0035F3E8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 28u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F40Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035F40Cu) [[unlikely]] return; }
L_0035F40C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F41C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F41Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 563u, depth + 1u); else { c.pc = 0x0035F4B0u; return; } if (c.pc != 0x0035F41Cu) [[unlikely]] return; }
L_0035F41C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035F420:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035F454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035F45C; } }
L_0035F454:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035F45C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F46Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 562u, depth + 1u); else { c.pc = 0x0035F490u; return; } if (c.pc != 0x0035F46Cu) [[unlikely]] return; }
L_0035F46C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F490:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035F4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035F4C4u) [[unlikely]] return; }
L_0035F4C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9808u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035F558; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F524u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035F524u) [[unlikely]] return; }
L_0035F524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F53C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F53Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 571u, depth + 1u); else { c.pc = 0x0035F5A0u; return; } if (c.pc != 0x0035F53Cu) [[unlikely]] return; }
L_0035F53C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035F548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F550u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 565u, depth + 1u); else { c.pc = 0x0035F4F0u; return; } if (c.pc != 0x0035F550u) [[unlikely]] return; }
L_0035F550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035F590; } }
L_0035F558:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 28u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F57Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035F57Cu) [[unlikely]] return; }
L_0035F57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F58C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F58Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 574u, depth + 1u); else { c.pc = 0x0035F620u; return; } if (c.pc != 0x0035F58Cu) [[unlikely]] return; }
L_0035F58C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035F590:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035F5C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035F5CC; } }
L_0035F5C4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035F5CC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 573u, depth + 1u); else { c.pc = 0x0035F600u; return; } if (c.pc != 0x0035F5DCu) [[unlikely]] return; }
L_0035F5DC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F600:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035F620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035F634u) [[unlikely]] return; }
L_0035F634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9776u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035F6C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F694u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035F694u) [[unlikely]] return; }
L_0035F694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F6AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6ACu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 582u, depth + 1u); else { c.pc = 0x0035F710u; return; } if (c.pc != 0x0035F6ACu) [[unlikely]] return; }
L_0035F6AC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035F6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6C0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 576u, depth + 1u); else { c.pc = 0x0035F660u; return; } if (c.pc != 0x0035F6C0u) [[unlikely]] return; }
L_0035F6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035F700; } }
L_0035F6C8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 28u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6ECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035F6ECu) [[unlikely]] return; }
L_0035F6EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 585u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F6FCu) [[unlikely]] return; }
L_0035F6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035F700:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035F734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035F73C; } }
L_0035F734:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035F73C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F74Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 584u, depth + 1u); else { c.pc = 0x0035F770u; return; } if (c.pc != 0x0035F74Cu) [[unlikely]] return; }
L_0035F74C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F770:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035F790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035F7A4u) [[unlikely]] return; }
L_0035F7A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9792u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035F838; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F804u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035F804u) [[unlikely]] return; }
L_0035F804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F81C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F81Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 593u, depth + 1u); else { c.pc = 0x0035F880u; return; } if (c.pc != 0x0035F81Cu) [[unlikely]] return; }
L_0035F81C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035F828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F830u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 587u, depth + 1u); else { c.pc = 0x0035F7D0u; return; } if (c.pc != 0x0035F830u) [[unlikely]] return; }
L_0035F830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035F870; } }
L_0035F838:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F85Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035F85Cu) [[unlikely]] return; }
L_0035F85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F86C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F86Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 596u, depth + 1u); else { c.pc = 0x0035F900u; return; } if (c.pc != 0x0035F86Cu) [[unlikely]] return; }
L_0035F86C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035F870:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035F8A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035F8AC; } }
L_0035F8A4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035F8AC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 595u, depth + 1u); else { c.pc = 0x0035F8E0u; return; } if (c.pc != 0x0035F8BCu) [[unlikely]] return; }
L_0035F8BC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F8E0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035F900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F914u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035F914u) [[unlikely]] return; }
L_0035F914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9760u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035F9A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F974u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035F974u) [[unlikely]] return; }
L_0035F974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F98C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F98Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 604u, depth + 1u); else { c.pc = 0x0035F9F0u; return; } if (c.pc != 0x0035F98Cu) [[unlikely]] return; }
L_0035F98C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035F998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F9A0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 598u, depth + 1u); else { c.pc = 0x0035F940u; return; } if (c.pc != 0x0035F9A0u) [[unlikely]] return; }
L_0035F9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035F9E0; } }
L_0035F9A8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F9CCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035F9CCu) [[unlikely]] return; }
L_0035F9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F9DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 607u, depth + 1u); else { c.pc = 0x0035FA70u; return; } if (c.pc != 0x0035F9DCu) [[unlikely]] return; }
L_0035F9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035F9E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035FA14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035FA1C; } }
L_0035FA14:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035FA1C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 606u, depth + 1u); else { c.pc = 0x0035FA50u; return; } if (c.pc != 0x0035FA2Cu) [[unlikely]] return; }
L_0035FA2C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FA50:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035FA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035FA84u) [[unlikely]] return; }
L_0035FA84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9744u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035FB18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAE4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035FAE4u) [[unlikely]] return; }
L_0035FAE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FAFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAFCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 615u, depth + 1u); else { c.pc = 0x0035FB60u; return; } if (c.pc != 0x0035FAFCu) [[unlikely]] return; }
L_0035FAFC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035FB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB10u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 609u, depth + 1u); else { c.pc = 0x0035FAB0u; return; } if (c.pc != 0x0035FB10u) [[unlikely]] return; }
L_0035FB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035FB50; } }
L_0035FB18:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB3Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035FB3Cu) [[unlikely]] return; }
L_0035FB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FB4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 618u, depth + 1u); else { c.pc = 0x0035FBE0u; return; } if (c.pc != 0x0035FB4Cu) [[unlikely]] return; }
L_0035FB4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035FB50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FB60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035FB84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035FB8C; } }
L_0035FB84:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035FB8C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 617u, depth + 1u); else { c.pc = 0x0035FBC0u; return; } if (c.pc != 0x0035FB9Cu) [[unlikely]] return; }
L_0035FB9C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FBC0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035FBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035FBF4u) [[unlikely]] return; }
L_0035FBF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9728u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035FC88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FC78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC54u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035FC54u) [[unlikely]] return; }
L_0035FC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FC6C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC6Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 626u, depth + 1u); else { c.pc = 0x0035FCD0u; return; } if (c.pc != 0x0035FC6Cu) [[unlikely]] return; }
L_0035FC6C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035FC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC80u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 620u, depth + 1u); else { c.pc = 0x0035FC20u; return; } if (c.pc != 0x0035FC80u) [[unlikely]] return; }
L_0035FC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035FCB8; } }
L_0035FC88:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCA4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035FCA4u) [[unlikely]] return; }
L_0035FCA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FCB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 629u, depth + 1u); else { c.pc = 0x0035FD50u; return; } if (c.pc != 0x0035FCB4u) [[unlikely]] return; }
L_0035FCB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035FCB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035FCF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035FCFC; } }
L_0035FCF4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035FCFC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 628u, depth + 1u); else { c.pc = 0x0035FD30u; return; } if (c.pc != 0x0035FD0Cu) [[unlikely]] return; }
L_0035FD0C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FD30:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035FD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035FD64u) [[unlikely]] return; }
L_0035FD64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9984u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035FDF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FDE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDC4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035FDC4u) [[unlikely]] return; }
L_0035FDC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FDDC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDDCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 637u, depth + 1u); else { c.pc = 0x0035FE40u; return; } if (c.pc != 0x0035FDDCu) [[unlikely]] return; }
L_0035FDDC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035FDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDF0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 631u, depth + 1u); else { c.pc = 0x0035FD90u; return; } if (c.pc != 0x0035FDF0u) [[unlikely]] return; }
L_0035FDF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035FE28; } }
L_0035FDF8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE14u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035FE14u) [[unlikely]] return; }
L_0035FE14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FE24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 640u, depth + 1u); else { c.pc = 0x0035FEC0u; return; } if (c.pc != 0x0035FE24u) [[unlikely]] return; }
L_0035FE24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035FE28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035FE64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035FE6C; } }
L_0035FE64:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035FE6C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 639u, depth + 1u); else { c.pc = 0x0035FEA0u; return; } if (c.pc != 0x0035FE7Cu) [[unlikely]] return; }
L_0035FE7C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FEA0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035FEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035FED4u) [[unlikely]] return; }
L_0035FED4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10000u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035FF68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF34u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035FF34u) [[unlikely]] return; }
L_0035FF34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FF4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF4Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0057(c, 648u, depth + 1u); else { c.pc = 0x0035FFB0u; return; } if (c.pc != 0x0035FF4Cu) [[unlikely]] return; }
L_0035FF4C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035FF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF60u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0057(c, 642u, depth + 1u); else { c.pc = 0x0035FF00u; return; } if (c.pc != 0x0035FF60u) [[unlikely]] return; }
L_0035FF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0035FF98; } }
L_0035FF68:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF84u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035FF84u) [[unlikely]] return; }
L_0035FF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FF94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 3u, depth + 1u); else { c.pc = 0x00360030u; return; } if (c.pc != 0x0035FF94u) [[unlikely]] return; }
L_0035FF94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0035FF98:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035FFD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035FFDC; } }
L_0035FFD4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035FFDC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FFECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 2u, depth + 1u); else { c.pc = 0x00360010u; return; } if (c.pc != 0x0035FFECu) [[unlikely]] return; }
L_0035FFEC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
}

}

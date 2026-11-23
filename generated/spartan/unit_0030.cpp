#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0030[4096] = {
    1, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 12,
    0, 13, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 19, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25,
    26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0,
    0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47,
    0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0,
    58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0,
    0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79,
    0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0,
    90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0,
    0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 105, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112,
    0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0,
    123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0,
    0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144,
    0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0,
    155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0,
    0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176,
    0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0,
    187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0,
    0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208,
    0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0,
    219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0,
    0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240,
    0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0,
    251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0,
    0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272,
    0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0,
    283, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0,
    0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304,
    0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0,
    315, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0,
    0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336,
    0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0,
    347, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0,
    0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389,
    0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0,
    0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0,
    0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0,
    0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0,
    0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0,
    0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 492,
    0, 493, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0,
    0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0,
    0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0,
    524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 529, 0, 530, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536,
    0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539,
    0, 540, 0, 541, 0, 0, 0, 542, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0,
    548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 0, 553,
    0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0,
    0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0,
    0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0,
    572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0,
    579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0,
    0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0,
    0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0,
    0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0,
    0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    624, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 633, 0, 634,
    0, 635, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0,
    643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0,
    647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 654,
    0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0,
    0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0,
    664, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0,
    0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691,
    0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 698, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    704, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 709, 0, 0,
    0, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0,
    714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0,
    718, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731,
    0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733,
    0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 744, 0,
    0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 752, 0,
    753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0,
    0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0,
    0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0,
};

void unit_0030(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C0000;
    case 2u: goto L_002C0004;
    case 3u: goto L_002C0010;
    case 4u: goto L_002C001C;
    case 5u: goto L_002C0028;
    case 6u: goto L_002C0034;
    case 7u: goto L_002C0040;
    case 8u: goto L_002C004C;
    case 9u: goto L_002C0058;
    case 10u: goto L_002C0064;
    case 11u: goto L_002C0070;
    case 12u: goto L_002C007C;
    case 13u: goto L_002C0084;
    case 14u: goto L_002C0088;
    case 15u: goto L_002C0094;
    case 16u: goto L_002C00A0;
    case 17u: goto L_002C00AC;
    case 18u: goto L_002C00B8;
    case 19u: goto L_002C00BC;
    case 20u: goto L_002C00C4;
    case 21u: goto L_002C00D0;
    case 22u: goto L_002C00DC;
    case 23u: goto L_002C00E8;
    case 24u: goto L_002C00F4;
    case 25u: goto L_002C00FC;
    case 26u: goto L_002C0100;
    case 27u: goto L_002C010C;
    case 28u: goto L_002C0118;
    case 29u: goto L_002C0124;
    case 30u: goto L_002C0130;
    case 31u: goto L_002C013C;
    case 32u: goto L_002C0148;
    case 33u: goto L_002C0154;
    case 34u: goto L_002C0160;
    case 35u: goto L_002C016C;
    case 36u: goto L_002C0178;
    case 37u: goto L_002C0184;
    case 38u: goto L_002C0190;
    case 39u: goto L_002C019C;
    case 40u: goto L_002C01A8;
    case 41u: goto L_002C01B4;
    case 42u: goto L_002C01C0;
    case 43u: goto L_002C01CC;
    case 44u: goto L_002C01D8;
    case 45u: goto L_002C01E4;
    case 46u: goto L_002C01F0;
    case 47u: goto L_002C01FC;
    case 48u: goto L_002C0208;
    case 49u: goto L_002C0214;
    case 50u: goto L_002C0220;
    case 51u: goto L_002C022C;
    case 52u: goto L_002C0238;
    case 53u: goto L_002C0244;
    case 54u: goto L_002C0250;
    case 55u: goto L_002C025C;
    case 56u: goto L_002C0268;
    case 57u: goto L_002C0274;
    case 58u: goto L_002C0280;
    case 59u: goto L_002C028C;
    case 60u: goto L_002C0298;
    case 61u: goto L_002C02A4;
    case 62u: goto L_002C02B0;
    case 63u: goto L_002C02BC;
    case 64u: goto L_002C02C8;
    case 65u: goto L_002C02D4;
    case 66u: goto L_002C02E0;
    case 67u: goto L_002C02EC;
    case 68u: goto L_002C02F8;
    case 69u: goto L_002C0304;
    case 70u: goto L_002C0310;
    case 71u: goto L_002C031C;
    case 72u: goto L_002C0328;
    case 73u: goto L_002C0334;
    case 74u: goto L_002C0340;
    case 75u: goto L_002C034C;
    case 76u: goto L_002C0358;
    case 77u: goto L_002C0364;
    case 78u: goto L_002C0370;
    case 79u: goto L_002C037C;
    case 80u: goto L_002C0388;
    case 81u: goto L_002C0394;
    case 82u: goto L_002C03A0;
    case 83u: goto L_002C03AC;
    case 84u: goto L_002C03B8;
    case 85u: goto L_002C03C4;
    case 86u: goto L_002C03D0;
    case 87u: goto L_002C03DC;
    case 88u: goto L_002C03E8;
    case 89u: goto L_002C03F4;
    case 90u: goto L_002C0400;
    case 91u: goto L_002C040C;
    case 92u: goto L_002C0418;
    case 93u: goto L_002C0424;
    case 94u: goto L_002C0430;
    case 95u: goto L_002C043C;
    case 96u: goto L_002C0448;
    case 97u: goto L_002C0454;
    case 98u: goto L_002C0460;
    case 99u: goto L_002C046C;
    case 100u: goto L_002C0478;
    case 101u: goto L_002C0484;
    case 102u: goto L_002C0490;
    case 103u: goto L_002C049C;
    case 104u: goto L_002C04A8;
    case 105u: goto L_002C04AC;
    case 106u: goto L_002C04B4;
    case 107u: goto L_002C04C0;
    case 108u: goto L_002C04CC;
    case 109u: goto L_002C04D8;
    case 110u: goto L_002C04E4;
    case 111u: goto L_002C04F0;
    case 112u: goto L_002C04FC;
    case 113u: goto L_002C0508;
    case 114u: goto L_002C0514;
    case 115u: goto L_002C0520;
    case 116u: goto L_002C052C;
    case 117u: goto L_002C0538;
    case 118u: goto L_002C0544;
    case 119u: goto L_002C0550;
    case 120u: goto L_002C055C;
    case 121u: goto L_002C0568;
    case 122u: goto L_002C0574;
    case 123u: goto L_002C0580;
    case 124u: goto L_002C058C;
    case 125u: goto L_002C0598;
    case 126u: goto L_002C05A4;
    case 127u: goto L_002C05B0;
    case 128u: goto L_002C05BC;
    case 129u: goto L_002C05C8;
    case 130u: goto L_002C05D4;
    case 131u: goto L_002C05E0;
    case 132u: goto L_002C05EC;
    case 133u: goto L_002C05F8;
    case 134u: goto L_002C0604;
    case 135u: goto L_002C0610;
    case 136u: goto L_002C061C;
    case 137u: goto L_002C0628;
    case 138u: goto L_002C0634;
    case 139u: goto L_002C0640;
    case 140u: goto L_002C064C;
    case 141u: goto L_002C0658;
    case 142u: goto L_002C0664;
    case 143u: goto L_002C0670;
    case 144u: goto L_002C067C;
    case 145u: goto L_002C0688;
    case 146u: goto L_002C0694;
    case 147u: goto L_002C06A0;
    case 148u: goto L_002C06AC;
    case 149u: goto L_002C06B8;
    case 150u: goto L_002C06C4;
    case 151u: goto L_002C06D0;
    case 152u: goto L_002C06DC;
    case 153u: goto L_002C06E8;
    case 154u: goto L_002C06F4;
    case 155u: goto L_002C0700;
    case 156u: goto L_002C070C;
    case 157u: goto L_002C0718;
    case 158u: goto L_002C0724;
    case 159u: goto L_002C0730;
    case 160u: goto L_002C073C;
    case 161u: goto L_002C0748;
    case 162u: goto L_002C0754;
    case 163u: goto L_002C0760;
    case 164u: goto L_002C076C;
    case 165u: goto L_002C0778;
    case 166u: goto L_002C0784;
    case 167u: goto L_002C0790;
    case 168u: goto L_002C079C;
    case 169u: goto L_002C07A8;
    case 170u: goto L_002C07B4;
    case 171u: goto L_002C07C0;
    case 172u: goto L_002C07CC;
    case 173u: goto L_002C07D8;
    case 174u: goto L_002C07E4;
    case 175u: goto L_002C07F0;
    case 176u: goto L_002C07FC;
    case 177u: goto L_002C0808;
    case 178u: goto L_002C0814;
    case 179u: goto L_002C0820;
    case 180u: goto L_002C082C;
    case 181u: goto L_002C0838;
    case 182u: goto L_002C0844;
    case 183u: goto L_002C0850;
    case 184u: goto L_002C085C;
    case 185u: goto L_002C0868;
    case 186u: goto L_002C0874;
    case 187u: goto L_002C0880;
    case 188u: goto L_002C088C;
    case 189u: goto L_002C0898;
    case 190u: goto L_002C08A4;
    case 191u: goto L_002C08B0;
    case 192u: goto L_002C08BC;
    case 193u: goto L_002C08C8;
    case 194u: goto L_002C08D4;
    case 195u: goto L_002C08E0;
    case 196u: goto L_002C08EC;
    case 197u: goto L_002C08F8;
    case 198u: goto L_002C0904;
    case 199u: goto L_002C0910;
    case 200u: goto L_002C091C;
    case 201u: goto L_002C0928;
    case 202u: goto L_002C0934;
    case 203u: goto L_002C0940;
    case 204u: goto L_002C094C;
    case 205u: goto L_002C0958;
    case 206u: goto L_002C0964;
    case 207u: goto L_002C0970;
    case 208u: goto L_002C097C;
    case 209u: goto L_002C0988;
    case 210u: goto L_002C0994;
    case 211u: goto L_002C09A0;
    case 212u: goto L_002C09AC;
    case 213u: goto L_002C09B8;
    case 214u: goto L_002C09C4;
    case 215u: goto L_002C09D0;
    case 216u: goto L_002C09DC;
    case 217u: goto L_002C09E8;
    case 218u: goto L_002C09F4;
    case 219u: goto L_002C0A00;
    case 220u: goto L_002C0A0C;
    case 221u: goto L_002C0A18;
    case 222u: goto L_002C0A24;
    case 223u: goto L_002C0A30;
    case 224u: goto L_002C0A3C;
    case 225u: goto L_002C0A48;
    case 226u: goto L_002C0A54;
    case 227u: goto L_002C0A60;
    case 228u: goto L_002C0A6C;
    case 229u: goto L_002C0A78;
    case 230u: goto L_002C0A84;
    case 231u: goto L_002C0A90;
    case 232u: goto L_002C0A9C;
    case 233u: goto L_002C0AA8;
    case 234u: goto L_002C0AB4;
    case 235u: goto L_002C0AC0;
    case 236u: goto L_002C0ACC;
    case 237u: goto L_002C0AD8;
    case 238u: goto L_002C0AE4;
    case 239u: goto L_002C0AF0;
    case 240u: goto L_002C0AFC;
    case 241u: goto L_002C0B08;
    case 242u: goto L_002C0B14;
    case 243u: goto L_002C0B20;
    case 244u: goto L_002C0B2C;
    case 245u: goto L_002C0B38;
    case 246u: goto L_002C0B44;
    case 247u: goto L_002C0B50;
    case 248u: goto L_002C0B5C;
    case 249u: goto L_002C0B68;
    case 250u: goto L_002C0B74;
    case 251u: goto L_002C0B80;
    case 252u: goto L_002C0B8C;
    case 253u: goto L_002C0B98;
    case 254u: goto L_002C0BA4;
    case 255u: goto L_002C0BB0;
    case 256u: goto L_002C0BBC;
    case 257u: goto L_002C0BC8;
    case 258u: goto L_002C0BD4;
    case 259u: goto L_002C0BE0;
    case 260u: goto L_002C0BEC;
    case 261u: goto L_002C0BF8;
    case 262u: goto L_002C0C04;
    case 263u: goto L_002C0C10;
    case 264u: goto L_002C0C1C;
    case 265u: goto L_002C0C28;
    case 266u: goto L_002C0C34;
    case 267u: goto L_002C0C40;
    case 268u: goto L_002C0C4C;
    case 269u: goto L_002C0C58;
    case 270u: goto L_002C0C64;
    case 271u: goto L_002C0C70;
    case 272u: goto L_002C0C7C;
    case 273u: goto L_002C0C88;
    case 274u: goto L_002C0C94;
    case 275u: goto L_002C0CA0;
    case 276u: goto L_002C0CAC;
    case 277u: goto L_002C0CB8;
    case 278u: goto L_002C0CC4;
    case 279u: goto L_002C0CD0;
    case 280u: goto L_002C0CDC;
    case 281u: goto L_002C0CE8;
    case 282u: goto L_002C0CF4;
    case 283u: goto L_002C0D00;
    case 284u: goto L_002C0D0C;
    case 285u: goto L_002C0D18;
    case 286u: goto L_002C0D24;
    case 287u: goto L_002C0D30;
    case 288u: goto L_002C0D3C;
    case 289u: goto L_002C0D48;
    case 290u: goto L_002C0D54;
    case 291u: goto L_002C0D60;
    case 292u: goto L_002C0D6C;
    case 293u: goto L_002C0D78;
    case 294u: goto L_002C0D84;
    case 295u: goto L_002C0D90;
    case 296u: goto L_002C0D9C;
    case 297u: goto L_002C0DA8;
    case 298u: goto L_002C0DB4;
    case 299u: goto L_002C0DC0;
    case 300u: goto L_002C0DCC;
    case 301u: goto L_002C0DD8;
    case 302u: goto L_002C0DE4;
    case 303u: goto L_002C0DF0;
    case 304u: goto L_002C0DFC;
    case 305u: goto L_002C0E08;
    case 306u: goto L_002C0E14;
    case 307u: goto L_002C0E20;
    case 308u: goto L_002C0E2C;
    case 309u: goto L_002C0E38;
    case 310u: goto L_002C0E44;
    case 311u: goto L_002C0E50;
    case 312u: goto L_002C0E5C;
    case 313u: goto L_002C0E68;
    case 314u: goto L_002C0E74;
    case 315u: goto L_002C0E80;
    case 316u: goto L_002C0E8C;
    case 317u: goto L_002C0E98;
    case 318u: goto L_002C0EA4;
    case 319u: goto L_002C0EB0;
    case 320u: goto L_002C0EBC;
    case 321u: goto L_002C0EC8;
    case 322u: goto L_002C0ED4;
    case 323u: goto L_002C0EE0;
    case 324u: goto L_002C0EEC;
    case 325u: goto L_002C0EF8;
    case 326u: goto L_002C0F04;
    case 327u: goto L_002C0F10;
    case 328u: goto L_002C0F1C;
    case 329u: goto L_002C0F28;
    case 330u: goto L_002C0F34;
    case 331u: goto L_002C0F40;
    case 332u: goto L_002C0F4C;
    case 333u: goto L_002C0F58;
    case 334u: goto L_002C0F64;
    case 335u: goto L_002C0F70;
    case 336u: goto L_002C0F7C;
    case 337u: goto L_002C0F88;
    case 338u: goto L_002C0F94;
    case 339u: goto L_002C0FA0;
    case 340u: goto L_002C0FAC;
    case 341u: goto L_002C0FB8;
    case 342u: goto L_002C0FC4;
    case 343u: goto L_002C0FD0;
    case 344u: goto L_002C0FDC;
    case 345u: goto L_002C0FE8;
    case 346u: goto L_002C0FF4;
    case 347u: goto L_002C1000;
    case 348u: goto L_002C100C;
    case 349u: goto L_002C1018;
    case 350u: goto L_002C1024;
    case 351u: goto L_002C1030;
    case 352u: goto L_002C103C;
    case 353u: goto L_002C1048;
    case 354u: goto L_002C1054;
    case 355u: goto L_002C1060;
    case 356u: goto L_002C106C;
    case 357u: goto L_002C1078;
    case 358u: goto L_002C1084;
    case 359u: goto L_002C1090;
    case 360u: goto L_002C109C;
    case 361u: goto L_002C10A8;
    case 362u: goto L_002C10B4;
    case 363u: goto L_002C10C0;
    case 364u: goto L_002C10CC;
    case 365u: goto L_002C10D8;
    case 366u: goto L_002C10E4;
    case 367u: goto L_002C10F0;
    case 368u: goto L_002C10F8;
    case 369u: goto L_002C1158;
    case 370u: goto L_002C11A8;
    case 371u: goto L_002C11B8;
    case 372u: goto L_002C11D0;
    case 373u: goto L_002C11F0;
    case 374u: goto L_002C1208;
    case 375u: goto L_002C1220;
    case 376u: goto L_002C1230;
    case 377u: goto L_002C124C;
    case 378u: goto L_002C1264;
    case 379u: goto L_002C12C4;
    case 380u: goto L_002C12E8;
    case 381u: goto L_002C134C;
    case 382u: goto L_002C1370;
    case 383u: goto L_002C1398;
    case 384u: goto L_002C13A8;
    case 385u: goto L_002C13B8;
    case 386u: goto L_002C13CC;
    case 387u: goto L_002C13E0;
    case 388u: goto L_002C13F0;
    case 389u: goto L_002C13FC;
    case 390u: goto L_002C1408;
    case 391u: goto L_002C1424;
    case 392u: goto L_002C1438;
    case 393u: goto L_002C1440;
    case 394u: goto L_002C1448;
    case 395u: goto L_002C1450;
    case 396u: goto L_002C1488;
    case 397u: goto L_002C1490;
    case 398u: goto L_002C14A4;
    case 399u: goto L_002C14B8;
    case 400u: goto L_002C14C8;
    case 401u: goto L_002C14D8;
    case 402u: goto L_002C14E0;
    case 403u: goto L_002C14F4;
    case 404u: goto L_002C1508;
    case 405u: goto L_002C1518;
    case 406u: goto L_002C1528;
    case 407u: goto L_002C1540;
    case 408u: goto L_002C1560;
    case 409u: goto L_002C1570;
    case 410u: goto L_002C1590;
    case 411u: goto L_002C15B0;
    case 412u: goto L_002C15C0;
    case 413u: goto L_002C1600;
    case 414u: goto L_002C165C;
    case 415u: goto L_002C1664;
    case 416u: goto L_002C1674;
    case 417u: goto L_002C1680;
    case 418u: goto L_002C16A0;
    case 419u: goto L_002C16A8;
    case 420u: goto L_002C16E4;
    case 421u: goto L_002C16EC;
    case 422u: goto L_002C16F8;
    case 423u: goto L_002C170C;
    case 424u: goto L_002C1728;
    case 425u: goto L_002C1738;
    case 426u: goto L_002C1744;
    case 427u: goto L_002C174C;
    case 428u: goto L_002C1764;
    case 429u: goto L_002C1770;
    case 430u: goto L_002C17A4;
    case 431u: goto L_002C17D4;
    case 432u: goto L_002C17E8;
    case 433u: goto L_002C1824;
    case 434u: goto L_002C1854;
    case 435u: goto L_002C186C;
    case 436u: goto L_002C18A8;
    case 437u: goto L_002C18B0;
    case 438u: goto L_002C18E0;
    case 439u: goto L_002C190C;
    case 440u: goto L_002C1920;
    case 441u: goto L_002C1954;
    case 442u: goto L_002C1990;
    case 443u: goto L_002C19B8;
    case 444u: goto L_002C19E0;
    case 445u: goto L_002C19F4;
    case 446u: goto L_002C1A0C;
    case 447u: goto L_002C1A48;
    case 448u: goto L_002C1A70;
    case 449u: goto L_002C1A98;
    case 450u: goto L_002C1AAC;
    case 451u: goto L_002C1AC4;
    case 452u: goto L_002C1B04;
    case 453u: goto L_002C1B30;
    case 454u: goto L_002C1B5C;
    case 455u: goto L_002C1B6C;
    case 456u: goto L_002C1B88;
    case 457u: goto L_002C1BA0;
    case 458u: goto L_002C1BB4;
    case 459u: goto L_002C1BEC;
    case 460u: goto L_002C1BF4;
    case 461u: goto L_002C1C04;
    case 462u: goto L_002C1C10;
    case 463u: goto L_002C1C30;
    case 464u: goto L_002C1C38;
    case 465u: goto L_002C1C74;
    case 466u: goto L_002C1C8C;
    case 467u: goto L_002C1C94;
    case 468u: goto L_002C1CA4;
    case 469u: goto L_002C1CB0;
    case 470u: goto L_002C1CD0;
    case 471u: goto L_002C1CD8;
    case 472u: goto L_002C1D14;
    case 473u: goto L_002C1D2C;
    case 474u: goto L_002C1D34;
    case 475u: goto L_002C1D44;
    case 476u: goto L_002C1D50;
    case 477u: goto L_002C1D78;
    case 478u: goto L_002C1D88;
    case 479u: goto L_002C1D9C;
    case 480u: goto L_002C1DA4;
    case 481u: goto L_002C1DDC;
    case 482u: goto L_002C1DF8;
    case 483u: goto L_002C1E14;
    case 484u: goto L_002C1E30;
    case 485u: goto L_002C1E64;
    case 486u: goto L_002C1E74;
    case 487u: goto L_002C1EAC;
    case 488u: goto L_002C1EC0;
    case 489u: goto L_002C1ECC;
    case 490u: goto L_002C1EE0;
    case 491u: goto L_002C1EE8;
    case 492u: goto L_002C1EFC;
    case 493u: goto L_002C1F04;
    case 494u: goto L_002C1F18;
    case 495u: goto L_002C1F24;
    case 496u: goto L_002C1F2C;
    case 497u: goto L_002C1F3C;
    case 498u: goto L_002C1F70;
    case 499u: goto L_002C1F98;
    case 500u: goto L_002C1FB0;
    case 501u: goto L_002C1FC0;
    case 502u: goto L_002C2004;
    case 503u: goto L_002C2020;
    case 504u: goto L_002C2074;
    case 505u: goto L_002C208C;
    case 506u: goto L_002C20CC;
    case 507u: goto L_002C20E4;
    case 508u: goto L_002C2114;
    case 509u: goto L_002C2128;
    case 510u: goto L_002C2150;
    case 511u: goto L_002C2168;
    case 512u: goto L_002C2190;
    case 513u: goto L_002C21BC;
    case 514u: goto L_002C21D0;
    case 515u: goto L_002C21FC;
    case 516u: goto L_002C2210;
    case 517u: goto L_002C2260;
    case 518u: goto L_002C22C4;
    case 519u: goto L_002C22EC;
    case 520u: goto L_002C2310;
    case 521u: goto L_002C233C;
    case 522u: goto L_002C2350;
    case 523u: goto L_002C2370;
    case 524u: goto L_002C2380;
    case 525u: goto L_002C238C;
    case 526u: goto L_002C2398;
    case 527u: goto L_002C23A4;
    case 528u: goto L_002C2400;
    case 529u: goto L_002C240C;
    case 530u: goto L_002C2414;
    case 531u: goto L_002C2420;
    case 532u: goto L_002C2434;
    case 533u: goto L_002C2444;
    case 534u: goto L_002C2450;
    case 535u: goto L_002C2464;
    case 536u: goto L_002C247C;
    case 537u: goto L_002C249C;
    case 538u: goto L_002C24A4;
    case 539u: goto L_002C24FC;
    case 540u: goto L_002C2504;
    case 541u: goto L_002C250C;
    case 542u: goto L_002C251C;
    case 543u: goto L_002C2524;
    case 544u: goto L_002C2534;
    case 545u: goto L_002C2544;
    case 546u: goto L_002C2554;
    case 547u: goto L_002C2568;
    case 548u: goto L_002C2580;
    case 549u: goto L_002C26B0;
    case 550u: goto L_002C26D4;
    case 551u: goto L_002C26E4;
    case 552u: goto L_002C26F0;
    case 553u: goto L_002C26FC;
    case 554u: goto L_002C2704;
    case 555u: goto L_002C271C;
    case 556u: goto L_002C2748;
    case 557u: goto L_002C2758;
    case 558u: goto L_002C2774;
    case 559u: goto L_002C2788;
    case 560u: goto L_002C27A0;
    case 561u: goto L_002C27C8;
    case 562u: goto L_002C27D8;
    case 563u: goto L_002C27E4;
    case 564u: goto L_002C27F0;
    case 565u: goto L_002C27F8;
    case 566u: goto L_002C2808;
    case 567u: goto L_002C2820;
    case 568u: goto L_002C2830;
    case 569u: goto L_002C2840;
    case 570u: goto L_002C2850;
    case 571u: goto L_002C2860;
    case 572u: goto L_002C2880;
    case 573u: goto L_002C2930;
    case 574u: goto L_002C2958;
    case 575u: goto L_002C2964;
    case 576u: goto L_002C2970;
    case 577u: goto L_002C29C0;
    case 578u: goto L_002C29E4;
    case 579u: goto L_002C2A00;
    case 580u: goto L_002C2A20;
    case 581u: goto L_002C2A40;
    case 582u: goto L_002C2A60;
    case 583u: goto L_002C2A84;
    case 584u: goto L_002C2AA0;
    case 585u: goto L_002C2AC0;
    case 586u: goto L_002C2AE0;
    case 587u: goto L_002C2B04;
    case 588u: goto L_002C2B20;
    case 589u: goto L_002C2B40;
    case 590u: goto L_002C2B60;
    case 591u: goto L_002C2B84;
    case 592u: goto L_002C2BA0;
    case 593u: goto L_002C2BC0;
    case 594u: goto L_002C2BE0;
    case 595u: goto L_002C2C04;
    case 596u: goto L_002C2C20;
    case 597u: goto L_002C2C40;
    case 598u: goto L_002C2C60;
    case 599u: goto L_002C2C78;
    case 600u: goto L_002C2CA0;
    case 601u: goto L_002C2CBC;
    case 602u: goto L_002C2CCC;
    case 603u: goto L_002C2CD8;
    case 604u: goto L_002C2CF0;
    case 605u: goto L_002C2D30;
    case 606u: goto L_002C2D50;
    case 607u: goto L_002C2D84;
    case 608u: goto L_002C2D8C;
    case 609u: goto L_002C2D98;
    case 610u: goto L_002C2DA8;
    case 611u: goto L_002C2DC4;
    case 612u: goto L_002C2DD4;
    case 613u: goto L_002C2DF0;
    case 614u: goto L_002C2E24;
    case 615u: goto L_002C2E30;
    case 616u: goto L_002C2E3C;
    case 617u: goto L_002C2E60;
    case 618u: goto L_002C2EA0;
    case 619u: goto L_002C2EC4;
    case 620u: goto L_002C2F04;
    case 621u: goto L_002C2F64;
    case 622u: goto L_002C2FC4;
    case 623u: goto L_002C3024;
    case 624u: goto L_002C3080;
    case 625u: goto L_002C309C;
    case 626u: goto L_002C30A4;
    case 627u: goto L_002C30AC;
    case 628u: goto L_002C30B4;
    case 629u: goto L_002C30BC;
    case 630u: goto L_002C30D8;
    case 631u: goto L_002C30E4;
    case 632u: goto L_002C30EC;
    case 633u: goto L_002C30F4;
    case 634u: goto L_002C30FC;
    case 635u: goto L_002C3104;
    case 636u: goto L_002C3110;
    case 637u: goto L_002C3124;
    case 638u: goto L_002C3138;
    case 639u: goto L_002C3140;
    case 640u: goto L_002C3148;
    case 641u: goto L_002C315C;
    case 642u: goto L_002C3168;
    case 643u: goto L_002C3180;
    case 644u: goto L_002C31BC;
    case 645u: goto L_002C31D0;
    case 646u: goto L_002C31F0;
    case 647u: goto L_002C3200;
    case 648u: goto L_002C3210;
    case 649u: goto L_002C323C;
    case 650u: goto L_002C3248;
    case 651u: goto L_002C3250;
    case 652u: goto L_002C325C;
    case 653u: goto L_002C3264;
    case 654u: goto L_002C327C;
    case 655u: goto L_002C328C;
    case 656u: goto L_002C32C8;
    case 657u: goto L_002C32F8;
    case 658u: goto L_002C330C;
    case 659u: goto L_002C3340;
    case 660u: goto L_002C3348;
    case 661u: goto L_002C33AC;
    case 662u: goto L_002C33D4;
    case 663u: goto L_002C33E8;
    case 664u: goto L_002C3400;
    case 665u: goto L_002C3414;
    case 666u: goto L_002C3424;
    case 667u: goto L_002C3450;
    case 668u: goto L_002C345C;
    case 669u: goto L_002C3488;
    case 670u: goto L_002C34A4;
    case 671u: goto L_002C34C0;
    case 672u: goto L_002C34CC;
    case 673u: goto L_002C34E0;
    case 674u: goto L_002C34F0;
    case 675u: goto L_002C351C;
    case 676u: goto L_002C3528;
    case 677u: goto L_002C3530;
    case 678u: goto L_002C353C;
    case 679u: goto L_002C3544;
    case 680u: goto L_002C355C;
    case 681u: goto L_002C356C;
    case 682u: goto L_002C35A8;
    case 683u: goto L_002C35D8;
    case 684u: goto L_002C35EC;
    case 685u: goto L_002C3624;
    case 686u: goto L_002C3654;
    case 687u: goto L_002C3668;
    case 688u: goto L_002C368C;
    case 689u: goto L_002C369C;
    case 690u: goto L_002C36CC;
    case 691u: goto L_002C36FC;
    case 692u: goto L_002C3714;
    case 693u: goto L_002C3740;
    case 694u: goto L_002C3754;
    case 695u: goto L_002C3760;
    case 696u: goto L_002C3768;
    case 697u: goto L_002C3770;
    case 698u: goto L_002C3778;
    case 699u: goto L_002C37D0;
    case 700u: goto L_002C37E4;
    case 701u: goto L_002C37F8;
    case 702u: goto L_002C3840;
    case 703u: goto L_002C3854;
    case 704u: goto L_002C3880;
    case 705u: goto L_002C3888;
    case 706u: goto L_002C38B8;
    case 707u: goto L_002C38D4;
    case 708u: goto L_002C38E8;
    case 709u: goto L_002C38F4;
    case 710u: goto L_002C390C;
    case 711u: goto L_002C3918;
    case 712u: goto L_002C3924;
    case 713u: goto L_002C3960;
    case 714u: goto L_002C3980;
    case 715u: goto L_002C39C0;
    case 716u: goto L_002C39D4;
    case 717u: goto L_002C39F0;
    case 718u: goto L_002C3A00;
    case 719u: goto L_002C3A10;
    case 720u: goto L_002C3A3C;
    case 721u: goto L_002C3A48;
    case 722u: goto L_002C3A50;
    case 723u: goto L_002C3A98;
    case 724u: goto L_002C3AA4;
    case 725u: goto L_002C3AAC;
    case 726u: goto L_002C3AC4;
    case 727u: goto L_002C3AD4;
    case 728u: goto L_002C3AE4;
    case 729u: goto L_002C3B1C;
    case 730u: goto L_002C3B50;
    case 731u: goto L_002C3B7C;
    case 732u: goto L_002C3B90;
    case 733u: goto L_002C3BFC;
    case 734u: goto L_002C3C08;
    case 735u: goto L_002C3C30;
    case 736u: goto L_002C3C60;
    case 737u: goto L_002C3C88;
    case 738u: goto L_002C3C9C;
    case 739u: goto L_002C3CC8;
    case 740u: goto L_002C3D1C;
    case 741u: goto L_002C3D44;
    case 742u: goto L_002C3D58;
    case 743u: goto L_002C3D70;
    case 744u: goto L_002C3D78;
    case 745u: goto L_002C3D94;
    case 746u: goto L_002C3DA8;
    case 747u: goto L_002C3DB4;
    case 748u: goto L_002C3DBC;
    case 749u: goto L_002C3DC4;
    case 750u: goto L_002C3DD8;
    case 751u: goto L_002C3DE4;
    case 752u: goto L_002C3DF8;
    case 753u: goto L_002C3E00;
    case 754u: goto L_002C3E30;
    case 755u: goto L_002C3E54;
    case 756u: goto L_002C3E70;
    case 757u: goto L_002C3E88;
    case 758u: goto L_002C3F10;
    case 759u: goto L_002C3F34;
    case 760u: goto L_002C3F4C;
    case 761u: goto L_002C3F60;
    case 762u: goto L_002C3F84;
    case 763u: goto L_002C3FB0;
    case 764u: goto L_002C3FD4;
    case 765u: goto L_002C3FEC;
    default: bad_entry(c, 0x002C0000u); return;
    }
L_002C0000:
    set32(c.r[5], c.r[29].w[0] + 736u);
    c.budget -= 1;
L_002C0004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0010:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C001Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 50u, depth + 1u); else { c.pc = 0x004E46E0u; return; } if (c.pc != 0x002C001Cu) [[unlikely]] return; }
L_002C001C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0028:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0034u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 44u, depth + 1u); else { c.pc = 0x004E45C0u; return; } if (c.pc != 0x002C0034u) [[unlikely]] return; }
L_002C0034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0040:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C004Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 37u, depth + 1u); else { c.pc = 0x004E4510u; return; } if (c.pc != 0x002C004Cu) [[unlikely]] return; }
L_002C004C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0058:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0064u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 31u, depth + 1u); else { c.pc = 0x004E4450u; return; } if (c.pc != 0x002C0064u) [[unlikely]] return; }
L_002C0064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0070:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C007Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 26u, depth + 1u); else { c.pc = 0x004E4380u; return; } if (c.pc != 0x002C007Cu) [[unlikely]] return; }
L_002C007C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
L_002C0084:
    c.budget -= 1;
L_002C0088:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0094u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 19u, depth + 1u); else { c.pc = 0x004E4270u; return; } if (c.pc != 0x002C0094u) [[unlikely]] return; }
L_002C0094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C00A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00ACu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 10u, depth + 1u); else { c.pc = 0x004E4180u; return; } if (c.pc != 0x002C00ACu) [[unlikely]] return; }
L_002C00AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C00B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002C00BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00C4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 6u, depth + 1u); else { c.pc = 0x004E40F0u; return; } if (c.pc != 0x002C00C4u) [[unlikely]] return; }
L_002C00C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C00D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00DCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 375u, depth + 1u); else { c.pc = 0x004E3FE0u; return; } if (c.pc != 0x002C00DCu) [[unlikely]] return; }
L_002C00DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C00E8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00F4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 374u, depth + 1u); else { c.pc = 0x004E3FD0u; return; } if (c.pc != 0x002C00F4u) [[unlikely]] return; }
L_002C00F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
L_002C00FC:
    c.budget -= 1;
L_002C0100:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C010Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 368u, depth + 1u); else { c.pc = 0x004E3EE0u; return; } if (c.pc != 0x002C010Cu) [[unlikely]] return; }
L_002C010C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0118:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0124u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 364u, depth + 1u); else { c.pc = 0x004E3DC0u; return; } if (c.pc != 0x002C0124u) [[unlikely]] return; }
L_002C0124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0130:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C013Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 360u, depth + 1u); else { c.pc = 0x004E3D40u; return; } if (c.pc != 0x002C013Cu) [[unlikely]] return; }
L_002C013C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0148:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0154u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 357u, depth + 1u); else { c.pc = 0x004E3C80u; return; } if (c.pc != 0x002C0154u) [[unlikely]] return; }
L_002C0154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0160:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C016Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 348u, depth + 1u); else { c.pc = 0x004E3A30u; return; } if (c.pc != 0x002C016Cu) [[unlikely]] return; }
L_002C016C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0178:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0184u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 342u, depth + 1u); else { c.pc = 0x004E39A0u; return; } if (c.pc != 0x002C0184u) [[unlikely]] return; }
L_002C0184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0190:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C019Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 338u, depth + 1u); else { c.pc = 0x004E38D0u; return; } if (c.pc != 0x002C019Cu) [[unlikely]] return; }
L_002C019C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C01A8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01B4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 334u, depth + 1u); else { c.pc = 0x004E3750u; return; } if (c.pc != 0x002C01B4u) [[unlikely]] return; }
L_002C01B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C01C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01CCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 332u, depth + 1u); else { c.pc = 0x004E36E0u; return; } if (c.pc != 0x002C01CCu) [[unlikely]] return; }
L_002C01CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C01D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01E4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 328u, depth + 1u); else { c.pc = 0x004E3610u; return; } if (c.pc != 0x002C01E4u) [[unlikely]] return; }
L_002C01E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C01F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01FCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 324u, depth + 1u); else { c.pc = 0x004E35B0u; return; } if (c.pc != 0x002C01FCu) [[unlikely]] return; }
L_002C01FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0208:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0214u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 320u, depth + 1u); else { c.pc = 0x004E3530u; return; } if (c.pc != 0x002C0214u) [[unlikely]] return; }
L_002C0214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0220:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C022Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 312u, depth + 1u); else { c.pc = 0x004E3250u; return; } if (c.pc != 0x002C022Cu) [[unlikely]] return; }
L_002C022C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0238:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0244u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 307u, depth + 1u); else { c.pc = 0x004E30F0u; return; } if (c.pc != 0x002C0244u) [[unlikely]] return; }
L_002C0244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0250:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C025Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 303u, depth + 1u); else { c.pc = 0x004E3080u; return; } if (c.pc != 0x002C025Cu) [[unlikely]] return; }
L_002C025C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0268:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0274u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 297u, depth + 1u); else { c.pc = 0x004E2F90u; return; } if (c.pc != 0x002C0274u) [[unlikely]] return; }
L_002C0274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0280:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C028Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 293u, depth + 1u); else { c.pc = 0x004E2F30u; return; } if (c.pc != 0x002C028Cu) [[unlikely]] return; }
L_002C028C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0298:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02A4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 291u, depth + 1u); else { c.pc = 0x004E2F00u; return; } if (c.pc != 0x002C02A4u) [[unlikely]] return; }
L_002C02A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C02B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02BCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 287u, depth + 1u); else { c.pc = 0x004E2E80u; return; } if (c.pc != 0x002C02BCu) [[unlikely]] return; }
L_002C02BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C02C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02D4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 282u, depth + 1u); else { c.pc = 0x004E2DF0u; return; } if (c.pc != 0x002C02D4u) [[unlikely]] return; }
L_002C02D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C02E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02ECu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 278u, depth + 1u); else { c.pc = 0x004E2D10u; return; } if (c.pc != 0x002C02ECu) [[unlikely]] return; }
L_002C02EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C02F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0304u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 271u, depth + 1u); else { c.pc = 0x004E2BC0u; return; } if (c.pc != 0x002C0304u) [[unlikely]] return; }
L_002C0304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0310:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C031Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 266u, depth + 1u); else { c.pc = 0x004E2B30u; return; } if (c.pc != 0x002C031Cu) [[unlikely]] return; }
L_002C031C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0328:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0334u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 262u, depth + 1u); else { c.pc = 0x004E2AD0u; return; } if (c.pc != 0x002C0334u) [[unlikely]] return; }
L_002C0334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0340:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C034Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 257u, depth + 1u); else { c.pc = 0x004E2A50u; return; } if (c.pc != 0x002C034Cu) [[unlikely]] return; }
L_002C034C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0358:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0364u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 253u, depth + 1u); else { c.pc = 0x004E29E0u; return; } if (c.pc != 0x002C0364u) [[unlikely]] return; }
L_002C0364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0370:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C037Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 248u, depth + 1u); else { c.pc = 0x004E2870u; return; } if (c.pc != 0x002C037Cu) [[unlikely]] return; }
L_002C037C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0388:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0394u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 244u, depth + 1u); else { c.pc = 0x004E27C0u; return; } if (c.pc != 0x002C0394u) [[unlikely]] return; }
L_002C0394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C03A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03ACu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 238u, depth + 1u); else { c.pc = 0x004E2670u; return; } if (c.pc != 0x002C03ACu) [[unlikely]] return; }
L_002C03AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C03B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03C4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 233u, depth + 1u); else { c.pc = 0x004E25D0u; return; } if (c.pc != 0x002C03C4u) [[unlikely]] return; }
L_002C03C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C03D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03DCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 230u, depth + 1u); else { c.pc = 0x004E24A0u; return; } if (c.pc != 0x002C03DCu) [[unlikely]] return; }
L_002C03DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C03E8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03F4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 225u, depth + 1u); else { c.pc = 0x004E2350u; return; } if (c.pc != 0x002C03F4u) [[unlikely]] return; }
L_002C03F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0400:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C040Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 224u, depth + 1u); else { c.pc = 0x004E2340u; return; } if (c.pc != 0x002C040Cu) [[unlikely]] return; }
L_002C040C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0418:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0424u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 219u, depth + 1u); else { c.pc = 0x004E2160u; return; } if (c.pc != 0x002C0424u) [[unlikely]] return; }
L_002C0424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0430:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C043Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 215u, depth + 1u); else { c.pc = 0x004E20E0u; return; } if (c.pc != 0x002C043Cu) [[unlikely]] return; }
L_002C043C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0448:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0454u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 211u, depth + 1u); else { c.pc = 0x004E2010u; return; } if (c.pc != 0x002C0454u) [[unlikely]] return; }
L_002C0454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0460:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C046Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 207u, depth + 1u); else { c.pc = 0x004E1F80u; return; } if (c.pc != 0x002C046Cu) [[unlikely]] return; }
L_002C046C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0478:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0484u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 203u, depth + 1u); else { c.pc = 0x004E1F10u; return; } if (c.pc != 0x002C0484u) [[unlikely]] return; }
L_002C0484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0490:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C049Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 200u, depth + 1u); else { c.pc = 0x004E1E80u; return; } if (c.pc != 0x002C049Cu) [[unlikely]] return; }
L_002C049C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C04A8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002C04AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C04B4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 193u, depth + 1u); else { c.pc = 0x004E1D40u; return; } if (c.pc != 0x002C04B4u) [[unlikely]] return; }
L_002C04B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C04C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C04CCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 189u, depth + 1u); else { c.pc = 0x004E1CC0u; return; } if (c.pc != 0x002C04CCu) [[unlikely]] return; }
L_002C04CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C04D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C04E4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 185u, depth + 1u); else { c.pc = 0x004E1C50u; return; } if (c.pc != 0x002C04E4u) [[unlikely]] return; }
L_002C04E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C04F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C04FCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 179u, depth + 1u); else { c.pc = 0x004E1B80u; return; } if (c.pc != 0x002C04FCu) [[unlikely]] return; }
L_002C04FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0508:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0514u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 173u, depth + 1u); else { c.pc = 0x004E1AE0u; return; } if (c.pc != 0x002C0514u) [[unlikely]] return; }
L_002C0514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0520:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C052Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 167u, depth + 1u); else { c.pc = 0x004E1A40u; return; } if (c.pc != 0x002C052Cu) [[unlikely]] return; }
L_002C052C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0538:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0544u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 163u, depth + 1u); else { c.pc = 0x004E1990u; return; } if (c.pc != 0x002C0544u) [[unlikely]] return; }
L_002C0544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0550:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C055Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 159u, depth + 1u); else { c.pc = 0x004E18A0u; return; } if (c.pc != 0x002C055Cu) [[unlikely]] return; }
L_002C055C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0568:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0574u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 155u, depth + 1u); else { c.pc = 0x004E17E0u; return; } if (c.pc != 0x002C0574u) [[unlikely]] return; }
L_002C0574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0580:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C058Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 149u, depth + 1u); else { c.pc = 0x004E1600u; return; } if (c.pc != 0x002C058Cu) [[unlikely]] return; }
L_002C058C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0598:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C05A4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 144u, depth + 1u); else { c.pc = 0x004E1570u; return; } if (c.pc != 0x002C05A4u) [[unlikely]] return; }
L_002C05A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C05B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C05BCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 139u, depth + 1u); else { c.pc = 0x004E14D0u; return; } if (c.pc != 0x002C05BCu) [[unlikely]] return; }
L_002C05BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C05C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C05D4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 135u, depth + 1u); else { c.pc = 0x004E1360u; return; } if (c.pc != 0x002C05D4u) [[unlikely]] return; }
L_002C05D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C05E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C05ECu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 132u, depth + 1u); else { c.pc = 0x004E1310u; return; } if (c.pc != 0x002C05ECu) [[unlikely]] return; }
L_002C05EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C05F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0604u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 128u, depth + 1u); else { c.pc = 0x004E1290u; return; } if (c.pc != 0x002C0604u) [[unlikely]] return; }
L_002C0604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0610:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C061Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x004E1250u; return; } if (c.pc != 0x002C061Cu) [[unlikely]] return; }
L_002C061C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0628:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0634u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 118u, depth + 1u); else { c.pc = 0x004E1180u; return; } if (c.pc != 0x002C0634u) [[unlikely]] return; }
L_002C0634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0640:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C064Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 111u, depth + 1u); else { c.pc = 0x004E10E0u; return; } if (c.pc != 0x002C064Cu) [[unlikely]] return; }
L_002C064C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0658:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0664u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 110u, depth + 1u); else { c.pc = 0x004E10D0u; return; } if (c.pc != 0x002C0664u) [[unlikely]] return; }
L_002C0664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0670:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C067Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 95u, depth + 1u); else { c.pc = 0x004E0FB0u; return; } if (c.pc != 0x002C067Cu) [[unlikely]] return; }
L_002C067C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0688:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0694u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 89u, depth + 1u); else { c.pc = 0x004E0EF0u; return; } if (c.pc != 0x002C0694u) [[unlikely]] return; }
L_002C0694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C06A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06ACu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x004E0E50u; return; } if (c.pc != 0x002C06ACu) [[unlikely]] return; }
L_002C06AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C06B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06C4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 75u, depth + 1u); else { c.pc = 0x004E0D50u; return; } if (c.pc != 0x002C06C4u) [[unlikely]] return; }
L_002C06C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C06D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06DCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 70u, depth + 1u); else { c.pc = 0x004E0C60u; return; } if (c.pc != 0x002C06DCu) [[unlikely]] return; }
L_002C06DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C06E8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06F4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 66u, depth + 1u); else { c.pc = 0x004E0BF0u; return; } if (c.pc != 0x002C06F4u) [[unlikely]] return; }
L_002C06F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0700:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C070Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 60u, depth + 1u); else { c.pc = 0x004E0B50u; return; } if (c.pc != 0x002C070Cu) [[unlikely]] return; }
L_002C070C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0718:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0724u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 52u, depth + 1u); else { c.pc = 0x004E0A30u; return; } if (c.pc != 0x002C0724u) [[unlikely]] return; }
L_002C0724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0730:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C073Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 49u, depth + 1u); else { c.pc = 0x004E09F0u; return; } if (c.pc != 0x002C073Cu) [[unlikely]] return; }
L_002C073C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0748:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0754u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 46u, depth + 1u); else { c.pc = 0x004E0990u; return; } if (c.pc != 0x002C0754u) [[unlikely]] return; }
L_002C0754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0760:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C076Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 41u, depth + 1u); else { c.pc = 0x004E08E0u; return; } if (c.pc != 0x002C076Cu) [[unlikely]] return; }
L_002C076C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0778:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0784u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 38u, depth + 1u); else { c.pc = 0x004E0820u; return; } if (c.pc != 0x002C0784u) [[unlikely]] return; }
L_002C0784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0790:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C079Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 35u, depth + 1u); else { c.pc = 0x004E0770u; return; } if (c.pc != 0x002C079Cu) [[unlikely]] return; }
L_002C079C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C07A8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07B4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 31u, depth + 1u); else { c.pc = 0x004E0710u; return; } if (c.pc != 0x002C07B4u) [[unlikely]] return; }
L_002C07B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C07C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07CCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 28u, depth + 1u); else { c.pc = 0x004E06C0u; return; } if (c.pc != 0x002C07CCu) [[unlikely]] return; }
L_002C07CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C07D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07E4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 25u, depth + 1u); else { c.pc = 0x004E05D0u; return; } if (c.pc != 0x002C07E4u) [[unlikely]] return; }
L_002C07E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C07F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07FCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 22u, depth + 1u); else { c.pc = 0x004E0580u; return; } if (c.pc != 0x002C07FCu) [[unlikely]] return; }
L_002C07FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0808:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0814u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 19u, depth + 1u); else { c.pc = 0x004E0490u; return; } if (c.pc != 0x002C0814u) [[unlikely]] return; }
L_002C0814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0820:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C082Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 15u, depth + 1u); else { c.pc = 0x004E0330u; return; } if (c.pc != 0x002C082Cu) [[unlikely]] return; }
L_002C082C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0838:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0844u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 11u, depth + 1u); else { c.pc = 0x004E02B0u; return; } if (c.pc != 0x002C0844u) [[unlikely]] return; }
L_002C0844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0850:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C085Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 8u, depth + 1u); else { c.pc = 0x004E0190u; return; } if (c.pc != 0x002C085Cu) [[unlikely]] return; }
L_002C085C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0868:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0874u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B8(c, 4u, depth + 1u); else { c.pc = 0x004E00A0u; return; } if (c.pc != 0x002C0874u) [[unlikely]] return; }
L_002C0874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0880:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C088Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 376u, depth + 1u); else { c.pc = 0x004DFFF0u; return; } if (c.pc != 0x002C088Cu) [[unlikely]] return; }
L_002C088C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0898:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C08A4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 373u, depth + 1u); else { c.pc = 0x004DFF40u; return; } if (c.pc != 0x002C08A4u) [[unlikely]] return; }
L_002C08A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C08B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C08BCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 370u, depth + 1u); else { c.pc = 0x004DFE90u; return; } if (c.pc != 0x002C08BCu) [[unlikely]] return; }
L_002C08BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C08C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C08D4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 367u, depth + 1u); else { c.pc = 0x004DFE40u; return; } if (c.pc != 0x002C08D4u) [[unlikely]] return; }
L_002C08D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C08E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C08ECu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 364u, depth + 1u); else { c.pc = 0x004DFD40u; return; } if (c.pc != 0x002C08ECu) [[unlikely]] return; }
L_002C08EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C08F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0904u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 357u, depth + 1u); else { c.pc = 0x004DFC90u; return; } if (c.pc != 0x002C0904u) [[unlikely]] return; }
L_002C0904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0910:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C091Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 352u, depth + 1u); else { c.pc = 0x004DFC10u; return; } if (c.pc != 0x002C091Cu) [[unlikely]] return; }
L_002C091C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0928:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0934u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 348u, depth + 1u); else { c.pc = 0x004DFB20u; return; } if (c.pc != 0x002C0934u) [[unlikely]] return; }
L_002C0934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0940:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C094Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 345u, depth + 1u); else { c.pc = 0x004DFAF0u; return; } if (c.pc != 0x002C094Cu) [[unlikely]] return; }
L_002C094C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0958:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0964u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 338u, depth + 1u); else { c.pc = 0x004DF9F0u; return; } if (c.pc != 0x002C0964u) [[unlikely]] return; }
L_002C0964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0970:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C097Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 333u, depth + 1u); else { c.pc = 0x004DF900u; return; } if (c.pc != 0x002C097Cu) [[unlikely]] return; }
L_002C097C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0988:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0994u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 328u, depth + 1u); else { c.pc = 0x004DF800u; return; } if (c.pc != 0x002C0994u) [[unlikely]] return; }
L_002C0994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C09A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09ACu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 325u, depth + 1u); else { c.pc = 0x004DF7B0u; return; } if (c.pc != 0x002C09ACu) [[unlikely]] return; }
L_002C09AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C09B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09C4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 322u, depth + 1u); else { c.pc = 0x004DF760u; return; } if (c.pc != 0x002C09C4u) [[unlikely]] return; }
L_002C09C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C09D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09DCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 321u, depth + 1u); else { c.pc = 0x004DF750u; return; } if (c.pc != 0x002C09DCu) [[unlikely]] return; }
L_002C09DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C09E8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09F4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 317u, depth + 1u); else { c.pc = 0x004DF610u; return; } if (c.pc != 0x002C09F4u) [[unlikely]] return; }
L_002C09F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0A00:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A0Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 314u, depth + 1u); else { c.pc = 0x004DF520u; return; } if (c.pc != 0x002C0A0Cu) [[unlikely]] return; }
L_002C0A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0A18:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A24u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 311u, depth + 1u); else { c.pc = 0x004DF430u; return; } if (c.pc != 0x002C0A24u) [[unlikely]] return; }
L_002C0A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0A30:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A3Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 308u, depth + 1u); else { c.pc = 0x004DF340u; return; } if (c.pc != 0x002C0A3Cu) [[unlikely]] return; }
L_002C0A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0A48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A54u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 305u, depth + 1u); else { c.pc = 0x004DF250u; return; } if (c.pc != 0x002C0A54u) [[unlikely]] return; }
L_002C0A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0A60:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A6Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 302u, depth + 1u); else { c.pc = 0x004DF160u; return; } if (c.pc != 0x002C0A6Cu) [[unlikely]] return; }
L_002C0A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0A78:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A84u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 299u, depth + 1u); else { c.pc = 0x004DF070u; return; } if (c.pc != 0x002C0A84u) [[unlikely]] return; }
L_002C0A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0A90:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A9Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 292u, depth + 1u); else { c.pc = 0x004DEFC0u; return; } if (c.pc != 0x002C0A9Cu) [[unlikely]] return; }
L_002C0A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0AA8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0AB4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 285u, depth + 1u); else { c.pc = 0x004DEDF0u; return; } if (c.pc != 0x002C0AB4u) [[unlikely]] return; }
L_002C0AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0AC0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0ACCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 282u, depth + 1u); else { c.pc = 0x004DEDB0u; return; } if (c.pc != 0x002C0ACCu) [[unlikely]] return; }
L_002C0ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0AD8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0AE4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 277u, depth + 1u); else { c.pc = 0x004DED10u; return; } if (c.pc != 0x002C0AE4u) [[unlikely]] return; }
L_002C0AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0AF0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0AFCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 271u, depth + 1u); else { c.pc = 0x004DEBD0u; return; } if (c.pc != 0x002C0AFCu) [[unlikely]] return; }
L_002C0AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0B08:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B14u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 267u, depth + 1u); else { c.pc = 0x004DEB40u; return; } if (c.pc != 0x002C0B14u) [[unlikely]] return; }
L_002C0B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0B20:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B2Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 262u, depth + 1u); else { c.pc = 0x004DEA20u; return; } if (c.pc != 0x002C0B2Cu) [[unlikely]] return; }
L_002C0B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0B38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B44u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 259u, depth + 1u); else { c.pc = 0x004DE9E0u; return; } if (c.pc != 0x002C0B44u) [[unlikely]] return; }
L_002C0B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0B50:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B5Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 251u, depth + 1u); else { c.pc = 0x004DE6C0u; return; } if (c.pc != 0x002C0B5Cu) [[unlikely]] return; }
L_002C0B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0B68:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B74u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 250u, depth + 1u); else { c.pc = 0x004DE6B0u; return; } if (c.pc != 0x002C0B74u) [[unlikely]] return; }
L_002C0B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0B80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B8Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 247u, depth + 1u); else { c.pc = 0x004DE650u; return; } if (c.pc != 0x002C0B8Cu) [[unlikely]] return; }
L_002C0B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0B98:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BA4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 244u, depth + 1u); else { c.pc = 0x004DE620u; return; } if (c.pc != 0x002C0BA4u) [[unlikely]] return; }
L_002C0BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0BB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BBCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 239u, depth + 1u); else { c.pc = 0x004DE580u; return; } if (c.pc != 0x002C0BBCu) [[unlikely]] return; }
L_002C0BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0BC8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BD4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 238u, depth + 1u); else { c.pc = 0x004DE570u; return; } if (c.pc != 0x002C0BD4u) [[unlikely]] return; }
L_002C0BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0BE0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BECu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 235u, depth + 1u); else { c.pc = 0x004DE480u; return; } if (c.pc != 0x002C0BECu) [[unlikely]] return; }
L_002C0BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0BF8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C04u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 229u, depth + 1u); else { c.pc = 0x004DE3E0u; return; } if (c.pc != 0x002C0C04u) [[unlikely]] return; }
L_002C0C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0C10:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C1Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 223u, depth + 1u); else { c.pc = 0x004DE340u; return; } if (c.pc != 0x002C0C1Cu) [[unlikely]] return; }
L_002C0C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0C28:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C34u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 208u, depth + 1u); else { c.pc = 0x004DDF50u; return; } if (c.pc != 0x002C0C34u) [[unlikely]] return; }
L_002C0C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0C40:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C4Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 204u, depth + 1u); else { c.pc = 0x004DDE10u; return; } if (c.pc != 0x002C0C4Cu) [[unlikely]] return; }
L_002C0C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0C58:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C64u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 198u, depth + 1u); else { c.pc = 0x004DDBE0u; return; } if (c.pc != 0x002C0C64u) [[unlikely]] return; }
L_002C0C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0C70:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C7Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 193u, depth + 1u); else { c.pc = 0x004DDB50u; return; } if (c.pc != 0x002C0C7Cu) [[unlikely]] return; }
L_002C0C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0C88:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C94u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 188u, depth + 1u); else { c.pc = 0x004DDAD0u; return; } if (c.pc != 0x002C0C94u) [[unlikely]] return; }
L_002C0C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0CA0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CACu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 185u, depth + 1u); else { c.pc = 0x004DDA90u; return; } if (c.pc != 0x002C0CACu) [[unlikely]] return; }
L_002C0CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0CB8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CC4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 182u, depth + 1u); else { c.pc = 0x004DDA40u; return; } if (c.pc != 0x002C0CC4u) [[unlikely]] return; }
L_002C0CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0CD0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CDCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 177u, depth + 1u); else { c.pc = 0x004DD9B0u; return; } if (c.pc != 0x002C0CDCu) [[unlikely]] return; }
L_002C0CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0CE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CF4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 173u, depth + 1u); else { c.pc = 0x004DD930u; return; } if (c.pc != 0x002C0CF4u) [[unlikely]] return; }
L_002C0CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0D00:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D0Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 168u, depth + 1u); else { c.pc = 0x004DD890u; return; } if (c.pc != 0x002C0D0Cu) [[unlikely]] return; }
L_002C0D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0D18:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D24u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 164u, depth + 1u); else { c.pc = 0x004DD810u; return; } if (c.pc != 0x002C0D24u) [[unlikely]] return; }
L_002C0D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0D30:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D3Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 161u, depth + 1u); else { c.pc = 0x004DD6F0u; return; } if (c.pc != 0x002C0D3Cu) [[unlikely]] return; }
L_002C0D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0D48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D54u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 155u, depth + 1u); else { c.pc = 0x004DD660u; return; } if (c.pc != 0x002C0D54u) [[unlikely]] return; }
L_002C0D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0D60:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D6Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 150u, depth + 1u); else { c.pc = 0x004DD5E0u; return; } if (c.pc != 0x002C0D6Cu) [[unlikely]] return; }
L_002C0D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0D78:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D84u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 147u, depth + 1u); else { c.pc = 0x004DD4B0u; return; } if (c.pc != 0x002C0D84u) [[unlikely]] return; }
L_002C0D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0D90:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D9Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 143u, depth + 1u); else { c.pc = 0x004DD440u; return; } if (c.pc != 0x002C0D9Cu) [[unlikely]] return; }
L_002C0D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0DA8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DB4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 140u, depth + 1u); else { c.pc = 0x004DD410u; return; } if (c.pc != 0x002C0DB4u) [[unlikely]] return; }
L_002C0DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0DC0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DCCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 136u, depth + 1u); else { c.pc = 0x004DD3A0u; return; } if (c.pc != 0x002C0DCCu) [[unlikely]] return; }
L_002C0DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0DD8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DE4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 132u, depth + 1u); else { c.pc = 0x004DD340u; return; } if (c.pc != 0x002C0DE4u) [[unlikely]] return; }
L_002C0DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0DF0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DFCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 129u, depth + 1u); else { c.pc = 0x004DD250u; return; } if (c.pc != 0x002C0DFCu) [[unlikely]] return; }
L_002C0DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0E08:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E14u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 126u, depth + 1u); else { c.pc = 0x004DD160u; return; } if (c.pc != 0x002C0E14u) [[unlikely]] return; }
L_002C0E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0E20:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E2Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 123u, depth + 1u); else { c.pc = 0x004DD100u; return; } if (c.pc != 0x002C0E2Cu) [[unlikely]] return; }
L_002C0E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0E38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E44u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 119u, depth + 1u); else { c.pc = 0x004DD050u; return; } if (c.pc != 0x002C0E44u) [[unlikely]] return; }
L_002C0E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0E50:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E5Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 115u, depth + 1u); else { c.pc = 0x004DCF90u; return; } if (c.pc != 0x002C0E5Cu) [[unlikely]] return; }
L_002C0E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0E68:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E74u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 109u, depth + 1u); else { c.pc = 0x004DCEC0u; return; } if (c.pc != 0x002C0E74u) [[unlikely]] return; }
L_002C0E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0E80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E8Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 105u, depth + 1u); else { c.pc = 0x004DCD90u; return; } if (c.pc != 0x002C0E8Cu) [[unlikely]] return; }
L_002C0E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0E98:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0EA4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 101u, depth + 1u); else { c.pc = 0x004DCCA0u; return; } if (c.pc != 0x002C0EA4u) [[unlikely]] return; }
L_002C0EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0EB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0EBCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 94u, depth + 1u); else { c.pc = 0x004DCBE0u; return; } if (c.pc != 0x002C0EBCu) [[unlikely]] return; }
L_002C0EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0EC8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0ED4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 89u, depth + 1u); else { c.pc = 0x004DCA80u; return; } if (c.pc != 0x002C0ED4u) [[unlikely]] return; }
L_002C0ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0EE0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0EECu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 85u, depth + 1u); else { c.pc = 0x004DC9A0u; return; } if (c.pc != 0x002C0EECu) [[unlikely]] return; }
L_002C0EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0EF8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F04u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 74u, depth + 1u); else { c.pc = 0x004DC840u; return; } if (c.pc != 0x002C0F04u) [[unlikely]] return; }
L_002C0F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0F10:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F1Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 68u, depth + 1u); else { c.pc = 0x004DC7C0u; return; } if (c.pc != 0x002C0F1Cu) [[unlikely]] return; }
L_002C0F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0F28:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F34u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 64u, depth + 1u); else { c.pc = 0x004DC770u; return; } if (c.pc != 0x002C0F34u) [[unlikely]] return; }
L_002C0F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0F40:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F4Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 60u, depth + 1u); else { c.pc = 0x004DC700u; return; } if (c.pc != 0x002C0F4Cu) [[unlikely]] return; }
L_002C0F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0F58:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F64u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 56u, depth + 1u); else { c.pc = 0x004DC690u; return; } if (c.pc != 0x002C0F64u) [[unlikely]] return; }
L_002C0F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0F70:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F7Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 51u, depth + 1u); else { c.pc = 0x004DC610u; return; } if (c.pc != 0x002C0F7Cu) [[unlikely]] return; }
L_002C0F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0F88:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F94u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 46u, depth + 1u); else { c.pc = 0x004DC580u; return; } if (c.pc != 0x002C0F94u) [[unlikely]] return; }
L_002C0F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0FA0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0FACu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 42u, depth + 1u); else { c.pc = 0x004DC4E0u; return; } if (c.pc != 0x002C0FACu) [[unlikely]] return; }
L_002C0FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0FB8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0FC4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 39u, depth + 1u); else { c.pc = 0x004DC4B0u; return; } if (c.pc != 0x002C0FC4u) [[unlikely]] return; }
L_002C0FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0FD0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0FDCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 35u, depth + 1u); else { c.pc = 0x004DC460u; return; } if (c.pc != 0x002C0FDCu) [[unlikely]] return; }
L_002C0FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C0FE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0FF4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 32u, depth + 1u); else { c.pc = 0x004DC430u; return; } if (c.pc != 0x002C0FF4u) [[unlikely]] return; }
L_002C0FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C1000:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C100Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 28u, depth + 1u); else { c.pc = 0x004DC3D0u; return; } if (c.pc != 0x002C100Cu) [[unlikely]] return; }
L_002C100C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C1018:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1024u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 24u, depth + 1u); else { c.pc = 0x004DC2B0u; return; } if (c.pc != 0x002C1024u) [[unlikely]] return; }
L_002C1024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C1030:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C103Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 18u, depth + 1u); else { c.pc = 0x004DC210u; return; } if (c.pc != 0x002C103Cu) [[unlikely]] return; }
L_002C103C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C1048:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1054u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B6(c, 265u, depth + 1u); else { c.pc = 0x004DBFE0u; return; } if (c.pc != 0x002C1054u) [[unlikely]] return; }
L_002C1054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C1060:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C106Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B6(c, 262u, depth + 1u); else { c.pc = 0x004DBFB0u; return; } if (c.pc != 0x002C106Cu) [[unlikely]] return; }
L_002C106C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C1078:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1084u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B6(c, 259u, depth + 1u); else { c.pc = 0x004DBF80u; return; } if (c.pc != 0x002C1084u) [[unlikely]] return; }
L_002C1084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C1090:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C109Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 12u, depth + 1u); else { c.pc = 0x004DC170u; return; } if (c.pc != 0x002C109Cu) [[unlikely]] return; }
L_002C109C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C10A8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C10B4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B7(c, 6u, depth + 1u); else { c.pc = 0x004DC0C0u; return; } if (c.pc != 0x002C10B4u) [[unlikely]] return; }
L_002C10B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C10C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C10CCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B6(c, 254u, depth + 1u); else { c.pc = 0x004DBEF0u; return; } if (c.pc != 0x002C10CCu) [[unlikely]] return; }
L_002C10CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C10D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C10E4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B6(c, 250u, depth + 1u); else { c.pc = 0x004DBE40u; return; } if (c.pc != 0x002C10E4u) [[unlikely]] return; }
L_002C10E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C10F8; } }
    c.budget -= 1;
L_002C10F0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C10F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C1170; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 18u));
    set32(c.r[2], 0u - 2u);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 247u, depth + 1u); else { c.pc = 0x002BAFF0u; return; } if (c.pc != 0x002C1158u) [[unlikely]] return; }
L_002C1158:
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002C1170:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 736u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFF48u | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 460u, depth); } }
    c.budget -= 1;
L_002C11A8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C11B8u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002C11B8u) [[unlikely]] return; }
L_002C11B8:
    set32(c.r[2], c.r[29].w[0] + 812u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C11D0u); set32(c.r[6], c.r[6].w[0] - 17311u);  if (depth < kMaxDepth) unit_0030(c, 592u, depth + 1u); else { c.pc = 0x002C2BA0u; return; } if (c.pc != 0x002C11D0u) [[unlikely]] return; }
L_002C11D0:
    set32(c.r[2], c.r[29].w[0] + 816u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C11F0; } }
    set32(c.r[2], c.r[29].w[0] + 816u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C11F0u); set32(c.r[4], c.r[28].w[0] - 28488u);  if (depth < kMaxDepth) unit_0089(c, 46u, depth + 1u); else { c.pc = 0x00425070u; return; } if (c.pc != 0x002C11F0u) [[unlikely]] return; }
L_002C11F0:
    set32(c.r[2], c.r[29].w[0] + 824u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[20].w[0] + 16220u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1208u); set32(c.r[6], c.r[6].w[0] - 17299u);  if (depth < kMaxDepth) unit_0030(c, 596u, depth + 1u); else { c.pc = 0x002C2C20u; return; } if (c.pc != 0x002C1208u) [[unlikely]] return; }
L_002C1208:
    set32(c.r[2], c.r[29].w[0] + 828u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[20].w[0] + 16228u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1220u); set32(c.r[6], c.r[6].w[0] - 17282u);  if (depth < kMaxDepth) unit_0030(c, 596u, depth + 1u); else { c.pc = 0x002C2C20u; return; } if (c.pc != 0x002C1220u) [[unlikely]] return; }
L_002C1220:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[29].w[0] + 848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1230u); set32(c.r[4], c.r[4].w[0] + 25088u);  if (depth < kMaxDepth) unit_00A1(c, 10u, depth + 1u); else { c.pc = 0x00484300u; return; } if (c.pc != 0x002C1230u) [[unlikely]] return; }
L_002C1230:
    set32(c.r[2], c.r[29].w[0] + 832u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[29].w[0] + 836u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C124Cu); set32(c.r[4], c.r[4].w[0] - 14640u);  if (depth < kMaxDepth) unit_0021(c, 354u, depth + 1u); else { c.pc = 0x00287E60u; return; } if (c.pc != 0x002C124Cu) [[unlikely]] return; }
L_002C124C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C12B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C1264:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1298; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1298; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
L_002C1298:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1264u | kUnwind; return; } goto L_002C1264; } }
L_002C12B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C12C4u); set32(c.r[5], c.r[5].w[0] - 17274u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C12C4u) [[unlikely]] return; }
L_002C12C4:
    set32(c.r[2], c.r[29].w[0] + 788u);
    set32(c.r[7], ld32((c.r[30].w[0])));
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[23].w[0])));
    c.r[21].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + 780u);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 9;
L_002C12E8:
    set32(c.r[5], ld32((c.r[8].w[0])));
    set32(c.r[4], ld32((c.r[9].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + c.r[4].w[0]);  if (t) { goto L_002C1310; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 2;
L_002C1310:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(85ll) ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C12E8u | kUnwind; return; } goto L_002C12E8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 17872u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 8;
L_002C134C:
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002C1530; } }
L_002C1370:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(85ll) ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C134Cu | kUnwind; return; } goto L_002C134C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 22u);
    set32(c.r[4], c.r[4].w[0] - 20368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1398u); set32(c.r[6], 0u + 170u);  if (depth < kMaxDepth) unit_003A(c, 80u, depth + 1u); else { c.pc = 0x002E8DB0u; return; } if (c.pc != 0x002C1398u) [[unlikely]] return; }
L_002C1398:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13A8u); set32(c.r[5], c.r[5].w[0] - 17246u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x002C13A8u) [[unlikely]] return; }
L_002C13A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13B8u); set32(c.r[4], c.r[4].w[0] + 25328u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C13B8u) [[unlikely]] return; }
L_002C13B8:
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13CCu); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 177u, depth + 1u); else { c.pc = 0x002E9F90u; return; } if (c.pc != 0x002C13CCu) [[unlikely]] return; }
L_002C13CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13E0u); set32(c.r[5], c.r[5].w[0] - 17197u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C13E0u) [[unlikely]] return; }
L_002C13E0:
    set32(c.r[2], c.r[29].w[0] + 808u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13F0u); set32(c.r[4], ld32((c.r[20].w[0] + 16100u)));  if (depth < kMaxDepth) unit_0081(c, 225u, depth + 1u); else { c.pc = 0x00407070u; return; } if (c.pc != 0x002C13F0u) [[unlikely]] return; }
L_002C13F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C13FCu); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 475u, depth + 1u); else { c.pc = 0x00313FE0u; return; } if (c.pc != 0x002C13FCu) [[unlikely]] return; }
L_002C13FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1408u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 473u, depth + 1u); else { c.pc = 0x00313F80u; return; } if (c.pc != 0x002C1408u) [[unlikely]] return; }
L_002C1408:
    set32(c.r[2], c.r[29].w[0] + 820u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 3768u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1424u); set32(c.r[6], c.r[6].w[0] - 19200u);  if (depth < kMaxDepth) unit_0030(c, 577u, depth + 1u); else { c.pc = 0x002C29C0u; return; } if (c.pc != 0x002C1424u) [[unlikely]] return; }
L_002C1424:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1438u); set32(c.r[5], c.r[5].w[0] - 17160u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C1438u) [[unlikely]] return; }
L_002C1438:
    set32(c.r[17], ld32((c.r[28].w[0] - 29752u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C1440:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002C1448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1450u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 197u, depth + 1u); else { c.pc = 0x002AB2F0u; return; } if (c.pc != 0x002C1450u) [[unlikely]] return; }
L_002C1450:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 288u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1448u | kUnwind; return; } goto L_002C1448; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 11520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1440u | kUnwind; return; } goto L_002C1440; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1488u); set32(c.r[5], c.r[5].w[0] - 17138u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C1488u) [[unlikely]] return; }
L_002C1488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1490u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 520u, depth + 1u); else { c.pc = 0x002C2310u; return; } if (c.pc != 0x002C1490u) [[unlikely]] return; }
L_002C1490:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14A4u); set32(c.r[5], c.r[5].w[0] - 17101u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C14A4u) [[unlikely]] return; }
L_002C14A4:
    set32(c.r[2], c.r[29].w[0] + 800u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1578; } }
    set32(c.r[2], c.r[29].w[0] + 804u);
    c.budget -= 1;
L_002C14B8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1598; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28176u)));
    c.budget -= 1;
L_002C14C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C15B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14D8u);  if (depth < kMaxDepth) unit_00C0(c, 2u, depth + 1u); else { c.pc = 0x00500020u; return; } if (c.pc != 0x002C14D8u) [[unlikely]] return; }
L_002C14D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14E0u);  if (depth < kMaxDepth) unit_0002(c, 143u, depth + 1u); else { c.pc = 0x0020ADF0u; return; } if (c.pc != 0x002C14E0u) [[unlikely]] return; }
L_002C14E0:
    set32(c.r[3], c.r[29].w[0] + 788u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C14F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14F4u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x002C14F4u) [[unlikely]] return; }
L_002C14F4:
    set32(c.r[3], c.r[29].w[0] + 780u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1508u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x002C1508u) [[unlikely]] return; }
L_002C1508:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002C1518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1518u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x002C1518u) [[unlikely]] return; }
L_002C1518:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002C15C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1528u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x002C1528u) [[unlikely]] return; }
L_002C1528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_002C15CC; } }
L_002C1530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1540u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 80u, depth + 1u); else { c.pc = 0x002E8DB0u; return; } if (c.pc != 0x002C1540u) [[unlikely]] return; }
L_002C1540:
    set32(c.r[8], ld32((c.r[16].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[5].w[0] - 17065u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1560u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x002C1560u) [[unlikely]] return; }
L_002C1560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1570u); set32(c.r[4], c.r[4].w[0] + 25328u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C1570u) [[unlikely]] return; }
L_002C1570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1370u | kUnwind; return; } goto L_002C1370; } }
L_002C1578:
    set32(c.r[2], c.r[29].w[0] + 800u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1590u); set32(c.r[6], c.r[6].w[0] - 17013u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x002C1590u) [[unlikely]] return; }
L_002C1590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 804u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C14B8u | kUnwind; return; } goto L_002C14B8; } }
L_002C1598:
    set32(c.r[2], c.r[29].w[0] + 804u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C15B0u); set32(c.r[6], c.r[6].w[0] - 16998u);  if (depth < kMaxDepth) unit_0030(c, 580u, depth + 1u); else { c.pc = 0x002C2A20u; return; } if (c.pc != 0x002C15B0u) [[unlikely]] return; }
L_002C15B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 28176u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C14C8u | kUnwind; return; } goto L_002C14C8; } }
L_002C15B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C15C0u);  if (depth < kMaxDepth) unit_00C0(c, 1u, depth + 1u); else { c.pc = 0x00500000u; return; } if (c.pc != 0x002C15C0u) [[unlikely]] return; }
L_002C15C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C14D8u | kUnwind; return; } goto L_002C14D8; } }
L_002C15C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_002C15CC:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 944u);  c.pc = t; return; }
L_002C1600:
    set32(c.r[29], c.r[29].w[0] - 496u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 18658u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16076u), 0u);
    st32((c.r[4].w[0] + 16072u), 0u);
    st8((c.r[4].w[0] + 16080u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 16081u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 16236u), 0u);
    st32((c.r[4].w[0] + 16108u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C165Cu); set32(c.r[4], c.r[29].w[0] + 492u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C165Cu) [[unlikely]] return; }
L_002C165C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1664u); set32(c.r[4], c.r[29].w[0] + 492u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C1664u) [[unlikely]] return; }
L_002C1664:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1674u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002C1674u) [[unlikely]] return; }
L_002C1674:
    set32(c.r[4], c.r[29].w[0] + 492u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C1680u) [[unlikely]] return; }
L_002C1680:
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C16E4; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1BDC; } }
L_002C16A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002C16A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C16A8u | kUnwind; return; } goto L_002C16A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C16E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16E4u); set32(c.r[4], c.r[20].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002C16E4u) [[unlikely]] return; }
L_002C16E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16ECu); set32(c.r[4], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002C16ECu) [[unlikely]] return; }
L_002C16EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16F8u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C16F8u) [[unlikely]] return; }
L_002C16F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1D90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002C170C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C170Cu | kUnwind; return; } goto L_002C170C; } }
L_002C1728:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1738u); set32(c.r[5], c.r[5].w[0] - 16987u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C1738u) [[unlikely]] return; }
L_002C1738:
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1744u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C1744u) [[unlikely]] return; }
L_002C1744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C174Cu); set32(c.r[4], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C174Cu) [[unlikely]] return; }
L_002C174C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1764u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1764u) [[unlikely]] return; }
L_002C1764:
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1770u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C1770u) [[unlikely]] return; }
L_002C1770:
    set32(c.r[16], c.r[29].w[0] + 436u);
    set32(c.r[23], c.r[29].w[0] + 424u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C17DC; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 476u);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17A4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C17A4u) [[unlikely]] return; }
L_002C17A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C17F4; } }
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17D4u); set32(c.r[5], c.r[2].w[0] + 476u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C17D4u) [[unlikely]] return; }
L_002C17D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_002C17F8; } }
L_002C17DC:
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17E8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C17E8u) [[unlikely]] return; }
L_002C17E8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C17F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002C17F8:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[29].w[0] + 416u);  if (t) { goto L_002C185C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 484u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[17], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1824u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C1824u) [[unlikely]] return; }
L_002C1824:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_002C1878; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1854u); set32(c.r[5], c.r[2].w[0] + 484u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1854u) [[unlikely]] return; }
L_002C1854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 428u);  if (t) { goto L_002C187C; } }
L_002C185C:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 484u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C186Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C186Cu) [[unlikely]] return; }
L_002C186C:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_002C1878:
    set32(c.r[2], c.r[29].w[0] + 428u);
    c.budget -= 1;
L_002C187C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[29].w[0] + 420u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C1DC8; } }
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C1DC8; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_002C18A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C18B0u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002C18B0u) [[unlikely]] return; }
L_002C18B0:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[5].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1914; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C18E0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C18E0u) [[unlikely]] return; }
L_002C18E0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C192C; } }
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C190Cu); set32(c.r[5], c.r[19].w[0] + c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C190Cu) [[unlikely]] return; }
L_002C190C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_002C1930; } }
L_002C1914:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1920u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C1920u) [[unlikely]] return; }
L_002C1920:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C192C:
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_002C1930:
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[21], c.r[3].w[0] - c.r[6].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1954u); set32(c.r[30], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002C1954u) [[unlikely]] return; }
L_002C1954:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[29].w[0] + 428u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[29].w[0] + 420u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C1DE4; } }
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C1DE4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002C1990:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C19E8; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[22], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C19B8u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C19B8u) [[unlikely]] return; }
L_002C19B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[22].d[0]; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002C1A00; } }
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[6], c.r[18].w[0] - c.r[22].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C19E0u); set32(c.r[5], c.r[17].w[0] + c.r[22].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C19E0u) [[unlikely]] return; }
L_002C19E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_002C1A04; } }
L_002C19E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C19F4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C19F4u) [[unlikely]] return; }
L_002C19F4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C1A00:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_002C1A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A0Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002C1A0Cu) [[unlikely]] return; }
L_002C1A0C:
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 428u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[29].w[0] + 420u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C1E00; } }
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C1E00; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002C1A48:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], ld32((c.r[20].w[0] + 56u)));  if (t) { goto L_002C1AA0; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A70u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C1A70u) [[unlikely]] return; }
L_002C1A70:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == c.r[18].d[0]; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002C1AB8; } }
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[22].w[0] + c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1A98u); set32(c.r[6], c.r[21].w[0] - c.r[18].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1A98u) [[unlikely]] return; }
L_002C1A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_002C1ABC; } }
L_002C1AA0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1AACu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C1AACu) [[unlikely]] return; }
L_002C1AAC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C1AB8:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_002C1ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1AC4u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002C1AC4u) [[unlikely]] return; }
L_002C1AC4:
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 428u);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[29].w[0] + 420u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C1E1C; } }
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C1E1C; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002C1B04:
    set32(c.r[6], c.r[30].w[0] - 4u);
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], ld32((c.r[20].w[0] + 60u)));  if (t) { goto L_002C1B64; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1B30u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C1B30u) [[unlikely]] return; }
L_002C1B30:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[30].w[0] - 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002C1B7C; } }
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[21].w[0] + c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1B5Cu); set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1B5Cu) [[unlikely]] return; }
L_002C1B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 416u);  if (t) { goto L_002C1B80; } }
L_002C1B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1B6Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C1B6Cu) [[unlikely]] return; }
L_002C1B6C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[30].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002C1B7C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 1;
L_002C1B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1B88u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002C1B88u) [[unlikely]] return; }
L_002C1B88:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[20].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] - 16969u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BA0u); set32(c.r[5], c.r[2].w[0] + 200u);  if (depth < kMaxDepth) unit_0030(c, 588u, depth + 1u); else { c.pc = 0x002C2B20u; return; } if (c.pc != 0x002C1BA0u) [[unlikely]] return; }
L_002C1BA0:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C1E38; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C1BB4:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1BB4u | kUnwind; return; } goto L_002C1BB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_002C1E3C; } }
L_002C1BDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BECu); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C1BECu) [[unlikely]] return; }
L_002C1BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BF4u); set32(c.r[4], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C1BF4u) [[unlikely]] return; }
L_002C1BF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002C1C04u) [[unlikely]] return; }
L_002C1C04:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C1C10u) [[unlikely]] return; }
L_002C1C10:
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C16A0u | kUnwind; return; } goto L_002C16A0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1C7C; } }
L_002C1C30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002C1C38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1C38u | kUnwind; return; } goto L_002C1C38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C16A0u | kUnwind; return; } goto L_002C16A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C74u); set32(c.r[4], c.r[20].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002C1C74u) [[unlikely]] return; }
L_002C1C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C16A0u | kUnwind; return; } goto L_002C16A0; } }
L_002C1C7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C8Cu); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C1C8Cu) [[unlikely]] return; }
L_002C1C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C94u); set32(c.r[4], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C1C94u) [[unlikely]] return; }
L_002C1C94:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1CA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002C1CA4u) [[unlikely]] return; }
L_002C1CA4:
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1CB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C1CB0u) [[unlikely]] return; }
L_002C1CB0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1C30u | kUnwind; return; } goto L_002C1C30; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C1D1C; } }
L_002C1CD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002C1CD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1CD8u | kUnwind; return; } goto L_002C1CD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1C30u | kUnwind; return; } goto L_002C1C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D14u); set32(c.r[4], c.r[20].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002C1D14u) [[unlikely]] return; }
L_002C1D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1C30u | kUnwind; return; } goto L_002C1C30; } }
L_002C1D1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 468u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D2Cu); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C1D2Cu) [[unlikely]] return; }
L_002C1D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D34u); set32(c.r[4], c.r[29].w[0] + 468u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C1D34u) [[unlikely]] return; }
L_002C1D34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002C1D44u) [[unlikely]] return; }
L_002C1D44:
    set32(c.r[4], c.r[29].w[0] + 468u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C1D50u) [[unlikely]] return; }
L_002C1D50:
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1CD0u | kUnwind; return; } goto L_002C1CD0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C1D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 45u, depth + 1u); else { c.pc = 0x002BC430u; return; } if (c.pc != 0x002C1D78u) [[unlikely]] return; }
L_002C1D78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[20].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D88u); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 36u, depth + 1u); else { c.pc = 0x002BC340u; return; } if (c.pc != 0x002C1D88u) [[unlikely]] return; }
L_002C1D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1CD0u | kUnwind; return; } goto L_002C1CD0; } }
L_002C1D90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D9Cu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C1D9Cu) [[unlikely]] return; }
L_002C1D9C:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_002C1DA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1DA4u | kUnwind; return; } goto L_002C1DA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1728u | kUnwind; return; } goto L_002C1728; } }
L_002C1DC8:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1DDCu) [[unlikely]] return; }
L_002C1DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C18A8u | kUnwind; return; } goto L_002C18A8; } }
L_002C1DE4:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1DF8u) [[unlikely]] return; }
L_002C1DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1990u | kUnwind; return; } goto L_002C1990; } }
L_002C1E00:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1E14u) [[unlikely]] return; }
L_002C1E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1A48u | kUnwind; return; } goto L_002C1A48; } }
L_002C1E1C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C1E30u) [[unlikely]] return; }
L_002C1E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1B04u | kUnwind; return; } goto L_002C1B04; } }
L_002C1E38:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_002C1E3C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[20].w[0] + 24u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28172u), 0u);
    st32((c.r[28].w[0] - 28176u), 0u);
    st8((c.r[28].w[0] - 29200u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E64u); set32(c.r[6], c.r[6].w[0] - 16960u);  if (depth < kMaxDepth) unit_0030(c, 584u, depth + 1u); else { c.pc = 0x002C2AA0u; return; } if (c.pc != 0x002C1E64u) [[unlikely]] return; }
L_002C1E64:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C1E98; } }
L_002C1E74:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 32372u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1E74u | kUnwind; return; } goto L_002C1E74; } }
L_002C1E98:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 456u);
    st32((c.r[29].w[0] + 456u), c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EACu); st32((c.r[29].w[0] + 460u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_002F(c, 451u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C1EACu) [[unlikely]] return; }
L_002C1EAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EC0u); set32(c.r[5], c.r[5].w[0] - 16947u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C1EC0u) [[unlikely]] return; }
L_002C1EC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1ECCu); set32(c.r[4], c.r[4].w[0] - 17552u);  if (depth < kMaxDepth) unit_007A(c, 115u, depth + 1u); else { c.pc = 0x003E9180u; return; } if (c.pc != 0x002C1ECCu) [[unlikely]] return; }
L_002C1ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EE0u); set32(c.r[5], c.r[5].w[0] - 16908u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C1EE0u) [[unlikely]] return; }
L_002C1EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EE8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 307u, depth + 1u); else { c.pc = 0x002BE370u; return; } if (c.pc != 0x002C1EE8u) [[unlikely]] return; }
L_002C1EE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EFCu); set32(c.r[5], c.r[5].w[0] - 16866u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C1EFCu) [[unlikely]] return; }
L_002C1EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002C1F04u) [[unlikely]] return; }
L_002C1F04:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F18u); st8((c.r[20].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0052(c, 33u, depth + 1u); else { c.pc = 0x00348710u; return; } if (c.pc != 0x002C1F18u) [[unlikely]] return; }
L_002C1F18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F24u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0052(c, 16u, depth + 1u); else { c.pc = 0x003484A0u; return; } if (c.pc != 0x002C1F24u) [[unlikely]] return; }
L_002C1F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F2Cu); set32(c.r[4], 0u + 1600u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C1F2Cu) [[unlikely]] return; }
L_002C1F2C:
    st32((c.r[20].w[0] + 16216u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C1F3Cu) [[unlikely]] return; }
L_002C1F3C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_002C1F70:
    set32(c.r[6], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], ld32((c.r[5].w[0] + 20u)));  if (t) { goto L_002C1F80; } }
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 1;
L_002C1F80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C1F8C; } }
    st32((c.r[3].w[0] + 24u), c.r[6].w[0]);
    c.budget -= 1;
L_002C1F8C:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C1FA0; } }
L_002C1F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1FA8; } }
L_002C1FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1F98u | kUnwind; return; } goto L_002C1F98; } }
L_002C1FA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C1FB0:
    set32(c.r[8], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002C1FE0; } }
    c.r[6].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 1;
L_002C1FC0:
    c.r[3].d[0] = ld16((c.r[8].w[0] + 6u));
    c.r[1].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C1FE0; } }
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1FC0u | kUnwind; return; } goto L_002C1FC0; } }
L_002C1FE0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002C1FEC; } }
    st32((c.r[8].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 1;
L_002C1FEC:
    st32((c.r[5].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[5].w[0] + 20u), c.r[7].w[0]);  if (t) { goto L_002C1FFC; } }
    st32((c.r[7].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 1;
L_002C1FFC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002C200C; } }
L_002C2004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2014; } }
L_002C200C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2004u | kUnwind; return; } goto L_002C2004; } }
L_002C2014:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 16080u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 16083u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 16076u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16072u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C20B8; } }
L_002C2074:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8072u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C208Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x002C208Cu) [[unlikely]] return; }
L_002C208C:
    set32(c.r[3], ld32((c.r[17].w[0] + 16076u)));
    set32(c.r[2], 0u + 2000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[17].w[0] + 16076u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16076u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16072u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2074u | kUnwind; return; } goto L_002C2074; } }
    c.budget -= 1;
L_002C20B8:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[17].w[0] + 16081u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20CCu); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 4u, depth + 1u); else { c.pc = 0x002E8040u; return; } if (c.pc != 0x002C20CCu) [[unlikely]] return; }
L_002C20CC:
    st8((c.r[17].w[0] + 16081u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C2100; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 5952u);
    c.budget -= 2;
L_002C20E4:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C20E4u | kUnwind; return; } goto L_002C20E4; } }
L_002C2100:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002C2138; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[18], c.r[18].w[0] + 5952u);
    c.budget -= 2;
L_002C2114:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2158; } }
    c.budget -= 1;
L_002C2128:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2114u | kUnwind; return; } goto L_002C2114; } }
L_002C2138:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[17].w[0] + 16080u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 25088u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2150u); st8((c.r[17].w[0] + 16083u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 237u, depth + 1u); else { c.pc = 0x00483730u; return; } if (c.pc != 0x002C2150u) [[unlikely]] return; }
L_002C2150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C2170; } }
L_002C2158:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2168u) [[unlikely]] return; }
L_002C2168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2128u | kUnwind; return; } goto L_002C2128; } }
L_002C2170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C2190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002C21BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21BCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C21BCu) [[unlikely]] return; }
L_002C21BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C21D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002C21FC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21FCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C21FCu) [[unlikely]] return; }
L_002C21FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C2210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002C22F4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2254; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002C22F8; } }
L_002C2254:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2260u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0051(c, 214u, depth + 1u); else { c.pc = 0x00346BA0u; return; } if (c.pc != 0x002C2260u) [[unlikely]] return; }
L_002C2260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C22F4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 16082u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C22F4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C22F4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 16080u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C22CC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16072u)));
    set32(c.r[3], 0u + 2000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16072u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    st32((c.r[4].w[0] + 8072u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16072u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[18].w[0] + 16072u), c.r[3].w[0]);
    c.budget -= 14;
L_002C22C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C22F4; } }
L_002C22CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C22ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C22ECu) [[unlikely]] return; }
L_002C22EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C22C4u | kUnwind; return; } goto L_002C22C4; } }
L_002C22F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C22F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2310:
    set32(c.r[29], c.r[29].w[0] - 544u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 21424u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C233Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C233Cu) [[unlikely]] return; }
L_002C233C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2490; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002C2350:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2350u | kUnwind; return; } goto L_002C2350; } }
    c.budget -= 1;
L_002C2370:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2380u); set32(c.r[5], c.r[5].w[0] - 16821u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C2380u) [[unlikely]] return; }
L_002C2380:
    set32(c.r[4], c.r[20].w[0] + 16136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C238Cu); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0044(c, 143u, depth + 1u); else { c.pc = 0x00311450u; return; } if (c.pc != 0x002C238Cu) [[unlikely]] return; }
L_002C238C:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C24C8; } }
L_002C2398:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 32376u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
L_002C23A4:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 7u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(39ll) ? 1ull : 0ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 14u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C23A4u | kUnwind; return; } goto L_002C23A4; } }
    c.r[3].d[0] = ld16((c.r[28].w[0] - 32376u));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[20].w[0] + 16136u);
    set32(c.r[2], c.r[2].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2400u); st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0044(c, 370u, depth + 1u); else { c.pc = 0x00313310u; return; } if (c.pc != 0x002C2400u) [[unlikely]] return; }
L_002C2400:
    set32(c.r[4], c.r[20].w[0] + 16136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C240Cu); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0044(c, 106u, depth + 1u); else { c.pc = 0x00310F80u; return; } if (c.pc != 0x002C240Cu) [[unlikely]] return; }
L_002C240C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2414u); set32(c.r[4], c.r[20].w[0] + 16136u);  if (depth < kMaxDepth) unit_0044(c, 105u, depth + 1u); else { c.pc = 0x00310F70u; return; } if (c.pc != 0x002C2414u) [[unlikely]] return; }
L_002C2414:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2420u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C2420u) [[unlikely]] return; }
L_002C2420:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16136u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2434u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 105u, depth + 1u); else { c.pc = 0x00310F70u; return; } if (c.pc != 0x002C2434u) [[unlikely]] return; }
L_002C2434:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C24D0; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002C2444:
    set32(c.r[4], c.r[20].w[0] + 16136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2450u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 104u, depth + 1u); else { c.pc = 0x00310F50u; return; } if (c.pc != 0x002C2450u) [[unlikely]] return; }
L_002C2450:
    set32(c.r[4], c.r[20].w[0] + 16136u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2464u); set32(c.r[7], c.r[29].w[0] + 540u);  if (depth < kMaxDepth) unit_0044(c, 95u, depth + 1u); else { c.pc = 0x00310E30u; return; } if (c.pc != 0x002C2464u) [[unlikely]] return; }
L_002C2464:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 16136u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C247Cu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0044(c, 105u, depth + 1u); else { c.pc = 0x00310F70u; return; } if (c.pc != 0x002C247Cu) [[unlikely]] return; }
L_002C247C:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2444u | kUnwind; return; } goto L_002C2444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { goto L_002C24D4; } }
L_002C2490:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C249Cu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C249Cu) [[unlikely]] return; }
L_002C249C:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 2;
L_002C24A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C24A4u | kUnwind; return; } goto L_002C24A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2370u | kUnwind; return; } goto L_002C2370; } }
L_002C24C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29532u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2398u | kUnwind; return; } goto L_002C2398; } }
L_002C24D0:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002C24D4:
    set32(c.r[2], c.r[20].w[0] + 16136u);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 528u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 532u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 536u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C24FCu); st32((c.r[29].w[0] + 528u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_007E(c, 278u, depth + 1u); else { c.pc = 0x003FA480u; return; } if (c.pc != 0x002C24FCu) [[unlikely]] return; }
L_002C24FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2504u); set32(c.r[4], 0u + 576u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002C2504u) [[unlikely]] return; }
L_002C2504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C2588; } }
L_002C250C:
    st32((c.r[28].w[0] - 28492u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C251Cu); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_0088(c, 148u, depth + 1u); else { c.pc = 0x00420730u; return; } if (c.pc != 0x002C251Cu) [[unlikely]] return; }
L_002C251C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2524u); set32(c.r[4], 0u + 8384u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002C2524u) [[unlikely]] return; }
L_002C2524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2534u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 188u, depth + 1u); else { c.pc = 0x003F9110u; return; } if (c.pc != 0x002C2534u) [[unlikely]] return; }
L_002C2534:
    st32((c.r[28].w[0] - 28544u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2544u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_007E(c, 42u, depth + 1u); else { c.pc = 0x003F81F0u; return; } if (c.pc != 0x002C2544u) [[unlikely]] return; }
L_002C2544:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C2578; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002C2554:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2568u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002C2568u) [[unlikely]] return; }
L_002C2568:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2554u | kUnwind; return; } goto L_002C2554; } }
L_002C2578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2580u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C2580u) [[unlikely]] return; }
L_002C2580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002C2694; } }
L_002C2588:
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 56u), 0u);
    st32((c.r[2].w[0] + 60u), 0u);
    st32((c.r[2].w[0] + 72u), 0u);
    st32((c.r[2].w[0] + 76u), 0u);
    st32((c.r[2].w[0] + 88u), 0u);
    st32((c.r[2].w[0] + 92u), 0u);
    st32((c.r[2].w[0] + 104u), 0u);
    st32((c.r[2].w[0] + 108u), 0u);
    st32((c.r[2].w[0] + 120u), 0u);
    st32((c.r[2].w[0] + 124u), 0u);
    st32((c.r[2].w[0] + 152u), 0u);
    st32((c.r[2].w[0] + 156u), 0u);
    st32((c.r[2].w[0] + 168u), 0u);
    st32((c.r[2].w[0] + 172u), 0u);
    st32((c.r[2].w[0] + 184u), 0u);
    st32((c.r[2].w[0] + 188u), 0u);
    st32((c.r[2].w[0] + 200u), 0u);
    st32((c.r[2].w[0] + 204u), 0u);
    st32((c.r[2].w[0] + 216u), 0u);
    st32((c.r[2].w[0] + 220u), 0u);
    st32((c.r[2].w[0] + 232u), 0u);
    st32((c.r[2].w[0] + 236u), 0u);
    st32((c.r[2].w[0] + 248u), 0u);
    st32((c.r[2].w[0] + 252u), 0u);
    st32((c.r[2].w[0] + 264u), 0u);
    st32((c.r[2].w[0] + 268u), 0u);
    st32((c.r[2].w[0] + 280u), 0u);
    st32((c.r[2].w[0] + 284u), 0u);
    st32((c.r[2].w[0] + 296u), 0u);
    st32((c.r[2].w[0] + 300u), 0u);
    st32((c.r[2].w[0] + 312u), 0u);
    st32((c.r[2].w[0] + 316u), 0u);
    st32((c.r[2].w[0] + 332u), 0u);
    st32((c.r[2].w[0] + 336u), 0u);
    st32((c.r[2].w[0] + 348u), 0u);
    st32((c.r[2].w[0] + 352u), 0u);
    st32((c.r[2].w[0] + 364u), 0u);
    st32((c.r[2].w[0] + 368u), 0u);
    st32((c.r[2].w[0] + 380u), 0u);
    st32((c.r[2].w[0] + 384u), 0u);
    st32((c.r[2].w[0] + 396u), 0u);
    st32((c.r[2].w[0] + 400u), 0u);
    st32((c.r[2].w[0] + 424u), 0u);
    st32((c.r[2].w[0] + 428u), 0u);
    st32((c.r[2].w[0] + 440u), 0u);
    st32((c.r[2].w[0] + 444u), 0u);
    st32((c.r[2].w[0] + 456u), 0u);
    st32((c.r[2].w[0] + 460u), 0u);
    st32((c.r[2].w[0] + 472u), 0u);
    st32((c.r[2].w[0] + 476u), 0u);
    st32((c.r[2].w[0] + 488u), 0u);
    st32((c.r[2].w[0] + 492u), 0u);
    st32((c.r[2].w[0] + 504u), 0u);
    st32((c.r[2].w[0] + 508u), 0u);
    st32((c.r[2].w[0] + 520u), 0u);
    st32((c.r[2].w[0] + 524u), 0u);
    st32((c.r[2].w[0] + 536u), 0u);
    st32((c.r[2].w[0] + 540u), 0u);
    st32((c.r[2].w[0] + 552u), 0u);
    st32((c.r[2].w[0] + 556u), 0u);
    st32((c.r[2].w[0] + 568u), 0u);
    c.budget -= 67;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 572u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C250Cu | kUnwind; return; } goto L_002C250C; } }
L_002C2694:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 544u);  c.pc = t; return; }
L_002C26B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C2820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C26D4u);  if (depth < kMaxDepth) unit_002F(c, 185u, depth + 1u); else { c.pc = 0x002BD7B0u; return; } if (c.pc != 0x002C26D4u) [[unlikely]] return; }
L_002C26D4:
    set32(c.r[4], c.r[17].w[0] + 16228u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C2740; } }
    set32(c.r[4], c.r[17].w[0] + 16220u);
    c.budget -= 1;
L_002C26E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C2750; } }
    set32(c.r[4], c.r[17].w[0] + 16180u);
    c.budget -= 1;
L_002C26F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C2760; } }
    set32(c.r[4], c.r[17].w[0] + 16136u);
    c.budget -= 1;
L_002C26FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2704u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0044(c, 401u, depth + 1u); else { c.pc = 0x00313570u; return; } if (c.pc != 0x002C2704u) [[unlikely]] return; }
L_002C2704:
    set32(c.r[2], c.r[17].w[0] + 16124u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2788; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C277C; } }
L_002C271C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16132u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16132u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C271Cu | kUnwind; return; } goto L_002C271C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 16124u)));  if (t) { goto L_002C2780; } }
L_002C2740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2748u);  if (depth < kMaxDepth) unit_002A(c, 4u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C2748u) [[unlikely]] return; }
L_002C2748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16220u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C26E4u | kUnwind; return; } goto L_002C26E4; } }
L_002C2750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2758u);  if (depth < kMaxDepth) unit_002A(c, 4u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C2758u) [[unlikely]] return; }
L_002C2758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16180u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C26F0u | kUnwind; return; } goto L_002C26F0; } }
L_002C2760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2774u); st32((c.r[17].w[0] + 16208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x00240640u; return; } if (c.pc != 0x002C2774u) [[unlikely]] return; }
L_002C2774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16136u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C26FCu | kUnwind; return; } goto L_002C26FC; } }
L_002C277C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16124u)));
    c.budget -= 1;
L_002C2780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2788u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C2788u) [[unlikely]] return; }
L_002C2788:
    set32(c.r[2], c.r[17].w[0] + 16112u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C27C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C27C0; } }
L_002C27A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 16120u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16120u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C27A0u | kUnwind; return; } goto L_002C27A0; } }
    c.budget -= 1;
L_002C27C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C27C8u); set32(c.r[4], ld32((c.r[17].w[0] + 16112u)));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C27C8u) [[unlikely]] return; }
L_002C27C8:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C2828; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_002C27D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C2838; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_002C27E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C2848; } }
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_002C27F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002C2858; } }
L_002C27F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C2808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 594u, depth + 1u); else { c.pc = 0x002C2BE0u; return; } if (c.pc != 0x002C2808u) [[unlikely]] return; }
L_002C2808:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002C2820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002C2820u) [[unlikely]] return; }
L_002C2820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C2868; } }
L_002C2828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2830u);  if (depth < kMaxDepth) unit_0030(c, 582u, depth + 1u); else { c.pc = 0x002C2A60u; return; } if (c.pc != 0x002C2830u) [[unlikely]] return; }
L_002C2830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C27D8u | kUnwind; return; } goto L_002C27D8; } }
L_002C2838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2840u);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x002C2840u) [[unlikely]] return; }
L_002C2840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C27E4u | kUnwind; return; } goto L_002C27E4; } }
L_002C2848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2850u);  if (depth < kMaxDepth) unit_0030(c, 586u, depth + 1u); else { c.pc = 0x002C2AE0u; return; } if (c.pc != 0x002C2850u) [[unlikely]] return; }
L_002C2850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C27F0u | kUnwind; return; } goto L_002C27F0; } }
L_002C2858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2860u);  if (depth < kMaxDepth) unit_0030(c, 590u, depth + 1u); else { c.pc = 0x002C2B60u; return; } if (c.pc != 0x002C2860u) [[unlikely]] return; }
L_002C2860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C27F8u | kUnwind; return; } goto L_002C27F8; } }
L_002C2868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 16072u), 0u);
    st32((c.r[4].w[0] + 16076u), 0u);
    st8((c.r[4].w[0] + 16080u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 16081u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 16082u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 16083u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 16088u), 0u);
    st32((c.r[4].w[0] + 16092u), 0u);
    st32((c.r[4].w[0] + 16100u), 0u);
    st16((c.r[4].w[0] + 16104u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 16116u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16120u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 16116u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2930u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C2930u) [[unlikely]] return; }
L_002C2930:
    st32((c.r[16].w[0] + 16112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 16128u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16132u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16128u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2958u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C2958u) [[unlikely]] return; }
L_002C2958:
    st32((c.r[16].w[0] + 16124u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2964u); set32(c.r[4], c.r[16].w[0] + 16136u);  if (depth < kMaxDepth) unit_0044(c, 410u, depth + 1u); else { c.pc = 0x00313620u; return; } if (c.pc != 0x002C2964u) [[unlikely]] return; }
L_002C2964:
    set32(c.r[17], c.r[16].w[0] + 16180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x002407C0u; return; } if (c.pc != 0x002C2970u) [[unlikely]] return; }
L_002C2970:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28488u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 16212u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 16216u), 0u);
    st32((c.r[16].w[0] + 16220u), 0u);
    st32((c.r[16].w[0] + 16224u), 0u);
    st32((c.r[16].w[0] + 16228u), 0u);
    st32((c.r[16].w[0] + 16232u), 0u);
    st8((c.r[16].w[0] + 16096u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 16097u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 16098u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 16099u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C29C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29E4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C29E4u) [[unlikely]] return; }
L_002C29E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11360u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A00u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002C2A00u) [[unlikely]] return; }
L_002C2A00:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A40u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C2A40u) [[unlikely]] return; }
L_002C2A40:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A84u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C2A84u) [[unlikely]] return; }
L_002C2A84:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2AC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C2AC0u) [[unlikely]] return; }
L_002C2AC0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B04u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C2B04u) [[unlikely]] return; }
L_002C2B04:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B40u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C2B40u) [[unlikely]] return; }
L_002C2B40:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B84u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C2B84u) [[unlikely]] return; }
L_002C2B84:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2BC0u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C2BC0u) [[unlikely]] return; }
L_002C2BC0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C04u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C2C04u) [[unlikely]] return; }
L_002C2C04:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C40u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C2C40u) [[unlikely]] return; }
L_002C2C40:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C78u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 271u, depth + 1u); else { c.pc = 0x003BBC60u; return; } if (c.pc != 0x002C2C78u) [[unlikely]] return; }
L_002C2C78:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2CA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2CBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0029(c, 320u, depth + 1u); else { c.pc = 0x002A7F20u; return; } if (c.pc != 0x002C2CBCu) [[unlikely]] return; }
L_002C2CBC:
    set32(c.r[3], ld32((c.r[18].w[0] + 416u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C2CD4; } }
L_002C2CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002C2D18; } }
L_002C2CD4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2CD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 412u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2CF0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 291u, depth + 1u); else { c.pc = 0x002BBE30u; return; } if (c.pc != 0x002C2CF0u) [[unlikely]] return; }
L_002C2CF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 420u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 416u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2CD8u | kUnwind; return; } goto L_002C2CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2CCCu | kUnwind; return; } goto L_002C2CCC; } }
L_002C2D18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2D30:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002C2D50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C2D7C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002C2D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C2DA0; } }
L_002C2D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D8Cu); set32(c.r[4], c.r[18].w[0] + 408u);  if (depth < kMaxDepth) unit_0030(c, 758u, depth + 1u); else { c.pc = 0x002C3F10u; return; } if (c.pc != 0x002C2D8Cu) [[unlikely]] return; }
L_002C2D8C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C2E1C; } }
L_002C2D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002C2E44; } }
L_002C2DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2DA8u); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x002C2DA8u) [[unlikely]] return; }
L_002C2DA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] + 10440u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 380u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C2DE8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C2DC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 376u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2DD4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0038(c, 422u, depth + 1u); else { c.pc = 0x002E2E50u; return; } if (c.pc != 0x002C2DD4u) [[unlikely]] return; }
L_002C2DD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 380u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2DC4u | kUnwind; return; } goto L_002C2DC4; } }
L_002C2DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2DF0u); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x002C2DF0u) [[unlikely]] return; }
L_002C2DF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] + 10444u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 10440u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 10436u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 10436u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2D84u | kUnwind; return; } goto L_002C2D84; } }
L_002C2E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E24u);  if (depth < kMaxDepth) unit_0029(c, 316u, depth + 1u); else { c.pc = 0x002A7EA0u; return; } if (c.pc != 0x002C2E24u) [[unlikely]] return; }
L_002C2E24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E30u); set32(c.r[4], c.r[4].w[0] + 3376u);  if (depth < kMaxDepth) unit_001B(c, 295u, depth + 1u); else { c.pc = 0x0026FAD0u; return; } if (c.pc != 0x002C2E30u) [[unlikely]] return; }
L_002C2E30:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E3Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0029(c, 298u, depth + 1u); else { c.pc = 0x002A77E0u; return; } if (c.pc != 0x002C2E3Cu) [[unlikely]] return; }
L_002C2E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2D98u | kUnwind; return; } goto L_002C2D98; } }
L_002C2E44:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2E60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002C2E98; } }
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002C2E98:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_002C2EA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2EC8; } }
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2EC4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 617u, depth + 1u); else { c.pc = 0x002C2E60u; return; } if (c.pc != 0x002C2EC4u) [[unlikely]] return; }
L_002C2EC4:
    c.budget -= 1;
L_002C2EC8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2EA0u | kUnwind; return; } goto L_002C2EA0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2F38; } }
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[6], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002C2F38; } }
L_002C2F04:
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2F04u | kUnwind; return; } goto L_002C2F04; } }
L_002C2F38:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2F98; } }
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[7], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C2F98; } }
L_002C2F64:
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 368u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2F64u | kUnwind; return; } goto L_002C2F64; } }
L_002C2F98:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2FF8; } }
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[7], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C2FF8; } }
L_002C2FC4:
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2FC4u | kUnwind; return; } goto L_002C2FC4; } }
L_002C2FF8:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C3058; } }
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[7], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C3058; } }
L_002C3024:
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 368u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3024u | kUnwind; return; } goto L_002C3024; } }
L_002C3058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C3080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C309Cu); set32(c.r[4], c.r[4].w[0] + 3376u);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0026D150u; return; } if (c.pc != 0x002C309Cu) [[unlikely]] return; }
L_002C309C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30A4u); set32(c.r[4], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_0031(c, 153u, depth + 1u); else { c.pc = 0x002C5450u; return; } if (c.pc != 0x002C30A4u) [[unlikely]] return; }
L_002C30A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30ACu); set32(c.r[4], c.r[16].w[0] + 376u);  if (depth < kMaxDepth) unit_0031(c, 148u, depth + 1u); else { c.pc = 0x002C53A0u; return; } if (c.pc != 0x002C30ACu) [[unlikely]] return; }
L_002C30AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30B4u); set32(c.r[4], c.r[16].w[0] + 384u);  if (depth < kMaxDepth) unit_0031(c, 144u, depth + 1u); else { c.pc = 0x002C5320u; return; } if (c.pc != 0x002C30B4u) [[unlikely]] return; }
L_002C30B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30BCu); set32(c.r[4], c.r[16].w[0] + 396u);  if (depth < kMaxDepth) unit_0031(c, 139u, depth + 1u); else { c.pc = 0x002C5280u; return; } if (c.pc != 0x002C30BCu) [[unlikely]] return; }
L_002C30BC:
    st32((c.r[16].w[0] + 392u), 0u);
    st32((c.r[16].w[0] + 404u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 408u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C30DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30D8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C30D8u) [[unlikely]] return; }
L_002C30D8:
    st32((c.r[16].w[0] + 408u), 0u);
    c.budget -= 1;
L_002C30DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30E4u); set32(c.r[4], c.r[16].w[0] + 412u);  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x002A80A0u; return; } if (c.pc != 0x002C30E4u) [[unlikely]] return; }
L_002C30E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30ECu); set32(c.r[4], c.r[16].w[0] + 420u);  if (depth < kMaxDepth) unit_002A(c, 4u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C30ECu) [[unlikely]] return; }
L_002C30EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30F4u); set32(c.r[4], c.r[16].w[0] + 428u);  if (depth < kMaxDepth) unit_0011(c, 368u, depth + 1u); else { c.pc = 0x002478E0u; return; } if (c.pc != 0x002C30F4u) [[unlikely]] return; }
L_002C30F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30FCu); set32(c.r[4], c.r[16].w[0] + 448u);  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x002C51E0u; return; } if (c.pc != 0x002C30FCu) [[unlikely]] return; }
L_002C30FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3104u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_0031(c, 166u, depth + 1u); else { c.pc = 0x002C5600u; return; } if (c.pc != 0x002C3104u) [[unlikely]] return; }
L_002C3104:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3110u); st32((c.r[16].w[0] + 444u), 0u);  if (depth < kMaxDepth) unit_0031(c, 129u, depth + 1u); else { c.pc = 0x002C5140u; return; } if (c.pc != 0x002C3110u) [[unlikely]] return; }
L_002C3110:
    set32(c.r[4], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3124u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C3124u) [[unlikely]] return; }
L_002C3124:
    st32((c.r[16].w[0] + 364u), 0u);
    c.budget -= 1;
L_002C3128:
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[4], c.r[28].w[0] - 29744u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3138u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0011(c, 368u, depth + 1u); else { c.pc = 0x002478E0u; return; } if (c.pc != 0x002C3138u) [[unlikely]] return; }
L_002C3138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3140u); set32(c.r[4], c.r[28].w[0] - 29736u);  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x002A80A0u; return; } if (c.pc != 0x002C3140u) [[unlikely]] return; }
L_002C3140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3148u); set32(c.r[4], c.r[28].w[0] - 29728u);  if (depth < kMaxDepth) unit_002A(c, 4u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002C3148u) [[unlikely]] return; }
L_002C3148:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C3160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C315Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C315Cu) [[unlikely]] return; }
L_002C315C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_002C3160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3168u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0031(c, 124u, depth + 1u); else { c.pc = 0x002C5090u; return; } if (c.pc != 0x002C3168u) [[unlikely]] return; }
L_002C3168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3180:
    set32(c.r[29], c.r[29].w[0] - 1104u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C31BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C31BCu) [[unlikely]] return; }
L_002C31BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3874; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 768u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002C31D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C31D0u | kUnwind; return; } goto L_002C31D0; } }
    c.budget -= 1;
L_002C31F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3200u); set32(c.r[5], c.r[5].w[0] - 16663u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C3200u) [[unlikely]] return; }
L_002C3200:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 1064u);
    set32(c.r[6], c.r[6].w[0] + 984u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_002C3210:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3210u | kUnwind; return; } goto L_002C3210; } }
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C323Cu); set32(c.r[5], c.r[29].w[0] + 768u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002C323Cu) [[unlikely]] return; }
L_002C323C:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3248u); set32(c.r[5], c.r[29].w[0] + 1064u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C3248u) [[unlikely]] return; }
L_002C3248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3250u); set32(c.r[4], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002C3250u) [[unlikely]] return; }
L_002C3250:
    set32(c.r[4], c.r[29].w[0] + 1100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C325Cu); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C325Cu) [[unlikely]] return; }
L_002C325C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3264u); set32(c.r[4], c.r[29].w[0] + 1100u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C3264u) [[unlikely]] return; }
L_002C3264:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C327Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C327Cu) [[unlikely]] return; }
L_002C327C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 1100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C328Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C328Cu) [[unlikely]] return; }
L_002C328C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C38AC; } }
    set32(c.r[17], c.r[29].w[0] + 500u);
    set32(c.r[16], c.r[29].w[0] + 488u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3300; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1092u);
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C32C8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C32C8u) [[unlikely]] return; }
L_002C32C8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002C3318; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C32F8u); set32(c.r[5], c.r[2].w[0] + 1092u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C32F8u) [[unlikely]] return; }
L_002C32F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 492u)));  if (t) { goto L_002C331C; } }
L_002C3300:
    set32(c.r[4], c.r[29].w[0] + 1092u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C330Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C330Cu) [[unlikely]] return; }
L_002C330C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3318:
    set32(c.r[3], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 1;
L_002C331C:
    set32(c.r[2], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 1092u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002C38C0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C38C0; } }
L_002C3340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3348u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C3348u) [[unlikely]] return; }
L_002C3348:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[22], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 16736u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 16736u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    mmi::divu(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C3380; } }
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[22], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002C3380:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C33DC; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C33ACu) [[unlikely]] return; }
L_002C33AC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002C33F4; } }
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33D4u); set32(c.r[5], c.r[22].w[0] + c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C33D4u) [[unlikely]] return; }
L_002C33D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 480u);  if (t) { goto L_002C33F8; } }
L_002C33DC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33E8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C33E8u) [[unlikely]] return; }
L_002C33E8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C33F4:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 1;
L_002C33F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3400u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002C3400u) [[unlikely]] return; }
L_002C3400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3414u); set32(c.r[5], c.r[5].w[0] - 16657u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C3414u) [[unlikely]] return; }
L_002C3414:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 1048u);
    set32(c.r[6], c.r[6].w[0] + 1000u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_002C3424:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3424u | kUnwind; return; } goto L_002C3424; } }
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3450u); set32(c.r[5], c.r[29].w[0] + 768u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002C3450u) [[unlikely]] return; }
L_002C3450:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C345Cu); set32(c.r[5], c.r[29].w[0] + 1048u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C345Cu) [[unlikely]] return; }
L_002C345C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 19120u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + 16000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3488u); set32(c.r[5], c.r[5].w[0] - 16632u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x002C3488u) [[unlikely]] return; }
L_002C3488:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    set32(c.r[4], c.r[4].w[0] + 3040u);
    set32(c.r[6], c.r[29].w[0] + 768u);
    set32(c.r[7], c.r[29].w[0] + 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x002605D0u; return; } if (c.pc != 0x002C34A4u) [[unlikely]] return; }
L_002C34A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 25328u);
    set32(c.r[5], c.r[5].w[0] - 16619u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34C0u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C34C0u) [[unlikely]] return; }
L_002C34C0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34CCu); set32(c.r[4], c.r[20].w[0] + 24u);  if (depth < kMaxDepth) unit_0030(c, 714u, depth + 1u); else { c.pc = 0x002C3980u; return; } if (c.pc != 0x002C34CCu) [[unlikely]] return; }
L_002C34CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34E0u); set32(c.r[5], c.r[5].w[0] - 16594u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C34E0u) [[unlikely]] return; }
L_002C34E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 1032u);
    set32(c.r[6], c.r[6].w[0] + 1016u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_002C34F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C34F0u | kUnwind; return; } goto L_002C34F0; } }
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C351Cu); set32(c.r[5], c.r[29].w[0] + 768u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002C351Cu) [[unlikely]] return; }
L_002C351C:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3528u); set32(c.r[5], c.r[29].w[0] + 1032u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C3528u) [[unlikely]] return; }
L_002C3528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3530u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002C3530u) [[unlikely]] return; }
L_002C3530:
    set32(c.r[4], c.r[29].w[0] + 1096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C353Cu); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C353Cu) [[unlikely]] return; }
L_002C353C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3544u); set32(c.r[4], c.r[29].w[0] + 1096u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C3544u) [[unlikely]] return; }
L_002C3544:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C355Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C355Cu) [[unlikely]] return; }
L_002C355C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 1096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C356Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C356Cu) [[unlikely]] return; }
L_002C356C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C38DC; } }
    set32(c.r[17], c.r[29].w[0] + 212u);
    set32(c.r[30], c.r[29].w[0] + 200u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C35E0; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1088u);
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C35A8u) [[unlikely]] return; }
L_002C35A8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002C35F8; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35D8u); set32(c.r[5], c.r[2].w[0] + 1088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C35D8u) [[unlikely]] return; }
L_002C35D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0])));  if (t) { goto L_002C35FC; } }
L_002C35E0:
    set32(c.r[4], c.r[29].w[0] + 1088u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35ECu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C35ECu) [[unlikely]] return; }
L_002C35EC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C35F8:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002C35FC:
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C365C; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1084u);
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3624u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C3624u) [[unlikely]] return; }
L_002C3624:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002C3674; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3654u); set32(c.r[5], c.r[2].w[0] + 1084u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C3654u) [[unlikely]] return; }
L_002C3654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 1084u)));  if (t) { goto L_002C3678; } }
L_002C365C:
    set32(c.r[4], c.r[29].w[0] + 1084u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3668u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C3668u) [[unlikely]] return; }
L_002C3668:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3674:
    set32(c.r[5], ld32((c.r[29].w[0] + 1084u)));
    c.budget -= 1;
L_002C3678:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[23], ld32((c.r[29].w[0] + 1084u)));
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C368Cu); set32(c.r[6], c.r[6].w[0] - 16569u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x002C5050u; return; } if (c.pc != 0x002C368Cu) [[unlikely]] return; }
L_002C368C:
    c.r[1].d[0] = 0ull < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002C3738; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C369C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[21], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3708; } }
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C36CCu) [[unlikely]] return; }
L_002C36CC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002C3720; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36FCu); set32(c.r[5], c.r[2].w[0] + 1080u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C36FCu) [[unlikely]] return; }
L_002C36FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3720; } }
    c.budget -= 1;
L_002C3708:
    set32(c.r[4], c.r[29].w[0] + 1080u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3714u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C3714u) [[unlikely]] return; }
L_002C3714:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3720:
    set32(c.r[3], ld32((c.r[29].w[0] + 1080u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C369Cu | kUnwind; return; } goto L_002C369C; } }
L_002C3738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3740u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002C3740u) [[unlikely]] return; }
L_002C3740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3754u); set32(c.r[5], c.r[5].w[0] - 16545u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C3754u) [[unlikely]] return; }
L_002C3754:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3760u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 72u, depth + 1u); else { c.pc = 0x00304C50u; return; } if (c.pc != 0x002C3760u) [[unlikely]] return; }
L_002C3760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3768u); set32(c.r[4], c.r[20].w[0] + 368u);  if (depth < kMaxDepth) unit_0031(c, 85u, depth + 1u); else { c.pc = 0x002C4BB0u; return; } if (c.pc != 0x002C3768u) [[unlikely]] return; }
L_002C3768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3770u); set32(c.r[4], c.r[20].w[0] + 384u);  if (depth < kMaxDepth) unit_0031(c, 48u, depth + 1u); else { c.pc = 0x002C4710u; return; } if (c.pc != 0x002C3770u) [[unlikely]] return; }
L_002C3770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3778u); set32(c.r[4], c.r[20].w[0] + 408u);  if (depth < kMaxDepth) unit_0031(c, 7u, depth + 1u); else { c.pc = 0x002C41A0u; return; } if (c.pc != 0x002C3778u) [[unlikely]] return; }
L_002C3778:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 32328u)));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[28].w[0] - 32328u)));
    mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C37A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);  if (t) { goto L_002C37B8; } }
L_002C37A8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    c.budget -= 4;
L_002C37B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[28].w[0] - 29744u);
    set32(c.r[6], c.r[6].w[0] - 16520u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C37D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 366u, depth + 1u); else { c.pc = 0x002478A0u; return; } if (c.pc != 0x002C37D0u) [[unlikely]] return; }
L_002C37D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[28].w[0] - 29736u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C37E4u); set32(c.r[6], c.r[6].w[0] - 16488u);  if (depth < kMaxDepth) unit_0031(c, 155u, depth + 1u); else { c.pc = 0x002C5490u; return; } if (c.pc != 0x002C37E4u) [[unlikely]] return; }
L_002C37E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[28].w[0] - 29728u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C37F8u); set32(c.r[6], c.r[6].w[0] - 16459u);  if (depth < kMaxDepth) unit_0030(c, 596u, depth + 1u); else { c.pc = 0x002C2C20u; return; } if (c.pc != 0x002C37F8u) [[unlikely]] return; }
L_002C37F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 32324u)));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[28].w[0] - 32324u)));
    mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C381C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);  if (t) { goto L_002C382C; } }
L_002C381C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    c.budget -= 4;
L_002C382C:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 4u);  if (t) { goto L_002C38FC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3840:
    set32(c.r[2], ld32((c.r[28].w[0] - 29736u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3854u); st32((c.r[2].w[0]), c.r[19].w[0]);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x002C3854u) [[unlikely]] return; }
L_002C3854:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3840u | kUnwind; return; } goto L_002C3840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0])));  if (t) { goto L_002C3900; } }
L_002C3874:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3880u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C3880u) [[unlikely]] return; }
L_002C3880:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 768u);
    c.budget -= 2;
L_002C3888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3888u | kUnwind; return; } goto L_002C3888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C31F0u | kUnwind; return; } goto L_002C31F0; } }
L_002C38AC:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C38B8u) [[unlikely]] return; }
L_002C38B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002C3928; } }
L_002C38C0:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C38D4u) [[unlikely]] return; }
L_002C38D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3340u | kUnwind; return; } goto L_002C3340; } }
L_002C38DC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C38E8u) [[unlikely]] return; }
L_002C38E8:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C38F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C38F4u) [[unlikely]] return; }
L_002C38F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3924; } }
L_002C38FC:
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002C3900:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C390Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 617u, depth + 1u); else { c.pc = 0x002C2E60u; return; } if (c.pc != 0x002C390Cu) [[unlikely]] return; }
L_002C390C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3918u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C3918u) [[unlikely]] return; }
L_002C3918:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3924u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C3924u) [[unlikely]] return; }
L_002C3924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002C3928:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_002C3960:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  c.pc = t; return; }
L_002C3980:
    set32(c.r[29], c.r[29].w[0] - 768u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C39C0u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C39C0u) [[unlikely]] return; }
L_002C39C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3DEC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002C39D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C39D4u | kUnwind; return; } goto L_002C39D4; } }
L_002C39F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A00u); set32(c.r[5], c.r[5].w[0] - 16663u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C3A00u) [[unlikely]] return; }
L_002C3A00:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 752u);
    set32(c.r[6], c.r[6].w[0] + 968u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
L_002C3A10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3A10u | kUnwind; return; } goto L_002C3A10; } }
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A3Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002C3A3Cu) [[unlikely]] return; }
L_002C3A3C:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A48u); set32(c.r[5], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002C3A48u) [[unlikely]] return; }
L_002C3A48:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002C3A50:
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[3].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(74ll) ? 1ull : 0ull;
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3A50u | kUnwind; return; } goto L_002C3A50; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A98u); st32((c.r[2].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002C3A98u) [[unlikely]] return; }
L_002C3A98:
    set32(c.r[4], c.r[29].w[0] + 764u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AA4u); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002C3AA4u) [[unlikely]] return; }
L_002C3AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AACu); set32(c.r[4], c.r[29].w[0] + 764u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002C3AACu) [[unlikely]] return; }
L_002C3AAC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AC4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C3AC4u) [[unlikely]] return; }
L_002C3AC4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 764u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002C3AD4u) [[unlikely]] return; }
L_002C3AD4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C3E24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AE4u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C3AE4u) [[unlikely]] return; }
L_002C3AE4:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 16728u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[30], ld32((c.r[2].w[0] - 16728u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3E38; } }
    set32(c.r[3], c.r[30].w[0] - c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_002C3B1C:
    set32(c.r[19], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[29].w[0] + 216u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] + 20u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3B84; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B50u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C3B50u) [[unlikely]] return; }
L_002C3B50:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_002C3B9C; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B7Cu); set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C3B7Cu) [[unlikely]] return; }
L_002C3B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3B9C; } }
L_002C3B84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B90u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C3B90u) [[unlikely]] return; }
L_002C3B90:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3B9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32332u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 16736u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 32332u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 220u)));  if (t) { goto L_002C3BD0; } }
L_002C3BC4:
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
L_002C3BD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_002C3E40; } }
    set32(c.r[2], c.r[29].w[0] + 216u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C3E40; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_002C3BFC:
    set32(c.r[20], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C08u); set32(c.r[4], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C3C08u) [[unlikely]] return; }
L_002C3C08:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3E5C; } }
    set32(c.r[3], c.r[30].w[0] - c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_002C3C30:
    set32(c.r[2], c.r[29].w[0] + 216u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3C90; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C60u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C3C60u) [[unlikely]] return; }
L_002C3C60:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[21].d[0]; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_002C3CA8; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[20].w[0] - c.r[21].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C88u); set32(c.r[5], c.r[16].w[0] + c.r[21].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C3C88u) [[unlikely]] return; }
L_002C3C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 228u)));  if (t) { goto L_002C3CAC; } }
L_002C3C90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C9Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C3C9Cu) [[unlikely]] return; }
L_002C3C9C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3CA8:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 1;
L_002C3CAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[20], c.r[3].w[0] - c.r[2].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CC8u); set32(c.r[4], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002C3CC8u) [[unlikely]] return; }
L_002C3CC8:
    st32((c.r[18].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[18].w[0] + 340u)));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    mmi::divu(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3CEC; } }
    set32(c.r[2], c.r[30].w[0] - c.r[2].w[0]);
    set32(c.r[22], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002C3CEC:
    set32(c.r[2], c.r[29].w[0] + 216u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3D4C; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D1Cu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C3D1Cu) [[unlikely]] return; }
L_002C3D1C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[21].d[0]; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_002C3D64; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[20].w[0] - c.r[21].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D44u); set32(c.r[5], c.r[22].w[0] + c.r[21].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C3D44u) [[unlikely]] return; }
L_002C3D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_002C3D68; } }
L_002C3D4C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D58u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002C3D58u) [[unlikely]] return; }
L_002C3D58:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3D64:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_002C3D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D70u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002C3D70u) [[unlikely]] return; }
L_002C3D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D78u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002C3D78u) [[unlikely]] return; }
L_002C3D78:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[28].w[0] - 29692u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D94u); set32(c.r[6], c.r[6].w[0] - 16427u);  if (depth < kMaxDepth) unit_0031(c, 126u, depth + 1u); else { c.pc = 0x002C50D0u; return; } if (c.pc != 0x002C3D94u) [[unlikely]] return; }
L_002C3D94:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002C3E64; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002C3DA8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002C3EC4; } }
L_002C3DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DBCu); set32(c.r[4], ld32((c.r[29].w[0] + 204u)));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C3DBCu) [[unlikely]] return; }
L_002C3DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DC4u); set32(c.r[4], ld32((c.r[29].w[0] + 200u)));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002C3DC4u) [[unlikely]] return; }
L_002C3DC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DD8u); set32(c.r[5], c.r[5].w[0] - 16413u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002C3DD8u) [[unlikely]] return; }
L_002C3DD8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C3DE4u) [[unlikely]] return; }
L_002C3DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002C3EE4; } }
L_002C3DEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DF8u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002C3DF8u) [[unlikely]] return; }
L_002C3DF8:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 2;
L_002C3E00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3E00u | kUnwind; return; } goto L_002C3E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C39F0u | kUnwind; return; } goto L_002C39F0; } }
L_002C3E24:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002C3E30u) [[unlikely]] return; }
L_002C3E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3EE0; } }
L_002C3E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 204u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3B1Cu | kUnwind; return; } goto L_002C3B1C; } }
L_002C3E40:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C3E54u) [[unlikely]] return; }
L_002C3E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3BFCu | kUnwind; return; } goto L_002C3BFC; } }
L_002C3E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 200u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3C30u | kUnwind; return; } goto L_002C3C30; } }
L_002C3E64:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[22].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_002C3E70:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E88u); set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_0041(c, 86u, depth + 1u); else { c.pc = 0x00304E40u; return; } if (c.pc != 0x002C3E88u) [[unlikely]] return; }
L_002C3E88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002C3EA8; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 5;
L_002C3EA8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 40u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3E70u | kUnwind; return; } goto L_002C3E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3DA8u | kUnwind; return; } goto L_002C3DA8; } }
L_002C3EC4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3DB4u | kUnwind; return; } goto L_002C3DB4; } }
L_002C3EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002C3EE4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 768u);  c.pc = t; return; }
L_002C3F10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C3F3C; } }
L_002C3F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 6u, depth); } }
L_002C3F3C:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F4Cu); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0001(c, 182u, depth + 1u); else { c.pc = 0x00207A00u; return; } if (c.pc != 0x002C3F4Cu) [[unlikely]] return; }
L_002C3F4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002C3FD0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002C3F60:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 6u, depth); } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3376u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
L_002C3F84:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[12], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[12].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[4], c.r[12].w[0] + 96u);  if (t) { [[clang::musttail]] return unit_0031(c, 3u, depth); } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0031(c, 3u, depth); } }
L_002C3FB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 112u);
    c.r[3].d[0] = c.r[13].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3F84u | kUnwind; return; } goto L_002C3F84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3F34u | kUnwind; return; } goto L_002C3F34; } }
L_002C3FD0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3FD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3FECu); set32(c.r[19], c.r[3].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x002C3FECu) [[unlikely]] return; }
L_002C3FEC:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3FD4u | kUnwind; return; } goto L_002C3FD4; } }
    [[clang::musttail]] return unit_0031(c, 2u, depth);
}

}

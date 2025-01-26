#include <Arduboy2.h>

extern "C" {
#include "core.h"
}


const PROGMEM uint8_t PROGMEM_FONT[16 * 5] = {
    // 0
    0b11110000,
    0b10010000,
    0b10010000,
    0b10010000,
    0b11110000,

    // 1
    0b00100000,
    0b01100000,
    0b00100000,
    0b00100000,
    0b01110000,

    // 2
    0b11110000,
    0b00010000,
    0b11110000,
    0b10000000,
    0b11110000,

    // 3
    0b11110000,
    0b00010000,
    0b11110000,
    0b00010000,
    0b11110000,

    // 4
    0b10010000,
    0b10010000,
    0b11110000,
    0b00010000,
    0b00010000,

    // 5
    0b11110000,
    0b10000000,
    0b11110000,
    0b00010000,
    0b11110000,

    // 6
    0b11110000,
    0b10000000,
    0b11110000,
    0b10010000,
    0b11110000,

    // 7
    0b11110000,
    0b00010000,
    0b00100000,
    0b01000000,
    0b01000000,

    // 8
    0b11110000,
    0b10010000,
    0b11110000,
    0b10010000,
    0b11110000,

    // 9
    0b11110000,
    0b10010000,
    0b11110000,
    0b00010000,
    0b11110000,

    // A
    0b11110000,
    0b10010000,
    0b11110000,
    0b10010000,
    0b10010000,

    // B
    0b11100000,
    0b10010000,
    0b11100000,
    0b10010000,
    0b11100000,

    // C
    0b11110000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b11110000,

    // D
    0b11100000,
    0b10010000,
    0b10010000,
    0b10010000,
    0b11100000,

    // E
    0b11110000,
    0b10000000,
    0b11110000,
    0b10000000,
    0b11110000,

    // F
    0b11110000,
    0b10000000,
    0b11110000,
    0b10000000,
    0b10000000,
};


const PROGMEM uint8_t BRIX_KEYMAP[] = {0x2, 0x8, 0x4, 0x6, 0xA, 0xB};
const PROGMEM uint8_t BRIX[] = {
    0x6e, 0x05, 0x65, 0x00, 0x6b, 0x06, 0x6a, 0x00, 0xa3, 0x0c, 0xda, 0xb1,
    0x7a, 0x04, 0x3a, 0x40, 0x12, 0x08, 0x7b, 0x02, 0x3b, 0x12, 0x12, 0x06,
    0x6c, 0x20, 0x6d, 0x1f, 0xa3, 0x10, 0xdc, 0xd1, 0x22, 0xf6, 0x60, 0x00,
    0x61, 0x00, 0xa3, 0x12, 0xd0, 0x11, 0x70, 0x08, 0xa3, 0x0e, 0xd0, 0x11,
    0x60, 0x40, 0xf0, 0x15, 0xf0, 0x07, 0x30, 0x00, 0x12, 0x34, 0xc6, 0x0f,
    0x67, 0x1e, 0x68, 0x01, 0x69, 0xff, 0xa3, 0x0e, 0xd6, 0x71, 0xa3, 0x10,
    0xdc, 0xd1, 0x60, 0x04, 0xe0, 0xa1, 0x7c, 0xfe, 0x60, 0x06, 0xe0, 0xa1,
    0x7c, 0x02, 0x60, 0x3f, 0x8c, 0x02, 0xdc, 0xd1, 0xa3, 0x0e, 0xd6, 0x71,
    0x86, 0x84, 0x87, 0x94, 0x60, 0x3f, 0x86, 0x02, 0x61, 0x1f, 0x87, 0x12,
    0x47, 0x1f, 0x12, 0xac, 0x46, 0x00, 0x68, 0x01, 0x46, 0x3f, 0x68, 0xff,
    0x47, 0x00, 0x69, 0x01, 0xd6, 0x71, 0x3f, 0x01, 0x12, 0xaa, 0x47, 0x1f,
    0x12, 0xaa, 0x60, 0x05, 0x80, 0x75, 0x3f, 0x00, 0x12, 0xaa, 0x60, 0x01,
    0xf0, 0x18, 0x80, 0x60, 0x61, 0xfc, 0x80, 0x12, 0xa3, 0x0c, 0xd0, 0x71,
    0x60, 0xfe, 0x89, 0x03, 0x22, 0xf6, 0x75, 0x01, 0x22, 0xf6, 0x45, 0x60,
    0x12, 0xde, 0x12, 0x46, 0x69, 0xff, 0x80, 0x60, 0x80, 0xc5, 0x3f, 0x01,
    0x12, 0xca, 0x61, 0x02, 0x80, 0x15, 0x3f, 0x01, 0x12, 0xe0, 0x80, 0x15,
    0x3f, 0x01, 0x12, 0xee, 0x80, 0x15, 0x3f, 0x01, 0x12, 0xe8, 0x60, 0x20,
    0xf0, 0x18, 0xa3, 0x0e, 0x7e, 0xff, 0x80, 0xe0, 0x80, 0x04, 0x61, 0x00,
    0xd0, 0x11, 0x3e, 0x00, 0x12, 0x30, 0x12, 0xde, 0x78, 0xff, 0x48, 0xfe,
    0x68, 0xff, 0x12, 0xee, 0x78, 0x01, 0x48, 0x02, 0x68, 0x01, 0x60, 0x04,
    0xf0, 0x18, 0x69, 0xff, 0x12, 0x70, 0xa3, 0x14, 0xf5, 0x33, 0xf2, 0x65,
    0xf1, 0x29, 0x63, 0x37, 0x64, 0x00, 0xd3, 0x45, 0x73, 0x05, 0xf2, 0x29,
    0xd3, 0x45, 0x00, 0xee, 0xe0, 0x00, 0x80, 0x00, 0xfc, 0x00, 0xaa, 0x00,
    0x00, 0x00, 0x00, 0x00,
};

const PROGMEM uint8_t CORAX_PLUS[] = {
    0x12, 0x0a, 0x60, 0x01, 0x00, 0xee, 0x60, 0x02, 0x12, 0xa6, 0x00, 0xe0,
    0x68, 0x32, 0x6b, 0x1a, 0xa4, 0xf1, 0xd8, 0xb4, 0x68, 0x3a, 0xa4, 0xf5,
    0xd8, 0xb4, 0x68, 0x02, 0x69, 0x06, 0x6a, 0x0b, 0x6b, 0x01, 0x65, 0x2a,
    0x66, 0x2b, 0xa4, 0xb5, 0xd8, 0xb4, 0xa4, 0xed, 0xd9, 0xb4, 0xa4, 0xa5,
    0x36, 0x2b, 0xa4, 0xa1, 0xda, 0xb4, 0x6b, 0x06, 0xa4, 0xb9, 0xd8, 0xb4,
    0xa4, 0xed, 0xd9, 0xb4, 0xa4, 0xa1, 0x45, 0x2a, 0xa4, 0xa5, 0xda, 0xb4,
    0x6b, 0x0b, 0xa4, 0xbd, 0xd8, 0xb4, 0xa4, 0xed, 0xd9, 0xb4, 0xa4, 0xa1,
    0x55, 0x60, 0xa4, 0xa5, 0xda, 0xb4, 0x6b, 0x10, 0xa4, 0xc5, 0xd8, 0xb4,
    0xa4, 0xed, 0xd9, 0xb4, 0xa4, 0xa1, 0x76, 0xff, 0x46, 0x2a, 0xa4, 0xa5,
    0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xcd, 0xd8, 0xb4, 0xa4, 0xed, 0xd9, 0xb4,
    0xa4, 0xa1, 0x95, 0x60, 0xa4, 0xa5, 0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xad,
    0xd8, 0xb4, 0xa4, 0xed, 0xd9, 0xb4, 0xa4, 0xa5, 0x12, 0x90, 0xa4, 0xa1,
    0xda, 0xb4, 0x68, 0x12, 0x69, 0x16, 0x6a, 0x1b, 0x6b, 0x01, 0xa4, 0xb1,
    0xd8, 0xb4, 0xa4, 0xed, 0xd9, 0xb4, 0x60, 0x00, 0x22, 0x02, 0xa4, 0xa5,
    0x40, 0x00, 0xa4, 0xa1, 0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xa9, 0xd8, 0xb4,
    0xa4, 0xe1, 0xd9, 0xb4, 0xa4, 0xa5, 0x40, 0x02, 0xa4, 0xa1, 0x30, 0x00,
    0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xc9, 0xd8, 0xb4, 0xa4, 0xa9, 0xd9, 0xb4,
    0xa4, 0xa1, 0x65, 0x2a, 0x67, 0x00, 0x87, 0x50, 0x47, 0x2a, 0xa4, 0xa5,
    0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xc9, 0xd8, 0xb4, 0xa4, 0xad, 0xd9, 0xb4,
    0xa4, 0xa1, 0x66, 0x0b, 0x67, 0x2a, 0x87, 0x61, 0x47, 0x2b, 0xa4, 0xa5,
    0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xc9, 0xd8, 0xb4, 0xa4, 0xb1, 0xd9, 0xb4,
    0xa4, 0xa1, 0x66, 0x78, 0x67, 0x1f, 0x87, 0x62, 0x47, 0x18, 0xa4, 0xa5,
    0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xc9, 0xd8, 0xb4, 0xa4, 0xb5, 0xd9, 0xb4,
    0xa4, 0xa1, 0x66, 0x78, 0x67, 0x1f, 0x87, 0x63, 0x47, 0x67, 0xa4, 0xa5,
    0xda, 0xb4, 0x68, 0x22, 0x69, 0x26, 0x6a, 0x2b, 0x6b, 0x01, 0xa4, 0xc9,
    0xd8, 0xb4, 0xa4, 0xb9, 0xd9, 0xb4, 0xa4, 0xa1, 0x66, 0x8c, 0x67, 0x8c,
    0x87, 0x64, 0x47, 0x18, 0xa4, 0xa5, 0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xc9,
    0xd8, 0xb4, 0xa4, 0xbd, 0xd9, 0xb4, 0xa4, 0xa1, 0x66, 0x8c, 0x67, 0x78,
    0x87, 0x65, 0x47, 0xec, 0xa4, 0xa5, 0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xc9,
    0xd8, 0xb4, 0xa4, 0xc5, 0xd9, 0xb4, 0xa4, 0xa1, 0x66, 0x78, 0x67, 0x8c,
    0x87, 0x67, 0x47, 0xec, 0xa4, 0xa5, 0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xc9,
    0xd8, 0xb4, 0xa4, 0xc1, 0xd9, 0xb4, 0xa4, 0xa1, 0x66, 0x0f, 0x86, 0x66,
    0x46, 0x07, 0xa4, 0xa5, 0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xc9, 0xd8, 0xb4,
    0xa4, 0xe1, 0xd9, 0xb4, 0xa4, 0xa1, 0x66, 0xe0, 0x86, 0x6e, 0x46, 0xc0,
    0xa4, 0xa5, 0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xe5, 0xd8, 0xb4, 0xa4, 0xc1,
    0xd9, 0xb4, 0xa4, 0x9e, 0xf1, 0x65, 0xa4, 0xa5, 0x30, 0xaa, 0xa4, 0xa1,
    0x31, 0x55, 0xa4, 0xa1, 0xda, 0xb4, 0x68, 0x32, 0x69, 0x36, 0x6a, 0x3b,
    0x6b, 0x01, 0xa4, 0xe5, 0xd8, 0xb4, 0xa4, 0xbd, 0xd9, 0xb4, 0xa4, 0x9e,
    0x60, 0x00, 0x61, 0x30, 0xf1, 0x55, 0xa4, 0x9e, 0xf0, 0x65, 0x81, 0x00,
    0xa4, 0x9f, 0xf0, 0x65, 0xa4, 0xa5, 0x30, 0x30, 0xa4, 0xa1, 0x31, 0x00,
    0xa4, 0xa1, 0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xe5, 0xd8, 0xb4, 0xa4, 0xb5,
    0xd9, 0xb4, 0xa4, 0x9e, 0x66, 0x89, 0xf6, 0x33, 0xf2, 0x65, 0xa4, 0xa1,
    0x30, 0x01, 0x14, 0x32, 0x31, 0x03, 0x14, 0x32, 0x32, 0x07, 0x14, 0x32,
    0xa4, 0x9e, 0x66, 0x41, 0xf6, 0x33, 0xf2, 0x65, 0xa4, 0xa1, 0x30, 0x00,
    0x14, 0x32, 0x31, 0x06, 0x14, 0x32, 0x32, 0x05, 0x14, 0x32, 0xa4, 0x9e,
    0x66, 0x04, 0xf6, 0x33, 0xf2, 0x65, 0xa4, 0xa1, 0x30, 0x00, 0x14, 0x32,
    0x31, 0x00, 0x14, 0x32, 0x32, 0x04, 0x14, 0x32, 0xa4, 0xa5, 0xda, 0xb4,
    0x7b, 0x05, 0xa4, 0xe5, 0xd8, 0xb4, 0xa4, 0xe1, 0xd9, 0xb4, 0xa4, 0xa1,
    0x66, 0x04, 0xf6, 0x1e, 0xda, 0xb4, 0x7b, 0x05, 0xa4, 0xe9, 0xd8, 0xb4,
    0xa4, 0xed, 0xd9, 0xb4, 0xa4, 0xa5, 0x66, 0xff, 0x76, 0x0a, 0x36, 0x09,
    0xa4, 0xa1, 0x86, 0x66, 0x36, 0x04, 0xa4, 0xa1, 0x66, 0xff, 0x60, 0x0a,
    0x86, 0x04, 0x36, 0x09, 0xa4, 0xa1, 0x86, 0x66, 0x36, 0x04, 0xa4, 0xa1,
    0x66, 0xff, 0x86, 0x6e, 0x86, 0x66, 0x36, 0x7f, 0xa4, 0xa1, 0x86, 0x66,
    0x86, 0x6e, 0x36, 0x7e, 0xa4, 0xa1, 0x66, 0x05, 0x76, 0xf6, 0x36, 0xfb,
    0xa4, 0xa1, 0x66, 0x05, 0x86, 0x05, 0x36, 0xfb, 0xa4, 0xa1, 0x66, 0x05,
    0x80, 0x67, 0x30, 0xfb, 0xa4, 0xa1, 0xda, 0xb4, 0x14, 0x9c, 0xaa, 0x55,
    0x00, 0x00, 0xa0, 0x40, 0xa0, 0x00, 0xa0, 0xc0, 0x80, 0xe0, 0xa0, 0xa0,
    0xe0, 0xc0, 0x40, 0x40, 0xe0, 0xe0, 0x20, 0xc0, 0xe0, 0xe0, 0x60, 0x20,
    0xe0, 0xa0, 0xe0, 0x20, 0x20, 0xe0, 0xc0, 0x20, 0xc0, 0x60, 0x80, 0xe0,
    0xe0, 0xe0, 0x20, 0x40, 0x40, 0xe0, 0xe0, 0xa0, 0xe0, 0xe0, 0xe0, 0x20,
    0xc0, 0x40, 0xa0, 0xe0, 0xa0, 0xc0, 0xe0, 0xa0, 0xe0, 0xe0, 0x80, 0x80,
    0xe0, 0xc0, 0xa0, 0xa0, 0xc0, 0xe0, 0xc0, 0x80, 0xe0, 0xe0, 0x80, 0xc0,
    0x80, 0x00, 0xa0, 0xa0, 0x40, 0xa0, 0x40, 0xa0, 0xa0, 0x0a, 0xae, 0xa2,
    0x42, 0x38, 0x08, 0x30, 0xb8,
};

const PROGMEM uint8_t TETRIS_KEYMAP[] = {0x4, 0x7, 0x5, 0x6, 0x4, 0x4};
const PROGMEM uint8_t TETRIS[] = {
    0xa2, 0xb4, 0x23, 0xe6, 0x22, 0xb6, 0x70, 0x01, 0xd0, 0x11, 0x30, 0x25,
    0x12, 0x06, 0x71, 0xff, 0xd0, 0x11, 0x60, 0x1a, 0xd0, 0x11, 0x60, 0x25,
    0x31, 0x00, 0x12, 0x0e, 0xc4, 0x70, 0x44, 0x70, 0x12, 0x1c, 0xc3, 0x03,
    0x60, 0x1e, 0x61, 0x03, 0x22, 0x5c, 0xf5, 0x15, 0xd0, 0x14, 0x3f, 0x01,
    0x12, 0x3c, 0xd0, 0x14, 0x71, 0xff, 0xd0, 0x14, 0x23, 0x40, 0x12, 0x1c,
    0xe7, 0xa1, 0x22, 0x72, 0xe8, 0xa1, 0x22, 0x84, 0xe9, 0xa1, 0x22, 0x96,
    0xe2, 0x9e, 0x12, 0x50, 0x66, 0x00, 0xf6, 0x15, 0xf6, 0x07, 0x36, 0x00,
    0x12, 0x3c, 0xd0, 0x14, 0x71, 0x01, 0x12, 0x2a, 0xa2, 0xc4, 0xf4, 0x1e,
    0x66, 0x00, 0x43, 0x01, 0x66, 0x04, 0x43, 0x02, 0x66, 0x08, 0x43, 0x03,
    0x66, 0x0c, 0xf6, 0x1e, 0x00, 0xee, 0xd0, 0x14, 0x70, 0xff, 0x23, 0x34,
    0x3f, 0x01, 0x00, 0xee, 0xd0, 0x14, 0x70, 0x01, 0x23, 0x34, 0x00, 0xee,
    0xd0, 0x14, 0x70, 0x01, 0x23, 0x34, 0x3f, 0x01, 0x00, 0xee, 0xd0, 0x14,
    0x70, 0xff, 0x23, 0x34, 0x00, 0xee, 0xd0, 0x14, 0x73, 0x01, 0x43, 0x04,
    0x63, 0x00, 0x22, 0x5c, 0x23, 0x34, 0x3f, 0x01, 0x00, 0xee, 0xd0, 0x14,
    0x73, 0xff, 0x43, 0xff, 0x63, 0x03, 0x22, 0x5c, 0x23, 0x34, 0x00, 0xee,
    0x80, 0x00, 0x67, 0x05, 0x68, 0x06, 0x69, 0x04, 0x61, 0x1f, 0x65, 0x10,
    0x62, 0x07, 0x00, 0xee, 0x40, 0xe0, 0x00, 0x00, 0x40, 0xc0, 0x40, 0x00,
    0x00, 0xe0, 0x40, 0x00, 0x40, 0x60, 0x40, 0x00, 0x40, 0x40, 0x60, 0x00,
    0x20, 0xe0, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x00, 0x00, 0xe0, 0x80, 0x00,
    0x40, 0x40, 0xc0, 0x00, 0x00, 0xe0, 0x20, 0x00, 0x60, 0x40, 0x40, 0x00,
    0x80, 0xe0, 0x00, 0x00, 0x40, 0xc0, 0x80, 0x00, 0xc0, 0x60, 0x00, 0x00,
    0x40, 0xc0, 0x80, 0x00, 0xc0, 0x60, 0x00, 0x00, 0x80, 0xc0, 0x40, 0x00,
    0x00, 0x60, 0xc0, 0x00, 0x80, 0xc0, 0x40, 0x00, 0x00, 0x60, 0xc0, 0x00,
    0xc0, 0xc0, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00,
    0xc0, 0xc0, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x00, 0xf0, 0x00, 0x00,
    0x40, 0x40, 0x40, 0x40, 0x00, 0xf0, 0x00, 0x00, 0xd0, 0x14, 0x66, 0x35,
    0x76, 0xff, 0x36, 0x00, 0x13, 0x38, 0x00, 0xee, 0xa2, 0xb4, 0x8c, 0x10,
    0x3c, 0x1e, 0x7c, 0x01, 0x3c, 0x1e, 0x7c, 0x01, 0x3c, 0x1e, 0x7c, 0x01,
    0x23, 0x5e, 0x4b, 0x0a, 0x23, 0x72, 0x91, 0xc0, 0x00, 0xee, 0x71, 0x01,
    0x13, 0x50, 0x60, 0x1b, 0x6b, 0x00, 0xd0, 0x11, 0x3f, 0x00, 0x7b, 0x01,
    0xd0, 0x11, 0x70, 0x01, 0x30, 0x25, 0x13, 0x62, 0x00, 0xee, 0x60, 0x1b,
    0xd0, 0x11, 0x70, 0x01, 0x30, 0x25, 0x13, 0x74, 0x8e, 0x10, 0x8d, 0xe0,
    0x7e, 0xff, 0x60, 0x1b, 0x6b, 0x00, 0xd0, 0xe1, 0x3f, 0x00, 0x13, 0x90,
    0xd0, 0xe1, 0x13, 0x94, 0xd0, 0xd1, 0x7b, 0x01, 0x70, 0x01, 0x30, 0x25,
    0x13, 0x86, 0x4b, 0x00, 0x13, 0xa6, 0x7d, 0xff, 0x7e, 0xff, 0x3d, 0x01,
    0x13, 0x82, 0x23, 0xc0, 0x3f, 0x01, 0x23, 0xc0, 0x7a, 0x01, 0x23, 0xc0,
    0x80, 0xa0, 0x6d, 0x07, 0x80, 0xd2, 0x40, 0x04, 0x75, 0xfe, 0x45, 0x02,
    0x65, 0x04, 0x00, 0xee, 0xa7, 0x00, 0xf2, 0x55, 0xa8, 0x04, 0xfa, 0x33,
    0xf2, 0x65, 0xf0, 0x29, 0x6d, 0x32, 0x6e, 0x00, 0xdd, 0xe5, 0x7d, 0x05,
    0xf1, 0x29, 0xdd, 0xe5, 0x7d, 0x05, 0xf2, 0x29, 0xdd, 0xe5, 0xa7, 0x00,
    0xf2, 0x65, 0xa2, 0xb4, 0x00, 0xee, 0x6a, 0x00, 0x60, 0x19, 0x00, 0xee,
    0x37, 0x23,
};

const PROGMEM uint8_t PARTICLE_DEMO[353] = {
    0xa3, 0x21, 0x60, 0x00, 0x61, 0x00, 0x62, 0x08, 0xd0, 0x15, 0xf2, 0x1e,
    0x80, 0x24, 0xd0, 0x15, 0xf2, 0x1e, 0x80, 0x24, 0xd0, 0x15, 0xf2, 0x1e,
    0x80, 0x24, 0xd0, 0x15, 0xf2, 0x1e, 0x80, 0x24, 0xd0, 0x15, 0xf2, 0x1e,
    0x80, 0x24, 0xd0, 0x15, 0xf2, 0x1e, 0x80, 0x24, 0xd0, 0x15, 0xf2, 0x1e,
    0x80, 0x24, 0xd0, 0x15, 0x66, 0x05, 0x67, 0x02, 0x6a, 0x00, 0x12, 0xb8,
    0x6b, 0x00, 0x6c, 0x00, 0xa2, 0xd8, 0xfb, 0x1e, 0xf3, 0x65, 0x22, 0xce,
    0x22, 0x5c, 0x12, 0x62, 0x22, 0xce, 0x22, 0x5c, 0x7b, 0x04, 0x7c, 0x01,
    0x5c, 0x60, 0x12, 0x40, 0x12, 0x3c, 0x12, 0x00, 0xa3, 0x20, 0xde, 0xd1,
    0x00, 0xee, 0xa2, 0xd8, 0xfb, 0x1e, 0xf3, 0x65, 0x80, 0x24, 0x81, 0x34,
    0x8e, 0x00, 0x8d, 0x10, 0x8e, 0xe6, 0x8d, 0xd6, 0x84, 0xe0, 0x65, 0xc2,
    0x84, 0x54, 0x4f, 0x01, 0x12, 0x92, 0x4d, 0x00, 0x63, 0x01, 0x84, 0xd0,
    0x65, 0xe1, 0x84, 0x54, 0x4f, 0x01, 0x12, 0x92, 0x33, 0x02, 0x73, 0x01,
    0x12, 0x94, 0x22, 0x9c, 0xa2, 0xd8, 0xfb, 0x1e, 0xf3, 0x55, 0x12, 0x4c,
    0xa3, 0x00, 0xfa, 0x1e, 0xf0, 0x65, 0x82, 0x00, 0x7a, 0x01, 0x64, 0x1f,
    0x8a, 0x42, 0x60, 0x20, 0x61, 0x1e, 0x80, 0x0e, 0x81, 0x1e, 0xc3, 0x03,
    0x73, 0xf8, 0x00, 0xee, 0x6b, 0x00, 0x6c, 0x00, 0x22, 0x9c, 0xa2, 0xd8,
    0xfb, 0x1e, 0xf3, 0x55, 0x7b, 0x04, 0x7c, 0x01, 0x5c, 0x60, 0x12, 0xbc,
    0x12, 0x3c, 0x8e, 0x00, 0x8d, 0x10, 0x8e, 0xe6, 0x8d, 0xd6, 0x00, 0xee,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xf8, 0xfa, 0xf9, 0xfe, 0xfb, 0xfc, 0xfd, 0xff,
    0x02, 0x01, 0x03, 0x05, 0x04, 0x06, 0x07, 0x08, 0x06, 0x07, 0x04, 0x05,
    0x03, 0x01, 0x02, 0xfe, 0xff, 0xfc, 0xfb, 0xfd, 0xfa, 0xf9, 0xf8, 0xfa,
    0x80, 0xf7, 0x06, 0x77, 0x06, 0x36, 0x00, 0x00, 0x00, 0xc7, 0x6c, 0xcf,
    0x0c, 0x0c, 0x00, 0x00, 0x00, 0x9f, 0xd9, 0xdf, 0xd9, 0xd9, 0x00, 0x00,
    0x00, 0x3f, 0x8c, 0x0c, 0x8c, 0x8c, 0x00, 0x00, 0x00, 0x67, 0x6c, 0x6c,
    0x6c, 0x67, 0x00, 0x00, 0x00, 0xb0, 0x30, 0x30, 0x30, 0xbe, 0x00, 0x00,
    0x00, 0xf9, 0xc3, 0xf1, 0xc0, 0xfb, 0x00, 0x00, 0x00, 0xef, 0x00, 0xce,
    0x60, 0xcc, 0x00, 0x00, 0x00,
};


Arduboy2 arduboy;
BeepPin1 audio;


const uint8_t KEYS[] = {
    UP_BUTTON,
    DOWN_BUTTON,
    LEFT_BUTTON,
    RIGHT_BUTTON,
    A_BUTTON,
    B_BUTTON,
};
uint8_t keymap[6] = {};

uint16_t heldKeys() {
    uint16_t heldKeys = 0;
    for (unsigned int i = 0; i < sizeof(KEYS); i++)
        heldKeys |= arduboy.pressed(KEYS[i]) << keymap[i];
    return heldKeys;
}

bool getPixel(uint8_t x, uint8_t y) {
    return arduboy.getPixel(x * 2, y * 2) == WHITE;
}

void togglePixel(uint8_t x, uint8_t y) {
    uint8_t colour = getPixel(x, y) == WHITE ? BLACK : WHITE;
    arduboy.drawPixel((x * 2) + 0, (y * 2) + 0, colour);
    arduboy.drawPixel((x * 2) + 0, (y * 2) + 1, colour);
    arduboy.drawPixel((x * 2) + 1, (y * 2) + 0, colour);
    arduboy.drawPixel((x * 2) + 1, (y * 2) + 1, colour);
}


// Use with compiler flag:
// -Dprintf serial_printf
char format_buffer[40];
int serial_printf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    vsnprintf(format_buffer, sizeof(format_buffer), format, args);

    va_end(args);
    return Serial.print(format_buffer);
}


MachineState machineState = {};

constexpr uint16_t availableProgSpace = sizeof(machineState.ram) - 16 * 5;


#define NUM_PROGRAMS 4

unsigned int programSelect() {
    unsigned int selected = 1;

    while (true) {
        if (!arduboy.nextFrame()) continue;
        arduboy.pollButtons();

        if (arduboy.justPressed(UP_BUTTON) && selected > 0) selected--;
        if (arduboy.justPressed(DOWN_BUTTON) && selected < NUM_PROGRAMS)
            selected++;
        if (arduboy.justPressed(A_BUTTON)) return selected;

        arduboy.clear();
        for (unsigned int i = 0; i < NUM_PROGRAMS + 1; i++) {
            arduboy.print((i == selected) ? "> " : "  ");
            switch (i) {
                case 0:
                    arduboy.println(F("Load from Computer"));
                    break;
                case 1:
                    arduboy.println(F("BRIX"));
                    break;
                case 2:
                    arduboy.println(F("Corax Plus"));
                    break;
                case 3:
                    arduboy.println(F("Tetris"));
                    break;
                case 4:
                    arduboy.println(F("Particle Demo"));
                    break;
            }
        }

        arduboy.display();
    }
}


void sigIllHandler() {
    arduboy.clear();
    arduboy.print("Illegal Instruction!");
    arduboy.display();
    while (true) {
        arduboy.setRGBled(RED_LED, 0xFF);
        delay(200);
        arduboy.setRGBled(RED_LED, 0x00);
        delay(200);
    }
}


void setup() {
    arduboy.begin();
    audio.begin();

    arduboy.setFrameRate(60);
    arduboy.setRGBled(0, 0, 0);
    arduboy.clear();
    arduboy.display();


    core_init(&machineState,
              PROGMEM_FONT,
              &memcpy_P,
              &heldKeys,
              &getPixel,
              &togglePixel,
              &arduboy.clear,
              &sigIllHandler);

    unsigned int selected = programSelect();
    if (selected == 0) {
        Serial.begin(115200);
        arduboy.clear();
        arduboy.println("Waiting... ");
        arduboy.display();
        while (!Serial);

        Serial.println(availableProgSpace);
        while (!Serial);
        arduboy.clear();
        if (Serial.peek() == -1) {
            arduboy.println(":( program too large");
            arduboy.display();
            Serial.end();
            while (true);
        }
        uint16_t programLength = Serial.parseInt();
        for (int i = 0; i < 6; i++) {
            while (Serial.peek() == -1);
            keymap[i] = Serial.read();
        }

        arduboy.println("Loading program... ");
        arduboy.print(programLength);
        arduboy.println(" bytes total");
        arduboy.display();

        while (Serial.peek() == -1);
        for (unsigned int i = 0; i < programLength; i++) {
            machineState.ram[(0x0200 + i) % CORE_RAM_SIZE] = Serial.read();
            arduboy.setCursorX(0);
            arduboy.print("Received ");
            arduboy.print(i);
            arduboy.print(" bytes");
            arduboy.display();
        }
        for (unsigned int i = 0; i < sizeof(machineState.ram); i++)
            Serial.write(machineState.ram[i]);
    } else {
        const uint8_t* program = NULL;
        unsigned int programLen = 0;
        switch (selected) {
            case 1:
                program = BRIX;
                programLen = sizeof(BRIX);
                memcpy_P(keymap, BRIX_KEYMAP, sizeof(BRIX_KEYMAP));
                break;
            case 2:
                program = CORAX_PLUS;
                programLen = sizeof(CORAX_PLUS);
                break;
            case 3:
                program = TETRIS;
                programLen = sizeof(TETRIS);
                memcpy_P(keymap, TETRIS_KEYMAP, sizeof(TETRIS_KEYMAP));
                break;
            case 4:
                program = PARTICLE_DEMO;
                programLen = sizeof(PARTICLE_DEMO);
                break;
        }

        if (programLen < availableProgSpace) {
            if (programLen > CORE_RAM_SIZE - 0x200) {
                memcpy_P(
                    &machineState.ram[0x0200], program, CORE_RAM_SIZE - 0x200);
                memcpy_P(machineState.ram,
                         &program[CORE_RAM_SIZE - 0x200],
                         programLen - (CORE_RAM_SIZE - 0x200));
            } else {
                memcpy_P(&machineState.ram[0x200], program, programLen);
            }
        } else {
            arduboy.println("Program too large!");
            arduboy.display();

            while (true);
        }
    }

    arduboy.clear();
    arduboy.display();

#if DEBUG
    // Dump RAM to the console
    printf("ADDR: DATA");
    for (unsigned int i = 0; i < sizeof(machineState.ram); i++) {
        if (i % 16 == 0) printf("\n%04X: ", i);
        printf("0x%02X ", machineState.ram[i]);
    }
    printf("\n\n");
#endif
}

uint32_t emulationTick = micros();
#define EMULATION_FREQ 500

void loop() {
    // Tick timer and poll buttons at 60 Hz
    if (arduboy.nextFrame()) {
        arduboy.pollButtons();
        core_timerTick(&machineState);

        if (machineState.soundTimer > 0)
            audio.tone(audio.freq(440));
        else
            audio.noTone();
    };

    // Run instructions at the specified EMULATION_FREQ
    if ((micros() - emulationTick) > (1000000 / EMULATION_FREQ)) {
        emulationTick = micros();

        bool updateDisplay = core_tick(&machineState);
        if (updateDisplay) arduboy.display();
    }
}

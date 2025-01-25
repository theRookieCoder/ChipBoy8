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


// BRIX
const PROGMEM uint8_t PROGRAM[] = {
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
const uint8_t KEYMAP[] = {0x2, 0x8, 0x4, 0x6, 0xA, 0xB};

uint16_t heldKeys() {
    uint16_t heldKeys = 0;
    for (unsigned int i = 0; i < sizeof(KEYS); i++)
        heldKeys |= arduboy.pressed(KEYS[i]) << KEYMAP[i];
    return heldKeys;
}

bool getPixel(uint8_t x, uint8_t y) {
    return arduboy.getPixel(x * 2, y * 2) == WHITE;
}

void togglePixel(uint8_t x, uint8_t y) {
    uint8_t colour = getPixel(x, y) ? BLACK : WHITE;
    arduboy.drawPixel((x * 2) + 0, (y * 2) + 0, colour);
    arduboy.drawPixel((x * 2) + 0, (y * 2) + 1, colour);
    arduboy.drawPixel((x * 2) + 1, (y * 2) + 0, colour);
    arduboy.drawPixel((x * 2) + 1, (y * 2) + 1, colour);
}


// #define printf serial_printf
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


void setup() {
    arduboy.begin();
    audio.begin();

    arduboy.setFrameRate(60);
    arduboy.blank();
    arduboy.display();


    core_init(&machineState,
              PROGMEM_FONT,  // Won't actually load the font
              &heldKeys,
              &getPixel,
              &togglePixel,
              &arduboy.clear);
    // Load the font from program memory
    memcpy_P(&machineState.ram[0x200 - sizeof(PROGMEM_FONT)],
             PROGMEM_FONT,
             sizeof(PROGMEM_FONT));


    Serial.begin(115200);

    delay(1000);  // Wait for a computer to possibly setup a serial connection
    if (Serial) {
        Serial.println(availableProgSpace);
        delay(100);
        int buf;
        for (unsigned int i = 0; i < availableProgSpace; i++) {
            buf = Serial.read();
            if (buf == -1) break;
            machineState.ram[(0x0200 + i) % CORE_RAM_SIZE] = buf;
        }
    } else {
        if (sizeof(PROGRAM) < availableProgSpace) {
            if (sizeof(PROGRAM) > CORE_RAM_SIZE - 0x200) {
                memcpy_P(
                    &machineState.ram[0x0200], PROGRAM, CORE_RAM_SIZE - 0x200);
                memcpy_P(machineState.ram,
                         &PROGRAM[CORE_RAM_SIZE - 0x200],
                         sizeof(PROGRAM) - (CORE_RAM_SIZE - 0x200));
            } else {
                memcpy_P(&machineState.ram[0x200], PROGRAM, sizeof(PROGRAM));
            }
        } else {
#if DEBUG
            printf("Not enough RAM to load program.");
#endif
            while (true);
        }
    }
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

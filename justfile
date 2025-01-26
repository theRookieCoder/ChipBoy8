#!/usr/bin/env just --justfile

default: build

# Compile and upload ChipBoy8 to `port`
upload port debug="false": (build debug)
    arduino-cli upload --verify \
        --port {{ port }} \
        --fqbn arduboy:avr:arduboy

# Compile ChipBoy8 with core ram size `ram_size`
build debug="false" ram_size="1024":
    arduino-cli compile \
        --warnings all \
        --jobs 0 \
        --export-binaries \
        --fqbn arduboy:avr:arduboy \
        --build-property compiler.c.extra_flags=' \
            -DCORE_RAM_SIZE={{ ram_size }} \
            -Dprintf=serial_printf \
            -DDEBUG={{ debug }}' \
        --build-property compiler.cpp.extra_flags=' \
            -DCORE_RAM_SIZE={{ ram_size }} \
            -Dprintf=serial_printf \
            -DDEBUG={{ debug }}'

# Compile and analyse RAM usage
analyse-ram:
    avr-nm \
        --demangle \
        --radix=d \
        --size-sort \
        --reverse-sort \
        build/arduboy.avr.arduboy/ChipBoy8.ino.elf \
    | rg ' [dbv] '

default: build

upload port debug="false": (build debug)
    arduino-cli upload \
        --verify \
        --port {{ port }} \
        --fqbn arduboy:avr:arduboy

build debug="false" ram_size="1200":
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

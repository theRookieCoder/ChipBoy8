from serial.tools import list_ports
from serial import Serial
from time import sleep
from sys import argv

if len(argv) != 2:
    print("Usage: uploader ROM_FILE")
    exit(1)

program = b''
with open(argv[1], "rb") as rom_file:
    program = rom_file.read()

# Poll available ports to find an Arduino's
print("Waiting for Arduboy to connect... ", end='', flush=True)
ports = []
while len(ports) == 0:
    ports = list(list_ports.grep("ttyACM"))
print(f"✓ ({ports[0].device})")

with Serial(ports[0].device, 115200, timeout=3) as ser:
    availableProgramSpace = int(ser.readline())

    if availableProgramSpace < len(program):
        ser.close()
        print(f"Program contains {len(program)} bytes, but Arduboy only has {availableProgramSpace} bytes of usable RAM")
        exit(1)

    ser.write(f"{len(program)}".encode())
    keys = ["Up", "Down", "Left", "Right", "A", "B"]
    for key in keys:
        inp = input(f"{key} button: ")
        inp = int(inp, 16)
        ser.write([inp])

    print("Uploading... ", end='', flush=True)
    ser.write(program)
    print("✓")

    print("\nRAM Dump")
    print("ADDR: DATA", end='')
    i = 0
    while True:
        data = ser.read(1)
        if len(data) != 1:
            break
        if i % 16 == 0:
            print(f"\n{i:04X}: ", end='')
        print(f"0x{data[0]:02X} ", end='');
        i += 1
    print()

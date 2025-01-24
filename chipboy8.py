from serial.tools import list_ports
from serial import Serial
from time import sleep
from sys import argv

if len(argv) != 2:
    print("Usage: chipboy8 ROM_FILE")
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
sleep(0.2) # Wait for the Arduboy to get ready

with Serial(ports[0].device, 115200, timeout=3) as ser:
    availableProgramSpace = int(ser.readline())
    if availableProgramSpace < len(program):
        print(f"Program contains {len(program)} bytes, but Arduboy only has {availableProgramSpace} bytes of usable RAM")
        exit(1)

    print("Uploading... ", end='', flush=True)
    ser.write(program)
    print("✓")

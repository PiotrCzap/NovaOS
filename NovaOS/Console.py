from Settings import *

console_input = input("> ")
print("NovaOS")

if console_input == "help":
    print("help - all system commands")
    print("ver - system version")
if console_input == "ver":
    print(system_version)
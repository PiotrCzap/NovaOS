from Settings import *
import psutil
import platform
import GPUtil

console_input = input("> ")
print("NovaOS")

if console_input == "help":
    print("help - all system commands")
    print("ver - system version")
    print("about - all system info")
if console_input == "ver":
    print(system_version)
if console_input == "about":
    print("Version 1.0")
    print(f"Memory: {memory / (1024 ** 2):.2f} MB")
    print("CPU:", platform.processor())
    print("CPU Cores: ", physical_cores)
    print("CPU threads: ", logical_cores)
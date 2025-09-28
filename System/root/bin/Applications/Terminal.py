import psutil
import platform
import os
import shutil
import time
import subprocess
import sys

system_version = "1.0"

while True:
    Terminal_Input = input("> ")

    def help_command():
            print("help - all system commands")
            print("ver - system version")
            print("about - all system info")
            print("mktxt - making txt file")
            print("nvo.install [any package] - packages installer")
            print("clear - Cleaning Console")
            return
    
    def clear_command():
            os.system("cls")

    def ver_command():
            print(system_version)
            return

    def mktxt_command():
            print("ENTER FILE NAME")
            txt_file_name = input()

            with open(txt_file_name, "w") as txt_file:
                txt_file.write("")
                shutil.move("Desktop")
                return


    def about_command():
            physical_cores = psutil.cpu_count(logical=False)
            logical_cores = psutil.cpu_count(logical=True)
            memory = psutil.virtual_memory().total
            print("Version 1.0")
            print(f"Memory: {memory / (1024 ** 2):.2f} MB")
            print("CPU:", platform.processor())
            print("CPU Cores: ", physical_cores)
            print("CPU threads: ", logical_cores)

    if Terminal_Input == "help":
        help_command()
    if Terminal_Input == "clear":
        clear_command()
    if Terminal_Input == "ver":
        ver_command()
    if Terminal_Input == "about":
        about_command()
    if Terminal_Input == "mktxt":
        mktxt_command()
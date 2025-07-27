from Settings import *
import psutil
import platform
import os
import shutil
import time
import subprocess

games_console_packages = False

nvo_packages = {
    "games-console"
}
while True:
    console_input = input("> ")

    def help_command():
        print("help - all system commands")
        print("ver - system version")
        print("about - all system info")
        print("mktxt - making txt file")
        print("nvo.install [any package] - packages installer")
        print("clear - Cleaning Console")
        print("exit - shutdowning system")
        print("gui - start GUI")
        return

    def gui():
        print("gui")
        

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
        print("Version 1.0")
        print(f"Memory: {memory / (1024 ** 2):.2f} MB")
        print("CPU:", platform.processor())
        print("CPU Cores: ", physical_cores)
        print("CPU threads: ", logical_cores)

    if console_input == "help":
        help_command()

    if console_input == "ver":
        ver_command()

    if console_input == "about":
        about_command()

    if console_input == "mktxt":
        mktxt_command()

    if console_input == "nvo.install":
        print("nvo.install [package-name]")

    if console_input == "nvo.install games-console":
        print("Collecting Package [0%]")
        time.sleep(0.5)
        print("Collecting Package [25%]")
        time.sleep(1)
        print("Collecting Package [50%]")
        time.sleep(1.5)
        print("Collecting Package [75%]")
        time.sleep(2)
        print("Collecting Package [100%]")
        time.sleep(1)
        print("Installing games-console.console [0%]")
        time.sleep(1)
        print("Installing games-console.console [30%]")
        time.sleep(1.5)
        print("Installing games-console.console [70%]")
        time.sleep(2)
        print("Installing games-console.console [100%]")
        time.sleep(1)
        print("Install Complete")
        games_console_packages = True
        time.sleep(1)
        os.system("cls")
    
    if console_input == "clear":
        clear_command()
    if console_input == "":
        pass
    if console_input == "exit":
        break
    if console_input == "gui":
        gui()
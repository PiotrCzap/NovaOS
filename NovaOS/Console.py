from Settings import *
import psutil
import platform
import os
import shutil

console_input = input("> ")

def help_command():
    print("help - all system commands")
    print("ver - system version")
    print("about - all system info")
    print("mktxt - making txt file")

def ver_command():
    print(system_version)

def mktxt_command():
    print("ENTER FILE NAME")
    txt_file_name = input()
    
    with open(txt_file_name, "w") as txt_file:
        txt_file.write("")
        shutil.move("Desktop")


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


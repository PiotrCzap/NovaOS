import os
import subprocess
import time
import urllib.request
import tarfile
import glob

print("Preparing...")

os.makedirs("root", exist_ok=True)
os.makedirs("root/sys", exist_ok=True)
os.makedirs("root/boot", exist_ok=True)
os.makedirs("root/bin", exist_ok=True)
os.makedirs("root/tmp", exist_ok=True)
os.makedirs("root/run", exist_ok=True)
os.makedirs("root/usr", exist_ok=True)
os.makedirs("root/config", exist_ok=True)

time.sleep(1)

print("Downloading System Resources...")

# Link i nazwa tymczasowego pliku
url = "https://github.com/PiotrCzap/NovaOS/releases/download/Development/NovaOS.tar.gz"
archive_name = "NovaOS.tar.gz"

urllib.request.urlretrieve(url, archive_name)

print("Extracting System Resources...")

with tarfile.open(archive_name, "r:gz") as tar:
    tar.extractall(path="root")

print("Installing system...")

OUTPUT_BINARY = "root/sys/NovaOS"

SOURCE_FILES = glob.glob("root/**/*.c", recursive=True)

if not SOURCE_FILES:
    print("Error: Installer cannot find any SOURCE Files!")
else:
    compile_command = ["gcc"] + SOURCE_FILES + ["-o", OUTPUT_BINARY]
    result = subprocess.run(compile_command, capture_output=True, text=True)

    if result.returncode == 0:
        pass
    else:
        print("Download Failed!")


print("Cleaning...")

os.remove(archive_name)

print("Installation completed successfully!")
print("Rebooting...")
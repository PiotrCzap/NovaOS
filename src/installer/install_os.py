import os
import subprocess

# 1. Tworzymy główny folder (bezpieczna wersja, która nie wywali błędu)
os.makedirs("NovaOS", exist_ok=True)

print("Downloading Sources...")

# 2. Główny adres repozytorium (Git pobierze stąd wszystko, w tym folder 'src')
url = "https://github.com/PiotrCzap/NovaOS.git"

# Klonujemy bezpośrednio do utworzonego folderu "NovaOS"
# (Zadziała, bo folder jest jeszcze pusty!)
install = subprocess.run(["git", "clone", url, "NovaOS"])

if install.returncode == 0:
    print("Pobrano pomyślnie!")
    
    # 3. Skoro pliki już się pobrały, teraz bezpiecznie dorzucamy podfoldery systemowe
    os.makedirs("NovaOS/root", exist_ok=True)
    os.makedirs("NovaOS/bin", exist_ok=True)
    os.makedirs("NovaOS/tmp", exist_ok=True)
    os.makedirs("NovaOS/sys", exist_ok=True)
    
    print("Struktura katalogów wewnątrz NovaOS została przygotowana.")
    
    # Teraz w folderze NovaOS masz zarówno pobrany z GitHuba katalog 'src',
    # jak i nowo utworzone foldery systemowe!
    
else:
    print("Coś poszło nie tak przy pobieraniu.")
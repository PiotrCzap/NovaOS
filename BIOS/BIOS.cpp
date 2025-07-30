#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

int Selected_Function = 0;

void Central_Menu()
    {
        std::cout << "====================\n";
        std::cout << " > Power off        \n";
        std::cout << "   Return to NovaOS \n";
        std::cout << "                    \n";
        std::cout << "====================\n";
    }

void Central_Menu2()
    {
        std::cout << "====================\n";
        std::cout << "   Power off        \n";
        std::cout << " > Return to NovaOS \n";
        std::cout << "                    \n";
        std::cout << "====================\n";
    }




int main() {
    std::cout << "====================\n";
    std::cout << " > Power off        \n";
    std::cout << "   Return to NovaOS \n";
    std::cout << "                    \n";
    std::cout << "====================\n";
    while (true) {
        if (_kbhit()) {
            int klawisz = _getch();
                

            if (klawisz == 224) { // klawisz specjalny (np. strzałka)
                klawisz = _getch(); // drugi bajt — konkretny kod

                if (klawisz == 80) { // 80 = strzałka w dół
                    system("cls");
                    Central_Menu2();
                }
                if (klawisz == 72)
                {
                    system("cls");
                    Central_Menu();
                }
                
            }
        }
    }
    return 0;
}

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

void Central_Menu2()
    {
        std::cout << "====================\n";
        std::cout << "   Power off        \n";
        std::cout << " > Return to NovaOS \n";
        std::cout << "                    \n";
        std::cout << "====================\n";
    }

int main() {
    while (true) {
        if (_kbhit()) {
            int klawisz = _getch();
                

            if (klawisz == 224) {
                klawisz = _getch();

                if (klawisz == 80) {
                    system("cls");
                    Central_Menu2();
                    Selected_Function = 0;
                }
                if (klawisz == 72)
                {
                    system("cls");
                    Central_Menu();
                    Selected_Function = 1;
                }
                
            }
        }
    }
    return 0;
}

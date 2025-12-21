
#include "clsScreen.h"

#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>

void clsScreen::_RedWarningScreen(string message)
{
    system("cls");
    std::cout << "\t\t\t\t\t______________________________________";
    std::cout << "\n\n\t\t\t\t\t\t    !!! WARNING !!!\n";
    std::cout << "\n\t\t\t\t\t   " << message ;
    std::cout << "\n\t\t\t\t\t______________________________________\n\n";
    

    for (int i = 0; i < 3; i++)
    {
        system("color 4F");
        Beep(800, 300);

        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        system("color 0F");
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

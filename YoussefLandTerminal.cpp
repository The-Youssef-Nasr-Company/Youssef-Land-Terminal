// Youssef Land Terminal: This file (YoussefLandTerminal.cpp) contains the 'main' function. Program execution begins and ends there.
// This file supports iostream and string. It even supports termcolor and windows.


#include <iostream>
#include <string>
#include "termcolor.hpp"
#include <windows.h>

using namespace std;
using namespace termcolor;
int main()
{
    char array_char[200]; 
    char out_sys[200];
    std::cout << "Youssef Land Terminal. The command quest for easy. © 2021-2022 Youssef Land. All rights reserved.\n";
    std::cout << "Bash started. Have fun with Youssef Land Terminal!\n";
    
    while (1)
    {
        //std::cin >> array_char; That "bashy" code does not support spaces
        std::cout << termcolor::bright_green << "youssef-land";
        std::cout << "@";
        std::cout << "win11";
        std::cout << termcolor::white << ":";
        std::cout << termcolor::bright_blue;
        std::cout << "~/Desktop/Youssef Land Quick Tests/Youssef Land Terminal";
        std::cout << termcolor::white << "$ ";
        cin.getline(array_char, 200);
        if (strcmp(array_char, "") == 0)
        {
            std::cout << termcolor::yellow << "WARNING: Youssef Land Terminal: You entered nothing.\n";
            std::cout << termcolor::white;
        }
        else if (strcmp(array_char, "cmd") == 0)
            system("cmd");
        else if (strcmp(array_char, "cd") == 0)
        {
            system("cd");
            system(array_char);
        }
        else if (strcmp(array_char, "dir") == 0)
            system("dir");
        else if (strcmp(array_char, "ls") == 0)
            system("dir");
        else if (strcmp(array_char, "mkdir") == 0)
        {
            system("mkdir");
            system(array_char);
        }
        else if (strcmp(array_char, "kill") == 0)
            break;
        else if (strcmp(array_char, "close") == 0)
            break;
        else if (strcmp(array_char, "exit") == 0)
            break;
        else if (strcmp(array_char, "break") == 0)
            break;
        else if (strcmp(array_char, "stop") == 0)
            break;
        else if (strcmp(array_char, "abort") == 0)
            break;
        else if (strcmp(array_char, "help") == 0)
        {
            std::cout << "Enter 'stop', 'kill' 'break', 'close', 'exit' or 'abort' on Youssef Land Terminal to abort current session.\n";
            std::cout << "Enter 'help' on Youssef Land Terminal to get help on current session.\n";
            std::cout << "Enter 'dir' or 'ls' on Youssef Land Terminal to show directory where Youssef Land Terminal is.\n";
            std::cout << "Enter 'about' to know about this terminal (available since 0.0.1 beta 3).\n";
            std::cout << "Enter nothing to see the bash warning message 'You entered nothing'.\n";
            std::cout << "Enter gibberish and basic stuff (except for C++-programmed commands programmed in C++ and code in C++ for Youssef Land Terminal) to see the error message '\"ENTERED TEXT HERE\" does not have C++ code for Youssef Land Terminal to work with'.\n";
        }
        else if (strcmp(array_char, "#ff0000") == 0)
        {
            std::cout << termcolor::red << "Hex code #FF0000 = color red\n";
            std::cout << termcolor::white;
        }
        else if (strcmp(array_char, "#FF0000") == 0)
        {
            std::cout << termcolor::red << "Hex code #FF0000 = color red\n";
            std::cout << termcolor::white;
        }
        else if (strcmp(array_char, "clear all lines") == 0)
            system("powershell clear");
        else if (strcmp(array_char, "about") == 0)
        {
            std::cout << "Youssef Land Terminal version ";
            std::cout << termcolor::green << "0.0.1 Beta 3 (a beta version)\n";
            std::cout << termcolor::white << "A terminal made of C++ with Visual Studio 2022 (Preview in 2021).\n";
            std::cout << "Copyright (C) 2021-2022 Youssef Land. All rights reserved.\n";
        }
        else
        {
            //std::cout << "You entered: ";
            //std::cout << array_char;
            //std::cout << "\n";
            std::cout << termcolor::red << "ERROR:";
            std::cout << termcolor::red << " Youssef Land Terminal: '";
            std::cout << termcolor::red << array_char;
            std::cout << termcolor::red << "' does not have C++ code for Youssef Land Terminal to work with.\n";
            std::cout << termcolor::white;
        }
    }

}

// Run program without debug: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

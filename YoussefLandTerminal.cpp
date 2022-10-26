#include <iostream>
#include <string>
#include "termcolor.hpp"
#include <windows.h>

using namespace std;
using namespace termcolor;
int main()
{
    char array_char[200]; 
    char out_sys[196];
    char dbg[5];

    system("title Youssef Land Terminal");
    std::cout << "Youssef Land Terminal. The command quest for easy. Copyright (c) 2021-2022 Youssef Land. All rights reserved.\n";
    std::cout << "Bash started. Have fun with Youssef Land Terminal!\n";
    
    while (1)
    {
        //std::cin >> array_char; That "bashy" code does not support spaces
        std::cout << termcolor::bright_green << "youssef-land";
        std::cout << "@";
        std::cout << "win11";
        std::cout << termcolor::white << ":";
        std::cout << termcolor::bright_blue;
        std::cout << "~/Desktop/Youssef Land Quick Tests/Youssef Land Terminal $ ";
        std::cout << termcolor::white;
        cin.getline(array_char, 200);
        dbg[0] = array_char[0];
        dbg[1] = array_char[1];
        dbg[2] = array_char[2];
        dbg[3] = array_char[3];
        dbg[4] = '\0';
        //std::cout << termcolor::blue << dbg;
        if (strcmp(array_char, "cmd") == 0)
            system("cmd");
        else if (strcmp(array_char, "dir") == 0)
            system("powershell ls");
        else if (strcmp(array_char, "ls") == 0)
            system("powershell ls");
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
            std::cout << "Enter gibberish and basic stuff (except for code in C++ for Youssef Land Terminal) to see the error message '\"ENTERED TEXT HERE\" does not have C++ code for Youssef Land Terminal to work with'.\n";
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
            std::cout << "Copyright (c) 2021-2022 Youssef Land. All rights reserved.\n";
        }
        else if (strcmp(array_char, "") == 0)
        {
            system;
        }
        else if (strcmp(dbg, "say ") == 0)
        {
            for (int k = 0; k < 196; k++) {
                out_sys[k] = array_char[k+4];
            }
            
            std::cout << termcolor::white << out_sys;
            std::cout << "\n";
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

// Youssef Land Terminal: This file (YoussefLandTerminal.cpp) contains the 'main' function. Program execution begins and ends there.
// This file supports iostream and string. It even supports termcolor and windows.


#include <iostream>
#include <string>
#include "termcolor.hpp"
#include <windows.h>

using namespace std;
using namespace termcolor;

namespace YoussefLand 
{
    int Intranet_Internal_Things = 10;

    namespace anonymous
    {
        int anony, non_visible = true;
        using namespace Intranet;
        using namespace Internal_Forever;
    }
    
    namespace Intranet
    {
        int Internal = 2;
        namespace Internal_Forever
        {
            int Commands = 200;

            using namespace Intranet;

            namespace Hackathon 
            {
                int Hacking = true;
            }

            namespace YoussefLandForever
            {
                using namespace Internal_Forever;
                using namespace YoussefLand;
                int Forever = true;
                int Temporary = false;
                int Permanent = true;
                int Command_Line = Commands;
                namespace Youssef_Land_Code
                {
                    int Code = true;
                    const char * Terminal_Copying = "CTRL" + "<c>";
                    const char * Terminal_Pasting = "CTRL" + "<v>";
                }
            }
        }
    }
}



int main()
{
    char array_char[200]; 
    char out_sys[200];
    std::cout << "Youssef Land Terminal. The command quest for easy. Copyright (C) 2021 Youssef Land. All rights reserved.\n";
    std::cout << "Bash started. Have fun with Youssef Land Terminal!\n";
    
    while (1)
    {
        //std::cin >> array_char; // That "bashy" code does not support spaces
        std::cout << "Youssef Land Quick Tests/Youssef Land Terminal >>> ";
        cin.getline(array_char, 200);
        if (strcmp(array_char, "") == 0)
        {
            std::cout << termcolor::yellow << "WARNING: bash: You entered nothing.\n";
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
        else if (array_char[0] == 'c' && array_char[1] == 'd' && array_char[2] == ' ')
        {
            string add_str = string(array_char) + " && cd";
            strcpy_s(out_sys, add_str.c_str());
            //std::cout << out_sys;
            system(out_sys);

        }
        else if (strcmp(array_char, "kill")==0)
            break;
        else if (strcmp(array_char, "close")==0)
            break;
        else if (strcmp(array_char, "exit")==0)
            break;
        else if (strcmp(array_char, "break")==0)
            break;
        else if (strcmp(array_char, "stop")==0)
            break;
        else if (strcmp(array_char, "abort")==0)
            break;
        else if (strcmp(array_char, "help")==0) 
        {
            std::cout << "Enter 'stop', 'kill' 'break', 'close', 'exit' or 'abort' on Youssef Land Terminal to abort current session.\n";
            std::cout << "Enter 'help' on Youssef Land Terminal to get help on current session.\n";
            std::cout << "Enter 'cd', 'dir' or 'ls' on Youssef Land Terminal to show directory where YoussefLandTerminal.exe is.\n";
            std::cout << "Enter nothing to see the bash warning message 'You entered nothing'.\n";
            std::cout << "Enter gibberish and basic stuff (except for C++-programmed commands programmed in C++ and code in C++ for Youssef Land Terminal) to see the bash error message 'The text you entered was not programmed as a C++ command or C++ code for Youssef Land Terminal'.\n";
        }
        else
        {
            //std::cout << "You entered: ";
            //std::cout << array_char;
            //std::cout << "\n";
            std::cout << termcolor::red << "ERROR:";
            std::cout << termcolor::red << " bash: The text you entered was not programmed as a C++ command or C++ code for Youssef Land Terminal.\n";
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

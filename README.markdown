# Youssef Land Terminal

Welcome to Youssef Land! In this "bashy" part of Youssef Land we are referencing __Youssef Land Terminal__! So, on this project, we are including "iostream" for its functions of C++. We used string.h as well.

## Overview

So, we have things to finish this project up, like:

- [x] making a string array
- [ ] getting into directories
- [x] making a command to __kill__ the project
- [x] making "while" functions
- [x] making functions 
- [ ] making bash errors

## How it works

This is how it works on C++-source-style. See here:

```cpp
// YoussefLandTerminal.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include  <iostream>
#include  <string>

using namespace std;

int main()
{
    char array_char[200]; 
    std::cout << "Youssef Land Terminal. The command quest for easy. Copyright (C) Youssef Land https://github.com/The-Youssef-Nasr-Company/Youssef-Land. All rights reserved.\n";
    std::cout << "Bash started. Have fun!\n";
    
    while (1) {
        //std::cin >> array_char;
        std::cout << "Youssef Land Quick Tests $ ";
        cin.getline(array_char,200);
        std::cout << "You entered: ";
        std::cout << array_char;
        std::cout << "\n";
        if (strcmp(array_char, "kill")==0)
            break;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
```

In the future, this example will be removed because:
* it will be edited.
* it will have source code improvements on [Visual Studio](https://visualstudio.microsoft.com)'s IDE of C++.
* it will never return once example is removed from __`README.markdown`__.
* [Visual Studio](https://visualstudio.microsoft.com) will stop all this basic work for _funny_ reasons of terminal AND command building.
* more updates are coming soon with __log files__ along with the .log extension.

// YoussefLandTerminal.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include  <iostream>
#include  <string>

using namespace std;

int main()
{
    char array_char[200]; 
    std::cout << "Youssef Land Terminal. The command quest for easy. Copyright (C) Youssef Land https://github.com/The-Youssef-Nasr-Company/Youssef-Land. All rights reserved.\n";
    std::cout << "Youssef Land Terminal bash start\n";
    
    while (1) {
        //std::cin >> array_char;
        std::cout << "Youssef Land Quick Tests >>> ";
        cin.getline(array_char,200);
        std::cout << "You entered: ";
        std::cout << array_char;
        std::cout << "\n";
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

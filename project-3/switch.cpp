// switchcalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
     float a, b;
    char oper;
    std::cout << "enter the two numbers " << std::endl;
    std::cin >> a >> b;
    std::cout << "enter the operator " << std::endl;
    std::cin >> oper;
    switch (oper)
    {
    case '+':
        std::cout << a + b;
        break;

    case '-':
        std::cout << a - b;
        break;
    case '*':
        std::cout << a * b;
        break;
    case '%':
        std::cout << a - b;
        break;
    case '/':
        std::cout << a / b;
        break;

    default:
        std::cout << "novalidoperation";
        break;
    }

    

}

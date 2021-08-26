#include <iostream>

int main()
{
    double num1, num2;
    
    std::cout << "enter your first number :" << std::endl;
    std::cin >> num1;
    
    std::cout << "enter your second number :" << std::endl;
    std::cin >> num2;
    std::cout << "the result of addition is  :" << num1+num2 <<std::endl;
    std::cout << "the result of sub is  :" << num1 - num2 << std::endl;
    std::cout << "the result of multi is  :" << num1 * num2 << std::endl;
    std::cout << "the result of mod is  :" <<(int) num1 % (int)num2 << std::endl;
}


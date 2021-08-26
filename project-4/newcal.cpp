#include <iostream>

int main()
{
    double num1, num2;
    char op;

    std::cout << "enter your first number :" << std::endl;
    std::cin >> num1;
    std::cin >> op;

    std::cout << "enter your second number :" << std::endl;
    std::cin >> num2;

    if (op == '+') {

        std::cout << "the result of addition is  :" << num1+ num2 << std::endl;
    }
    else if (op == '-') {
        std::cout << "the result of sub is  :" << num1 - num2 << std::endl;
    }
    else if (op == '*') {
        std::cout << "the result of multi is  :" << num1 * num2 << std::endl;
    }
    else {
        std::cout << "notworking";
    }

}

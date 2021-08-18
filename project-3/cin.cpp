#include <iostream>

int main()
{
    std::cout << "enter your salary   ";
    float annualsalary;
    std::cin >> annualsalary;
       
    float montlysalary = annualsalary / 12;

    std::cout <<"your montly salary is : "<< montlysalary;
}

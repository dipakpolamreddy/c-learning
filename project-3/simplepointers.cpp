
#include <iostream>

int main()
{
    int a = 5;
    int* p;     // or int *p=&a are equal
    p = &a;
    

    std::cout << "a:" << &a << std::endl;
    std::cout << "*p:" << *p << std::endl;
    *p = 10;
    std::cout << "a: " << a << std::endl;
}


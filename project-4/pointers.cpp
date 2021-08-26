#include <iostream>

int main()
{
    int age=10;
    int *page = &age;
    int grade = 70;
    int* pgrade=&grade;

    std::cout <<*page <<std::endl;
    std::cout << page << std::endl;
    std::cout << *pgrade << std::endl;
    std::cout << pgrade << std::endl;
    std::cout << &*&page << std::endl;

}

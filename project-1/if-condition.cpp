#include <stdio.h>
#include <iostream>

int main()
{
    int age;
    std::cout << "how old are you : " << std::endl;
    std::cin >> age;
    if (age < 18)
    {
        std::cout << "you are minor";
    }
    else if (age >18){
        std::cout << "you are major" << std::endl;
    }

    else {
        std::cout << "you are kid ";
    }
    return 0;


}

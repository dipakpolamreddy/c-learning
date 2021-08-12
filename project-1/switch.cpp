
#include <stdio.h>
#include <iostream>

int main()
{
    int age;
    std::cout << "enter the age :";
    std::cin >> age;

    switch (age) {

    case 14:
        std::cout << "you are minor!";
        break;
    case 21:
        std::cout << "you are major!";
        break;

    default:
        std::cout << "catch all !";
        break;
    }


    enum season{summer,winter,spring,rainy};    //Enum Defining 
    season now =winter;
  
    switch (now ) {
    case summer:
        std::cout << "Put a Ac in your home!";
        break;
        
    case winter:
        std::cout << "warm up all!";
        break;

    default:
        break;

    }

    
}


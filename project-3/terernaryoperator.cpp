
#include <iostream>

int main()
{
    int hostusernum;
    int guestusernum;

    std::cout << "Enter the hostnum: " << std::endl;
    std::cin >> hostusernum;
    system("cls");

    std::cout << "guestusernum: " << std::endl;
    std::cin >> guestusernum;
    (hostusernum == guestusernum) ? std::cout << "you win!\n" : std::cout << "you lost!\n";

    /*
       
        if (hostusernum == guestusernum) {

            std::cout << "you win!" << std::endl;
        }
        else {
            std::cout << "you lost!" << std::endl;
        }
        */
        system("pause ");
    
}


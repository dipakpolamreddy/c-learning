
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include <array>

void print_temple(std::array <int,251> data, int count) {

    for (int i = 0; i < count; i++) {

        std::cout << data[i] << '\t';


    }
    std::cout << '\n';
}

void randyorton() {

    std::array  <int,251> guesses;
    int count = 0;


    int random = rand() % 251;

    std::cout << "the Random number is : " << random << std::endl;
    std::cout << " Guess the Random Number :";


    while (true)
    {

        int guess; 
        std::cin >> guess;

        
        guesses[count++] = guess;

        if (guess == random)
        {

            std::cout << " you won the game !";
            break;
        }
        else if (guess < random)
        {
            std::cout << " Too low !  '\n' " << std::endl;

        }
        else
        {
            std::cout << " Too High!  '\n '" << std::endl;
        }

    }
    print_temple(guesses,count);


}


int main()
{
    int input;

    do {


        std::cout << "0.quit" << std::endl; std::cout << "1.playgame for random Number " << std::endl; std::cout << "2.playgame for Password Guessing" << std::endl;

        std::cout << "enter the options :";
        std::cin >> input;
        switch (input) {

        case 0:
            std::cout << "you Quit the game! " << std::endl;
            break;
        case 1:
            std::cout << "you Entered into Randow Number Guessing ! " << std::endl;
            randyorton();
            break;

        case 2:
            std::cout << "you Entered into Password Guessing! " << std::endl;

            break;
        }

    } while (input != 0);


}

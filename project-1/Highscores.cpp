
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include <fstream>

void print_vector(std::vector <int> vector) {

    for (int i = 0; i <vector.size(); i++) {

        std::cout << vector[i] << '\t';


    }
    std::cout << '\n';
}

void randyorton() {

    std::vector<int> guesses;
    
    int count=0;
    int random = rand() % 251;

    std::cout << "the Random number is : " << random << std::endl;
    std::cout << " Guess the Random Number :";


    while (true)
    {

        int guess;
        std::cin >> guess;
        count++;
        guesses.push_back(guess);


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
    print_vector(guesses);

    std::ifstream input("hello.txt");
    if (!input.is_open() ){
        std::cout << " unable to oper the file ";
        return;
    }
    int best_score;
    input >>best_score;

    std::ofstream output("hello.txt");
        if (!input.is_open()) {
            std::cout << " unable to oper the file ";
                return;
        }
        if (count << best_score) {
            output << count;
        }
        else {
            output << best_score;
        }

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

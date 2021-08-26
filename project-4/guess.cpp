
#include <iostream>

int main()
{
    int guessnum = 7; int guess;
    int  guesscount = 0;
    int guesslimit = 3;
   do  {
        std::cout << "guess your num :" << std::endl;
        std::cin >> guess;
        if (guessnum == guess) {
            std::cout << "you win!" << std::endl;
            break;
        }
       
        guesscount++;

   } while (guesscount < guesslimit);
}

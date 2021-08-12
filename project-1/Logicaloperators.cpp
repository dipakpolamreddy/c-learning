
#include <stdio.h>
#include <iostream>
#include <string>
int main()
{
    std::string name_guess = "tester";
    std::cout << "Guess the name : " << std::endl;
    std::string name_answer;
    std::cin >> name_answer;


    int age_guess=45;
    std::cout << "Guess the age  : " << std::endl;
    int age_answer;                                                         /* logical operators are //&&  // || //!*/
                                                                            /*comparsion operators < , > <= >= != == */
    std::cin >> age_answer;
    if (name_guess==name_answer && age_guess == age_answer)
    {
        std::cout << "you both guess are right ";
    }
    else if (name_guess == name_answer ||  age_guess == age_answer) {
        std::cout << "you are one answer is right " << std::endl;
    }

    else {
        std::cout << "thank You! ";

    }
    return 0;


}



#include <iostream>

int main()
{
    int i = 1;
    do {

        std::cout << i << std::endl;
        i++;


    } while (i < 10);

    std::string guess_password = "password123";
    std::string answer;
    

    do {
             std::cout << "guess the password : ";
            std::cin >> answer;
            std::cout << "you got access ! ";


    } while ( answer !=guess_password);
}

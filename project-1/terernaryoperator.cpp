
#include <iostream>

int main()
{
    int guess =11;
    int answer;
    std::cout << "guess :";
    std::cin >> answer;

    int points = guess == answer ? 10 : 0;  //ternary declaration
    std::cout << points;
}

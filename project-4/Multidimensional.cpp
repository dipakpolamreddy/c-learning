#include <iostream>

int main()
{
    int number[3][2] = {

        {1,2},{3,4},{5,6}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << number[i][j] << std::endl;
        }
        std::cout << std::endl;
    }
   
}

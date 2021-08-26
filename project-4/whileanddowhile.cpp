#include <iostream>

int main()
{
    int i=0;
    while (i < 5) {
        std::cout << i<<std::endl;
        i++;
    }
    int j = 0;
    do {
        std::cout << j << std::endl;
        j++;
    } while (j < 10);
}


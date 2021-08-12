
#include <iostream>

int main()
{
    const int x = 10;  //prefixing constants
    enum {y =100};     //enum constants

    std::cout << x << std::endl;

    std::cout <<y << std::endl;
}

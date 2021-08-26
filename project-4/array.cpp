#include <iostream>

int main()
{
    int array[] = { 1,2,3,4,5,6,7 };
    std::cout << array[0] << std::endl;
    array[0] = 10;
    std::cout << array[0];
}

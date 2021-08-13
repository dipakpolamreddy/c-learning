#include <iostream>

int main()
{
    int gusses[10] = { 10,12,34,45,20 };             // index of arrays always size-1

    int size = sizeof(gusses) / sizeof(gusses[0]); //get the size of arrays values will be 10
    for (int i = 0; i <size; i++) {

        std::cout << gusses[i] << std::endl;
    }
    return 0;
}

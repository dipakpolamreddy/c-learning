#include <stdio.h>
#include <iostream>

void increment(int *p) {           //calling the address [call by reference ]
    *p = (*p) + 1;

}
int main()
{
    int a = 10;
    int* p;
    p = &a;
    increment(&a);
    std::cout <<a;
}

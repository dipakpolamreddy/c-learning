
#include <Windows.h>
#include <intrin.h>
#include <iostream>

int main()
{
     volatile LONG64 a = 5;
     volatile LONG64 b;
     b=InterlockedAdd64(&a, 5);                                       //interloced Add
     std::cout << "Addition " << b << std::endl;

     volatile LONG64 x=10;
     volatile LONG64 y;
     y = InterlockedIncrement64(&x);                                  //interlocked Increment
     std::cout << "Increment " << y << std::endl;

}

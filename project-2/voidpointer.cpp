#include <stdio.h>
#include <iostream>
int main()
{
    int a = 1025;
    int* p;
    p = &a;
    std::cout << "address : " << *p << "   " << p << '\n';
    std::cout << "address : " << *(p + 1) << "   " << p + 1 << '\n';

    void * p0;                  //void pointer
    p0 = p;

    std::cout << "address : " << p0 << '\n';
  


}
 


#include <iostream>

int main()
{
    int a = 10;
    int *p;
    p = &a;
   
    *(p + 1) = 6;
   int  b = *(p + 1);

    std::cout << p << '\n';
    std::cout << p+1 << '\n';

    std::cout << b;
    
}
 

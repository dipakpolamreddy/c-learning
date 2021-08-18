#include <iostream>

int add(int a, int b) {
    int c = a + b;
    return c;
}

int main()
{
    int c;
    int (*p)(int, int);                 //declaring a function pointer
    p = &add;                           //function name that would return  us pointer
    c = (*p)(2, 3);                     //dereferencing and executing the  function      

    std::cout << c;
}

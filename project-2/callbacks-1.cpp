#include <iostream>

void A()
{
    std::cout << "hello";
}
void B(void (*ptr)()) {             //function pointer as a argument

    ptr();                          //call back function that 'ptr' that points to 
   
}

int main()
{
    B(A);                   //A is  callback function
}

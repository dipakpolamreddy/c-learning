#include <iostream>

int main()

{
    int a;                                                   //goes on stack
    int* p;
  
    p = new int;                                             //dynmaic memory creation
    *p = 10;
    std::cout <<"address :   "<< p << '\n';
    std::cout << *p << '\n';
                                                            //if we add the delete p; the address will be change
    p = new int;
    *p = 20;
    std::cout << "address :   " <<  p << '\n';
    std::cout << *p << '\n';

    
}
       

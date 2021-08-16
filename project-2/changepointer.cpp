#include <iostream>

int main()
{
    int a=8;
    int* p;     

    p = &a;  //&address of a 
    std::cout <<"a :"<< p <<'\n';
    std::cout << "a :" << *p << '\n';

     
    int b = 20;
    *p = b;         //after declaring *p =b it change pointer variable to b's variable value
    std::cout << "b :" << *p << '\n';

}

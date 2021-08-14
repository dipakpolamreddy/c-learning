#include <iostream>

void reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

   
}
int main()
{
    int a = 10;
    int b = 20;

    reference(a, b);
    std::cout << "a :" << a << '\t'; std::cout << "b : " << b << '\t';
    
}

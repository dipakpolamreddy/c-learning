#include <string>
#include <iostream>

void reference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;


}
void reference(std::string &a, std::string &b) {
    std::string  temp;
     temp=a;
    a = b;
    b = temp;


}


int main()
{
    int a = 10;
    int b = 20;
    std::string firstname = "cscclabs";
    std::string lastname = "xprotect";

    reference(a,b);
    reference(firstname, lastname);
    
    std::cout << "a :" << a << '\t'; std::cout << "b : " << b << '\t';
    std::cout << "firstname :" << firstname<< '\t'; std::cout << "lastname : " << lastname << '\t';

}



#include <iostream>

int main()
{
    int year = 1993;
    char character = 'f';
    float marks = 78.9;
    bool isage18 = true;
    double balance = 45677888976;
    std::string name = "arjun reddy";

    std::cout <<"size of int : " << sizeof(int) << std::endl;
   
    std::cout << "size of int_Min : " << INT_MIN<< std::endl;
    // -1,-2,-3,.....-21347483648
    std::cout << "size of int_max : " << INT_MAX<< std::endl;
    // 0,+1,+2,+3,.....+21347483647
    std::cout << "size of char : " << sizeof(char) << std::endl;
    std::cout << "size of float : " << sizeof(float) << std::endl;
    std::cout << "size of bool : " << sizeof(bool) << std::endl;
    std::cout << "size of double : " << sizeof(double) << std::endl;
   
}

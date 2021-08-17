// multidimensioanlarray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    int b[2][3] = { {1,2,3},{4,5,6} };
    int (*p)[2][3] = &b;

    
    std::cout << "b :" << b << '\n';
    std::cout << "*b :" << *b << '\n';
    std::cout << "b[0] :" << b[0] << '\n';
    std::cout << "b[0][1] :" << b[0][1] << '\n';
    std::cout << "&b :" << &b[0][1] << '\n';
    std::cout << "*p :" << *p << '\n';
    std::cout << "*p+1 :" << *(p+1) << '\n';
    std::cout << "*b :" << *b << '\n';
    std::cout << "*p[0][0] :" << *p[0][0] << '\n';
    
        /*
    for (int i = 0; i < 2; ++i) {

        // access columns of the array
        for (int j = 0; j < 3; ++j) {
            std::cout << b[i][j] << std::endl;
        }
    }


    */

}


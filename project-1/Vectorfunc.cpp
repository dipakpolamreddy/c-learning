// vectorforfunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void print_vector(std::vector <int> &data) {
    data.push_back(12);
    for (int i = 0; i < data.size(); i++) {

        std::cout << data[i] << '\t';
    }
    std::cout <<  '\n';
}

int main()
{
    std::vector <int> dat = { 1,2,3 };
    print_vector(dat);
    print_vector(dat);
    print_vector(dat);
    print_vector(dat);
    print_vector(dat);
   
}



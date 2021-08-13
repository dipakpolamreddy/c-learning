
#include <iostream>
#include <vector>
#include <array>

void print_temple(std::array <int,20 > input,int length ) {
    
    for (int i = 0; i < length; i++) {

        std::cout << input[i] << '\t';
    }
    std::cout << '\n';
}

int main()
{
    std::array <int, 20> data = { 1,2,3 };
    int size = 3;
    print_temple(data,size);
}

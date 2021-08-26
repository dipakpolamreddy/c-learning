#include <iostream>
int exponent(int basenum, int powernum) {
    int result = 1;
    for (int i = 0; i < powernum; i++) {
        result = result * basenum;
    }
    return result;
}

int main()
{
      
    
    std::cout << exponent(3,4);
}

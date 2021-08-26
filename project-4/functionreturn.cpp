#include <iostream>

double cube(int cube) {
    double c = cube * cube * cube;
    return c;

}
int main()
{
    
    std::cout << cube(5.0);
}

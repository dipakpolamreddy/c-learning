#include <iostream>

int sum(int a, int b) {

    return a + b;
}
double sum(double a, double b) {
    return a + b;
}
float sum(float a, float b, float c) {
    return a + b + c;
}
int main()
{
    std::cout << sum(2, 3)<<std::endl;
    std::cout << sum(4.4, 3.3)<< std::endl;
    std::cout << sum(4.4, 3.3 + 2.2)<<std::endl;

}

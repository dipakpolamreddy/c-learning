#include <iostream>
#include <cmath>

using namespace std;

double power(double base, double exponent) //defineing declaration
{

    double  result = 1;

    for (int i = 0; i < exponent; i++)
    {

        result = result * base;
    }

    return result;


}
void print_pow(double base, int exponent) {
    double  mypower = power(base, exponent);

    cout <<base<< "raise  " << exponent <<"  power is :" << mypower << endl;
}

int main()
{
    int base, exponent;
    cout << "eneter the base number : " << endl;

    cin >> base;
    cout << "eneter the exponent number : " << endl;

    cin >> exponent;
    print_pow(base, exponent);
    print_pow(4, 2);

}

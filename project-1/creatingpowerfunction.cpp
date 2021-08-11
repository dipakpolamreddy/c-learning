#include <iostream>
#include <cmath>

using namespace std;

double power(double base, double exponent) //defining declaration
{

    double  result = 1;

    for (int i = 0; i < exponent; i++) 
    {

        result = result * base;
    }

    return result;

}
int main()
{
    int base, exponent;
    cout << "eneter the base number : " << endl;

    cin >> base;
    cout << "eneter the exponent number : " << endl;

    cin >> exponent;
    double  mypower = power(base, exponent);

    cout << mypower << endl;

}

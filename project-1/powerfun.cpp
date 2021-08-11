#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int base, exponent;
    cout << "eneter the base number : " << endl;

    cin >> base;
    cout << "eneter the exponent number : " << endl;

    cin >> exponent;
    int power = pow(base, exponent);

    cout << power << endl;

}

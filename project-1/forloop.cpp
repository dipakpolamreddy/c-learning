
//program factorial in for loop 
#include <iostream>

int main()
{
    int i, f=1, n;
    std::cout << "enter the factorial you want: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {                                                    // Factorial Program

        f = f * i;
    }

    std::cout << "the output for factorial  "<< n << " is "<<f << std::endl;



    
}

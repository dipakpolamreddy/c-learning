#include <iostream>

int main()
{
    
    int i = 10;
    while (i > 0) {                              //print 10 to 1 

        std::cout << i << std::endl;
        i--;
    }

    //factorial program
    int j=1, n, f=1;
    std::cout << "enter the fact : ";
    std::cin >> n;

        while(j <= n) {

            f = f * j;
            j++;

        }
        std::cout << f << std::endl;
    
}

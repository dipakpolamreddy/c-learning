
//write a program  out all the number from 100-500 
//the output should divisible by 3 and 5
#include <iostream>

int main()
{
    int  number;
    std::cout << "enter the digits: ";
    std::cin >> number;

    if (number == 0) {

        std::cout << "you entered 0" << std::endl;
    }
    else{
        if (number < 0) {
            number = -1 * number;
        }
        int count = 0;
        while(number>0){
        
        
            number /= 10;

            count++;

        }
        std::cout << "the number of digits are : " << count << std::endl;
    }

}

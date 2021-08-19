#include <iostream>

int main()
{   
    //arthematic operators
    std::cout << 2+2 << std::endl;
    std::cout << 5%2 << std::endl;
    std::cout << 5 - 2 << std::endl;
    std::cout << 3 / 2 << std::endl;
    std::cout << 3 * 2 << std::endl;

    int counter = 7;
    counter++;
    std::cout << counter << std::endl;
    int count = 6;
    counter--;
    std::cout << count << std::endl;
    int counter2 = 7;
   //prefix 
    std::cout << ++counter2 << std::endl;
    int counter3 = 7;
    //prefix 
    std::cout << --counter3 << std::endl;

    //relational operator
    int a = 5;
        int b = 5;
    std::cout << (a>b) << std::endl;                        //greaterthan, lessthan, greater than or equal to ,lessthan or equal to , not equal to  
    std::cout << (a < b) << std::endl;
    std::cout << (a == b) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (a <= b) << std::endl;
    std::cout << (a != b) << std::endl;

    // &&,||, ! logical operators
    int x = 5;
    int y = 5;
    std::cout << (a ==5 && b==5)   << std::endl;
    std::cout << (a == 5 || b == 5) << std::endl;
    std::cout << (a == 5 != b == 5) << std::endl;

    // assignment operators +=,-=, /=,%=,
    int z = 7;
    z += 3;
    std::cout <<"check : "<< z;
        

}

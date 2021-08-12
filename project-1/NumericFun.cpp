
#include<cmath>
#include <iostream>


int main()
{
    std::cout << "output of sqrt is " << sqrt(25) << std::endl;                           //square root of 25
    std::cout << "output of remainder is : " << remainder(10.0, 3) << std::endl;         //equlient 10/3
    std::cout << "output of  is fmod : " << fmod(10.0, 3) << std::endl;                 //equlient 10/3 same as reminder
    std::cout << "output of  is fmin  :" << fmin(10, 3) << std::endl;                  //Gives the output  of minimum values
    std::cout << "output of  is fmin  :" << fmax(10, 3) << std::endl;                 //Gives the output  of maximum values
    std::cout << "output of  is floor :" << floor(2.25) << std::endl;                //crop of decimal values
    std::cout << "output of  is ceil : " << ceil(floor(-3.25)) << std::endl;        //gives the ceiling [ gives 4]
    std::cout << "output of  is round :" << round(-1.51) << std::endl;             //gives the round up value if below 4.9 =1, and greater than 5 =2
    std::cout << "output of  is Trunacate: " << trunc(-1.51) << std::endl;        // trauncare the value to 1



} 



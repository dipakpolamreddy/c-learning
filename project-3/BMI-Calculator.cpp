#include <iostream>
#include <cmath>

int main()
{
    float height;
    float weight;
    std::cout << "enter your height :" << std::endl;
    std::cin >> height;
   
    std::cout << "enter your weight :" << std::endl;
    std::cin >> weight;
    float bmi;
     bmi = weight / (height * height);                              //formula for bmi calculation
    std::cout << bmi << std::endl;
    if (bmi < 18.5) {

        std::cout << "you are under weight " << std::endl;

    }
    else if (bmi > 25.0) {

        std::cout << "you are over weight " << std::endl;

    }
  
    else {

        std::cout << "you are n weight " << std::endl;

    }
  
   
    system("pause>0");
} 

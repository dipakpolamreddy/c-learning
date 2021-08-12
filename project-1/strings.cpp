
#include <iostream>
#include <string>

int main()
{
   
    std::string greeting = "hello";
    std::string complete = "there ";
    std::cout<< greeting + complete << std::endl;  //string concatination


    //Getline function
    std::string message;
    getline(std::cin,message);
    std::cout << "enter the message : " <<message << std::endl;

    // getting string input from user
    std::string greet;
    std::cout << "enter the message  :" << std::endl;
    std::cin >> greet;
    std::cout << greet << std::endl; 

}

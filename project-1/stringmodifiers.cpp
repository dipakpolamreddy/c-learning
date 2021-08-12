#include <string>
#include <iostream>

int main()
{

    std::string greeting = "hello"; 
    greeting += "there";                                                              //concatinating the "there"
    std::cout << greeting << std::endl;

    std::string tell = "hello";
    greeting.append("world");                                                    //adding the string
    std::cout << tell << std::endl;

    std::string message = "hello";
    message.insert(3, " ");                                                 //insert space to the string
    std::cout << message << std::endl;      

    std::string msg = "hello";
    msg.erase(4);
    std::cout << msg << std::endl;                                    //   erasing the charace

    std::string word = "hello";
    word.pop_back();                                               //   erasing the charace
    std::cout << word << std::endl;

    std::string reply= "hello";
    reply.replace(2,4, "eaven");                             //   replacing the characters
    std::cout << reply  << std::endl;
    
    std::string sstr= "where is hell";
    sstr.substr(5,2);                                   //   replacing the characters
    std::cout << sstr  << std::endl;


}

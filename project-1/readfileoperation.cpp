
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    std::ifstream file("hello.txt");
    std::string line;

   
    
    if (file.is_open())
    {
        std::cout << "sucessfully open";
    }
    for (int i = 0; i < sizeof(file); i++)
    {
        getline(file, line);
        std::cout << line << endl;

    }
    
   
}

// structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct User {
    std::string first_name;
    std::string lasr_name;
    std::string get_gender() {

        return gender;
    }
    private:
        std::string gender= "male";


};

int main()

{
    User me;
    me.first_name = "Arjun";
    me.lasr_name = "reddy";
    

    std::cout << "Gender :" << me.get_gender();
}


#include <iostream>

class User {

    std::string gender = "male";
    public:
    std::string first_name;
    std::string lasr_name;
    std::string get_gender() {

        return gender;
    }

};

int main()

{
    User me;
    me.first_name = "Arjun";
    me.lasr_name = "reddy";

    std::cout << "Gender :" << me.get_gender();
}


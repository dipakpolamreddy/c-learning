#include <iostream>

class User {

    std::string gender = "male";
public:
    std::string first_name;
    std::string lasr_name;
    std::string get_gender() {

        return gender;
    }
    void set_gender(std::string gender) 
    {
        if (gender == "male" || gender == "female" || gender == "nonofthis") 
        {
            this->gender = gender;
        }
        else {
            this->gender = "nostatus";
        }
    }
    User() {
        std::cout << " this is constructor " << '\t';

    }

    ~User() {
        std::cout << "this is destructor";
    }

};

int main()

{
    User me;
   
    me.set_gender("male-1");

    std::cout << "Gender : " << me.get_gender() << "\t";

}


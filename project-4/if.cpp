#include <iostream>

int main()
{
    bool isMale = true;
    bool istall = true;

    if (isMale && istall) {

        std::cout << "you are tall male" << std::endl;
    }
    else if (isMale && !istall) {
        std::cout << "you are not a  tall male" << std::endl;
        
    }
    else {
        std::cout << "you are not a  male" << std::endl;
    }

}


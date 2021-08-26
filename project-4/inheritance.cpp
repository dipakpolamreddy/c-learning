#include <iostream>

class Chef {
public:
    void chicken() {
        std::cout << "the chef prepared a chicken" << std::endl;
   }
    void mutton() {
        std::cout << "the chef prepared a mutton" << std::endl;
    }
};
class ItalianChef : public Chef {
public:
    void passta() {
        std::cout << "the chef prepared a passta" << std::endl;
    }
    void mutton() {
        std::cout << "the chef prepared a mutton biryani" << std::endl;
    }
};
int main()
{
    Chef indian;
    indian.mutton();
    ItalianChef ic;
    ic.mutton();
    ic.passta();
    

    

}

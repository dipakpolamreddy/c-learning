// cloass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
class Car {
    public:
        std::string name;
        std::string owner;
        int cost;
        Car(string aname, string aowner, int acost) {      //constructor     
            name = aname;
            owner = aowner;
            cost = acost;
        }
        bool highprice() {
            if (cost >= 1400000) {
                return true;
            }
            else {
                return false;
            }
        }
};
int main()
{
    Car car1("creta","hyndai",1300000);
    Car car2("Aclass", "benz", 13000000);

    
    std::cout << car1.cost<< std::endl;
    std::cout << car2.highprice();
    

}



#include <iostream>

class Car {
    public:
        std::string name;
        std::string owner;
        int cost;
};
int main()
{
    Car car1;
    car1.name = "creta";
    car1.owner = "hyndai";
    car1.cost = 1300000;

    std::cout << car1.cost;

}

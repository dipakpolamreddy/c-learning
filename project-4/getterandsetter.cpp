#include <iostream>


class Car {
    private:
        std::string rating;
public:
        std::string name;
        std::string owner;
   
        Car(std::string aname, std::string aowner, std::string arating) {      //constructor     
            name = aname; 
            owner = aowner;
           setarating(arating);
        }
        void setarating(std::string arating) {
            if (arating == "good" || arating =="average" || arating =="above average") {
                rating = arating;
            }
            else {
                rating = "not applicable";
            }
        }
        std::string  getrating() {
        
            return rating;
        }
   
};
int main()
{
    Car car1("creta", "hyndai", "good");
    Car car2("Aclass", "benz", "hello");
    car2.setarating("hyloo");

    std::cout << car2.getrating() << std::endl;



}

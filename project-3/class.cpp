#include <iostream>
#include <string>
#include <list>

class Youtube {
    public:
        std::string name;
        std::string owner;
        int subcount;
        std::list<std::string> publishedvideos;

};

int main()

{
   
    Youtube yt1;
    yt1.name = "testclass";
    yt1.owner = "testerreddy";
    yt1.subcount = 1800;
    yt1.publishedvideos = { "c++","c","python" };
    std::cout << "name :" << yt1.name <<std::endl;
    std::cout << "owner :" << yt1.owner << std::endl;
    std::cout << "subscribercount :" << yt1.subcount << std::endl;

    for (std::string stringvideos :yt1.publishedvideos) {
        std::cout << "videos :"<<stringvideos << std::endl;;
    }
 
}

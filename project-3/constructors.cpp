#include <iostream>
#include <string>
#include <list>

class Youtube {
    public:
        std::string Name;
        std::string Owner;
        int subcount;
        std::list<std::string> publishedvideos;
        Youtube(std::string name, std::string owner) {
            Name = name;
            Owner = owner;
            int subcount = 0;
        }
        void getinfo() {
            std::cout << "Name :" << Name << std::endl;
            std::cout << "Owner :" << Owner << std::endl;
            std::cout << "subscribercount :" << subcount << std::endl;
            for (std::string stringvideos : publishedvideos) {
                std::cout << "videos :" << stringvideos << std::endl;;
            }

        }
};

int main()

{

    Youtube yt1("testclass", "testerddy");
    yt1.publishedvideos.push_back("c++");
    yt1.publishedvideos.push_back("c");
    yt1.publishedvideos.push_back("python");
    yt1.getinfo();
    
}

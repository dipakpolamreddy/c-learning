
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Youtube {
    private:
        std::string Name;
        std::string Owner;
        int subcount;
        std::list<std::string> publishedvideos;
     public:
        Youtube(std::string name, std::string owner) {
            Name = name;
            Owner = owner;
            int subcount;
            }
        void getinfo() {
            std::cout << "Name :" << Name << std::endl;
            std::cout << "Owner :" << Owner << std::endl;
            std::cout << "subscribercount :" << subcount << std::endl;
            for (std::string stringvideos : publishedvideos) {
                std::cout << "videos :" << stringvideos << std::endl;;
            }

        }
        void subscribe(){
            subcount++;
        }
        void unsubscribe() {
            subcount--;
        }
        void publish(std::string title) {
            publishedvideos.push_back(title);

        }
       

   
};

int main()

{

    Youtube yt1("testclass", "testerddy");
        yt1.publish("c++");
        yt1.publish("c");
        yt1.publish("python");
    
        yt1.subscribe();
        yt1.subscribe();
    yt1.unsubscribe();
    yt1.getinfo();
    
}

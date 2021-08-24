
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Youtube {
    private:
        std::string Name;
        
        int subcount;
        std::list<std::string> publishedvideos;
    protected:
        std::string Owner;
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
        void subscribe() {
            subcount++;
        }
        void unsubscribe() {
            subcount--;
        }
        void publish(std::string title) {
            publishedvideos.push_back(title);

        }
 




};
class Teachingclass :public  Youtube {                                                                  //inheritance where it inherit the youtube channel
public:
    Teachingclass(string name, string ownername) :Youtube(name, ownername) {

    }
    void practise() {
        std::cout << Owner << "is learning" << std::endl;
    }
};
int main()

{

    Teachingclass yt1("testcl", "testereddy");
    yt1.getinfo();
    yt1.practise();

    

}

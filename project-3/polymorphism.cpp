
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
        int contentquality;
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
        void checkquality(){
            if (contentquality < 5) {
                std::cout << "quality is not good" << std::endl;
            }
            else {
                std::cout << "quality is  good" << std::endl;
            }

        }





};
class Teachingclass :public  Youtube {                                                                 
public:
    Teachingclass(string name, string ownername) :Youtube(name, ownername) {

    }
    void practise() {
        std::cout << Owner << "is learning" << std::endl;
        contentquality++;
    }
};
class Singeryoutube :public  Youtube {
public:
    Singeryoutube(string name, string ownername) :Youtube(name, ownername) {

    }
    void practise() {
        std::cout << Owner << "is learning singing " << std::endl;
        contentquality++;
    }
};

int main()

{

    Teachingclass teacingyt("testcl", "testereddy");
    Singeryoutube singingyt("michealj", "mike");
    teacingyt.practise();
    singingyt.practise();
    singingyt.practise();
    singingyt.practise();
    singingyt.practise();
    singingyt.practise();
    singingyt.practise();

    Youtube* yt1 = &teacingyt;
    Youtube* yt2 = &singingyt;

    yt1->checkquality();
    yt2->checkquality();
}

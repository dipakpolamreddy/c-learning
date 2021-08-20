#include <iostream>
  
void A() {                                        //called function
    std::cout << "Hello from A \n";

}
int main()                                        //calling function
{
    std::cout << "Hello from main\n";
    A();
}

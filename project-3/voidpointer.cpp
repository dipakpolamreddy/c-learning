#include <iostream>

void printint(int* intptr) {
    std::cout << *intptr << std::endl;
}
void printchar(char *charptr) {
    std::cout << *charptr << std::endl;
}

void print (void* ptr, char type) {
    switch (type) 
    {
    case 'i':
       std::cout<< *((int*)ptr)<<std::endl;
       break;
    case 'c':
        std::cout<<*((char*)ptr)<<std::endl;
        break;
    }
}
int main()
{
    int a = 5;
    char che = 'R';

    print(&a, 'i');
    print(&che, 'c');

}


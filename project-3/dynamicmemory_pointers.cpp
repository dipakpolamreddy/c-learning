#include <iostream>

int main()
{
    int size;
    std::cout << "size :" << std::endl;
    std::cin >> size;
    int* myarray = new int[size];
    
    for (int i = 0; i < size; i++) {
        std::cout << "array :" <<i<< std::endl;
        std::cin >> myarray[i];
    }
    for (int i = 0; i < size; i++) {
        std::cout<<"myarray :" << myarray[i] << std::endl;;
    }
    delete[]myarray;
    
}

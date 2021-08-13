
#include <iostream>
void print_array(int array[], int size) 
{

    for (int i = 0; i < size; i++) 
    {

        std::cout << array[i]<< "\t";
    }
    std::cout << std::endl;
}


int main()
{ 
    int guesses[] = { 10,12,34,45,20 };   // index of arrays always size-1
   
    int size = sizeof(guesses) / sizeof(int);
    print_array(guesses, 5);
     //get the size of arrays values will be 10
    return 0;
}

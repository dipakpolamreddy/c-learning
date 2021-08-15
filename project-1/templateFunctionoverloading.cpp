#include <iostream>

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;


}
template <typename T>
void swap(T a[], T b[], int size) 
{

    for (int i = 0; i < size; i++) 
    {

        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);
    

    int nine[] = { 9,9,9,9,9,9 };
    int one[] = { 1,1,1,1,1,1 };

    for (int i = 0; i < 6; i++) {

        std::cout << nine[i] << " " << one[i] << "\t";
    }
    std::cout << '\n';

    swap(nine, one, 6);

    for (int i = 0; i < 6; i++) {

        std::cout << nine[i] << " " << one[i] << "\t";
    }
    std::cout << '\n';
   


}

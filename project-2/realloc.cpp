#include <iostream>

int main()
{
    int n;
    std::cout << "enter the array value : " << std::endl;
    std::cin >> n;
    int* A = (int*)malloc(n * sizeof(int));             ///malloc declaration
    for (int i = 0; i < n; i++) {

        A[i] = i+1;
        std::cout << &A[i] <<'\n';
    }
    int* B = (int*)realloc(A, (n/2)* sizeof(int));          ///realloc declaration
    for (int j = 0; j < n; j++) {

        std::cout << B[j]<< std::endl;
    }

   
    
}

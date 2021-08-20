#include <iostream>

int compare(int a, int b ) {

    if (a>b){

    return -1;
   
}
    else {
        return 1;
    }
}

void Bubblesort(int A[], int size, int (*compare)(int, int)) {
    int i, j, temp;
    for (int i = 0; i < size; i++) 
    {
        for (j = 0; j < size - 1; j++) {

            if(compare(A[j],A[j+1])>0){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = { 1,3,2,4,5,6 };
    Bubblesort(A, 6, compare);
    for (int i = 0; i < 6; i++) {

        std::cout << A[i];
    }
}




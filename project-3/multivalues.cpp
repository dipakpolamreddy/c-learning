// minandmax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int minimum(int a[],int size) {
    int min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;

}
int maximum(int a[], int size) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;

}
void minandmax(int a[], int size,int *min,int *max) {
    for (int i = 1; i < size; i++) {
        if (a[i] > *max) {
            *max = a[i];
        }
        if (a[i] < *min) {
            *min= a[i];
        }
    }
   

}




int main()
{
    int a[5] = { 5,6,-2,4,1 };
    int min = a[0];
    int max = a[0];
    minandmax(a, 5, &min, &max);
    std::cout << "min:" << min;
    std::cout << "min:" << max;
}

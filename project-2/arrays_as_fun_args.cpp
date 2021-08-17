// arrays_as_fun_args.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int sumofelements(int a[], int size) 
{
	int sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum += a[i];
	}
	return sum;
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int size = sizeof(a) / sizeof(a[0]);
	int total = sumofelements(a, size);
	std::cout << total;

}


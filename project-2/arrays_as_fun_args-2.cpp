// arrays_as_fun_args.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void Double(int a[],int size) 
{
	int multi = 0;
	for (int i = 0; i < size; i++) 
	{
		a[i]= 2*a[i];                                             //double the value [2*a[i]
	} 
	
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int size = sizeof(a) / sizeof(a[0]);
	Double(a, size);
	for (int i = 0; i < size; i++) {
		std::cout << a[i];
	}

}


#include <iostream>

int main()
{
	int a[5]={1,2,3,4,5};
	std::cout << "a:" << a << std::endl;
	std::cout << "aa:" << &a[0] << std::endl;
	std::cout << "aa:" << *(a+2) << std::endl;

	for (int i = 0; i < 4; i++) {

		std::cout << &a[i] << std::endl;
	}
}

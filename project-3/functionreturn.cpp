
#include <iostream>

bool prime(int num) {


	if (num % 2 == 0) {
		return false;
	}
	
	return true;
}

int main()
{
	int num;
	std::cout << "enter the num;" << std::endl;
	std::cin >> num;
	bool isprime=prime(num);
	if (isprime) {
		std::cout << "is prime" << std::endl;

	}
	else {
		std::cout << "is not   prime " << std::endl;
	}
	
}



#include <iostream>

int main()
{

	int grade;
	int count = 0, sum = 0;;
	for (int i = 0; i < 3; i++) {

		do {
			std::cout << "enter the grade :" << i + 1 << std::endl;
			std::cin >> grade;
		} while (grade < 1 || grade>5);
		sum += grade;
		
	}
	std::cout << sum/3.0;
}

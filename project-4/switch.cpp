#include <iostream>

int main()
{
	int grade;
	std::cout << "enter you grade :";
	std::cin >> grade;
	switch (grade) {
	case 60:
		std::cout <<  "you got first class";
		break;
	case 70:
		std::cout <<  "you got distinction";
		break;
	case 80:
		std::cout <<  "you got goldmedal";
		break;
	default:
		std::cout <<  "you got below average";
		break;

	}

}

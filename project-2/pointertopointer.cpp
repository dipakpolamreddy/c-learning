#include <iostream>
#include <stdio.h>

int main()
{
	int x = 5;
	int* p;
	p = &x;
	int**q=&p;
	int*** r = &q;

	std::cout << *p << '\n';
	std::cout <<"hi" <<* q << '\n';
	std::cout <<"hie"<< **q << '\n';
	std::cout <<"hieee"<< **r << '\n';
	std::cout <<"hieee"<< ***r << '\n';

	***r = 12;
	**q = *p + 2;

	std::cout <<"hieeee"<< * *q;

}

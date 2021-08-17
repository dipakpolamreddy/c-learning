#include <iostream>


int main() {


	char c[4];
	c[0] = 'j';
	c[1] = 'o';
	c[2] = 'h';
	c[3] = 'n';

	std::cout << c << '\n';   //this will print undefined data after johnjfnfgjnfjnsfv;
	char c1[5];
	c1[0] = 'j';
	c1[1] = 'o';
	c1[2] = 'h';
	c1[3] = 'n';
	c1[4] = '\0';
	std::cout << c1 << '\n'; //this will print john

	
	char c2[6] = {'h','e','l','l','0','\0'};

	char* c3;
	c3 = c2;
	std::cout << &c2[1]<< '\n';					//c2[i] = *(c2+i)
	std::cout << &c3[0] << '\n';
	std::cout << *(c3 + 4) << '\n';					/*c3 is point to the address of c2[0]
														if *(c3+1) =e
															*(c3+2) =l
													
													
													*/ 											


}

#include <iostream>

void printhello() {

	std::cout << "helloworld";
}

int main() {


	void (*ptr)();		//declaring function pointer
	ptr = printhello;	//intialize the pointer
	ptr();				//exectue the function through pointer
}

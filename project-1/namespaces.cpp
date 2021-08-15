#include <iostream>

namespace utils                                                         //namespace declaration
{

	void print_array(int data[], int size) {

		for (int i = 0; i < size; i++) {

			std::cout << data[i] << '\t';
		}
		std::cout << '\n';
	}
}

int main() {

	int data[] = { 1,2,3 };

	utils::print_array(data, 3);                                          //namespace usage 

	

}

#include <iostream>
int main() {

	int a[] = { 1,2,4,5,6};




	for (int i = 0; i < 5; i++) {

		std::cout << "address : "<< a + i << '\n';        //address of the declared valude a[0],a[1]....
		std::cout << "address : " << &a + i << '\n';      //address of the declared valude a[0],a[1]....
		std::cout << "valuse: "<< * (a + i) << '\n';      //values of the declared valude 1,2,3,....


	}

}

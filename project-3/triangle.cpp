int main()
{
	int height;
	int width;
	char shape;
	std::cout << "enter the height :" << std::endl;
	std::cin >> height;
	
	std::cout << "enter the shape :" << std::endl;
	std::cin >> shape;

	for (int i = height; i >=1; i--) {

		for (int j = 1; j <=i ; j++) {

			std::cout <<shape ;
		}
		std::cout << std::endl;
	}

}

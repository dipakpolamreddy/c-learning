int main()
{
	int height;
	int width;
	char shape;
	std::cout << "enter the height :" << std::endl;
	std::cin >> height;
	std::cout << "enter the widtt :" << std::endl;
	std::cin >> width;
	std::cout << "enter the shape :" << std::endl;
	std::cin >> shape;
	

	for (int i = 0; i < height; i++) {

		for (int j = 0; j < width; j++){
			std::cout << shape<<'\t';
		}
		std::cout << std::endl;
	}
}

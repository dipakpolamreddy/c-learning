#include "mathutils.h"
#include <iostream>


int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 5;

    std::cout << area(rectangle.length, rectangle.width) << std::endl;
    std::cout << area(rectangle.length) << std::endl;
    std::cout << area(rectangle) << std::endl;

	
}

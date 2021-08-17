
#include <iostream>
void print(char c[])
{
	int i = 0;
	while (c[i] != '\0') {

		std::cout << *(c+i);              //c[i] ==*(c+i)
		c[i++]; 
	}

}
int main()
{
	char c[] = "hello";
	print(c);

}

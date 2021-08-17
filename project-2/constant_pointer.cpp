
#include <iostream>
void print(const char c[])
{
	int i = 0;
	while (c[i] != '\0') {

		std::cout << *(c + i);              //c[i] ==*(c+i)
		c[i++];
	}

}
int main()
{
	char c[] = "hello";     // or char *c is a constant declaration
	print(c);

}

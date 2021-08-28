#include <Windows.h>
#include <iostream>

int main()
{
	
	HANDLE hmutex;
	hmutex=CreateMutex(
		NULL,
		false,
		NULL							//unamed mutex
	);
	);
	if (hmutex == NULL) {

		std::cout << " Mutex  creation   & error no : " << GetLastError();
	}
	else {
		std::cout << "Mutex creation Success" << std::endl;
	}
	CloseHandle(hmutex);
}

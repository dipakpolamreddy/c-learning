#include <Windows.h>
#include <iostream>

int main()
{

	HANDLE hsem;
	std::cout << "Semaphore " << std::endl;
	hsem = CreateSemaphore(
		NULL,
		1,
		1,
		L"Sema");							//named mutex

	if (hsem == NULL) {

		std::cout << " Semaphore  creation   & error no : " << GetLastError();
	}
	else {
		std::cout << "Semaphore creation Success" << std::endl;

	}
	getchar();
	//loseHandle (hmutex);
	return 0;
}

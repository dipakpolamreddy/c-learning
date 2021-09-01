#include<iostream>
#include<Windows.h>

HANDLE hTimer = NULL;
DWORD dwaitforSingleObject;

//Thread FUN
DWORD WINAPI ThreadFun1(LPVOID lparam) {
	dwaitforSingleObject = WaitForSingleObject(hTimer, INFINITE);
	if (WAIT_FAILED == dwaitforSingleObject)
	{
		std::cout << "WaitForSingleObject creation Failed & Error No : " << GetLastError();
	}
	else {
		std::cout << "Timer Signer after 5 sec" << std::endl;
	}
	std::cout << "thread Running " << std::endl;
	return 0;

}
int main() {

	//local variables
	HANDLE hThread;
	BOOL bSetWaitableTimer = FALSE;
	
	LARGE_INTEGER liDueTime;
	liDueTime.QuadPart = 50000000LL;

	//intialize the waitable timer
	hTimer = CreateWaitableTimer(NULL, TRUE, NULL);\

		if (NULL == hTimer)
		{
			std::cout << "Countimer creation Failed & Error No : " << GetLastError();
		}
		std::cout << "Countimer creation Success" << std::endl;

		//Thread 
		hThread = CreateThread(
			NULL,
			0,
			ThreadFun1,
			NULL,
			0,
			NULL
		);
		if (hThread  == NULL) {

			std::cout << " thread  creation   & error no : " << GetLastError();
		}
		else {
			std::cout << "thread creation Success" << std::endl;
		}

	//Set Waitable Timer
		bSetWaitableTimer = SetWaitableTimer(
			hTimer,
			&liDueTime,
			0,
			NULL,
			NULL,
			0);
	

			if (FALSE == bSetWaitableTimer)
			{
				std::cout << "bSetWaitableTimer creation Failed & Error No : " << GetLastError();
			}
			std::cout << "bSetWaitableTimer creation Success" << std::endl;
	
	//Printing OUTPUT

			std::cout << "waiting for 5 sec" << std::endl;
		//Wait for single obkect
			WaitForSingleObject(hThread,INFINITE);
			/*
			dwaitforSingleObject = WaitForSingleObject(hTimer, INFINITE);
			if (WAIT_FAILED == dwaitforSingleObject)
			{
				std::cout << "WaitForSingleObject creation Failed & Error No : " << GetLastError();
			}
			else {
				std::cout << "Timer Signer after 5 sec" << std::endl;
			}
			*/
	//close handle
			CloseHandle (hTimer);
				CloseHandle (hThread);
			system("pause");
	return 0;


}

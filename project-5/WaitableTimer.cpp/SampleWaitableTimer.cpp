#include<iostream>
#include<Windows.h>




int main() {

	//local variables
	HANDLE hTimer = NULL;
	BOOL bSetWaitableTimer = FALSE;
	DWORD dwaitforSingleObject;

	LARGE_INTEGER liDueTime;
	liDueTime.QuadPart = 50000000LL;

	//intialize the waitable timer
	hTimer = CreateWaitableTimer(NULL, TRUE, NULL);\

		if (NULL == hTimer)
		{
			std::cout << "Countimer creation Failed & Error No : " << GetLastError();
		}
		std::cout << "Countimer creation Success" << std::endl;

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

	//waiting for single object

			dwaitforSingleObject = WaitForSingleObject(hTimer, INFINITE);
			if (WAIT_FAILED == dwaitforSingleObject)
			{
				std::cout << "WaitForSingleObject creation Failed & Error No : " << GetLastError();
			}
			std::cout << "Timer Signer after 5 sec" << std::endl;

	//close handle
			CloseHandle(hTimer);
			system("pause");
	return 0;


}

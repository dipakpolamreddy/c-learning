
#include <Windows.h>
#include <iostream>
using namespace std;

HANDLE hmutex;

int gcount = 1;
CRITICAL_SECTION cs;

DWORD WINAPI ThreadFunEven(LPVOID lpParam)\
{

    while (gcount < 10)
    {
        EnterCriticalSection(&cs);
        if (gcount % 2 == 0)
        {
            std::cout << "Even : " << gcount++ << std::endl;;
        }
        LeaveCriticalSection(&cs);
    }
    return 0;
}
DWORD WINAPI ThreadFunOdd(LPVOID lpParam)
{
    while (gcount < 10) {
        EnterCriticalSection(&cs);
        if (gcount % 2 == 1) {
            std::cout << "Odd :" << gcount++ << std::endl;
        } 
        LeaveCriticalSection(&cs);
    }
    return 0;
}
int main()
{
    //local Variables def
    HANDLE hthread1, hthread2;
    std::cout << "........Critical Section ......." << std::endl;

   //initialise the Critical section
    InitializeCriticalSection(&cs);

    hthread1 = CreateThread(
        NULL,
        0,
        ThreadFunEven,
        NULL,
        0,
        NULL
    );
    if (hthread1 == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }
    hthread2 = CreateThread(
        NULL,
        0,
        ThreadFunOdd,
        NULL,
        0,
        NULL
    );
    if (hthread2 == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }

    // Wait for the single object

    WaitForSingleObject(hthread1,INFINITE);
    WaitForSingleObject(hthread2,INFINITE);

    //Close handle
    CloseHandle(hthread1);
    CloseHandle(hthread2);

    //Deleting the critical section

    DeleteCriticalSection(&cs);
}


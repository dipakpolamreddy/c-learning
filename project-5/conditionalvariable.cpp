
#include <Windows.h>
#include <iostream>
using namespace std;


CRITICAL_SECTION cs;
CONDITION_VARIABLE cv;
int buffer;
int max_items[20];

DWORD WINAPI ThreadFunEven(LPVOID lpParam)\
{

    for (int i=0;i<20;i++)
    {
        EnterCriticalSection(&cs);
        while (buffer == 20) {
            SleepConditionVariableCS(&cv, &cs, INFINITE);
        }
        buffer++;
        cout<<"producer" <<buffer <<endl;
        Sleep(1000);
        LeaveCriticalSection(&cs);
        WakeConditionVariable(&cv);
    }
    return 0;
}
DWORD WINAPI ThreadFunOdd(LPVOID lpParam)
{
    for (int i = 0; i < 20; i++)
     {
        EnterCriticalSection(&cs);
        while (buffer == 0) {
            SleepConditionVariableCS(&cv, &cs, INFINITE);
        }
        cout << "consumer" << buffer << endl;
        buffer--;
        Sleep(1000);
        LeaveCriticalSection(&cs);
        WakeConditionVariable(&cv);
       
    }
    return 0;
}
int main()
{
    //local Variables def
    HANDLE Producer, Consumer;
    std::cout << "........Critical Section ......." << std::endl;

    //initialise the Critical section
    InitializeCriticalSection(&cs);

    //initialise the Conditional variable
    InitializeConditionVariable(&cv);

    Producer = CreateThread(
        NULL,
        0,
        ThreadFunEven,
        NULL,
        0,
        NULL
    );
    if (Producer == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }
    Consumer = CreateThread(
        NULL,
        0,
        ThreadFunOdd,
        NULL,
        0,
        NULL
    );
    if (Consumer == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }
    //step-3 wakeallconditional variables
    WakeAllConditionVariable(&cv);

    // Wait for the single object

    WaitForSingleObject(Producer, INFINITE);
    WaitForSingleObject(Consumer, INFINITE);

    //Close handle
    CloseHandle(Producer);
    CloseHandle(Consumer);

    //Deleting the critical section

    DeleteCriticalSection(&cs);
}


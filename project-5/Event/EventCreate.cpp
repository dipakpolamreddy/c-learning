
#include <Windows.h>
#include <iostream>

HANDLE hEvent;

DWORD WINAPI ThreadFun1(LPVOID lparam) {

    WaitForSingleObject(hEvent, INFINITE);
    std::cout << "Thread 1 Running...." << std::endl;
    return 0;
}
DWORD WINAPI ThreadFun2(LPVOID lparam)
{
    std::cout << "Thread 2 Running...." << std::endl;
    SetEvent(hEvent);
    return 0;
}
int main()
{
    HANDLE hthreada, hthreadb;
    DWORD ThreadID1, ThreadId2;
    std::cout << ".....Create ......." << std::endl;
    // Intialise the Event 
    hEvent = CreateEvent(
               NULL,
        FALSE,
        FALSE,
        L"MyEVENT"
    );
    if (hEvent == NULL) {

        std::cout << "  Event   creation   & error no : " << GetLastError();
    }
    else {
        std::cout << " Event creation Success" << std::endl;
    }

    hthreada = CreateThread(
        NULL,
        0,
        ThreadFun1,
        NULL,
        0,
        &ThreadID1
    );
    if (hthreada == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }
    hthreadb = CreateThread(
        NULL,
        0,
        ThreadFun2,
        NULL,
        0,
        &ThreadId2
    );
    if (hthreadb == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }
    // Wait for the single object

    WaitForSingleObject(hthreada, INFINITE);
    WaitForSingleObject(hthreadb, INFINITE);

    //Close handle
    CloseHandle(hthreada);
    CloseHandle(hthreadb);

    //Close Event

    CloseHandle(hEvent);

    system("Pause");
}


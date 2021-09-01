
#include <Windows.h>
#include <iostream>

HANDLE hEvent;

DWORD WINAPI ThreadFun1(LPVOID lparam) {
    HANDLE hOpenEvent;
    hOpenEvent = OpenEvent(
        EVENT_ALL_ACCESS,
        FALSE,
        L"MyEVENT"
    );
    if (hOpenEvent == NULL) {

        std::cout << " Openevent  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "Openevent creation Success" << std::endl;
    }
    for (int i = 0; i < 2; i++) {
        WaitForSingleObject(hEvent, INFINITE);
        ResetEvent(hOpenEvent);
        std::cout << "ReSet Signaled" << i << std::endl;
    }
    std::cout << "Thread 1 Running...." << std::endl;
    CloseHandle(hOpenEvent);
    return 0;
}
DWORD WINAPI ThreadFun2(LPVOID lparam)
{
    std::cout << "Thread 2 Running...." << std::endl;
    for (int i = 0; i < 2; i++) {
        SetEvent(hEvent);
        Sleep(2000);
    }
    return 0;
}
int main()
{
    HANDLE hthreada, hthreadb;
    DWORD ThreadID1, ThreadId2;
    std::cout << ".....Manual Reset Event ......." << std::endl;
    // Intialise the Event 
    hEvent = CreateEvent(
        NULL,
        TRUE,  //AUTO RESET
        FALSE,  //NON-SIGNALLED
        L"MyEVENT"
    );
    if (hEvent == NULL) {

        std::cout << " Event creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "Event creation Success" << std::endl;
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


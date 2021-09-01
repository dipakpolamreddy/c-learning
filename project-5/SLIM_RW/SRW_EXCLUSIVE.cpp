
#include <Windows.h>
#include <iostream>
using namespace std;
SRWLOCK lock;
int flag = 0;
int x = 0;
DWORD WINAPI WriterThread(LPVOID lparam) {
    while (1) {
    AcquireSRWLockExclusive(&lock);
    x = x + 5;
    cout << "writer :" << x << endl;
    ReleaseSRWLockExclusive(&lock);
    Sleep(1000);
    }
    return 0;
}
DWORD WINAPI ReaderThread(LPVOID lparam)
{
    while (1) {
        AcquireSRWLockExclusive(&lock);
        ++flag;
        if (flag == 1) {
           
            cout << "reader :" << x << endl;
        }
        --flag;
        ReleaseSRWLockExclusive(&lock);
        Sleep(1000);
    }
   
    return 0;
}
int main()
{
    HANDLE Writer, Reader;
   //INitialize SRW LOCK
    InitializeSRWLock(&lock);

    Writer = CreateThread(
        NULL,
        0,
        &WriterThread,
        NULL,
        0,
        NULL
    );
    if (Writer == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }
    Reader = CreateThread(
        NULL,
        0,
        &ReaderThread,
        NULL,
        0,
        NULL
    );
    if (Reader == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }
    //
    WaitForSingleObject(Writer,INFINITE);
    WaitForSingleObject(Reader,INFINITE);
    CloseHandle(Writer);
    CloseHandle(Reader);
}


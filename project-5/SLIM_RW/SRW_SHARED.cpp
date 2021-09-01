
#include <Windows.h>
#include <iostream>

using namespace std;
//globalvariable 
CONDITION_VARIABLE cvw;
CONDITION_VARIABLE cvr;

SRWLOCK lock;
int readcount = 0;
int x = 0;
DWORD WINAPI WriterThread(LPVOID lparam) {
    while (1) {
        AcquireSRWLockShared(&lock);
        x = x + 5;
        cout << "writer :" << x << endl;
        ReleaseSRWLockShared(&lock);
        WakeConditionVariable(&cvr);
        Sleep(1000);
    }
    return 0;
}
DWORD WINAPI ReaderThread(LPVOID lparam)
{
    while (1) {
        AcquireSRWLockShared(&lock);
        ++readcount;
        if (readcount == 1) {
            SleepConditionVariableSRW(&cvw, &lock, INFINITE, CONDITION_VARIABLE_LOCKMODE_SHARED);
           
        }
        
        ReleaseSRWLockShared(& lock);
        cout << "reader :" << x << endl;
       
        AcquireSRWLockShared(&lock);
        --readcount;
        if (readcount == 0) {
            TryAcquireSRWLockShared(&lock);

        }

        ReleaseSRWLockShared(&lock);
        WakeConditionVariable(&cvw);

        Sleep(1000);
    }

    return 0;
}
int main()
{
    HANDLE Writer, Reader[2];
    //INitialize SRW LOCK

    //intializing the conditonal variable for writer and reader 
    InitializeConditionVariable(&cvw);
    InitializeConditionVariable(&cvr);
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
    // Creating to two readers 
    for (int i = 0; i < 2; i++) {
        Reader[i] = CreateThread(
            NULL,
            0,
            &ReaderThread,
            NULL,
            0,
            NULL
        );
    }
    if (Reader == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }
    // wakeupallcondtionalvaribles 
    WakeAllConditionVariable(&cvw);
    WakeAllConditionVariable(&cvr);
    //waitforsingleobject
    WaitForSingleObject(Writer, INFINITE);
    for (int i = 0; i < 2; i++) {
        WaitForSingleObject(Reader[i], INFINITE);
    }
    CloseHandle(Writer);
    for (int i = 0; i < 2; i++) {
        CloseHandle(Reader[i]);
    }
}


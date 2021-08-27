// process.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h>
#include <iostream>

int main()
{
    HANDLE hProcess=NULL;                                                             /*created handle and process of a process*/
    HANDLE hThread= NULL;
    STARTUPINFO si;                                                                 //started process relared information how to start a process information in tha datastructure
    PROCESS_INFORMATION pi;                                                        //process related information in this data structure
    DWORD  dwProcessId = 0;                                                        // for printing the process id and thread id  provided by windows
    DWORD  dwThreadId = 0;
    ZeroMemory(&si, sizeof(si));
    ZeroMemory(&pi, sizeof(pi));
    BOOL bprocess;
    bprocess = CreateProcess(
        L"C:\\Windows\\System32\\ipconfig.exe",
        NULL,
        NULL,
        NULL,
        false,
        0,
        NULL,
        NULL,
        &si,
        &pi
    );
    if (bprocess == false) {

        std::cout << " Process creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "Process creation Success";
    }
    std::cout << "processid :" << pi.dwProcessId << std::endl;
    std::cout << "ThreadId :" << pi.dwThreadId << std::endl;
    std::cout << "GetProcessId :" << GetProcessId(pi.hProcess) << std::endl;
    std::cout << "GetThreadId:" << GetThreadId(pi.hThread) << std::endl;

    WaitForSingleObject(pi.hProcess, INFINITE);
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    
    system("pause");

}

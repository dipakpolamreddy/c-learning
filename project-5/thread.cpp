#include <Windows.h>
#include <iostream>

DWORD WINAPI ThreadFun(LPVOID lparm) {
    std::cout << "Thread Running....." << std::endl;
    return 0;
}
int main()
{
    HANDLE hthread;
    DWORD Threadid;
    hthread = CreateThread(
        NULL,
        0,
        ThreadFun,
        NULL,
        0,
        &Threadid
    );
    if (hthread == NULL) {

        std::cout << " thread  creation   & error no : " << GetLastError();
    }
    else {
        std::cout << "thread creation Success" << std::endl;
    }
    std::cout << "thread id: " << Threadid << std::endl;
    CloseHandle(hthread);
}

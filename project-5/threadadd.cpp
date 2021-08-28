#include <Windows.h>
#include <iostream>
int a[2];
DWORD WINAPI ThreadFun(LPVOID lparm) {
   
    int x, y, add;
    x = a[0];
    y = a[1];
    add = x + y;
    std::cout << "result: " <<add << std::endl;
    return 0;
}

int main()
{
    HANDLE hthread;
    DWORD Threadid;
    std::cout << "enter your first number : " << std::endl;
    std::cin >> a[0];
    std::cout << "enter your second number : " << std::endl;
    std::cin >> a[1];
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

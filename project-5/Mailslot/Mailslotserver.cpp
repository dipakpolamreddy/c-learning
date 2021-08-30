
#include <Windows.h>
#include <iostream>

int main()
{
    std::cout << "......Mail Slot Server ......";

    // Readfile local variables
    BOOL breadfile;
    char szReadfilebuffer[1023];
    DWORD dwReadbuffersize = sizeof(szReadfilebuffer);
    DWORD dwNoBytesRead;

    //Create Mailslot Variables -Step-1
    HANDLE Mslots;
    Mslots = CreateMailslot(L"\\\\.\\mailslot\\sample_mailslot", 0, MAILSLOT_WAIT_FOREVER, NULL);
    if (Mslots == INVALID_HANDLE_VALUE) {

        std::cout << " Mailslot creations failed & error no : " << GetLastError();
    }
    else {
        std::cout << " Mailslot creations Success" << std::endl;
    }

    //Read File operation -Step-3
    breadfile = ReadFile(
        Mslots,
        szReadfilebuffer,
        dwReadbuffersize,
        &dwNoBytesRead,
        NULL);
    if (breadfile == false) {

        std::cout << " Read NamedPIPE failed & error no : " << GetLastError();
    }
    else {
        std::cout << "Read file  Success" << std::endl;
    }
    std::cout << "Data Reading From Mail Slot Server  ->> " << szReadfilebuffer << std::endl;

    //close handle
    CloseHandle(Mslots);
    system("pause");
    return 0;
}

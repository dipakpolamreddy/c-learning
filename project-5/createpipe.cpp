
#include<Windows.h>
#include <iostream>

int main()
{

    BOOL Bcreatepipe;
    HANDLE hRead;
    HANDLE hWrite;

    char szbuffer[512] = "hwllo pipe";
    DWORD dwbuffersize = sizeof(szbuffer);
    BOOL bwritefile;
    BOOL breadfile;
    DWORD NumbehwriterOfBytesToWrite;
    DWORD dwNoBytesRead;


    Bcreatepipe = CreatePipe(
        &hRead,
        &hWrite,
        NULL,
        dwbuffersize
    );

    if (Bcreatepipe == NULL) {

        std::cout << " createpipe creation failed   & error no : " << GetLastError();
    }
    else {
        std::cout << " createpipe creation Scuess" << std::endl;

    }



    bwritefile = WriteFile(
        hWrite,
        szbuffer,
        dwbuffersize,
        &NumbehwriterOfBytesToWrite,

        NULL
    );
    if (bwritefile == false) {

        std::cout << " wrtie file failed & error no : " << GetLastError();
    }
    else {
        std::cout << "write files Success" << std::endl;
    }
    CloseHandle(hWrite);
    breadfile = ReadFile(
        hRead,
        szbuffer,
        dwbuffersize,
        &dwNoBytesRead,
        NULL
    );
    if (breadfile == false) {

        std::cout << " Read file failed & error no : " << GetLastError();
    }
    else {
        std::cout << "Read  files Success" << std::endl;
    }
    std::cout << "Data Read From the pipe ->> " << szbuffer << std::endl;

    CloseHandle(hRead);
    system("pause");
}

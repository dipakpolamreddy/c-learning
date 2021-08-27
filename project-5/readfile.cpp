
#include <Windows.h>
#include <iostream>

int main()
{
    HANDLE CrFile;

    //write file function 
    bool BFile;
    char chbuffer[] = "this is test thing to reat and write";
    DWORD nNumberOfBytesToWrite = strlen(chbuffer);
    DWORD dwNoBytesWritten = 0;

     //Read file function 
    bool RFile;
    DWORD NumberOfBytesToRead = strlen(chbuffer);
    DWORD dwNoBytesRead = 0;

    CrFile = CreateFile(
        L"C:\\deepak1\\filecreate3.txt",                                         //filepath
        (GENERIC_READ | GENERIC_WRITE),
        FILE_SHARE_READ,
        NULL,
        CREATE_NEW,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );
    if (CrFile == INVALID_HANDLE_VALUE) {

        std::cout << " Copyfile failed & error no : " << GetLastError();
    }
    else {
        std::cout << "copy files Success" << std::endl;
    }
    //write
    BFile= WriteFile(
        CrFile,
       chbuffer,
        nNumberOfBytesToWrite,
        &dwNoBytesWritten,
        NULL
        
    );
    if (BFile == false) {

        std::cout << " wrtie file failed & error no : " << GetLastError();
    }
    else {
        std::cout << "write files Success"<< std::endl;
    }
    //Read file function 
    RFile= ReadFile(
        CrFile,
        chbuffer,
        NumberOfBytesToRead,
        &dwNoBytesRead,
        NULL
    );
    if (RFile == false) {

        std::cout << " Read file failed & error no : " << GetLastError();
    }
    else {
        std::cout << "Read  files Success" << std::endl;
    }
    std::cout << "Data Read From the buffer ->> " << chbuffer << std::endl;

    CloseHandle(CrFile);
    system("pause");
}

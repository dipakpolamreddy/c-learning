#include <Windows.h>
#include <iostream>

int main()
{
    std::cout << "......Mail Slot  CLIENT......" << std::endl;
    HANDLE CrFile;

    

    //write Local Variables define 
    bool BWriteFile;
    char szwritefilebuffer[1023];
    DWORD nNumberOfBytesToWrite = sizeof(szwritefilebuffer);
    DWORD dwNoBytesWrite;

    //Create Name Pipe -step-1
    CrFile = CreateFile(
        L"\\\\.\\mailslot\\sample_mailslot",                                         //filepath
        (GENERIC_READ | GENERIC_WRITE),
        0,
        NULL,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        NULL);
    if (INVALID_HANDLE_VALUE == CrFile) {

        std::cout << " Copyfile failed & error no : " << GetLastError();
    }
    else {
        std::cout << "copy files Success" << std::endl;
    }
    std::cout << "Write your message" << std::endl;

    gets_s(szwritefilebuffer);
    //Write file operation 
    BWriteFile = WriteFile(
        CrFile,
        szwritefilebuffer,
        nNumberOfBytesToWrite,
        &dwNoBytesWrite,
        NULL);
    if (BWriteFile == false) {

        std::cout << " wrtie file failed & error no : " << GetLastError();
    }
    else {
        std::cout << "write files Success" << std::endl;
    }


    CloseHandle(CrFile);
    system("pause");
    return 0;
}

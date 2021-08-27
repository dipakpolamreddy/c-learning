
#include <Windows.h>
#include <iostream>

int main()
{
    HANDLE CrFile;

    //write
    bool BFile;
    char chbuffer[] = "this is test thing to reat and write";
    DWORD nNumberOfBytesToWrite = strlen(chbuffer);
    DWORD dwNoBytesWritten = 0;
    CrFile = CreateFile(
        L"C:\\deepak1\\filecreate1.txt",                                         //filepath
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
        std::cout << "copy files Success";
    }
    //write file 
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
        std::cout << "write files Success";
    }

    CloseHandle(CrFile);
    system("pause");
}

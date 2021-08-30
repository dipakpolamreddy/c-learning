#include <Windows.h>
#include <iostream>

int main()
{
    std::cout << "......NAMED PIPE CLIENT......" << std::endl;
    HANDLE CrFile;

    // Readfile local variables
    BOOL breadfile;
    char szReadfilebuffer[1023];
    DWORD dwReadbuffersize = sizeof(szReadfilebuffer);
    DWORD dwNoBytesRead;
    
    //write Local Variables define 
    bool BWriteFile;
    char szwritefilebuffer[1023] = "Hello From Named PIPE Client ";
    DWORD nNumberOfBytesToWrite = strlen(szwritefilebuffer);
    DWORD dwNoBytesWrite;

    //Create Name Pipe -step-1
    CrFile = CreateFile(
        L"\\\\.\\pipe\\MyNamedPipe",                                         //filepath
        (GENERIC_READ | GENERIC_WRITE),
        0,
        NULL,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        NULL);
    if ( INVALID_HANDLE_VALUE == CrFile) {

        std::cout << " Copyfile failed & error no : " << GetLastError();
    }
    else {
        std::cout << "copy files Success";
    }
   
    
     //Read File operation -Step-5
        breadfile = ReadFile(
        CrFile,
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
     std::cout << "Data Reading From Server  ->> " << szReadfilebuffer << std::endl;

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

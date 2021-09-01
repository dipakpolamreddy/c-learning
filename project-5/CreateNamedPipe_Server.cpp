
#include<Windows.h>
#include <iostream>

int main()
{
    std::cout << "\t\t.......NAMED PIPE SERVER ..........." <<std::endl;
    //Named pipe variables

   HANDLE BcreateNamedpipe;
    char szinputbuffer[1023];
    char szoutputbuffer[1023];
    DWORD dwszinputbuffer=sizeof(szinputbuffer);
    DWORD dwszoutputbuffer = sizeof(szoutputbuffer);
    
   
    BOOL ConnectNamedPipe(
        HANDLE       hNamedPipe,
        LPOVERLAPPED lpOverlapped
    );
   
     // write file local variabbles
    BOOL bwritefile;
    char szwritefilebuffer[1023] = "hello From Named Pipe Server ";
    DWORD dwwritebuffersize = sizeof(szwritefilebuffer);
    DWORD dwNoBytesWrite;

    //FLUSH FILE BUFFER Local Variables
    BOOL Bflushfilebuffer;

    // Readfile local variables
    BOOL breadfile;
    char szReadfilebuffer[1023];
    DWORD dwReaduffersize = sizeof(szwritefilebuffer);
    DWORD dwNoBytesRead;

    //Creating named pipe -step-1

    BcreateNamedpipe = CreateNamedPipe(
        L"\\\\.\\pipe\\MyNamedPipe",
        PIPE_ACCESS_DUPLEX,
        PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
       PIPE_UNLIMITED_INSTANCES,
        dwszoutputbuffer,
        dwszinputbuffer,
        0,
        NULL);

        if (BcreateNamedpipe == INVALID_HANDLE_VALUE) {

            std::cout << " CreateNamedPipe creation failed   & error no : " << GetLastError();
        }
        else {
            std::cout << " CreateNamedPipe  creation Scuess" << std::endl;

        }
    //Connect Named Pipe -Step-2
    BOOL BConnectNamedPipe;
     BConnectNamedPipe=ConnectNamedPipe(BcreateNamedpipe,NULL);
     if (BConnectNamedPipe == FALSE) {

         std::cout << "ConnectNamedPipe creation failed   & error no : " << GetLastError();
     }
     else {
         std::cout << " ConnectNamedPipe  creation Scuess" << std::endl;

     }

    //Write File operation -Step-3
    bwritefile = WriteFile(
        BcreateNamedpipe,
        szwritefilebuffer,
        dwwritebuffersize,
        &dwNoBytesWrite,
        NULL);
    if (bwritefile == false) {

        std::cout << " wrtie file failed & error no : " << GetLastError();
    }
    else {
        std::cout << "write files Success" << std::endl;
    }
    
    //Flush the File BUFFER step-4
    Bflushfilebuffer = FlushFileBuffers(BcreateNamedpipe);
    if (Bflushfilebuffer == false) {

        std::cout << "flushfilebuffer NamedPIPE failed & error no : " << GetLastError();
    }
    else {
        std::cout << "Bflushfilebuffer  Success" << std::endl;
    }
    //Read File operation -Step-5
    breadfile = ReadFile(
        BcreateNamedpipe,
        szReadfilebuffer,
        dwReaduffersize,
        &dwNoBytesRead,
        NULL);
    if (breadfile == false) {

        std::cout << " Read NamedPIPE failed & error no : " << GetLastError();
    }
    else {
        std::cout << "Read From NamedPIPE Success" << std::endl;
    }
    std::cout << "Data Read From Client  ->> " << szReadfilebuffer << std::endl;

    //Disconnetct Named PIPE - Step-6
    DisconnectNamedPipe (BcreateNamedpipe);

    //CloseHande -Step-7
    CloseHandle (BcreateNamedpipe);

    system("pause");
}


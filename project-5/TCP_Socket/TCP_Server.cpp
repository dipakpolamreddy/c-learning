#include <Windows.h>
#include <winsock.h>
#include <iostream>
using namespace std;
int main()
{
    //Local Variable definitions

    std::cout << ".......TCPSERVER....." << std::endl;
    std::cout << std::endl;

    WSADATA WinSocData;
    int iWSAStartup;
    int iWSaCleanup;

    SOCKET TCPSocketServer;
    int iCloseSocket;

    struct sockaddr_in TCPServerAdd;
    struct sockaddr_in TCPClientAdd;
    int iTCPClientAdd = sizeof(TCPClientAdd);

    int iBind;
    int iListen;
    SOCKET sAcceptSocket;
    
    int iSend;
    char SenderBuffer[512]="Hello From Server";
    int iSenderBuffer = strlen(SenderBuffer) + 1;

    

    int iRecieve;
    CHAR RecvBuffer[512];
    int  iRecvBuffer = strlen(RecvBuffer) + 1;


    //Initializion winsock                                          step 1
    iWSAStartup = WSAStartup(MAKEWORD(2, 2), &WinSocData);
    if (iWSAStartup != 0) {
        std::cout << "WSAStartup Failed& error no : " << WSAGetLastError() <<  std::endl;
    }
    std::cout << "WSAStartup Success : " << std::endl;

    // Fill the UDPCLIENT  (Stocket ADDRESS) Structure              step 2
   TCPServerAdd.sin_family = AF_INET;
   TCPServerAdd.sin_addr.s_addr = inet_addr("127.0.0.1");
   TCPServerAdd.sin_port = htons(8000);

    //Socket Creation                                                step 3
    TCPSocketServer = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (TCPSocketServer == INVALID_SOCKET) {
        std::cout << "Socket creation Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << "Socket creation Success : " << std::endl;

    //bind the server                                                 step-4
    iBind = bind(
        TCPSocketServer,
        (SOCKADDR*)&TCPServerAdd,
        sizeof(TCPServerAdd));
    if (iBind == SOCKET_ERROR) {
        std::cout << "Bind connection Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << "Bind connection Success : " << std::endl;

    // Listen Function                                              step-5
    iListen = listen(TCPSocketServer, 2);
    if (iListen == SOCKET_ERROR) {
        std::cout << "Listening Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << "Listening  Success : " << std::endl;

    // ACCEPT FUNCTION 
    sAcceptSocket = accept(TCPSocketServer,(SOCKADDR*)&TCPClientAdd,&iTCPClientAdd);
    if (sAcceptSocket == INVALID_SOCKET) {
        std::cout << "Accept Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << "Accept Success : " << std::endl;

    //Send data                                                       step-6
    iSend =send(sAcceptSocket,SenderBuffer,iSenderBuffer,0);
    if (iSend == SOCKET_ERROR) {
        std::cout << "Sending  Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << "Sending  Success : " << std::endl;

    //recieve from                                                    step-7
    iRecieve = recv(sAcceptSocket, RecvBuffer, iRecvBuffer, 0);
    if (iRecieve == SOCKET_ERROR) {
        std::cout << "Recieve  Failed & error no : " << WSAGetLastError()<< std::endl;
    }
    std::cout << "RecivingSuccess : " << std::endl;
    std::cout << "Recived From Client ! " << RecvBuffer << std::endl;

    //close socket                                                      -step 8

    iCloseSocket = closesocket(TCPSocketServer);
    if (iCloseSocket == SOCKET_ERROR) {
        std::cout << "Close socket  Failed & error no : " << std::endl;
    }
    std::cout << "Close socket  Success  " << std::endl;

    //cleaning socket -                                                   step 9
    iWSaCleanup = WSACleanup();
    if (iWSaCleanup == SOCKET_ERROR) {
        std::cout << "Close socket  Failed & error no : " << std::endl;
    }
    std::cout << "Close socket  Success  " << std::endl;

    system("pause");
    return 0;

}

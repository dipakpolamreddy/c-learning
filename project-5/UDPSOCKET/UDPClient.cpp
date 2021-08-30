#include <Windows.h>
#include <winsock.h>
#include <iostream>

int main()
{
    //Local Variable definitions

    std::cout << "\t\t\.......UDPCLEINT....." << std::endl;
    std::cout << std::endl;


    std::cout << ".......UDPSERVER....." << std::endl;
    std::cout << std::endl;

    WSADATA WinSocData;
    int iWSAStartup;
    int iWSaCleanup;

    SOCKET UDPSocketClient;
    struct sockaddr_in UDPServer;

    char Buffer[512] = "hello from the client ";
    int iSendto;

    int iBufferLen = strlen(Buffer) + 1;
    int iUDPClient = sizeof(UDPServer);
    int iClosesocket;


    //Initializion winsock                                          step 1
    iWSAStartup = WSAStartup(MAKEWORD(2, 2), &WinSocData);
    if (iWSAStartup != 0) {
        std::cout << "Recieved Failed & error no : " << std::endl;
    }
    std::cout << "Recieved Success : " << std::endl;

    // Fill the UDPCLIENT  (Stocket ADDRESS) Structure              step 2
    UDPServer.sin_family = AF_INET;
    UDPServer.sin_addr.s_addr = inet_addr("127.0.0.1");
    UDPServer.sin_port = htons(8001);

    //Socket Creation                                                step 3
    UDPSocketClient = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (UDPSocketClient == INVALID_SOCKET) {
        std::cout << "Socket creation Failed & error no : " << std::endl;
    }
    std::cout << "Socket creation Success : " << std::endl;

    // send to Function                                             Step-4
    iSendto = sendto(
        UDPSocketClient,
        Buffer,
        iBufferLen,
        MSG_DONTROUTE,
        (SOCKADDR*)&UDPServer,
        sizeof(UDPServer));
    if (iSendto == SOCKET_ERROR) {
        std::cout << "Sending  Failed & error no : " << std::endl;
    }
    std::cout << "Sending  Success : " << std::endl;


    //close socket                                                      -step 6

    iClosesocket = closesocket(UDPSocketClient);
    if (iClosesocket == SOCKET_ERROR) {
        std::cout << "Close socket  Failed & error no : " << std::endl;
    }
    std::cout << "Close socket  Success : " << std::endl;

    //cleaning socket -                                                   step 7
    iWSaCleanup = WSACleanup();
    if (iWSaCleanup == SOCKET_ERROR) {
        std::cout << "Close socket  Failed & error no : " << std::endl;
    }
    std::cout << "Close socket  Success : " << std::endl;

    system("pause");
    return 0;
}

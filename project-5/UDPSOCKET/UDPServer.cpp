#include <Windows.h>
#include <winsock.h>
#include <iostream>
using namespace std;
int main()
{
    //Local Variable definitions
     
    std::cout << ".......UDPSERVER....." << std::endl;
    std::cout << std::endl;

    WSADATA WinSocData;
    int iWSAStartup;
    int iWSaCleanup;

    SOCKET UDPSocketServer;
    struct sockaddr_in UDPClient;

    char Buffer[512];
    int iBufferLen=strlen(Buffer)+1;

    int iBind;
    int iReceiveFrom;

    int iUDPClient = sizeof(UDPClient);
    int iClosesocket;
   

    //Initializion winsock                                          step 1
    iWSAStartup = WSAStartup(MAKEWORD(2, 2), &WinSocData);
    if (iWSAStartup != 0) {
        std::cout << "Recieved Failed & error no : " << std::endl;
    }
    std::cout << "Recieved Success : " << std::endl;

    // Fill the UDPCLIENT  (Stocket ADDRESS) Structure              step 2
    UDPClient.sin_family = AF_INET;
    UDPClient.sin_addr.s_addr = inet_addr("127.0.0.1");
    UDPClient.sin_port = htons(8001);
     
    //Socket Creation                                                step 3
    UDPSocketServer = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (UDPSocketServer == INVALID_SOCKET) {
        std::cout << "Socket creation Failed & error no : " << std::endl;
    }
    std::cout << "Socket creation Success : " << std::endl;

    //bind the server                                                 step-4
    iBind = bind(   
        UDPSocketServer,
        (SOCKADDR*)&UDPClient,
        sizeof(UDPClient));
    if (iBind == SOCKET_ERROR) {
        std::cout << "Bind connection Failed & error no : " << std::endl;
    }
    std::cout << "Bind connection Success : " << std::endl;

    //recieve from                                                    step-5

    iReceiveFrom = recvfrom(
        UDPSocketServer,
        Buffer,
        iBufferLen,
        MSG_PEEK,
        (SOCKADDR*)&UDPClient,
        &iUDPClient



    );
    if (iReceiveFrom == SOCKET_ERROR) {
        std::cout << "Recieve  Failed & error no : " << std::endl;
    }
    std::cout << "Recived Success : " << std::endl;
    std::cout << "Recived From Client : " <<Buffer << std::endl;
    //close socket                                                      -step 6

    iClosesocket=closesocket(UDPSocketServer);
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

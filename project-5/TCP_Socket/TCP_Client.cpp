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

    SOCKET TCPClientSocket;
    int iCloseSocket;

    struct sockaddr_in TCPServerAdd;
  
    int iConnect;
    

    int iRecieve;
    CHAR RecvBuffer[512];
    int  iRecvBuffer = strlen(RecvBuffer) + 1;

    int iSend;
    char SenderBuffer[512] = "Hello From Client ";
    int iSenderBuffer = strlen(SenderBuffer) + 1;



    //Initializion winsock                                          step 1
    iWSAStartup = WSAStartup(MAKEWORD(2, 2), &WinSocData);
    if (iWSAStartup != 0) {
        std::cout << "WSASTARTUP Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << "WSASTARTUP  Success " << std::endl;


    //Socket Creation                                                step 2
    TCPClientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (TCPClientSocket == INVALID_SOCKET) {
        std::cout << "TCPClientSocket creation Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << "TCPClientSocketSocket creation Success  " << std::endl;

    // Fill the UDPCLIENT  (Stocket ADDRESS) Structure              step 3
    TCPServerAdd.sin_family = AF_INET;
    TCPServerAdd.sin_addr.s_addr = inet_addr("127.0.0.1");
    TCPServerAdd.sin_port = htons(8000);


    //Connect  the server                                                 step-4
    iConnect = connect(
        TCPClientSocket,
        (SOCKADDR*)&TCPServerAdd,
        sizeof(TCPServerAdd));
    if (iConnect == SOCKET_ERROR) {
        std::cout << "connection Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << " connection Success  " << std::endl;


 
    //recieve from                                                    step-5
    iRecieve = recv(TCPClientSocket, RecvBuffer, iRecvBuffer, 0);
    if (iRecieve == SOCKET_ERROR) {
        std::cout << "Recieve  Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << "Recived Success : " << std::endl;
    std::cout << "Recived From Client " << RecvBuffer << std::endl;



    //Send data                                                          -step 6
    iSend = send(TCPClientSocket, SenderBuffer, iSenderBuffer, 0);
    if (iSend == SOCKET_ERROR) {
        std::cout << "Sending  Failed & error no : " << WSAGetLastError() << std::endl;
    }
    std::cout << "Sending  Success  " << std::endl;

    

    //close socket                                                      -step 7

    iCloseSocket = closesocket(TCPClientSocket);
    if (iCloseSocket == SOCKET_ERROR) {
        std::cout << "Close socket  Failed & error no : " << std::endl;
    }
    std::cout << "Close socket  Success  " << std::endl;

    //cleaning socket -                                                   step 7
    iWSaCleanup = WSACleanup();
    if (iWSaCleanup == SOCKET_ERROR) {
        std::cout << "iWSaCleanup socket  Failed & error no : " << std::endl;
    }
    std::cout << "iWSaCleanup socket  Success  " << std::endl;

    system("pause");
    return 0;

}

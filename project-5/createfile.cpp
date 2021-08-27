
#include <Windows.h>
#include <iostream>

int main()
{
    HANDLE CrFile;
    CrFile=    CreateFile(
        L"C:\\deepak1\\filecreate.txt",                                         //filepath
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
   

    CloseHandle(CrFile);
    system("pause");
}

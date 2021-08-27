#include <Windows.h>
#include <iostream>

int main()
{
    BOOL CFile;                                                               
    CFile=  CopyFile(                                                                             //choose the folder path for the file 
        L"C:\\xxxx1\\OldFile.txt",
        L"C:\\xxx2\\NewFile.txt",
        true
    );
    if (CFile == false) {

        std::cout << " Copyfile failed & error no : " << GetLastError();
    }
    else {
        std::cout << "copy files Success";
    }
    system("pause");
}

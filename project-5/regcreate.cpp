
#include <Windows.h>
#include <iostream>

int main()
{
    long lreg;
    HKEY rkey;
    DWORD  dwdata = 1234;           /using while create a value in reg
    lreg=RegCreateKeyEx(
        HKEY_LOCAL_MACHINE,
        L"Software\\Test\\Product\\SmartId",
        0,
        NULL,
        REG_OPTION_NON_VOLATILE,
        KEY_ALL_ACCESS|KEY_WOW64_64KEY,
        NULL,
        &rkey,
        NULL
    );

    if (lreg == ERROR_SUCCESS) {
        std::cout << "regkey creation success" << std::endl;
    }
    else {
        std::cout << "regkey creation failed & error no :"<<GetLastError() << std::endl;
    }
    // reg set value 
    lreg = RegSetKeyValue(
        rkey,
        L"Value",
        0,
        REG_DWORD,
        (LPBYTE)&dwdata,
        sizeof(dwdata)
    
    );
    if (lreg == ERROR_SUCCESS) {
        std::cout << "regsetkey creation success" << std::endl;
    }
    else {
        std::cout << "regsetkey creation failed & error no :" << GetLastError() << std::endl;
    }
    RegCloseKey(rkey);
    system("pause");
    
}

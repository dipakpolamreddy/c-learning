#include<Windows.h>
#include <iostream>

int main()
{
	BOOL CDir;                                                                          /*creating directory function structure */
	CDir=CreateDirectory(
		L"C:\\deepak",
		NULL
	);
	if (CDir == false) {
		std::cout << " create directory Failed & error no : " << GetLastError() << std::endl;
		
	}
	else {
		std::cout << "Creating Directory Success" << std::endl;
	}
	system("PAUSE");
}

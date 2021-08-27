#include<Windows.h>
#include <iostream>

int main()
{
	BOOL CDir;
	CDir=CreateDirectory(
		L"C:\\deepak1",
		NULL
	);
	if (CDir == false) {
		std::cout << " create directory Failed & error no : " << GetLastError() << std::endl;
		
	}
	else {
		std::cout << "Creating Directory Success" << std::endl;
	}

	BOOL Rdir;																				
	Rdir = RemoveDirectory(L"C:\\deepak");														//Remove directory 
	if (Rdir == false) {
		std::cout << " Remove  directory Failed & error no : " << GetLastError() << std::endl;

	}
	else {
		std::cout << "Creating Directory Success" << std::endl;
	}
	system("PAUSE");
}

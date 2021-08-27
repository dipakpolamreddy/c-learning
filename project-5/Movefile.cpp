int main()
{
	BOOL MFile;
	MFile= MoveFile(                                                              //movefile structure
		L"C:\\xxxxx1\\NewFile.txt",
		L"C:\\xxxxxx1\\Changed.txt"
	);
	if (MFile == false) {                   

		std::cout << " Copyfile failed & error no : " << GetLastError();
	}
	else {
		std::cout << "copy files Success" << std::endl;
	}
	system("pause");
}

#include"sv.h"
int main()
{
	ifstream fileIn;
	fileIn.open("data.txt", ios_base::in);
	if (fileIn.fail())
	{
		cout << "file is not exits!";
		exit(0);
	}
	vector <SinhVien> dssv;
	readFile(dssv, fileIn);
	
	//OutputDSSV(dssv);

	Search(dssv, "nguyen VaN A");
	fileIn.close();
	return 0;
}

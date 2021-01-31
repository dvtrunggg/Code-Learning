#include<iostream>
#include<fstream>
void main()
{
	fstream file;
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	 
	// Mo file co san de ghi
	file.open("data.dat", ios::out | ios::binary);
	 
	// Ghi du lieu tu mang vao file
	cout << "Ghi vao file.\n";
	file.write(reinterpret_cast<char *>(a), sizeof(a));
	 
	// Dong file
	file.close();
	 
	// Mo file de doc
	file.open("data.dat", ios::in | ios::binary);
	 
 	int b[10];
	// Doc noi dung file vao mang b
	cout << "Doc du lieu vao bo nho.\n";
	file.read(reinterpret_cast<char *>(b), sizeof(b));
	 
	// Xuat du lieu
	for (int i = 0; i < 10; i++)
		cout << b[i] << " ";
	cout << endl;
	 
	// Dong file.
	file.close();
	return 0;
}





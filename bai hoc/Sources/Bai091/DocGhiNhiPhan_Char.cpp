#include<iostream>
#include<fstream>
void main()
{
	fstream file;
	char a = 'a', b;
	// Mo file co san de ghi
	file.open("data.dat", ios::out | ios::binary);
 	// Ghi du lieu tu mang vao file
	cout << "Ghi vao file.\n";
	file.write(&a, sizeof(a));
	file.close();
 	// Mo file de doc
	file.open("data.dat", ios::in | ios::binary);
	// Doc noi dung file vao mang b
	cout << "Doc du lieu vao bo nho.\n";
	file.read(&b, sizeof(b));
	cout << b << " ";
	file.close();
}





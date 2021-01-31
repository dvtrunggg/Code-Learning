#include<iostream>
#include<fstream>
#include <cstdio>
using namespace std;
main()
{
	fstream myFile1;         // myFile1 là 1 bien ( giong nhu int a)
	myFile1.open("data.docx", ios::in | ios::binary);      // mo file data.dat: o che do mo len de doc, mo file o che do nhi phan
	bool flag1 = myFile1.fail();                            // khai báo 1 co
	if(flag1 == true)
		cout<<"File ko ton tai"<<endl;
	else
	cout<<"mo file thanh cong"<<endl;	
	
	fstream myFile2;
	myFile2.open("C:/Users/admin/Desktop/C++/file/data.txt", ios::in );
	bool flag2 = myFile2.fail();
	if(flag2 == true)
		cout<<"File ko ton tai"<<endl;
	else
	cout<<"Mo file thanh cong";
}

/* file data.dat: o cung folder chua file.cpp ( file code), con neu ko o trong thu muc do thi them //D: duong dan.....*/

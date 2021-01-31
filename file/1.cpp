#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	//===================doc========================== 
	ifstream fIn;		// kieu fstrem ( giong int, float,..), mo de doc
	fIn.open("data.txt", ios_base::in);	//open("duong dan", che do); dùng ifstream th? ko c?n ios::in van ok 
	if(fIn.fail())
	{
		cout<<"Khong ton tai!";
		return 0;
	}
	
	// xu ly file: doc file ra man hinh 
	int x;
	int y;
	
	//cin>>x: ghi tu bàn phím 
	fIn>>x;	// ghi tu file. 
	fIn>>y;
	cout<<x+y; 
	fIn.close(); 	// cu thao tac xong thu dong file 

	//====================ghi file===========================
	ofstream fOut;		// 
	fOut.open("result.txt",ios_base::out);  // mo file de ghi lai, if if isn't exist, it will make a file.
	fOut<<x+y; 
	fOut<<10;	// xuat ra result of x+y and 10, 2 so này d?nh vào nhau ( ko có khoang trang) 
	fOut.close(); 	// dong file sau khi thao tac  
	return 0;
}

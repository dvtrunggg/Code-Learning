#include<iostream>
#include<fstream>
using namespace std;

main()
{
	fstream file;
	char a = 'a', b;           // bien a nay dc khoi tao: ky tu a và bien b
	// mo file có san de ghi
	file.open("filedata.txt" ,ios::out | ios::binary );
	
	// ghi du lieu tu mang vao file
	cout<<"Ghi vào file: "<<endl;
	file.write(&a,sizeof(a) );          // truyen vào dia chi bien can ghi, kich thuoc bien can ghi ( here is a)
	file.close();                    // ghi xong thì phai dóng file!
	
	//Mo len de doc:
	cout<<"Doc du lieu vao bo nho: "<<endl;
	file.read(&b, sizeof(b));
	cout<<b<<"   ";
	file.close();
	
}

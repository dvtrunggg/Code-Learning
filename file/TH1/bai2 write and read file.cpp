#include<iostream>
#include<fstream>
using namespace std;

main()
{
	fstream file;
	char a = 'a', b;           // bien a nay dc khoi tao: ky tu a v� bien b
	// mo file c� san de ghi
	file.open("filedata.txt" ,ios::out | ios::binary );
	
	// ghi du lieu tu mang vao file
	cout<<"Ghi v�o file: "<<endl;
	file.write(&a,sizeof(a) );          // truyen v�o dia chi bien can ghi, kich thuoc bien can ghi ( here is a)
	file.close();                    // ghi xong th� phai d�ng file!
	
	//Mo len de doc:
	cout<<"Doc du lieu vao bo nho: "<<endl;
	file.read(&b, sizeof(b));
	cout<<b<<"   ";
	file.close();
	
}

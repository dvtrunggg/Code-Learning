#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

main()
{
	char a='s';       // bien a de ghi ký tu 's' vào myfile
	char b;                // bien b de doc cac ky tu trong file
	fstream myfile;
	
	myfile.open("data.docx", ios::out | ios::binary ); // mo file de ghi
	cout<<"Ghi du lieu vao file: "<<a;
	
	myfile.write(&a, sizeof(a));  // ghi du lieu
	myfile.close();                 // dong file sau khi thao tac
	
	myfile.open("data.docx", ios::in | ios::binary);
	myfile.read(&b, sizeof(b));
	cout<<"\ndu lieu trong data.docx: "<<b;
	myfile.close();
	
	
}

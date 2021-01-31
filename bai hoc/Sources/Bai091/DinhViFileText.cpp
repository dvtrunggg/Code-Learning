#include<iostream>
#include<fstream>
#include<string>
void main() 
{
	fstream f("data.txt", ios::in); 
	char a[80];
	//tu byte thu 2 moi doc 
	//f.seekg(2)	;
	while(!f.eof())
	{ 
		//tu vi tri hien tai nhay di 2 byte
		//f.seekg(2,ios::cur);
		f >> a; 	
		cout << "Gia tri: " << a;
		cout <<endl;
		cout <<"Vi tri: "<<f.tellg();	
	} 
	f.close();
}

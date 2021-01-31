#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() 
{
	char a[80];
	fstream file;
	cout<<"Nhap ky tu ban muon: ";
	gets(a);
	
	file.open("data.txt", ios::out);
	file<<a;
	file.close();
	
	char b[80];
	file.open("data.txt", ios::in);
	cout<<"Ki tu ban nhap trong file la: ";
	file.getline(b,80);
	cout<<b;
	file.close();
}

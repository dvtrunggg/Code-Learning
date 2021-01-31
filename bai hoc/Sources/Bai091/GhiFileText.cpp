#include<iostream>
#include<fstream>
#include<string>
void main() 
{
	fstream f;
	char a[100] = "Xin chao cac ban";
	f.open("data.txt", ios::out);
	f << a;
	f.close();
}

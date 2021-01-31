#include<iostream>
#include<fstream>
void main() 
{
	fstream f("data.txt", ios::in); 
	char a[80]; 
	while(!f.eof())
	{ 
		f >> a;
		cout << a <<" "; 
	} 
	f.close();
}


#include<iostream>
#include<fstream>
#include<string>
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
	char b[100] = "456";
	f.open("data.txt", ios::app);
	f << b <<endl;
	f.close();
}

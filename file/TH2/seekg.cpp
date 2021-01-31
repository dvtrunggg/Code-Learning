#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fileIn;
	fileIn.open("data.txt", ios::in);
	fileIn.seekg(4,ios_base::beg);		// dich sang phai 4byte tu vi tri bat dau
	int x;
	fileIn>>x;		// nhap tu file 
	cout<<x;
	fileIn.close();
	return 0;
} 

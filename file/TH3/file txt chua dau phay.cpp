// file data.txt chua day so nguyen, cach nhau dau phay

#include<iostream>
using namespace std;
#include<fstream>
#include<algorithm>
void readFile(int a[], int& n, ifstream& fileIn)
{
	
	if(fileIn.fail())
	{
		cout<<"not exist!";
		exit(0);
	}
	fileIn.open("data.txt", ios_base::in);
	while(fileIn.eof() == false)
	{
		fileIn>>a[n];	// n = 0
		char x;
		fileIn>>x;		// dau phay dc luu tai bien x
		n++;
	}
	
}

int UCLN_Array(int a[], int n)
{
	int x;
	for(int i = 1; i<n; i++)
	{
		x = __gcd(a[0], a[i]);	// ham tim ucln trong algorithm
	}
	return x;
}
int BCNN(int x, int y)
{
	return (x*y) /__gcd(x,y);
}
int BCNN_Array(int a[], int n)
{
	int x;
	for(int i = 1; i<n; i++)
	{
		x = BCNN(a[0], a[i]);	// ham tim bcnn trong algorithm
	}
	return x;
}

int main()
{
	int a[20];
	int n = 0;
	ifstream fileIn;
	readFile(a,n,fileIn);
	fileIn.close();
	
	ofstream fileOut;
	fileOut.open("UCLN.txt", ios_base::out);
	
	fileOut<<UCLN_Array(a,n);
	fileOut.close();	// dong file roi mo tiep, neu ko se bi loi!
	
	fileOut.open("BCNN.txt", ios_base::out);
	fileOut<<BCNN_Array(a,n);
	fileOut.close();
	
	return 0;
}

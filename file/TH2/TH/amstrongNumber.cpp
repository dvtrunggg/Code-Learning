/*
	 file data.txt la day so nguyen: file data.txt is intergers
	 tim so amstrong va ghi ra file result.txt: find amstrong number and write in file result.txt.
	 amstrong: 153 = 1^3 + 5 ^3 + 3^3. ^3 la do 153 co 3 chu so. ^3 because 153 has 3 numbers */
	
#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;

void readFile(int a[], int &n, ifstream &fileIn)		// n la so chi so cua mang a[], doc file nen truyen &, giong cin
{
	
	if(fileIn.fail())
	{
		cout<<"file is not exist! "<<endl;
	}
	// n = 0;
	while( !fileIn.eof() )		//<=> fileIn.oef() = false
	{
		fileIn>>a[n];
		n++;
	}
	
}
bool isAmstrong(int n)
{
	int k = 0;
	int tam = n;
	while (n != 0)
	{
		n = n / 10;
		k++;
	}
	n = tam;
	int tong = 0;
	while (n != 0)
	{
		tong = tong + pow((n % 10), k);
		n = n / 10;
	}
	if (tam == tong)
	{
		return true;
	}
	return false;
}
void writeFile(int a[], int n, ofstream& fileOut)	// ghi file nen truyen &
{
	
	for(int i = 0; i<n; i++)
	{
		if(isAmstrong(a[i]) == true)
			fileOut<<a[i]<<" ";
	}
}
void Output(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
}
int main()
{
	int n = 0;
	ifstream fileIn;
	int a[20];
	fileIn.open("DATA.TXT", ios_base::in);
	readFile(a,n,fileIn);
	Output(a,n);
	
	ofstream fileOut;
	fileOut.open("result.txt", ios_base::out);
	writeFile(a,n,fileOut);
	fileIn.close();
	fileOut.close();
	return 0;
}

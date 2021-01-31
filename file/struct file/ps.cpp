// file data.txt gom: - file data.txt consist of:
/* dong dau tien chua so luong phan so.  - the first line is the numbers of fractions
 sau do la danh sach cac phan so		- then, list of fractions */
 
#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

 struct Fraction
{
	int num; 	//numerator
	int den;	//denominator
}; 

 struct List
{
	int n;
	Fraction dsps[100];
//	Fraction *dsps;
};
void readFraction(Fraction &ps, ifstream &fileIn)
{

	fileIn >> ps.num;
	char x;		
	fileIn>>x;		// x la ky tu / trong 1/2
	fileIn>>ps.den;
}
void readList(List &ds, ifstream &fileIn)
{
	fileIn>>ds.n;	//dong dau la so luong cac phan so
	for(int i = 0; i<ds.n; i++)
	{
		readFraction(ds.dsps[i], fileIn);
	}
}
void rutGon(Fraction &ps)
{
	int x = __gcd(ps.num, ps.den);
	ps.den = ps.den / x;
	ps.num = ps.num / x;
}
void Output(List ds)
{
	for(int i = 0; i<ds.n; i++)
	{
		cout<<ds.dsps[i].num<<"/"<<ds.dsps[i].den<<endl;
	}
}
// ghi cai phan so rut gon vao file result
void writeFile(List ds, ofstream& fileOut)
{
	fileOut.open("result.txt", ios::out);
	for(int i = 0; i<ds.n; i++)
	{
		rutGon(ds.dsps[i]);
		fileOut<<ds.dsps[i].num<<"/"<<ds.dsps[i].den<<" ";
	}
	fileOut.close();
	
}

// tim phan so max va ghi vao file max.txt
void maxFraction(List ds, ofstream& fileOut)
{
	fileOut.open("max.txt", ios_base::out);
	float max = ds.dsps[0].num / (ds.dsps[0].den * 1.0);
	int k = 0; // luu l?i ch? s? c?a phân s? l?n nh?t
	for (int i = 1; i < ds.n; i++)
	{
		float tam = ds.dsps[i].num / (ds.dsps[i].den * 1.0);
		if (max < tam )
		{
			max = tam;
			k = i;
		}
	}
	fileOut << ds.dsps[k].num << "/" << ds.dsps[k].den;
	fileOut.close();
}
int main()
{
	List ds;
	ifstream fileIn;
	fileIn.open("data.txt", ios_base::in);
	readList(ds,fileIn);
	
	Output(ds);
	ofstream fileOut;
	writeFile(ds, fileOut);	// da viet ham fileOut.close() 
	
	maxFraction(ds,fileOut);
	fileIn.close();
	
	return 0;
}


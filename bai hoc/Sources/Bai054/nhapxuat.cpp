#include <iostream>
#define MaxD 50
#define MaxC 50
using namespace std;
void NhapMT(int mt[MaxD][MaxC], int &d, int &c)
{	
	cout << "Nhap so dong: "; 
	cin >> d;
	cout << "Nhap so cot: "; 
	cin >> c;
	for (int i=0;i<d;i++)
	{	for(int j=0; j<c; j++)
		{	
			cout << "mt["<<i<<"]["<<j<<"]=";  
			cin >>mt[i][j];
		}
	}
}
void XuatMT(int mt[MaxD][MaxC], int d, int c)
{	
	cout <<"Ma tran:\n";
	for (int i=0;i<d;i++)
	{	
		for(int j=0; j<c; j++) 
			cout<<"  "<< mt[i][j];
		cout << endl;
	}
}
 main()
{	
	int matran[MaxD][MaxC], d, c;
	NhapMT(matran, d,c);
	XuatMT(matran, d,c);
}



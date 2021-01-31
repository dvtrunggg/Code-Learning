#include<iostream>
using namespace std;
void NhapMang(int a[ ], int &n)
{	
	cout <<"Nhap so phan tu cua mang:";
	cin >>n;
	for (int i=0;i<n;i++)
	{	
		cout <<"a["<<i<<"]=";
		cin >> a[i];
	}
}
void XuatMang(int a[ ], int n)
{	
	cout <<"Mang vua nhap:"<<endl;
	for(int i=0;i<n; i++) 
		cout <<"a["<<i<<"]="<<a[i]<<endl;
}

 main()
{
	int a[100],n;
	NhapMang(a,n);
	XuatMang(a,n);
}


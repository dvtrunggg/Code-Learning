#include<iostream>
using namespace std;
void NhapMang(int a[ ], int n)
{	
	cout <<"Nhap vao gia tri mang "<<endl;
	for (int i=0;i<n;i++)
	{	
		cout <<"A["<<i<<"]=";
		cin >> a[i];
	}
}
void XuatMang(int a[ ], int n)
{	
	for(int i=0;i<n; i++) 
		cout <<"   "<<a[i];
	cout <<endl;
}
void Huy(int a[],int &n,int p)
{	
	for(int i=p;i<n;i++)
		a[i]=a[i+1];
	n-- ;
}
void XoaTrung(int a[],int &n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]==a[j])Huy(a,n,j);
}

 main()
{
	int a[100], n;
	cout <<"Nhap so phan tu cua mang: ";
	cin >>n;
	NhapMang(a,n);
	cout <<"Mang vua nhap ";
	XuatMang(a,n);
	XoaTrung(a,n);
	cout <<"Mang sau khi xoa cac phan tu trung nhau: ";
	XuatMang(a,n);
}

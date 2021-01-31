#include<iostream.h>
void NhapMang(int a[ ], int n, char ch)
{	
	cout <<"Nhap vao gia tri mang "<<ch<<endl;
	for (int i=0;i<n;i++)
	{	
		cout <<ch<<"["<<i<<"]=";
		cin >> a[i];
	}
}
void XuatMang(int a[ ], int n, char ch)
{	
	cout <<"Mang "<<ch<<" vua nhap"<<endl;
	for(int i=0;i<n; i++) 
		cout <<"   "<<a[i];
	cout <<endl;
}
void GopMangXenKe(int a[],int b[],int c[],int n)
{       
	int j=0;
	for(int i=0;i<n;i++)
 	{	
	 	c[j++]=a[i];
		c[j++]=b[i];
  	}
}
void main()
{
	int a[100],b[100],c[200], n;
	cout <<"Nhap so phan tu cua mang: ";
	cin >>n;
	NhapMang(a,n,'A');
	XuatMang(a,n,'A');
	NhapMang(b,n,'B');
	XuatMang(b,n,'B');
	GopMangXenKe(a,b,c,n);
	XuatMang(c,2*n,'C');
}

#include<iostream>
#include<stdio.h>
#include<conio.h>
void NhapMang(int *a, int n)
{       
	cout<<"\nNhap vao gia tri mang ";
	for(int i=0;i<n;i++)
	{	
		cout<<"\nA["<<i<<"]=";
		cin >> *(a+i);
	}
}
void XuatMang(int *a,int n )
{       
	for(int i=0;i<n;i++)
		cout<<"   "<<*(a+i);
}
void Hoanvi(int *x,int *y)
{	
	int t;
	t=*x;
	*x=*y;
	*y=t;	
}
void Saptang(int *a,int n)
{       
	int i,j ;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(*(a+i)>*(a+j))Hoanvi((a+i),(a+j));
}
void Sapgiam(int *a,int n,int dem)
{       
	int i,j ;
	for(i=dem;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(*(a+i)<*(a+j))
				Hoanvi((a+i),(a+j));
}
void Sapxep(int *a,int n)
{       
	int dem=0;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(*(a+i)%2==0)
				Hoanvi((a+i),(a+j));
	for(int i=0;i<n;i++)
		if(*(a+i)%2!=0)dem++;
	Saptang(a,dem);
	Sapgiam(a,n,dem);
}
void main ()
{      
	int n,*a;
	cout<<"Moi nhap kich thuoc mang 1 chieu ";
	cin >>n;
	a=new int[n];
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<"\nMang sap xep lai \n";
	Sapxep(a,n);
	XuatMang(a,n);
	delete a;
	getch();
}


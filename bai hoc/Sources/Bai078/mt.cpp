#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void NhapMT(int *a,int n)
{	int i,j;
	float t;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{	
			cout <<"\nA["<<i<<"]["<<j<<"]= ";
			cin >>*(a+(i*n+j));
		}       
}
void XuatMT(int *a,int n)
{	int i,j ;
	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
		cout<<"\t"<<*(a+(i*n+j));
		cout<<endl;
	}
}
void Chuyenvi(int *a,int n)
//dau vao MT a,n
//dau ra MT chuyen vi cua a
{	int i,j ;
	for(j=0;j<n;j++)
	{	
		for(i=0;i<n;i++)
			cout<<"\t"<<*(a+(i*n+j));
	 	cout<<endl;
	}
}
void main()
{	
	int *a,n;
	do
	{	
		cout <<"\nMoi nhap cap cua ma tran vuong ";
		cin >>n;
		if(n<=1) cout <<"\nNhap sai moi nhap lai ! ";
	}
	while(n<=1);
	a=new int[n*n] ;
	if(a==NULL) 
	{	
		cout <<"\nKhong du vung nho";
		exit(0) ;
	}
	NhapMT(a,n);
	XuatMT(a,n);
	cout<<"\nMa tran chuyen vi cua A la\n ";
	Chuyenvi(a,n);
	delete a;
	getch();
}

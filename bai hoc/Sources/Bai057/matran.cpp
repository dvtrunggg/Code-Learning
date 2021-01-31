/*	
Nhap vao ma tran co gia tri thuc n*n
Tim cac vi tri trong ma tran thoa:gia tri cua ma tran tai vi
tri do la gia tri lon nhat cua ma tran
Kiem tra ma tran co phai la ma tran doi xung qua duong cheo
chinh khong
*/
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#define MaxD 50
#define MaxC 50
using namespace std;

void NhapMT(float, int );
void XuatMT(float a[][MaxC], int n);
float TimMax(float a[][MaxC],int n);
int DoiXung(float a[][MaxC],int n);

void NhapMT(float a[MaxD][MaxC], int n)
{	
	for (int i=0;i<n;i++)
	{	for(int j=0; j<n; j++)
		{	
			cout << "a["<<i<<"]["<<j<<"]=";  
			cin >>a[i][j];
		}
	}
}
void XuatMT(float a[MaxD][MaxC], int n)
{	
	for (int i=0;i<n;i++)
	{	
		for(int j=0; j<n; j++) 
			cout<<"  "<< a[i][j];
		cout << endl;
	}
}
//dau vao MT a,n
//dau ra max
float TimMax(float a[MaxD][MaxC],int n)

{	int i,j;
	float max=a[0][0];//gan max=A[0][0]
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]>max) max=a[i][j];
	return max ;
}
//dau vao MT a,n
//dau ra  	1  :MT doi xung
//	  		0  :MT khong doi xung
//MT doi xung qua duong cheo chinh la a[i][j]==a[j][i]
int DoiXung(float a[MaxD][MaxC],int n)
{
	int i,j;
	for(i=1;i<n-1;i++)
		for(j=0;j<n;j++)
			if(a[i][j]!=a[j][i])
			{ 
				return 0;
			}
	return 1;	
}

 main()
{	
	float a[MaxD][MaxD];
	int n,i,j,dx ;
	cout << "Nhap cap cua ma tran vuong: "; 
	cin >> n;
	NhapMT(a,n);
	XuatMT(a,n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]==TimMax(a,n))
		 			cout << "Phan tu co gia tri lon nhat la: a["<<i<<"]["<<j<<"] = "<<TimMax(a,n)<<endl; 
	dx= DoiXung(a,n);
	if(dx==1) 
		cout <<"\nMa tran doi xung qua duong cheo chinh "<<endl;
	else 
		cout <<"\nMa tran khong doi xung qua duong cheo chinh "<<endl;
}

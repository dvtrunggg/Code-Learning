#include<iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;
typedef struct
{
	char   Hoten[30];
	float  DTB  ;
	int   Hang   ;
}HOCSINH;
void Hoanvi(HOCSINH &a,HOCSINH &b)
{
	HOCSINH c=a;a=b;b=c ;
}
void Xephang(HOCSINH dshs[],int n)
{
	int i,j ;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(dshs[i].DTB<dshs[j].DTB)Hoanvi(dshs[i],dshs[j]);
	dshs[0].Hang=1 ;
	for(i=1;i<n;i++)
		if(dshs[i].DTB==dshs[i-1].DTB)dshs[i].Hang=dshs[i-1].Hang;
		else dshs[i].Hang=i+1 ;
}
void Nhap(HOCSINH &hs)
{      
	cout<<"\nHo ten hoc sinh: ";
	gets(hs.Hoten);
	cout<<"Nhap diem trung binh : ";
	cin>>hs.DTB;
}
void Nhapds(HOCSINH dshs[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap hoc dinh thu "<<i+1;
		Nhap(dshs[i]);
	}
}
void Xuat(HOCSINH dshs[],int n)
{
	cout<<"\n+-----+------------------------------+-------+----------+";
	cout<<"\n| STT |         HO VA TEN            |  DTB  |  VI THU  |";
	cout<<"\n+-----+------------------------------+-------+----------+";
	for (int i=0;i<n;i++)
	{
		cout<<"\n|"<<setw(3)<<i+1<<"  | ";
		cout<<setw(28)<<dshs[i].Hoten<<" | "<<setw(4)<<dshs[i].DTB<<"  |     "<<dshs[i].Hang<<"    |";
		cout<<"\n+-----+------------------------------+-------+----------+";
	}
	cout<<endl;
}
int main()
{
	HOCSINH  dshs[100];
	int  n   ;
	cout<<"\nNhap vao so hoc sinh ";
	cin>>n;
	Nhapds(dshs,n);
	Xephang(dshs,n);
	Xuat(dshs,n) ;
}



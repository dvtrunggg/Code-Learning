//Tim so chan max va so le min trong mang a
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
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

int ChanMax(int *a,int n)
{       
	int max=0;
	for(int i=0;i<n;i++)
		if(*(a+i)%2==0)max=*(a+i);
	for(int i=0;i<n;i++)
		if(*(a+i)%2==0&&*(a+i)>max)max=*(a+i);
	return max ;
}
int LeMin(int *a,int n)
{       
	int min=0;
	for(int i=0;i<n;i++)
		if(*(a+i)%2!=0)min=*(a+i);
	for(int i=0;i<n;i++)
		if(*(a+i)%2!=0&&*(a+i)<min)min=*(a+i);
	return min ;
}
int main ()
{      
	int n,*a;
	cout<<"Moi nhap kich thuoc mang 1 chieu ";
	cin >>n;
	a=new int[n];
	NhapMang(a,n);
	XuatMang(a,n);
	if(ChanMax(a,n)==0)
		cout <<"\nKhong co so chan";
	else 
		cout <<"\nSo chan lon nhat la: "<<ChanMax(a,n);
	if(LeMin(a,n)==0)
		cout <<"\nKhong co so le";
	else 
		cout <<"\nSo le nho nhat la: "<<LeMin(a,n);
	delete a;
}

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
int TimTanSuatXuatHienMax(int *a, int n)
{
	int Max = 1;//phan tu thoi thieu xuat hien
	for (int i = 0; i < n; i++)
	{
		int dem = 1; // Tinh chinh no
		for (int j = i + 1; j < n; j++)
		{
			if (*(a+i) == *(a+j))
			{
				dem++;
			}
		}
		if (dem > Max)
		{
			Max = dem;
		}
	}
	return Max;
}
int DemTanSuatXuatHien(int *a, int n, int index)
{
	int dem = 1; //chinh no xuat hien
	for (int i = index + 1; i < n; i++)
	{
		if (*(a+i) == *(a+index))
		{
			dem++;
		}
	}
	return dem;
}
/*void LietKeCacSoXuatHienNhieuNhat(int *a, int n)
{
	int TanSuatMax = TimTanSuatXuatHienMax(a, n);
	if (TanSuatMax >1)
	{
		for (int i = 0; i < n; i++)
		{
			
				int TanSuat = DemTanSuatXuatHien(a, n, i);
				if (TanSuat == TanSuatMax)
				{
					cout<<"\nPhan tu xuat hien nhieu nhat la "<<*(a+i);
				}
		
		}
		cout<<"\n=> So lan xuat hien la: "<< TanSuatMax;
	}
	else
		cout<<"\nSo lan xuat hien moi phan tu deu la: 1 ";
}*/


void LietKeCacSoXuatHienNhieuNhat(int *p, int n){
	if(TimTanSuatXuatHienMax(p,n) >1){
		for(int i = 0; i<n; i++)
		{
			if(TimTanSuatXuatHienMax(p,n) == DemTanSuatXuatHien(p,n,i)){
				cout<<" Phan tu xuat hien nhieu nhat la: "<<*(p+i);
			}
		}
		cout<<" \n   so lan xuat hien la: "<<TimTanSuatXuatHienMax(p,n); 
	}
	else
		cout<<"cac phan tu deu doc lap voi nhau";
}

 main ()
{       
	int n,*a;
	cout<<"Moi nhap kich thuoc mang 1 chieu ";
	cin >>n;
	a=new int[n];
	NhapMang(a,n);
	XuatMang(a,n);
	LietKeCacSoXuatHienNhieuNhat(a, n);
	delete a;
	getch();
}

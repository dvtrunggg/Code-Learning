#include<iostream>
#include<stdio.h>
//dinh nghia cau truc mot nhan vien
typedef struct NHANVIEN
{
	char MaSo[20];	
	char HoTen[50];
	char DiaChi[100];
	int CBQL;
}NHANVIEN;

void NhapNV(NHANVIEN &NV)
{
	cout <<"\nNhap ma so: ";
	cin >>NV.MaSo;
	cout <<"\nNhap ho ten: ";
	gets(NV.HoTen);
	cout <<"\nNhap dia chi: ";
	gets(NV.DiaChi);
	cout <<"\nCan bo quan li 1.CBQL    0.Khong CBQL  : ";
	cin >>NV.CBQL;
}
void XuatNV(NHANVIEN NV)
{
	cout <<"\nMa so nhan vien: "<<NV.MaSo;
	cout <<"\nHo ten nhan vien: "<<NV.HoTen;
	cout <<"\nDia chi nhan vien: "<<NV.DiaChi;
	if(NV.CBQL==1)
		cout <<"\nQuan ly";
	else 
		cout <<"\nNhan vien";
}

void NhapDSNV(NHANVIEN ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<"\nNhap nhan vien thu "<<i+1;
		NhapNV(ds[i]);
	}
}
void XuatDSNV(NHANVIEN ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout <<"\nThong tin nhan vien thu "<< i+1;
		XuatNV(ds[i]);
	}
}
void main()
{
	NHANVIEN ds[100];
	int n;
	cout <<"\nNhap so luong nhan vien: ";
	cin >>n;
	NhapDSNV(ds,n);
	XuatDSNV(ds,n);
}










































































 









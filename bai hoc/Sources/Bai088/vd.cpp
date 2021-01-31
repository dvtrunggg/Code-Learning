#include<iostream>
#include <iomanip>
#include<stdio.h>
//dinh nghia cau truc cua mot may tinh
typedef struct
{
	char MaSo[10];
	char TenMay[50];
	char NhaCungCap[50];
	float GiaTien;
	int Nam;
	
}MAYTINH;
//ham nhap thong tin may tinh
void NhapMT(MAYTINH &mt)
{
	cout<<"\n\tNhap Ma so: ";
	gets(mt.MaSo);
	cout<<"\n\tNhap Ten may tinh: ";
	gets(mt.TenMay);
	cout<<"\n\tNhap Nha cung cap may tinh: ";
	gets(mt.NhaCungCap);
	cout<<"\n\tNhap Gia tien: ";
	cin>>mt.GiaTien;
	cout<<"\n\tNhap Nam: ";
	cin>>mt.Nam;
}
//ham xuat thong tin may tinh
void XuatMT(MAYTINH mt)
{
	cout<<"\n\tMa so may tinh: "<<mt.MaSo;
	cout<<"\n\tTen may tinh: "<<mt.TenMay;
	cout<<"\n\tNha cung cap may tinh: "<<mt.NhaCungCap;
	cout<<"\n\tGia tien: "<<mt.GiaTien;
	cout<<"\n\tNam: "<<mt.Nam;
}

//ham nhap danh sach may tinh
void NhapDanhSachMayTinh(MAYTINH dsmt[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"\nNhap may tinh thu "<<i+1;	
		NhapMT(dsmt[i]);
	}
}
//ham xuat danh sach may tinh
void XuatDanhSachMayTinh(MAYTINH dsmt[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"\nThong tin may tinh thu "<<i+1;	
		XuatMT(dsmt[i]);
	}
}
//ham xuat may tinh thanh ly
void XuatDanhSachMayTinhThanhLy(MAYTINH dsmt[], int n)
{
	cout<<"\nNhung may tinh can thanh ly";	
	for (int i=0;i<n;i++)
	{
		if(dsmt[i].Nam<2008)
		{
			cout<<"\n  Thong tin chi tiet"<<i+1;	
			XuatMT(dsmt[i]);
		}
	}
}
//ham xuat may tinh >=400
void XuatDanhSachMayTinhGiaTri(MAYTINH dsmt[], int n)
{
	cout<<"\nNhung may tinh gia >= 400";	
	for (int i=0;i<n;i++)
	{
		if(dsmt[i].GiaTien>=400)
		{
			cout<<"\n  Thong tin chi tiet"<<i+1;	
			XuatMT(dsmt[i]);
		}
	}
}
//tinh tong chi phi khi nhap cac may tinh
float TongChiPhi(MAYTINH dsmt[], int n)
{
	float kq=0;
	for (int i=0;i<n;i++)
	{
		kq+=dsmt[i].GiaTien;
	}
	return kq;
}
//tinh so tien thu dc khi thanh ly may (gia su gia thanh ly = 30% gia thuc te)
float TongChiPhiThanhLy(MAYTINH dsmt[], int n)
{
	float kq=0;
	for (int i=0;i<n;i++)
	{
		if(dsmt[i].Nam<2008)
		{
			kq+=dsmt[i].GiaTien;
		}
		
	}
	return kq*30/100;
}
void main()
{
	//khai bao mang dsmt
	MAYTINH dsmt[100];
	//so luong may tinh
	int n;
	cout<<"\nNhap so luong may tinh: ";
	cin>>n;
	NhapDanhSachMayTinh(dsmt,n);
	XuatDanhSachMayTinh(dsmt,n);
	XuatDanhSachMayTinhGiaTri(dsmt,n);
	XuatDanhSachMayTinhThanhLy(dsmt,n);
	cout<<"\nTong chi phi mua cac may tinh la: "<<TongChiPhi(dsmt,n);	
	cout<<"\nTong chi phi thanh ly cac may tinh la: "<<TongChiPhiThanhLy(dsmt,n);	
}

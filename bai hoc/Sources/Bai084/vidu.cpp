/*Viet chuong trinh nhap mot sinh vien va xuat 
thong tin sinh vien ra man hinh*/
#include<iostream>
#include<stdio.h>
using namespace std;
using namespace std;
//dinh nghia cau truc mot sinh vien
typedef struct sinhvien
{
	char MaSo[20];	
	char HoTen[50];
	char DiaChi[100];
	float DiemToan, DiemLy, DiemHoa;
}SINHVIEN;

float DTB(SINHVIEN sv)
{
	return (sv.DiemToan+sv.DiemLy+sv.DiemHoa)/3;
}

void NhapSV(SINHVIEN &sv)
{
	cout <<"\nNhap Ma so: ";
	cin >>sv.MaSo;
	cout <<"\nNhap Ho ten: ";
	gets(sv.HoTen);
	cout <<"\nNhap Dia chi: ";
	gets(sv.DiaChi);
	cout <<"\nNhap Diem Toan: ";
	cin >>sv.DiemToan;
	cout <<"\nNhap Diem Ly: ";
	cin >>sv.DiemLy;
	cout <<"\nNhap Diem Hoa: ";
	cin >>sv.DiemHoa;
}
void XuatSV(SINHVIEN sv)
{
	cout <<"\nMa so sinh vien: "<<sv.MaSo;
	cout <<"\nHo ten sinh vien: "<<sv.HoTen;
	cout <<"\nDia chi sinh vien: "<<sv.DiaChi;
	cout <<"\nDiem Toan: "<<sv.DiemToan;
	cout <<"\nDiem Ly: "<<sv.DiemLy;
	cout <<"\nDiem Hoa: "<<sv.DiemHoa;
	cout <<"\nDiem TB: "<<DTB(sv);
}

void NhapDSSV(SINHVIEN ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<"\nNhap sinh vien thu "<<i+1;
		NhapSV(ds[i]);
	}
}
void XuatDSSV(SINHVIEN ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout <<"\nThong tin sinh vien thu "<< i+1;
		XuatSV(ds[i]);
	}
}
 main()
{
	SINHVIEN sv;
	SINHVIEN ds[100];
	int n;
	NhapSV(sv);
//	cout <<"\nNhap so luong sinh vien: ";
//	cin >>n;
//	NhapDSSV(ds,n);
//	XuatDSSV(ds,n);
}










































































 









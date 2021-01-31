#include <iostream>
#include <stdio.h>
typedef struct SinhVien
{
    char MSSV[10];
    float Diem;
    typedef struct NgaySinh
	{
		int Ng;
	 	int Th;
		int Na;
	};
	NgaySinh sinhngay;
};
void Nhap (SinhVien &sv)
{
	cout <<"MSSV: ";
	gets(sv.MSSV);
	cout <<"Nhap diem: ";
	cin >> sv.Diem;
	cout <<"Nhap ngay sinh: ";
	cin >> sv.sinhngay.Ng;
	cout <<"Nhap thang sinh: ";
	cin >> sv.sinhngay.Th;
	cout <<"Nhap nam sinh: ";
	cin >> sv.sinhngay.Na;
}
void Xuat (SinhVien sv)
{
	cout <<"MSSV: "<< sv.MSSV;
	cout <<"Diem: "<< sv.Diem;
	cout <<"Ngay sinh: "<< sv.sinhngay.Ng<<"/"
	<<sv.sinhngay.Th<<"/"<<sv.sinhngay.Na<<endl;
}
void main( )
{
   	SinhVien sv;
 	Nhap(sv);
	Xuat(sv);  	
}

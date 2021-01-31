//de: pp bài 87 ( i fixed)

#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<string>
using namespace std;

typedef struct SinhVien{
	string HoTen;
	float DiemTB;
	int Rank;
};
//hàm nhap 1 sinh vien
void NhapSV(SinhVien &sv){        // truyen tham bien nha vì nó se cap nhat lai MSSV, HoTen, DiaChi,... cho hàm XuatSV 
	fflush(stdin);
	cout<<"\nNhap Ho & Ten: "; 
	getline(cin,sv.HoTen);
	cout<<"\nNhap Diem Trung Binh: "; 
	cin>> sv.DiemTB;
}
//hàm xuat 1 sinh vien
void XuatSV(SinhVien sv){
	cout<<" \nHo va Ten: "<<sv.HoTen;
	cout<<"co diem TB : "<<sv.DiemTB;
}
// danh sach sinh vien la mang ds[] voi cac phan tu la cac sinh vien, 
void Nhapds(SinhVien ds[], int n){           // n la so luong co trong mang ds[]
	for(int i = 0; i<n; i++){
		cout<<"\n\nNhap sinh vien thu "<<i+1<<endl;
		NhapSV(ds[i]);}
}
void Xuatds (SinhVien ds[], int n){
	for(int i = 0; i<n; i++){
		cout<<"Thong tin sinh vien thu "<<i+1<<endl;
		XuatSV(ds[i]);}
}

// hàm hoán vi
void HoanVi(SinhVien &sv1, SinhVien &sv2)
{
	SinhVien temp;
	temp = sv1;
	sv1 = sv2;
	sv2 = temp;

}
// hàm sap xep tu lon -> bé: ds[]: mang chua cac du lieu sinh vien, n: so luong sinh vien
void Sort(SinhVien ds[], int n)
{
	for(int i = 0; i<n-1; i++)         // selection sort
	{	
		for(int j = i+1; j<n; j++)
		{
			if(ds[i].DiemTB < ds[j].DiemTB) HoanVi(ds[i], ds[j]);
		}
	}
		ds[0].Rank = 1; // sau khi sap xep, thang cao diem nhat dung dau
		for(int k = 1; k<n; k++)             //xep hang
		{
			if(ds[k].DiemTB == ds[k-1].DiemTB)
				ds[k].Rank = ds[k-1].Rank  ;         //vd: sv 6 co dtb = sv thu 2 neu = diem trung bình --> gán hang cua sv thu 6  = hang cua sv thu 2	
			else
				ds[k].Rank = k+1;                   // vì ds[0].Rank = 1 ( xep hang nhat)
		}	
	
	
}
void Xuat(SinhVien ds[],int n)
{
	cout<<"\n+-----+------------------------------+-------+----------+";
	cout<<"\n| STT |         HO VA TEN            |  DTB  |  Xep Hang|";
	cout<<"\n+-----+------------------------------+-------+----------+";
	for (int i=0;i<n;i++)
	{
		cout<<"\n|"<<setw(3)<<i+1<<"  | ";
		cout<<setw(28)<<ds[i].HoTen<<" | "<<setw(4)<<ds[i].DiemTB<<" |     "<<ds[i].Rank<<"    |";
		cout<<"\n+-----+------------------------------+-------+----------+";
	}
	cout<<endl;
}

int main()
{
	int n;
	SinhVien *ds = new int[n];

	cout<<" Nhap so luong sinh vien trong lop: ", cin>>n;
	Nhapds(*ds,n);
//	Xuatds(ds,n);
	Sort(*ds,n);
	cout<<"Thu tu cac sinh vien: "<<endl;
	Xuatds(*ds,n);
	Sort(*ds,n);
	Xuat(*ds,n);
	
}

#include<iostream>
using namespace std;

typedef struct NhanVien{
	char MSNV [10];
	char HoTen [50];
	char DiaChi [100];
	int QuanLy;      // = 1: Manager, = 0: Nhan Vien, = 2: Giam doc:))
};

void NhapNV(NhanVien &nv)
{
	fflush(stdin);
	cout<<"Nhap Ma So Nhan Vien: ", cin>>nv.MSNV;
	fflush(stdin);
	cout<<"\nNhap Ho va Ten: ", gets(nv.HoTen);
	cout<<"\nNhap Dia Chi: ", gets(nv.DiaChi);
	cout<<"\nGiam doc: bam GD hoac bam 2-----------Quan ly: bam 1-------- Nhan vien: bam 0     :", cin>>nv.QuanLy;
}
void XuatNV(NhanVien nv)
{
	cout<<"\nMSNV  "<<nv.MSNV;
	cout<<"   "<<nv.HoTen;
	cout<<"\nDia Chi: "<<nv.DiaChi;
	if(nv.QuanLy == 2 || nv.QuanLy == 'GD') cout<<"\n Chuc Vu: Giam Doc";{
	if(nv.QuanLy == 1) cout<<" \nChuc vu: Quan Ly";
	else cout<<" \nChuc vu: Nhan Vien";}
}
void Nhapds(NhanVien ds[], int n)
{
	for(int i = 0; i< n; i++){
		cout<<"\nNhap nguoi thu "<<i+1<<endl;
		NhapNV(ds[i]);
	}
}
void Xuatds(NhanVien ds[], int n)
{
	for(int i = 0; i< n; i++)
	{
		cout<<"\nThong tin nguoi thu "<<i+1<<endl;
		XuatNV(ds[i]);
	}
}
main(){
	NhanVien ds[100];
	int n;
	cout<<"Nhap so luong nhan vien trong danh sach:", cin>>n;
	Nhapds(ds,n);
	Xuatds(ds,n);
}

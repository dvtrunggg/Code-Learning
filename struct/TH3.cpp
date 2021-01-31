#include<iostream>
using namespace std;

typedef struct TheStaff{
	char MSNV[10];
	char HoTen[50];
	char DiaChi[100];
	int Manager;           // if Manager = 1 =>> manager; = 0 =>> staff 
};

// hàm nhap thong tin nhan vien
void NhapNV(TheStaff &nv)
{
	cout<<"Nhap MSNV: ", cin>>nv.MSNV;
	fflush(stdin);
	cout<<"\nNhap HoTen: ", gets(nv.HoTen);
	cout<<"\nNhap Dia Chi cua nhan vien: ", gets(nv.DiaChi);
	cout<<"\nChuc vu: (bam 1 neu la quan ly, bam 0 neu la nhan vien.", cin>>nv.Manager;
}

// hàm xuat thong tin nhan vien
void XuatNV(TheStaff nv)
{
	cout<<"\n Nhan Vien: "<<nv.HoTen;
	cout<<"\n MSNV: "<<nv.MSNV;
	cout<<"\n  Dia chi: "<<nv.DiaChi;
	if(nv.Manager == 1) cout<<"Chuc vu: Manager"<<endl;
	if(nv.Manager == 0) cout<<"Chuc Vu: Staff"<<endl;
}
void NhapDS(TheStaff ds[], int n)
{
	for(int i = 0; i<n; i++){
		cout<<"\nNguoi thu: "<<i+1;
		NhapNV(ds[i]);
	}
}
void XuatDS(TheStaff ds[], int n)
{
	int i = 0;
	while(i<n){
		cout<<"\nNguoi thu: "<<i+1<<endl;
		XuatNV(ds[i]);
		i++;
	}
}


// hàm xóa:
void Xoa(TheStaff ds[], int &n, int k)  // k là vi trí xóa
{
	for(int i = k; i<n-1; i++){
		ds[i] = ds[i+1];
		n--;
	}
}

// hàm xoa nhan vien co chuc vu la Staff trong danh sach
void XoaNV(TheStaff ds[], int &n)
{
	for(int i = 0; i<=n; i++){
		if(ds[i].Manager == 0)
			Xoa(ds, n, i);
	}
}
int main(){
	TheStaff ds[50];
	int n,k;
	cout<<"Nhap so luong nhan vien: ",cin>>n;
	NhapDS(ds,n); 
	XuatDS(ds,n);
	cout<<"\nDanh sach quan ly: "<<endl;
	XoaNV(ds,n);
	XuatDS(ds,n);
}

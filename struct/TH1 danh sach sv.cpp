// de bai: pp b�i 84

#include<iostream>
#include<stdio.h>
using namespace std;

typedef struct SinhVien{
	char MSSV[10];
	char HoTen[50];
	char DiaChi[100];
	int DiemToan, DiemLy, DiemHoa;
};
float DiemTB(SinhVien sv)                            // v� l� Diem TB cua 1 sinh vien nen truyen v�o l� SinhVien
{
	return (sv.DiemHoa+sv.DiemLy+sv.DiemToan)/3;
}
//h�m nhap 1 sinh vien
void NhapSV(SinhVien &sv){        // truyen tham bien nha v� n� se cap nhat lai MSSV, HoTen, DiaChi,... cho h�m XuatSV 
	cout<<"Nhap MSSV: ", cin>>sv.MSSV;
	fflush(stdin);              // d�ng de xoa bo nho cua cin>>sv.MSSV, neu ko thi se ko nhap dc Ho va Ten:), tu test lai la hieu
	cout<<"\nNhap Ho & Ten: "; 
	gets(sv.HoTen);
	cout<<"\nNhap Dia chi: "; 
	gets(sv.DiaChi);
	cout<<"\nNhap diem toan: ", cin>>sv.DiemToan;
	cout<<"\nNhap diem ly: ", cin>>sv.DiemLy;
	cout<<"\nNhap diem hoa: ", cin>>sv.DiemHoa;
}
//h�m xuat 1 sinh vien
void XuatSV(SinhVien sv){
	cout<<"\nMSSV :"<<sv.MSSV;
	cout<<" \nHo va Ten: "<<sv.HoTen;
	cout<<"\nDia chi: "<<sv.DiaChi;
	cout<<"co diem Toan: "<<sv.DiemToan<<"    diem ly: "<<sv.DiemLy<<"     diem hoa: "<<sv.DiemHoa;
	cout<<"co diem TB : "<<DiemTB(sv);
}
// danh sach sinh vien la mang ds[] voi cac phan tu la cac sinh vien, 
void Nhapds(SinhVien ds[], int n){           // n la so luong co trong mang ds[]
	for(int i = 0; i<n; i++){
		cout<<"Nhap sinh vien thu "<<i+1<<endl;
		NhapSV(ds[i]);}
}
void Xuatds (SinhVien ds[], int n){
	for(int i = 0; i<n; i++){
		cout<<"Thong tin sinh vien thu "<<i+1<<endl;
		XuatSV(ds[i]);}
}

main()
{
	int n;
	SinhVien ds[100];
	cout<<"Nhap so luong sinh vien trong danh sach: ", cin>>n;
	Nhapds(ds,n);
	Xuatds(ds,n);
}


#include<iostream>
using namespace std;



typedef struct SV{
//	char Name;
	char MSSV;
	float Diem;
	
	typedef struct NgaySinh
	{
		int day;
		int month;
		int year;
	}; NgaySinh SV1;
};

void NhapSV(SV &a)
{
//	cout<<"Nhap ten: ", gets(a.Name);
	cout<<" MSSV: ", cin>>a.MSSV;
	cout<<"\nDiem: ", cin>>a.Diem;
	cout<<"\nNgay sinh: ", cin>>a.SV1.day;
	cout<<"\nThang: ", cin>>a.SV1.month;
	cout<<"\nNam: ", cin>>a.SV1.year;
	
}
void XuatSV(SV a)
{
//	cout<<a.Name<<" ";
	cout<<a.MSSV<<" co diem la:  "<<a.Diem<<" sinh ngay: "<<a.SV1.day<<" thang: "<<a.SV1.month<<" nam: "<<a.SV1.year;
}
main(){
	SV a;
	NhapSV(a);
	XuatSV(a);
}

// nhap A(x,y); B(x,y): Tính tong 2 toa do (AB(xA + xB , yA + yB ))
#include<iostream>
#include<stdio.h>
using namespace std;

// dinh nghia cau trúc:
typedef struct TOADODIEM
{
	int x;
	int y;
}DIEM;  // khai báo kieu diem, thuoc cau trúc TOADODIEM (diem giong kieu int, char,..)
void Nhap(DIEM &d)     // d thuoc kieu cau truc diem
{
	cout<<"Nhap hoanh do x =", cin>>d.x;         // x là bien thanh vien cua cau truc diem
	cout<<"Nhap tung do y = ", cin>>d.y;
}
void Xuat(DIEM d)
{
	cout<<" \n toa do diem: ( "<<d.x<<", "<<d.y<<" ) ";          // cu coi d.x, d.y la mot ten bien bth
}
DIEM Tong(DIEM d1, DIEM d2)
{
	DIEM sum ;
	sum.x = d1.x + d2.x;
	sum.y = d1.y + d2.y;
	return sum;
}
main(){
	DIEM A, B, AB;             // khai báo 3 bien: A, B, AB. ko can dùng (struct diem A, B, AB) vì dùng typedef roi, ko can khai báo struct nua.
	cout<<"\n Nhap vao toa do diem A: ";
	Nhap(A);
	Xuat(A);
	cout<<"\n Nhap vao toa do diem b: ";
	Nhap(B);
	Xuat(B);
	cout<<"\n toa do tong AB: ";
	AB = Tong(A,B);
	Xuat(AB);
}


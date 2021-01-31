#include <iostream>
using namespace std;
int main()
{
	float soluong, dongia, giamgia, cuocvanchuyen, sotienphaitra;
	cout << "Nhap so luong:";
	cin >>soluong;
	cout << "Nhap don gia:";
	cin >>dongia;
	giamgia = soluong * dongia * 12/100; 
	cout <<"giam gia la: "<<giamgia<<endl;
	cuocvanchuyen = soluong * dongia * 5/100;
	cout << "cuoc van chuyen la: "<<cuocvanchuyen<<endl;
	sotienphaitra = soluong * dongia -giamgia +cuocvanchuyen;
	cout << "so tien phai tra cua ban la: "<< sotienphaitra<<endl;
	return 0;
}

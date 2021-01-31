#include <iostream>
int main()
{
   int soluong;
   float dongia;
   float giamgia;
   float cuocvanchuyen;
   float sotienphaitra;
   cout <<"Nhap so luong : ";
   cin >> soluong;
   cout <<"Nhap don gia : ";
   cin >> dongia;
   giamgia = soluong * dongia * 12/100;
   cuocvanchuyen = soluong * dongia * 5/100;
   sotienphaitra = soluong * dongia - giamgia + cuocvanchuyen;
   cout << "Thong tin mat hang:"<< "\n";
   cout << "\tGiam gia: "<< giamgia << "\n";
   cout << "\tCuoc van chuyen: "<< cuocvanchuyen << "\n";
   cout << "\tSo tien phai tra: "<< sotienphaitra << "\n";
   return 0;
}

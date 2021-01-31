/*
Tinh gia tri bieu thuc z = (2 * x + sqrt(n))/13
n la so nguyen, x la so thuc
*/
#include <iostream.h>
#include <iomanip.h> 
int main()
{
   float z;
   float x;
   int n;
   cout <<"Nhap so thuc x: ";
   cin >> x;
   cout <<"Nhap so nguyen n: ";
   cin >> n;
   z = (2 * x + sqrt(n))/13;
//   cout << "Ket qua la: "<< z << "\n";
   cout << std::setprecision(1) << z << "\n";
   //cout << std::setprecision(9) << z << "\n";
}

/*Tinh gia tri bieu thuc*/
#include <iostream>
#include <math.h>
int main()
{
   float k,k1,k2;
   float x;
   int n;
   cout <<"Nhap so thuc x: ";
   cin >> x;
   cout <<"Nhap so nguyen n: ";
   cin >> n;
   k1 =  x * n/2;
   k2 = 2.32 * pow(x,3);
   k = k1 + k2;
   cout << "Ket qua la: "<< k;
   return 0;
}

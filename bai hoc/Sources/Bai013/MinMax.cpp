/* 	
	Tim min, max cua 4 so nguyen a, b, c, d
*/
#include <iostream>
#include <iomanip> 
int main()
{
   int a,b,c,d,min,max;
   cout <<"Nhap so a: ";
   cin >> a;
   cout <<"Nhap so b: ";
   cin >> b;
   cout <<"Nhap so c: ";
   cin >> c;
   cout <<"Nhap so d: ";
   cin >> d;
   min = (((a<b)?a:b) < ((c<d)?c:d))?((a<b)?a:b):((c<d)?c:d);
   max = (((a>b)?a:b) > ((c>d)?c:d))?((a>b)?a:b):((c>d)?c:d);
   cout << "So be nhat la: "<< min << "\n";
   cout << "So lon nhat la: "<< max << "\n";
   return 0;
}

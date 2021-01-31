/* 	
	Nam chia het cho 4 nhung khong chia het cho 100.
	Hoac nam chia het cho 400.
*/
#include <iostream>
#include <iomanip> 
int main()
{
   int n;
   char kq;
   cout <<"Nhap so nam: ";
   cin >> n;
   kq = (((n%4==0)&&(n%100!=0)) || (n%400==0))?'C':'K';
   cout << kq << "\n";
   return 0;
}

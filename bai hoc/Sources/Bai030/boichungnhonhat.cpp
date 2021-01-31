#include <iostream.h> 
void main() 
{  
	int m, n, ucln,bcnn,tich;
    cout <<"Nhap so nguyen: \n";
    cin >>m;
    cout <<"Nhap so nguyen: \n";
    cin >>n;
    tich = m*n;
    while (n != 0 && m != 0)
    	if (n>m)
      		n -= m;
   		else
      		m -= n;
  	if (n == 0)
    	ucln = m;
  	else
    	ucln = n;
  	bcnn = tich/ucln;
	cout << bcnn <<" la boi chung nho nhat";	
} 


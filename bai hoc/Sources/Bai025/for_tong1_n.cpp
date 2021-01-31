#include <iostream.h> 
#include <conio.h> 
void main() 
{  
  int i, n, sum; 
  cout<<"Nhap so nguyen:";  
  cin >> n; 
  sum = 0; 
  for (i = 1 ; i <= n ; i++)  
   	 sum += i; 
  cout<<"Tong tu 1 den " << n << " la: " << sum; 
} 


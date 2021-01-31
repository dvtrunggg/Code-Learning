#include <iostream.h> 
#include <conio.h> 
void main() 
{  
	int i, n, sum; 
	cout<<"Nhap so nguyen:";  
	cin >> n; 
	sum = 0; i = 1; 
	while(i<=n) 
	{ 
		sum += i;  i++; 
	} 
	cout<<"Tong tu 1 den " << n << " la: " << sum; 
} 


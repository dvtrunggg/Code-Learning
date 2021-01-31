#include <iostream.h> 
void main() 
{  
	int n, sum = 0; 
	do  
	{ 
  		cout<<"Nhap so nguyen: "; 
 		cin >> n;
		if (n < 0) continue;
		sum += n;
	} 
	while(n != 0);
 	cout<<"Tong la: " << sum; 
} 


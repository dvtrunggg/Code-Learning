#include <iostream.h> 
int main() 
{ 
	int n;
	int i = 0;
	int tong = 0;
	cout <<"Nhap n: "; 
	cin >>n;
	tinh: tong+=i;
	i++;
	if (i<=n) 
		goto tinh;
   	cout <<"Tong 1+2+...+" <<n << " la: " << tong << endl;
	return 0; 
} 


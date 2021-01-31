#include <iostream.h>
int giaiThua(int n) 
{
	if(n<=1) 
		return(1);
	return n * giaiThua(n-1); // goi de qui
}

void main ()
{
	int n;
	cout <<"Nhap n: ";
	cin >>n;
	cout <<n<<"! = "<<giaiThua(n);
}


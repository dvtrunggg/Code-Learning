#include <iostream.h>
long TongS (int n)
{
	if (n==0)
		return 0;
	return ( TongS(n-1) + n );
}
void main ()
{
	int n;
	cout <<"Nhap n: ";
	cin >>n;
	cout <<"1+2+3+...+"<<n<<" = "<<TongS(n);
}

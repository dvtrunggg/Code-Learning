#include <iostream.h>
long TinhXn (int n)
{
	if (n==0)
		return 1;
	long s = 0;
	for (int i=1; i<=n; i++)
		s = s + i * i * TinhXn(n-i);
	return s;
}

void main ()
{
	int n;
	cout <<"Nhap n: ";
	cin >>n;
	cout <<"Ket qua = "<<TinhXn(n);
}

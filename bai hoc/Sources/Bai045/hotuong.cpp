#include <iostream.h>
long TinhYn(int n);
long TinhXn (int n)
{
	if(n==0)
		return 1;
	return TinhXn(n-1) + TinhYn(n-1);
}
long TinhYn (int n)
{
	if(n==0)
		return 1;
	return n*n*TinhXn(n-1) + TinhYn(n-1);
}
void main ()
{
	int n;
	cout <<"Nhap n: ";
	cin >>n;
	cout <<"Ket qua X = "<<TinhXn(n)<<endl;
	cout <<"Ket qua Y = "<<TinhYn(n);
}

#include <iostream.h>
long Fibonaci (int n)
{
	if(n==0 || n==1)
		return 1;
	return Fibonaci(n-1) + Fibonaci(n-2);
}
void main ()
{
	int n;
	cout <<"Nhap n: ";
	cin >>n;
	cout <<"So Fibonacci thu "<<n<<" = "<<Fibonaci(n);
}

#include <iostream>
#include <iomanip> // thu vien cho phep lam tron so ( tao ko lam cai nay:))
#include <math.h> // thu vien cho phep tinh toan (sqrt,....)
using namespace std;
int main()
{
	int n;
	double x, z;
	cout << "Nhap n: ";
	cin >>n;
	cout << "Nhap x ";
	cin >>x;
	z = (2*x + sqrt(n) ) / 13;
	cout <<"Ket qua z= "<<z;
	return 0;
}

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n;
	float x,k;
	cout << "Nhap n: ";
	cin >> n ;
	cout <<"Nhap x";
	cin >> x;
	float k1, k2;
	k1 = 1/2 * x * n;
	k2 = 2.32 * pow(x,3);
	k = k1 + k2;
	cout<<"Gia tri k= "<<k;
	return 0;
}

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
	k = pow((pow(x,2)+x+1),n) + pow((pow(x , 2)- x + 1), n);
	cout<<"Gia tri k= "<<k;
	return 0;
}

#include <iostream>
using namespace std;
int main ()
{
	int a, b, c;
	cout << "nhap a: " << endl;
	cin >> a;
	cout << "nhap b: " << endl;
	cin >> b;
	cout << "nhap c: " << endl;
	cin >> c;
	if ((a+b>c)|| (a+c>b)|| (c+b>a)){
	
		if ((a*a==b*b+c*c)|| (c*c == b*b+a*a) || (b*b==a*a+c*c))
		cout << "tam giac vuong"<<endl;
		else if ((a==b && a!=c) ||(a==c && a!=b) || (b == c && b!=a))
		cout << "tam giac can "<<endl;
		else if (a==b && b==c)
		cout << "tam giac deu"<<endl;
		else
		cout <<"tam giac thuong"<<endl;}
	else
	cout<<"do ko phai la tam giac"<<endl;
	return 0;	
}

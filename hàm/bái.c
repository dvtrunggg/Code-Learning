#include <iostream>
using namespace std;
int tinhtong (int a, int b);
int main ()
{
	int x,y,z;
	cout<<"Nhap x: "<<endl;
	cin>>x;
	cout << "Nhap y: "<<endl;
	cin >> y;
	z = x+ y;
	cout<<"tong la: "<<z<<endl;
}
int tinhtong (int a, int b)
{
	return a+b;
}

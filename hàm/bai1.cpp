#include <iostream>-
using namespace std;
int tong (int a, int b);             // a, b chi la bien tuong trung, khi vao ham main no se bien thanh x,y
int hieu (int , int );         //ko can khai bao bien van dc
 main ()
{
	int y,x,z,t;
	cout<<"Nhap x: "<<endl;
	cin>>x;
	cout << "Nhap y: "<<endl;
	cin >> y;
	z = tong(x,y);
	cout<<"tong la: "<<z<<endl;
	t = hieu(x,y);
	cout<<"hieu la: "<<t<<endl;
	return 0;
}
int tong (int a, int b) 
{                                      // dinh nghia ham tinh tong
	return a+b;
}
int hieu(int a, int b)     // bat buoc phai la int a, int c.........ko dc int , int!
{
	return a-b;
}

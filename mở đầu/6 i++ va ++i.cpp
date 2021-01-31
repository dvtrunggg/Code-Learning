#include <iostream>
using namespace std;
int main()
{
	int a = 7;            
	int x = a++;              // gan x = a truoc roi tang a len 1 don vi
	cout << a << endl;
	cout << x << endl;
	int b = 5;
	int y = ++b;               // tang b len 1 don vi roi gan vao y: ban dau b = 5, 5 + 1 = 6 =>> xuat ra b = 6, 
	cout << b << endl;        
	cout << y << endl;
	return 0;
}

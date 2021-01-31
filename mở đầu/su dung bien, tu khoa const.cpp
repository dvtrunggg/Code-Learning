#include <iostream>
using namespace std;
int a = 10, b = 5;
const float pi = 3.14;   // const_kieu du lieu_ ten bien: const la co dinh bien ( hang so) ko doi cho cai phan do
int cong ()
{
	int kq = a + b;
	return kq;
}
void main ()
{
	cout << cong ();
//	pi = 10; ( se ko chay vi const float pi = 3.14---> bien toan cuc 
	
	cout << pi;
}

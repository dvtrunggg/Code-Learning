#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "nhap a: "<<endl;
	cin >> a;
	cout <<" nhap b: "<<endl;
	cin >> b;
	int max = a;
	if(max >= b)
		cout << " so lon nhat la "<<a<<endl;
	else
	cout <<"so lon nhat la "<<b<<endl;
	
	return 0;
}

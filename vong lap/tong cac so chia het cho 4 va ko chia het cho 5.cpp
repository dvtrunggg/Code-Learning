#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n : "<<endl;
	cin>> n;
	int tong = 0;
	for (int i = 0; i < n; i++){
		if (i % 4 == 0 && i % 5 != 0) tong+=i;
	}
	cout<<"tong la: "<<tong<<endl;
	return 0;
}

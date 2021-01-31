#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Nhap n:";
	cin>>n; 
	int tong = 0;
	int tich = 1;
	for (int i = 1; i <= n; i++){
		tich *= i;
		tong += tich;
	}
	cout<<"tong la: "<<tong<<endl;
}


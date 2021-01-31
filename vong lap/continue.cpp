//  nhap cac so nguyen, tinh tong cac so do. dung so 0 de ket thuc.
#include<iostream>
using namespace std;
int main()
{
	int n,tong = 0;
	for ( ; n!=0;){
	cout<<"nhap so nguyen: "<<endl;
	cin>> n;
		if (n < 0) continue;
		tong +=n;}
		cout<<"tong cac so ban nhap la: "<<tong<<endl;
	
	return 0;
}

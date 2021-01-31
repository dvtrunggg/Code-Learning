//Nhap vao so n, xuat ra cac so nguyen to, tinh tong cac so nguyen to do
//so nguyen to la so chia het cho 1 va chinh no
//b1: viet ham ktra cac so nguyen to
//b2: ham xuat cac so ngto ( tu 2--> n do so nguyen to min = 2)
//b2: ham tinh tong cac so nguyen to do

#include <iostream>
using namespace std;
int ktrasonguyento (int n);
int xuatsonguyento (int n);
int tong (int n);
main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"cac so nguyen to la: "<<endl;
	xuatsonguyento (n);
	int sum = 0;
	sum = tong (n);
	cout <<endl<<"tong cac SNT la: "<<tong (n)<<endl;
}
int ktrasonguyento (int n){
		int dem = 0;
		for (int k = 1; k <= n; k++)
			if (n % k == 0) dem++; 	
		if (dem == 2)
			return 1;
		else 
			return 0;
}
int xuatsonguyento (int n){
	for(int i = 1; i<= n; i++)
		if (ktrasonguyento (i) == 1)
			cout<<" "<< i;
}

int tong (int n){
	int sum = 0;
	for (int i = 0; i<=n; i++)
		if (ktrasonguyento(i) == 1)
	sum = sum + i;
	return sum;
}

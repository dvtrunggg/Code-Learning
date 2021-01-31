/* nhap so nguyen duong, tinh tong so chinh phuong tu 1--->n, bam 0 de thoat khoi ctrinh
so chinh phuong la so = binh phuong cua so khac. vd: 4 = 2*2, 16 = 4*4 ==> 4 va 16 la so chinh phuong*/


#include <iostream>
#include <math.h>
using namespace std;
int ktrasochinhphuong (int n);
//int tong (int n);
 main (){
	int n, sum = 0;
	do {
	cout<<"Nhap so n: ";
	cin>>n;
		if(ktrasochinhphuong(n) == 1) sum += n;
	}
	while (n!=0);
	cout<<"Tong cac so chinh phuong: "<<sum;
}

int ktrasochinhphuong(int n){
	if((int) sqrt(n)==sqrt(n))     // can cua n = can n, vd: can 4 = can 4 (= 2); can 5 = 2.xxxx ( day la dang float ( ou double), ko phai la int nen 5 ko phai so chinh phuong 
		return 1;                     // (int) sqrt(n) == sqrt(n) la dinh nghia int cho sqrt(n) ben trai, ep gia tri ben phai cung la int
	else
		return 0;
	}
	
	
/* nháp nha:))
int tong(int n){
	int sum = 0;
	for (int i = 1; i<=n; i++)
		if(ktrasochinhphuong(i) == 1) sum += i;
			return sum;
}*/

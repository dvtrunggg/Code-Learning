#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a[10];
	int *p;
	p = a;
	// nhap mang:
	for(int i = 0; i<10; i++){
		cout<<"a["<<i<<"] = ";
		cin>>*(p+i);               // gán giá tri cua p+0 ( a[0] ), p+1(a[1), p+2(a[2]),.....
	}	
	// xuat mang
	for(int i = 0; i<10; i++)
		cout<<"  "<<*(p+i);
}


#include<iostream>
#include<stdio.h>
#define MAX 250
using namespace std;
main(){
	char str1[MAX];
	char *str2;
	cout<<"Nhap chuoi so 1: ";
	gets(str1);
	cout<<"Nhap chuoi so 2: ";
	str2 = new char[MAX];             // phai có sau khi khai bao kieu con tro. ( cap phát bo nho)
	cin.getline(str2,MAX);
	cout<<"String 1 is: "<<str1<<endl;
	cout<<" String 2 is: "; puts(str2);
	
	char *str3;
	str3 = new char[MAX];
	cin>>str3;                 // chuoi se ngung lai khi gap dau cách dau tien.
	cout<<" string 3 is: "<<str3;

}

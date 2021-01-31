#include <iostream>
#include<stdio.h>
#include<string.h>
#define MAX 50
using namespace std;
main(){
	char str1[MAX], str2[MAX];
	cout<<"Nhap chuoi 1: ", gets(str1);
	cout<<"\n Nhap chuoi 2: ", gets(str2);
	strncpy(str2,str1,5);                         // coppy 5 ky tu dau tien cua str1 vào str2-, va thay the 5 ký do cua str2
	cout<<"Chuoi 2 cua ban bien thanh: "<<str2;
}

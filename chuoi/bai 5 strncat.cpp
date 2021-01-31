#include <iostream>
#include<stdio.h>
#include<string.h>
#define MAX 50
using namespace std;
main(){
	char str1[MAX], str2[MAX];
	cout<<"Nhap chuoi 1: ", gets(str1);
	cout<<"\n Nhap chuoi 2: ", gets(str2);
	strncat(str1,str2,5); // gan 5 ký tu dau cua str2 GHÉP vào dau str1
	cout<<"\n\n\nstrncat(str1,str2,5)";
	cout<<"\nchuoi 1 tro thanh: "<<str1<<endl;
	cout<<"chuoi 2 : "<<str2;
}

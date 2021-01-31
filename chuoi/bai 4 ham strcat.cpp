#include <iostream>
#include<stdio.h>
#include<string.h>
#define MAX 50
using namespace std;
main(){
	char str1[MAX], str2[MAX];
	cout<<"Nhap chuoi 1: ", gets(str1);
	cout<<"\n Nhap chuoi 2: ", gets(str2);
	strcat(str1, str2);          // noi chuoi 2 vao chuoi 1
	cout<<"\n\n\n\nChuoi 1 bay h la: "<<str1<<endl;         
	cout<<"Chuoi 2 bay h la: "<<str2;
	}

#include <iostream>
#include<stdio.h>
#include<string.h>
#define MAX 50
using namespace std;
main(){
	char str1[MAX], str2[MAX];
	cout<<"Nhap chuoi 1: ", gets(str1);
	cout<<"\n Nhap chuoi 2: ", gets(str2);
	cout<<"\n do dai cua chuoi 1 la: "<<strlen(str1);
	cout<<"\n do dai cua chuoi 2 la: "<<strlen(str2);
}

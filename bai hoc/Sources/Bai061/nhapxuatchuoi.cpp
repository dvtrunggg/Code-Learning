#include <iostream>
#include <stdio.h>
#define MAX 255
void main ()
{
	char str1[MAX];
	char * str2;
	cout <<"Nhap chuoi str1: ";
	gets(str1);
	cout <<"Nhap chuoi str2: ";
	str2 = new char[MAX];
	cin.getline(str2,MAX);
	cout<<"Chuoi 1: "<<str1<<endl;
	cout<<"Chuoi 2: ";
	puts(str2);
}

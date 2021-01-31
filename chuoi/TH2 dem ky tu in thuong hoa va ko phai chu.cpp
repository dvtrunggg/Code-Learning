/* viet ctrinh: dem so ki tu:
 in hoa,
  in thuong 
   ko phai ký tu chu cai */
   
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	char str[100];
	int l;
	int dem1 = 0, dem2 = 0, dem3 = 0;
	cout<<"Nhap chuoi: ", gets(str);
	l = strlen(str);
	cout<<"Trong chuoi "<<str<<"co: ";
	for(int i = 0; i<l; i++)
	{
		if(  isupper(str[i]))dem1++;
		if( islower(str[i])) dem2++;
		if(isalpha(str[i])==0) dem3++;      // hàm isalpha neu ko co gia tri se tra ve true ( =1)
 	}
 	cout<<"\nso ky tu hoa: "<<dem1;
 	cout<<"\nso ky tu thuong: "<<dem2;
 	cout<<"\nso ky tu ko phai chu cai: "<<dem3;
 	return 0;
}

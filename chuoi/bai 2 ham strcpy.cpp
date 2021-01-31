#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
main(){
	char *str1, str2[20];
	str1 = new char[20];
	cout<<"Nhap chuoi so 1: ", gets(str1);
	cout<<"\nNhap chuoi so 2: ", gets(str2);
//	strcpy(str1,str2);
//	cout<<"Xuat chuoi sau khi dung ham strcpy(str1, str2): "<<str1;  // nó se xoa di chuoi str2, luu new str2 = chuoi str1. 
        
		
	//strcncpy: cat chuoi:
//	strncpy(str2,str1,5);
//	cout<<"Xuat chuoi 2: "<<str2;	
	
	// nhap
	strcpy(str1,str1 +1);
	cout<<str1;	                                                               
}

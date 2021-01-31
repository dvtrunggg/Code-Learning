/* viet ctrinh: nhap 2 chuoi:
	ktra trong chuoi so 1 có chuoi so 2 hay ko?
	ghép chuoi 1 vào cuoi chuoi 2^^*/




	
#include <iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#define MAX 100
using namespace std;
//hàm ktra chuoi 2 có là con of chuoi 1?
void StringString(char *str1, char *str2)
{
	if(strstr(str1, str2))
		cout<<"chuoi 2 la con cua chuoi 1 :)";
	else cout<<"chuoi 2 hong phai la con chuoi 1 dau nhaaa";
	
}
// hàm StringString còn có the viet nhu sau:
int StringStringSesson2 (char *str1, char *str2){
	if(strstr(str1, str2))                     // neu str2 la con cua str1
		return 1;
	return 0;                      // ko ca else vi neu dk sai thi no out hàm lunnn:)
}

main(){
	char *str1, *str2;
	str1 = new char[MAX];
	str2= new char[MAX];
	cout<<"\nNhap chuoi 1: "<<gets(str1);
	cout<<"\nNhap chuoi 2: "<<gets(str2);
	StringString(str1, str2);
	strcat(str1, " ");
	strcat(str1, str2);
	cout<<"\nchuoi sau khi dc noi la: "<<str1;
//	getch();
}


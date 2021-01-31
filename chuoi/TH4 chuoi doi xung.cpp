/* Viet ctinh nhap vao 1 chuoi:
	ktra xem chuoi do co xoi xung hay ko?  ( phan biet chu hoa va thuong)
	chuoi dx la: AaBbccbBaA
	chuoi ko dx la aABbccBaaa*/
#include<conio.h>	
#include <iostream>
#include<stdio.h>
#include<string.h>
#define MAX 100
using namespace std;
int test(char *str, int l){
	int kq=1;
	for(int i = 0; i<l ; i++)                // l/2 cung dc:)    (...;i<l/2;....)
		if(str[i] != str[l-1-i]){
			kq = 0;
		break;}
	return kq;
}

main()
{
	int l;
	char str[MAX];
	cout<<"Nhap chuoi cua ban: ", gets(str);
	l = strlen(str);
	if(test (str, l) == 1) cout<<"Chuoi ban nhap doi xung "<<endl;
	else cout<<"Chuoi ban nhat hong co doi xung dau:) "<<endl;
	getch();
}

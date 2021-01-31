/* viet ctrinh nhap 1 chuoi
	1. dem so khoang trang  co trong chuoi
	2. xoa khoang trang du thua di(khoang trang o dau, o duoi,....)
	*/


#include<iostream>
#include<stdio.h>
#include<string.h>
#define MAX 50
using namespace std;
// hàm dem khoang trang
int CountSpace(char str[MAX], int l){ //l là do dài cua chuoi vd abcd: l =4
		int count = 0;
		for(int i = 0; i<l; i++ )
			if (str[i] == ' ') count++;
		return count;
}
// hàm xóa khoang trang thua
void RemoveSpace (char str[MAX], int &l){     // truyen tham bien do l se thay doi
	while(str[0] == ' '){                        // xóa khoang cach o dau chuoi
	strcpy(str,str+1);                            // xoa ky tu dau cua chuoi ( neu no la khoang trang)
	l = strlen(str);                              // cap nhat lai do dai chuoi 
	}
	while(str[l-1] == ' '){          // xóa khoang cach o cuoi chuoi
		strcpy(str+l-1,str+l);
		l--;                   // l-- <=> l = strlen(str) vi l-- la tru di 1 don vi, trong vong lap thi no tru di nhieu lan nen do dai l lien tuc dc update
	}
	 int i = 0;
	 //xóa khoang cach o trong chuoi, i la chi so ky tu cua chuoi
	while (str[i] != '\0'){                   // ký tu NULL : '\0'
        // ky tu i va i + 1 deu = ' ' nghia la 2 khoang trang lien tiep
		if(str[i] == ' ' && str[i+1] == ' ' ){
			strcpy(str+i,str+i+1);           //xoa di ky tu ' ' ( dùng chuoi sau de len chuoi trc)
			i--;                             // giam i di 1 de xét tiep vi tri vua coppy
			l--;                          // cap nhat lai l
			}
		else
			i++;                       // neu ko co gi thi xet i+1, i+2,...
		i++;                          // dieu kien dung cua while( neu ko thi se lap vo tan) ( xet i = 0, i= 1,....i = l thi se la i = '\0', vòng lap ket thuc
}
}


main(){
	char str[MAX];
	int l;
	cout<<"Nhap chuoi cua ban vao: ", gets(str);
	l = strlen(str);
	cout<<"so khoang trang cua ban co trong chuoi la: "<<CountSpace(str,l);
	RemoveSpace(str,l);
	cout<<" \n\nchuoi dc sua lai la: "<<str;
	cout<<"\nso ky tu cua chuoi moi la:"<<CountSpace(str,l);
}


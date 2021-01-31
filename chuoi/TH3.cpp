/* Viet ctrinh: nhap vao 1 chuoi co toi da lu 79 ky tu
	xóa so khoang trang du thua
	dem so tu co trong chuoi
	xoa cac ky tu    tu vi tri p --> vi tri n.*/
	
#include<iostream>
#include<stdio.h>
#include <string.h>
#define MAX 80                // toi da la 79 ky tu + NULL = 80
using namespace std;
void DeleteCharacters (char str[MAX], int vitrixoa){
	int l = strlen(str);
	for(int i = vitrixoa ;i<l; i++){       // lien tuong viec xep hàng, a b c d:       b ra ngoài thì c tien len vi trí cua b
		str[i] = str[i+1];                               //           b ra ngoài thì c tien len vi trí cua b
	                              // sau khi xoa, ky tu cuoi la NULL                                             
}
	l--;

}
void RemoveSpace(char str[MAX], int &l){
	for(int i = 0; i<l; i++){
		if(str[0] == ' '){
			DeleteCharacters(str,0);
			l--;}
		if(str[l - 1] == ' '){
			DeleteCharacters(str,l-1);
			l--;}
		if(str[i] == ' ' && str[i+1] == ' '){
			DeleteCharacters(str, i+1);
			l--;
			i--;}
	}
}
int CountSpace(char str[MAX], int l){
	int dem = 0;
	for(int i = 0; i<l; i++)
		if(str[i] == ' ') dem++;	
	return dem;
}
// hàm xoa ki tu (tu vi trí p --> n)
void XoaKyTu(char str[MAX], int l){
	int n, p;
	cout<<"\nNhap vao vi tri ban muon xoa: "<<endl;
	cout<<" Toi muon xoa tu vi tri ",cin>>p,cout<<" toi vi tri: ", cin>>n;
	for(int i = p;i<=l; i++)
		str[i] = str[i+n];             // ung vs moi lan bien i chay thi ta dich chuyen n ky tu tu phai sang trái
		l -= n;
		
}
main(){
	char str[MAX];
	int l,k;
	cout<<"Nhap chuoi cua ban: ", gets(str);
	l = strlen(str);
	cout<<" \n so khoang trang chuoi ban dau: "<<CountSpace(str, l);
	RemoveSpace(str, l);
	cout<<"\n\nChuoi moi cua ban la: "<<str;
	cout<<" \n so khoang trang chuoi sau: "<<CountSpace(str, l);
	int demtu = CountSpace(str, l) + 1;
	cout<<"\n so tu trong chuoi cua ban la: "<<demtu;
	XoaKyTu(str,l);
	cout<<"\n chuoi cua ban sau khi xoa bot la: "<<str;
}
	

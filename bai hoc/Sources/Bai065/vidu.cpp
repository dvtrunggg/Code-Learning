#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

void DemKyTu(char *st1,int len)
{
   	int i,dem1=0,dem2=0, dem3=0;
   	for (i=0;i<len;i++)
    	if (islower(st1[i])) dem1++;
	for (i=0;i<len;i++)
    	if (isupper(st1[i])) dem2++;
   	for (i=0;i<len;i++)
		if (isalpha(st1[i])==0) dem3++;
	cout <<"\nSo ky tu chu cai thuong la: "<<dem1;
   	cout <<"\nSo ky tu chu cai hoa la: "<<dem2;
   	cout <<"\nSo ky tu khong phai chu cai la: "<<dem3;
}
void main()
{
 	char st1[100];
    cout <<"\nNhap chuoi: ";
	gets(st1);
  	int len=strlen(st1);
	DemKyTu(st1,len);
}

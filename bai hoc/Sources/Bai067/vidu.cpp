#include<iostream>
#include<stdio.h>
int KiemTraDoiXung(char *st, int l)
{
	int kq = 1;
	for (int i = 0; i<l/2; i++)
	{
		if(st[i] != st[l-i-1])
		{
			kq = 0;
			break;
		}
	}	
	return kq;	
}
void main()
{
	char st[100];
	cout <<"\nNhap chuoi: ";
	gets(st);
	int l = strlen(st);
	if(KiemTraDoiXung(st,l) == 1)
		cout<<"\nChuoi doi xung.";
	else
		cout<<"\nChuoi khong doi xung.";
}
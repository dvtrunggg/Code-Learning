#include<iostream>
#include<stdio.h>

//ham nhap chuoi
void Nhap(char st[]);
//ham xuat chuoi
void Xuat(char st[]);
//ham xoa ki tu khong phai la ki so
void Xoachu(char st[], char st1[]);
//ham chen ki tu ch bat ki vao chuoi tai vi tri p
void Insertchr(char st1[],int p,char ch );
//ham chen dau cham vao chuoi
void Insertdaucham(char st1[]);
//ham xoa ki tu tai vi tri p
void Del(char st1[],int p);

void main()
{	
	char st[50],st1[50];
	Nhap(st);
	cout<<"\nChuoi sau khi da loai bo chu :";
	Xoachu(st,st1);
	Xuat(st1);
	cout<<"\nChuoi sau khi chen dau cham :";
	Insertdaucham(st1);
	Xuat(st1);
	if(st1[0]=='.')  //loai bo dau cham dau tien cua chuoi
	{	
		cout <<"\nChuoi sau khi da bo dau cham dau tien :";
		Del(st1,0);
		Xuat(st1);
	}
}
void Nhap(char st[])
{
	cout <<"\nNhap vao mot chuoi:\n ";
	gets(st);
}
void Xuat(char st[])
{
	puts(st);
}
void Xoachu(char st[], char st1[])
//dau vao st,st1
//dau ra st1
{	
	int i,j=0,l=strlen(st);
	for(i=0;i<l;i++)
		if(st[i]>='0'&&st[i]<='9')
			st1[j++] = st[i];
	st1[j]='\0';//vi tri cuoi cung la NULL
}
void Insertchr(char st1[],int p,char ch )
//dau vao chuoi st1 ,p,ch
//dau ra chuoi st1 da chen ch vao tai vi tri p
{	int i,l=strlen(st1) ;
	for(i=l;i>=p;i--)
		st1[i+1]=st1[i] ;
	st1[p]=ch;
}
void Insertdaucham(char st1[])
{	int i,diem=0,l=strlen(st1);
	for(i=l-1;i>=0;i--)
	{	diem++;
		if(diem%3==0)//khoang cach moi nhom la 3 so de chen
			Insertchr(st1,i,'.');
	}
}
void Del(char st1[],int p)
{	int i,l=strlen(st1);
	for(i=p;i<l;i++)
		st1[i]=st1[i+1];
}

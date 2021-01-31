#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>

void XoaKhoangTrang(char st[80], int &l)
{
  int i;
 //Xoa cac khoang trang o dau chuoi
  while (st[0]==' ')
     strcpy(st,st+1);
  l=strlen(st);
 //Xoa cac khoang trang o cuoi chuoi
  while  (st[l-1]==' ')
     {
	strcpy(st+l-1,st+l);
	l--;
     }
 //Xoa cac khoang trang o giua chuoi
  i=0;
  while (st[i]!='\0')
    {
       if (st[i]==' ')
	   if (st[i+1]==' ')
	    {
	      strcpy(st+i,st+i+1);
	      i--;
	      l--;
	    }
	   else
	       i++;
       i++;
    }
}

void DemTu(char st[80], int l)
{
   int i,dem=0;
   st[l]=' ';
   st[l+1]='\0';
   for (i=0;i<=l;i++)
     if (st[i]==' ')
       dem++;
   cout <<"\nSo tu trong chuoi la: "<<dem;
}
void XoaKyTu(char st[80],int l)
{
   int i,n,p;
   cout<<"\nNhap vao hai so nguyen n va p:";
   cin >>n>>p;
   for (i=p;i<=l;i++)
      st[i]=st[i+n];
   cout<<"\nChuoi sau khi xoa la:";
   puts(st);
}
void main()
{
	char st[80];
 	cout<<"\nNhap vao chuoi: ";
 	gets(st);
 	int l=strlen(st);
 	XoaKhoangTrang(st,l);
 	DemTu(st,l);
 	cout <<endl;
 	puts(st);
 	XoaKyTu(st,l);
}

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void DemKhoangTrang(char st[100], int l)
{
  int i, dem=0;
  for (i=0;i<l;i++)
     if (st[i]==' ') dem++;
  cout << "\nSo khoang trang co trong chuoi la: "
  		<<dem<<endl;
}
void XoaKhoangTrang(char st[100], int &l)
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
  while (st[i]!= '\0')
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

 main()
{
  char st[100];
  int l;
  cout<<"Nhap chuoi: ";
  gets(st);
  l=strlen(st);
  DemKhoangTrang(st,l);
  XoaKhoangTrang(st,l);
  puts(st);
  DemKhoangTrang(st,l);
}

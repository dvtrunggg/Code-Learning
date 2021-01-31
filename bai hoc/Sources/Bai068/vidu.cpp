#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
void ChuoiCon(char *st1, char *st2)
{
	  if (strstr(st1,st2))
	     cout <<"\nChuoi s2 co trong s1";
	  else cout <<"\nChuoi s2 khong co trong s1";
}
void ChenChuoiCon(char *st1,char *st2)
{
   char *s;
   st1=strcat(st1," ");
   s=strcat(st1,st2);
   cout <<endl;
   puts(s);
}
void main()
{
	 char st1[80], st2[80];
	 cout <<"\nNhap vao chuoi s1:";
	 gets(st1);
	 cout <<"\nNhap vao chuoi s2:";
	 gets(st2);
	 ChuoiCon(st1,st2);
	 cout <<"\nChuoi sau khi ghep hai chuoi:";
	 ChenChuoiCon(st1,st2);
}

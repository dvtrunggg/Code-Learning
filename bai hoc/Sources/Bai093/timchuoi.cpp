#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
void main ()
{
    fstream f, f1;
    char s[100];
    char content[100];
    f1.open("chuoi1.txt", ios::out);
    while(1)
    {
		int flag = 0;
		cout << "Nhap vao chuoi can tim: ";
    	gets(s);
    	if(strlen(s) == 1 && s[0] == '0' ) break;
		f.open("chuoi.txt", ios::in);
		while (!f.eof())
	    {
	        f.getline(content, 100);
	        //Kien tra s co xuat hien khong
	        if (strstr(content,s))
	        {
	            cout<<"\nTim thay chuoi: \""<< s <<"\" trong file."<<endl;
	            flag = 1;
	            break;
	        }
	    } 
	    //neu khong co ghi vao file moi
		if (flag ==0)
		{
			cout << "\nKhong tim thay chuoi: "<< s <<" trong file." << endl;
			f1 << s << endl;
		}
		f.close();      
    }
    f1.close();
}

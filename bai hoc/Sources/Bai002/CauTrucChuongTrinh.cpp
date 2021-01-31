/*Chuong trinh C/C++ dau tien 
Day la noi mo ta thong tin cua 
chuong trinh*/
#include <iostream.h> 
#include <conio.h> 
#include <stdio.h> 
int Cong (int a, int b);
int main() 
{ 
    cout << "Cong hai so "; 
    cout << Cong(5,5);
    getch();
    return 0; 
} 
int Cong (int a, int b)
{
	return a+b;
}

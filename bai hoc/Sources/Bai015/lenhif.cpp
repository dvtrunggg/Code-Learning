#include <iostream.h> 
#include <conio.h> 
int main() 
{ 
	int a,b,max; 
	cout << "Nhap a: ";  
	cin >> a;
    cout << "Nhap b: ";  
	cin >> b;
	max = b;
	if(a>b)
		max = a;
	cout << max << " la so lon nhat."; 
	return 0; 
} 


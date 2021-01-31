#include <iostream.h> 
void main() 
{  
	int n, passWord; 
	cout<<"Nhap so nguyen:";  
	cin >> n; 
 	for (int i=0; i<n ; i++)  
	{ 
		cout<<"Nhap mat khau: ";
		cin >> passWord; 
		if (passWord == 1)
			break; 
		cout <<"Mat khau sai!\n"; 
	} 

} 


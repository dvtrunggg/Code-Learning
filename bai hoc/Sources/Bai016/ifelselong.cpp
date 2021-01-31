#include <iostream.h> 
int main() 
{ 
	int a,b,c; 
	cout << "Nhap a: ";  
	cin >> a;
    cout << "Nhap b: ";  
	cin >> b;
	cout << "Nhap c: ";  
	cin >> c;
	if(a>b>c)
		cout << a << " la so lon nhat.";
	else if(b>a && b>c)
		cout << b << " la so lon nhat.";
		else
			cout << c << " la so lon nhat.";
	return 0; 
} 


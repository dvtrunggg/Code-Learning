#include <iostream.h> 
int main() 
{ 
	int n; 
	cout << "Nhap so nguyen: ";  
	cin >> n;
    switch(n) 
	{ 
		case 1: cout  << "Chu nhat"; break;
		case 2: cout  << "Thu Hai"; break; 
		case 3: cout  << "Thu Ba"; break;
		case 4: cout  << "Thu Tu"; break;
		case 5: cout  << "Thu Nam"; break;
		case 6: cout  << "Thu Sau"; break;
		case 7: cout  << "Thu Bay"; break;
		default : cout  << "Khong phai thu trong tuan"; break;
	} 

	return 0; 
} 


#include <iostream.h> 
void main() 
{  
	int i,j,n;
    cout <<"Nhap so nguyen: \n";
    cin >>n;
    cout <<"In hinh vuong: \n";
	for (i=0; i<n; i++)
	{
	   	for (j=0; j<n; j++)
		   cout << "   " << "*";
 		cout << endl;
	}
	cout <<"In hinh tam giac 1: \n";
	for (i=0; i<n; i++)
	{
		for (j=0; j<i+1; j++)
	    	cout << "   " << "*";
	   	cout << endl;
	}
	cout <<"In hinh tam giac can 2: \n";
	for (i=0; i<n; i++)
	{
		for (j=0;j<n-i;j++)
			cout << "   " << "*";
	   cout << endl;
	}
	cout <<"In hinh tam giac can: \n";
	for (i=0; i<n; i++)
	{
		for (j=0;j<n-i-1;j++)
			cout << "   " << " ";
	   	for (j=0;j<2*i+1;j++)
			cout << "   " << "*";
	   cout << endl;
	}
	
} 


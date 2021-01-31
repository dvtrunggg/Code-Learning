#include <iostream.h> 
void main() 
{  
	int i,j,n;
    cout <<"Nhap so nguyen: \n";
    cin >>n;
    for ( i = 2 ; i <= n ; i++)
    {
		for(j=2; j <= (i/j); j++)
        	if(!(i%j)) break; // neu tim thay he so, thi khong la so nguyen to
        if(j > (i/j)) cout << i << " la so nguyen to\n";
	}	
}

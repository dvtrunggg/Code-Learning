#include <iostream.h> 
void main() 
{  
	int i,j,n;
    cout <<"Nhap so nguyen: \n";
    cin >>n;
    for ( i = 2 ; i <= n ; i++)
    {
		int dem = 0;
	   	for (j=1;j<=i;j++)
    		if (i%j==0) dem+=1;
    	if (dem==2) 
			cout << i <<" la so nguyen to\n";
	}	
} 

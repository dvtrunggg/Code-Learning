#include <iostream.h>
int cong2so(int a=2, int b)
{  
    return (a+b);
}

void main()
{ 	
	cout <<"2 + 1 = "<< 
		cong2so(2,1) << endl;
	cout <<"2 + 2 = "<< 
		cong2so(2,2) << endl;	
	cout <<"2 + 1 = "<<
		cong2so(2) << endl;
} 

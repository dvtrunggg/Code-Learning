#include <iostream.h>
int nhan2so(int a, int b)
{  
    return (a*b);
}
int cong2so(int a, int b)
{  
    return (a+b);
}

void main()
{ 	
	cout <<"2 * 3 = "<< 
		nhan2so(2,3) << endl; 
	cout <<"2 + 3 = "<< 
		cong2so(2,3) << endl;
} 

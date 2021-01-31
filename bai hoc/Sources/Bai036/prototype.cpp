#include <iostream.h>
int cong2so(int,int);
int nhan2so(int,int);
void main()
{ 	
	cout <<"2 + 1 = "<< 
		cong2so(2,1) << endl;
	cout <<"2 * 2 = "<< 
		nhan2so(2,2) << endl;
}
int cong2so(int a, int b)
{  
    return (a+b);
}
int nhan2so(int a, int b)
{  
    return (a*b);
}

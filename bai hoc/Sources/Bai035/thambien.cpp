#include <iostream.h>
void HoanVi(int &a, int &b)
{  
	int c;
   	c = a;
   	a = b;
   	b = c;
}

void main()
{ 	
	int x  = 1, y = 2;
   	HoanVi(x,y);
	cout <<"x = "<< x <<", y = " << y; 
}
 

#include <iostream.h> 
void main() 
{  
	int i = 0;
	do
	{
	   int j = 0;
	   do
	   {
	      cout <<"\nHello child";
	      j++;
	   }
	   while( j <= 2 );
	   cout <<"\nHello parent";
	   i++;
	}
	while( i <= 2 );
}



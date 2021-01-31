#include <iostream.h> 
void main() 
{  
    int x,y,z   ;
	cout << "Bo nghiem cua phuong trinh 3*X+5*Y+7*Z=135 la:\n";
	for (x=0;x<=135;x++)
 		for (y=0;y<=135;y++)
			for (z=0;z<=135;z++)
		    	if(3*x+5*y+7*z==135) cout << "\n(x,y,z)= ("<<x<<","<<y<<","<<z<<")\n";	
} 


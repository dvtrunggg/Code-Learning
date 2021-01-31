/*Giai phuonh trinh bac hai*/
# include <iostream>
# include <math.h>
void main()
{
	int a,b,c;
 	float x,x1,x2,delta;
 	cout <<"Nhap vao a,b,c: " <<endl;
 	cin >> a >> b >> c;
 	if (a == 0)
 	{
 		if (b == 0)
	 		if (c == 0)
 				cout <<"Phuong trinh vo so nghiem";
			else
				cout <<"Phuong trinh vo nghiem";
		else
		{
			x = (float)(-c)/b;
			cout <<"Phuong trinh co nghiem duy nhat x = " << x;
		}
 	}
 	else
 	{
	 	delta=b*b-4*a*c;
 		if (delta>0)
		{ 
			x1=-b-sqrt(delta)/(2*a);
		  	x2=-b+sqrt(delta)/(2*a);
		  	cout <<"Phuong trinh co hai nghiem x1= "<<x1<<", "<<x2;
	  	}
 		else if (delta ==0)
		{ 
			x1=x2=-b/(2*a);
		  	cout <<"Phuong trinh co nghiem kep x1=x2=" << x1;
	  	}
	  	else //delta<0
			cout <<"Phuong trinh vo nghiem";
	}
}

#include <iostream>
void main()
{

	int x = 10;
	int *p1,*p2;
	p1 = &x;
	p2 = p1;
	cout <<"x = "<<x<<endl;
	cout <<"*p1 = "<<*p1<<endl;
	cout <<"*p2 = "<<*p2<<endl;
	*p1 = 0;
	cout <<"x = "<<x<<endl;
	cout <<"*p2 = "<<*p2<<endl;

	
	/* 
	//Cong con tro
	int *a, a1 = 1;
	short *b, b1 = 10;
	long *c, c1 = 100; 
	a = &a1;
	b = &b1;
	c = &c1;
	cout <<"a = "<<a<<endl;
	cout <<"b = "<<b<<endl;
	cout <<"c = "<<c<<endl;
	a = a + 1;
	b = b + 1;
	c = c + 1;
	cout <<"a = "<<a<<endl;
	cout <<"b = "<<b<<endl;
	cout <<"c = "<<c<<endl;
	*/
}

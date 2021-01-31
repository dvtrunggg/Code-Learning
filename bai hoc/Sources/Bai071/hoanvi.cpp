#include<iostream>
void main()
{
	int a = 10, b = 20, *pa, *pb, temp;
	pa = &a;
	pb = &b;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	cout <<"a = "<<a<<endl;
	cout <<"b = "<<b<<endl;
}

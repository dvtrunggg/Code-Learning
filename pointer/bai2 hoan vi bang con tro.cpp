#include<iostream>
using namespace std;
int main()
{
	int a = 20, b = 15, *pa, *pb;
	pa = &a;
	pb = &b;
	int temp = *pa;     // temp = *pa = a = 20
	*pa = *pb;
	*pb = temp;
	
	cout<<" a = "<<a;
	cout<<" \n b = "<<b;
	
}

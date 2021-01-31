#include<iostream>
using namespace std;
main()
{
	int x = 10;
	int *a1, *a2;
	a1 = &x;
	a1 = a2;
	cout<<"x= "<<x;
	cout<<"\n*a1 = "<<*a1;
	cout<<"\n*a2 = "<<*a2;
	
	*a1 = 20;
	cout<<"\n\nx = "<<x<<endl;
	cout<<" *a1 = "<<*a1<<endl;
	cout<<"\n *a2 = "<<*a2<<endl;
}

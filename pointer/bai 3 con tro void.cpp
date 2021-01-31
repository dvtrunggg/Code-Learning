#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i;
	int*pi;
	float f;
	float*pf;
	cout<<"N\hap vao so nguyen i: ", cin>>i;
	cout<<"Nhap vao so thuc f: ", cin>>f;
	void *pv;
	pi = &i;
	pf = &f;
	pv = &i;
	cout<<" int PV = "<<*( (int*)pv );
	cout<<"\nfloat PV = "<<*((float*)pv);
	
	
}

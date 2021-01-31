#include<iostream>
using namespace std;

typedef struct Diem{
	int a = 100;
	int b = 200;
}; Diem *p, x;                  // gán con tro p va bien a thuoc cau truc diem.

main()
{
	p = &x;
	cout<<p->b<<endl;
	cout<<p->a;
	
}

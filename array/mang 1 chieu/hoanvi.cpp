#include<iostream>
using namespace std;
hoanvi(int &a, int &b){
	a = 1, b = 2;
}
main(){
	int a = 3, b = 4;
	hoanvi(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
}

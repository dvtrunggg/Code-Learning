#include<iostream>
using namespace std;
int Y(int);
int X(int n){
	if(n == 0) return 1;
	return X(n-1) + Y(n-1);
}
int Y(int n){
	if (n == 0) return 0;
	return 3*X(n-1) + 2*Y(n-1);
}
main(){
	int n;
	cin>>n;
	cout<<Y(n)<<endl;
	cout<<X(n)<<endl;
}

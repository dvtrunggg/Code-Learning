/* Cho 2 day: Xn=Xn-1 + Yn-1    (n>0)
			  Yn = n^2 Xn-1 + Yn-1  (n>0)
			  Xo = Yo = 1 
Tinh Xn va Yn */

#include <iostream>
using namespace std;
int TinhYn(int);
int TinhXn (int n){
	if (n == 0) return 1;
	return TinhXn(n-1) + TinhYn(n-1);
}
main(){ 
	int n;
	cout<<"Nhap so hang thu n: ";
	cin>>n;
	cout<<"X("<<n<<") = "<<TinhXn(n);
	cout<<"Y("<<n<<") = "<<TinhYn(n);
}
int TinhYn (int n){
	if (n == 0) return 1;
	return (n*n*TinhXn(n-1) + TinhYn(n-1));
}


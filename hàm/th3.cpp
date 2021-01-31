// viet chuong trinh nhap 2 so, tim boi chung nho nhat va uoc chung lon nhat
//viet ham tm boi chung nho nhat: BCNN = Tich 2 so / UCLN
//ham tim uoc chung lon nhat: xet vong lap for, tim cac uoc trc roi tim UCLN.
//1. tim uoc trc
//2.tim uoc chung ( 2 buoc nay co the gop lam 1)
//ham main
#include <iostream>
using namespace std;
int uoc (int n);
int UCLC (int a, int b);
int BCNN (int , int);
int main() {
	int a, b;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	cout<<"\nBCNN la: "<<BCNN (a, b)<<endl;
	
}
int uoc(int n){
	for(int i = 1; i<= n; i++)
		if (n % i == 0) return 1;
}
int UCLN (int a, int b){
	if ((uoc(a) == 1 && uoc(b)==1))
		if (a>b) 
			a -= b;
		else if (a<b)
			b -= a;
	if(a == 0) return a;
	else return b;
	
}
int BCNN (int a, int b){
	return (a*b)/UCLN(a,b);
}

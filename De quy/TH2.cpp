//Tinh S = x^n.     ptich: x^n = x*x*x*x*...*x ( n so hang x) =>> x^n = x* x^(n-1)
/* n = 0: S = 1
	n = 1: S = x
	n = -1: S = 1/x
	n<0 : S = 1/x^n
 

*/


#include <iostream>
using namespace std;
/*float TinhS(float n, float x ){
	if(n == 0) 
		return 1;
	if (n == -1) 
		return 1.0/x;
	if(n<0) 
		return TinhS(n + 1, x) * 1.0/x;    // TinhS(n - -1,x).......
//	else if (n == -1) 
//		return 1.0/x;
	return TinhS(n - 1,x)*x;   
}*/
main(){
	float x, n;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<x<<"^"<<n<<" = "<<TinhS(n,x);
}

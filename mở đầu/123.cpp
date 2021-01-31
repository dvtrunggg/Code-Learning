#include<iostream>
using namespace std;
int sumOfSquares(int n){
	int sum = 0;
	if(n == 1) return 1;
	if(n == 0) return 0;
	sum = sumOfSquares(n-1)+n*n;
	return sum;	
}
int gcd(int a, int b){
	if(a == 0 || b == 0) return a+b;   
	int c = a % b;             // vd: a = 12, b = 18: 12 % 18 = 6; gcd(18,6) ----> 18%6 = 0 
	if(c == 0) return b;
	else return gcd(b,c);
}
	
	

main()
{
	int n,a,b;
	cin>>a;
	cin>>b;
	//cin>>n;
	//cout<<sumOfSquares( n);
	cout<<gcd(a,b)<<endl;
}

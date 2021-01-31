// Tinh tong S(n)= 1/(1*2) + 1/(2*3) + .....+1/(n-1)*n + 1/(n*(n+1))
//S (n) la Tong cac so hang trong day; s(n) la so hang thu n
//phan tich: s(0) = vo cuc=>> ko co nghia; s(1)= 1/(1*2); s(2) = 1/(2*3); s3 = 1/(3*4)
/*phan tich:   so hang thu s(n) = 1/n*(n+1) =>> Tong day S(n)= S(n-1) + sn = S(n-1) + 1/n*(n+1)*/

#include <iostream>
using namespace std;
float TinhSn(int n){
	if (n == 1) return 0.5;
	return TinhSn(n-1) + 1.0/(n*(n+1));
}
main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Tong day S(";
	for(int i = 1; i<n; i++){
		for(int k = 2;k<=n;k++)
		cout<<"1/("<<i<<"*"<<k<<")+";
	}
	
	cout<<n<<") = "<<TinhSn(n);
}

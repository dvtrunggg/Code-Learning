//dung ham, nhap 1 so nguyen; ktra so do co phai so hoan hao hay ko
//so hoan hao: tong uoc = chinh no: 6 co uoc la 1,2,3. 6 = 1+2+3 =>> 6 la so hoan hao
//1. tinh uoc cua so n
//2.  tinh tong cac uoc vua tim
//3. so sanh tong cac uoc voi so n

#include <iostream>
using namespace std;
int kiemtrasohoanhao(int n);
int xuatsohoanhao(int n);
int main()
{
	int n;
	cout<<"Nhap so ban muon kiem tra:";
	cin>>n;
	cout<<"Cac so hoan hao la: ";
	xuatsohoanhao(n);
}
int kiemtrasohoanhao(int n){
	int sum = 0;
	for(int i = 1; i<n; i++)
		if (n % i ==0)
			sum += i;
	if (sum == n)
	return 1;
	else 
	return 0;
	
}
int xuatsohoanhao(int n){
	for(int i = 1; i<=n; i++)
	if (kiemtrasohoanhao(i) == 1) cout<<endl<<i;
	}



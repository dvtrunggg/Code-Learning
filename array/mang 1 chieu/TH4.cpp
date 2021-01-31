/* Viet ctrinh: nhap xuat mang SO NGUYEN:
	tinh TBC
	xuat cac phan tu cua mang GAN BANG TBC vd: tbc = 4, => xuat ra 3 va 5 */
	
#include <iostream>
#include <math.h>
using namespace std;
void nhapmang (int a[], int &n){
	cout<<"nhap kich thuoc mang ban muon: ";
	cin>>n;
	for(int i = 0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
float TBC(int a[], int n){
	int dem = 0, tong = 0;
	for(int i = 0; i<n; i++){
		tong = tong + a[i];
		dem++;
	}
	return (float)tong/dem;
}
void ganTBC(int a[], int n){
	int i;
	float min = abs(TBC(a, n)-a[0]);
	for( i = 0; i<n; i++)
		if((abs(TBC(a,n)-a[i]))<min)
			min = abs(TBC(a,n)-a[i]);
	for(i = 0; i<n; i++)
		if ((abs(TBC(a,n)-a[i]))==min)
			cout<<"  a["<<i<<"] = "<<a[i];
}
main(){
	int a[20], n;
	nhapmang(a,n);
	cout<<"TBC cua mang tren la: "<<TBC(a,n);
	cout<<"\n so gan TBC nhat la: "; ganTBC(a,n);
}

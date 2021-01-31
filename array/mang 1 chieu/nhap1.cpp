#include <iostream>
using namespace std;
void nhapmang(int a[], int &n ){
	cout<<"Nhap kich thuoc mang"<<endl;
	cin>>n;
	for(int i = 0; i<=n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
}
}
void xuatmang(int a[], int n){
	for (int i = 0; i<=n; i++)
	cout<<"a["<<i<<"] = "<<a[i]<<endl;
	
}
main(){
	int a[10], n;
	cin>>n;
	nhapmang(a,n);
	//xuatmang(a,n);
}

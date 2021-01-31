#include <iostream>
using namespace std;
void nhapmang (int a[], int &n){                
	cout<<"Nhap so phan tu cho mang ban muon: "; cin>>n;
	for(int i = 0; i<n;i++){
		cout<<"a[" << i << "] = ";
		cin>>a[i];}
}
void xuatmang(int a[], int n){
	cout<<"Mang vua nhap: ";
	for(int i = 0; i<n ; i++)
		cout <<"[a"<<i<<"] = "<<a[i]<<endl;
}

main(){
	int a[10], n;
	nhapmang(a, n);
	xuatmang(a,n);
}

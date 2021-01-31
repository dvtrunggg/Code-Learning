#include<iostream>
using namespace std;
void nhapmang(int &n, int a[],char k){
	cout<<"Nhap so phan tu mang"<<k<<" ma ban muon ";
	cin>>n;
	cout<<"Dien mang"<<k<<" cua ban: "<<endl;
	for(int i = 0; i<n ; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuatmang(int n, int a[]){
	for(int i = 0; i<n;i++){
		cout<<" "<<a[i]<<endl;
	}
}
void gopmangxenke(int n, int a[], int b[], int c[]){
	int j = 0; // chi so phan tu cua mang c
	for (int i = 0; i < n; i++){
		c[j++] = a[i]; 
		c[j++] = b[i];
	}	
}
main(){
	int n, a[10], b[10], c[20];
	nhapmang(n, a, 'a');
	xuatmang(n,a);
	nhapmang(n, b, 'b');
	xuatmang(n,b);
	gopmangxenke(n,a,b,c);
	xuatmang(2*n,c);
}



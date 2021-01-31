/* viet ctrinh voi ham nhap va xuat mang:
		nhap so x: ktra x da xuat hien trong mang
			neu x da xuat hien: dem so lan x co trong mang
			neu x chua co: ch�n x vao mang   */


#include <iostream>
using namespace std;
void nhapmang(int &n, int a[]){
	cout<<"Nhap mang ban muon: ";
	cin>>n;
	for(int i = 0; i<n; i++){
	cout<<"a["<<i<<"] = ";
	cin >>a[i];}
}
void xuatmang(int n, int a[]){
	cout<<"Ham cua ban la:"<<endl;
	for(int i = 0; i< n ; i++)
	cout<<"  "<<a[i];}
int kiemtra(int n, int a[],int x){
	
	int dem = 0;
	for(int i = 0; i<n; i++){
		if (a[i] == x) dem++;
	}
	return dem;
}
void chenx(int &n, int a[],int x){
	int i, j, p;                     // i l� c�c tri so mang cu(a[1],.a[2]..), j la cac tri so mang moi(a[1].a[2]...), p l� vi tr� x ch�n v�o (a[p] = x)
	for(int i = 0; i<n; i++) // ( t�m vi tr� cua x)
		if(a[i]>=x)             
			p = i-1;
	for(int j = n-1; j>=p; j--)	      // (ch�n x v�o mang *new)
		a[j+1] = a[j];                                
		a[p] = x;
		n++;     // khi ch�n x v�o thi so phan tu tang them 1. vd luc dau mang co 10 ptu, ch�n x vao th� mang c� 11 ptu
}
main(){
	int a[20], n,x;
	nhapmang(n,a);
	xuatmang(n,a);
	cout<<"\nNhap x : ";
	cin>>x;
	if(kiemtra(n,a,x) != 0) cout<<"\nso lan "<< x<<" co trong mang la: "<<kiemtra(n,a,x);
	else {
		cout<<x<<" khong co trong mang.   "<<endl;
		cout<<" chen "<<x<<" vao mang";
		chenx(n,a,x);
		xuatmang(n,a);
}
}

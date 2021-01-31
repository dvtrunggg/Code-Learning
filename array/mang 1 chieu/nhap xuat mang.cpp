//nhap xuat so phan tu mang:

#include <iostream>
using namespace std;
void nhapmang (int a[], int n){                 //dau & de dia chi n ko thay doi ( de co dinh), neu ko co thi ham xuatmang se ko chay dc !
	cout<<"Nhap so phan tu cho mang ban muon: "; cin>>n;
	for(int i = 0; i<n;i++){
		cout<<"a[" << i << "] = ";
		cin>>a[i];}
}
int xuatmang(int a[], int n){
	cout<<"Mang vua nhap: ";
	for(int i = 0; i<n ; i++)
		cout <<"[a"<<i<<"] = "<<a[i]<<endl;
}
main()
{
	int a[100], n;
	nhapmang(a,n);
	xuatmang(a,n);
}

/*      Viet ctrinh nhap va xuat 1 mang so nguyen:
			neu mang a co n phan tu tr�ng nhau: tien h�nh x�a:   vd: a[1]=2; a[2]=2 =>> x�a a[2] = 2 di ......
			huong dan: coi lai video bai 50. tks*/






#include<iostream>
using namespace std;

void nhapmang(int a[], int &n){
	cout<<"Nhap kich thuoc mang ban muon: ";
	cin>>n;
	for(int i = 0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuatmang(int a[], int n){
	for(int i = 0; i< n; i++)
	cout<<" "<<a[i];
}
//xep h�ng: a b c d:   anh b di ra ngoai thi anh c len vi tr� cu cua a b ( vi tri so 2), anh d  len vi tri cu cua anh c (vi tri so 3), khi nay: hang 4 nguoi thanh hang 3 nguoi
void huy(int a[], int &n, int k)     //&n la vi n-- nen ket qua cuoi cung n se thay doi, n-- se thanh n trong h�m xoatrung khi goi ham huy. gia tri moi cua n se dc cap nhat ( n--)
									 //ham nay se cho phep huy nhung phan tu tr�ng nhau(** sau khi huy, k�ch thuoc se giam ( vd mang co 4 phtu, sau khi tr�ng 1 phtu, h�m se c�n 3ptu)
{                                // k la vi tri can huy, n la so phan tu mang.
                                           // i la chi so mang cu (old array)
	for(int i = k; i<n; i++  )      /* x�t c�c phan tu trong mang a, tai vi tri k ( trung nhau) */
		a[i] = a[i+1];               
	n-- ;    
	
}
void xoatrung( int a[], int &n){        // &n: sau khi xoa mang a thi kich thuoc n thay doi ( giam di) =>> truyen tham bien
	for (int i = 0; i< n; i++)
		for(int j = i+1; j<n; j++)          // moi phan tu thu i thi se kiem tra cac ptu phia sau no ( i+1) xem co trung khong
			if (a[i] == a[j])               // neu tr�ng th� goi h�m huy.
				huy(a,n,j);
}
main(){
	int a[20], n;
	nhapmang(a,n);
	xuatmang(a,n);
	cout<<"\n ham sau khi xoa: ";
	xoatrung(a,n);
	xuatmang(a,n);	
	
}


/* viet ctrinh: nhap & xuat 2 mang a, b
gop msng a va b xen ke thanh mang c va xuat mang c ra man hinh*/




#include <iostream>
using namespace std;
void nhapmang(int &n, int a[], char k){                              // char la kieu ky tu, cho phep in ky tu bat ki tren cout ( giong kieu int:
	cout<<"Nhap kich thuoc mang "<<k<<" ban muon: "<<endl;            // int i = 2; cout<<i; =>> output: 2
	cin>>n;                                                         // char k; cout<<k; =>> output: k
	for(int i = 0; i < n; i++){
		cout<<k<<"["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuatmang(int n, int a[],char m){
	cout<<"Mang "<<m<<" cua ban la: "<<endl;
	for(int i = 0; i < n; i++)
		cout<<" "<<a[i]<<endl;
		
}

void nhapmangxenke(int a[], int b[], int c[] , int n){
	int j = 0; // chi so phan tu cua mang c
	for (int i = 0; i < n; i++){
		c[j++] = a[i];                        //toan tu j++: dau tien j = 0, sau do tang len 1 thi c[1] gan vao  = a[0]
		c[j++] = b[i];                     //                         j = 1, sau do tang len 1 thi c[2] gan vao =  b[0]              
	}                                     //                          j = 2, sau do tang len 1 c[3] gan = a[1]
	
}
int main(){
	int a[10], n, b[10], c[20];   //*
	nhapmang(n,a,'a');
	xuatmang(n,a,'a');
	nhapmang(n,b,'b');
	xuatmang(n,b,'b'); 
	nhapmangxenke(a,b,c,n);
	xuatmang(2*n,c,'c'); //**         //#(*) (**) vi mang c chua ca mang a va b nen kich thuoc cua no se gap 2 lan
	
}

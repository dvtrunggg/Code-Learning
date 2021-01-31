#include <iostream>
using namespace std;
void nhapmang(int a[], int n){
	for(int i = 0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
//void xuatmang(int a[], int n){
//	cout<<"mang cua ban duoc xuat ra la: "<<endl;
//	for(int i = 0; i<n;i++ )
//	cout<<"a["<<i<<"] = "<<a[i]<<endl;
//}
void TBC(int a[], int n, float &tbcduong, float &tbcam){
	int demduong = 0, demam = 0;
	int tongduong = 0, tongam = 0;
	for(int i = 0; i<n;i++){
		if (a[i]>0){
			demduong++;
			tongduong+=a[i];
		}
		else {
			demam++;
			tongam+=a[i];
	}
}
	tbcduong =(float)tongduong/demduong;
	tbcam = (float)tongam/demam;
}

main(){
	int a[10], n;
	cout<<"Nhap so luong phan tu trong mang ban muon ";
	cin>>n;
	nhapmang(a,n);
//	xuatmang(a,n);
	float duong, am;
	TBC(a, n, duong, am);
	cout<<"TBCduong = "<<duong<<endl;
	cout<<"TBCam = "<<am<<endl;
	
	}
	

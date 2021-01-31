#include <iostream>
#define MaxC 50
#define MaxD 50 
using namespace std;
void NhapMang(int a[], int &c, int &d){
	cout<<"Nhap so cot: ", cin>>c;
	cout<<"Nhap so dong: ";
	cin>>d;
	for(int i = 0; i<c; i++){
		for(int j = 0; j<d; j++){
			cout<<"Array["<<j<<"]"<<"["<<i<<"] = ";
			cin>>a[j*c+i];           // chi so dong * tong cot + chi so cot. (vi tri cua no )
	}
}
}
void XuatMang(int a[], int c, int d){
	for(int i = 0; i<c;i++){
		for(int j = 0; j<d;j++)
			cout<<"    "<<a[j*c+i];
			cout<<endl;
	}
}
main(){
	int a[MaxC*MaxD], c,d;
	NhapMang(a,c,d);
	XuatMang(a,c,d);
}

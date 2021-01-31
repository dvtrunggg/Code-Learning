/* Viêt ctrinh nhap xuat mang a
   Tinh trung binh cong cac so nguyen am, nguyen duong trong 1 ham duy nhat. Neu mang ko co so am, duong thi thong bao man hinh
   
   commet dire:):
   viet ham nhapmang
   			ham nhapmang
   			ham theo yeu cau de bai: tinh trung binh cong....
   			ham main
   			*/
   			
   			
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
	cout<<"a["<<i<<"] = "<<a[i]<<endl;
}
void  tbc(int n, int a[], float &tbcduong, float &tbcam){                      //&tbc duong va &tbc am do 
	int tongam = 0, tongduong = 0;
	int demam = 0,demduong = 0;
	for(int i = 0; i< n; i++){
	if(a[i] < 0){ 
		demam++;
		tongam+=a[i];}
	if (a[i] > 0){
		demduong++;
		tongduong=+a[i];}
}
	if(demduong > 0) 
		tbcduong = (float)tongduong/demduong;
	else tbcduong = 0;
	if (demam > 0)
		tbcam = (float)tongam/demam;
	else tbcam = 0;
}
main(){
	int n, a[10];
	nhapmang(n,a);
	xuatmang(n,a);
	float am,duong;
	tbc(n,a,duong,am);
	if (duong > 0)
		cout<<"trung binh cong cac so am trong mang = "<<am<<endl;
	else
		cout<<"Ham ko co so duong"<<endl;
	if (am < 0)
		cout<<"trung binh cong cac so duong trong mang = "<<duong<<endl;
	else
		cout<<"Ham ko co so am"<<endl;
}

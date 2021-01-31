/*Viet ctrinh : nhap 1 mang n ptu, tim xem ptu nao xuat hien nhieu nhat va xuat hien baop nhieu lan*/
#include <iostream>
#include<stdio.h>
using namespace std;

// hàm nhap mang = con tro
void NhapMang(int *p, int n)                   // dau &: tham bien : de cho ham XuatMang chay dc, neu cin>>n o hàm main thì ko can &n o hàm này
{
	for(int i = 0; i< n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>*(p+i);
	}
}
void XuatMang(int *p, int n)
{
	for(int i = 0; i<n; i++){
		cout<<"  "<<*(p+i);
	}
}
// hàm tìm so lan phan tu xuat hien nhieu nhat
int TimTanSuatXuatHienMax(int *p, int n)
{
	int max = 1;
	
	for(int i = 0; i<n; i++)
	{
		int dem = 1;
		for(int j = i+1; j<n; j++)	{	                 // khong can duyet lai j = 0 do da duyet i = 0 r
			
			if(*(p+i) == *(p+j)){
				dem++;}
			}
			if(dem > max){
				max = dem;}
	}
	
	return max;
}
// hàm dem so lan cac phan tu xuat hien ( tu 2 lan tro len)
int DemTanSuatXuatHien(int *p, int n,int index){
	int dem = 1;        // chính nó xuat hien
		for(int i = index+1; i<n; i++)
			if(*(p+i) == *(p+index)) 
				dem++;
	return dem;
}

void lietke(int *p, int n){
	if(TimTanSuatXuatHienMax(p,n) >1){
		for(int i = 0; i<n; i++)
		{
			if(TimTanSuatXuatHienMax(p,n) == DemTanSuatXuatHien(p,n,i)){
				cout<<" Phan tu xuat hien nhieu nhat la: "<<*(p+i);
			}
		}
		cout<<" \n   so lan xuat hien la: "<<TimTanSuatXuatHienMax(p,n); 
	}
	else
		cout<<"cac phan tu deu doc lap voi nhau";
}

main()
{
	int n;
	int *p;
	cout<<"Nhap so luong phan tu cua mang: ", cin>>n;
	p = new int[n];           // cap phát vùng nho cho con tro voi mang gom n ohan tu
	NhapMang(p,n);
	XuatMang(p,n);
	lietke(p,n);
	delete p;                 // xóa bo nho thua cua con tro
}

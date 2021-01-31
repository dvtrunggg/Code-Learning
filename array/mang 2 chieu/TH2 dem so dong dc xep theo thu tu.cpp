/* Viet ctrinh nhap xuat ma tran: 
Tính tong phan tu duong trong ma tran
kiem tra trong ma tran: có dòng nào dc xep theo thu tu tu bé -> lon(trái -> phai). Neu có: dem so dòng, neu ko thì thong báo.*/

#include <iostream>
using namespace std;
void NhapMT(int array[][20], int c, int r){
	for(int i = 0; i<c; i++){
		for(int j = 0; j < r;j++){
			cout<<"a["<<j<<"]["<<i<<"] = ";
			cin>>array[i][j];
		}
	}
}
void XuatMT(int array[][20], int c, int r){
	for(int i = 0; i<c;i++){
		for(int j=0; j<r;j++)
			cout<<" "<<array[i][j];
		cout<<endl;
		
	}
}
// hàm tính tong các so duong trong ma tran
int TongDuong(int array[][20],int c, int r){
	int sum = 0;
	for(int i = 0; i<r; i++)
		for(int j = 0; j<c; j++)
	if(array[i][j]>0) sum +=array[i][j];
	return sum;
}



//hàm ktra các dòng có các ptu dc sap xep tu bé ->lon
int RowsTest(int array[][20], int c, int r){
	int sodong = 0;
	for(int i = 0; i<r; i++){	
		int dem = 0;          //dem a[i][j]<a[i][j+1] co bao nhieu lan
		for(int j = 0; j<c-1; j++)
			if(array[i][j]>a
			array[i][j+1]) dem++;
			if(dem == c - 1) sodong++;
}
	return sodong;
}

main(){
	int array[20][20],c,r;
	cout<<"Nhap so cot ban muon: ";
	cin>>c;
	cout<<"Nhap so dong ban muon: " ;
	cin>>r;
	NhapMT(array,c,r);
	XuatMT(array,c,r);
	cout<<"Tong cac ptu duong trong ma tran: "<<TongDuong(array,c,r)<<endl;
	if (RowsTest(array,c,r)>0) cout<<"so dong co sap xep theo thuc tu be den lon la: "<<RowsTest(array,c,r);
	else cout<<"Ko co dong nao sap xep tu be den lon. ";
}

/*   Viet ctrinh nhap vao ma tran vuong cap N ( columns = rows = N):
	xuat vi trí ptu Max trong ma tran
	ktra cac pt ma tran co doi xung qua duong chéo chính hay ko.             1	2	3           duong cheo chinh: 1-5-9 và 3-5-3
	                                                                         2	5	6			cac ptu doi xung: 2-2; 6-6; 
	                                                                         3	6	9               
	                                                                         */


#include <iostream>
using namespace std;
void NhapMT(int arr[][20], int c, int r){
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			cout<<"arr["<<i<<"]["<<j<<"] = ", cin>>arr[i][j];
		}
	}
}
void XuatMT(int arr[][20], int c, int r){
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++)
			cout<<"  "<<arr[i][j];
			cout<<endl;
	}
}
// hàm tìm ptu maximum trong ma tran và vi trí cua nó trong ma tran
void Maxx (int arr[][20], int c, int r){
	int max = arr[0][0];    //gan max=A[0][0]
	int rowlocation = 0;      // gán vi trí cua dòng khi a[i][j] = max
	int columnlocation = 0;//     ..............cot............
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
		if(arr[i][j]>arr[0][0]) 
			max = arr[i][j];
		if(arr[i][j] == max){
			rowlocation = i;
			columnlocation = j;
		}
	}
}
	cout<<"Gia tri lon  nhat cua ma tran la: arr["<<rowlocation<<"]["<<columnlocation<<"] = "<<max;
}
int TimDX(int arr[][20], int c, int r){
	for(int i = 1; i<r-1; i++)
		
		for(int j = 0; j<c-1; j++)
			if(arr[i][j]!=arr[j][i]){
				return 0;
		}
		 		return 1;
}
main()
{
	int k;
	int arr[20][20], c, r;
	cout<<"Nhap di ban ui "<<endl;
	cout<<"enter your rows: ", cin>>r;
	cout<<"enter your columns: ", cin>>c;
	NhapMT(arr,c,r);
	XuatMT(arr,c,r);
	Maxx(arr, c, r);
	if(TimDX(arr,c,r) == 1) cout<<" cac ptu doi xung thoa de bai : ";
	else cout<<"ko co ptu doi xung thoa de bài. ";
	}

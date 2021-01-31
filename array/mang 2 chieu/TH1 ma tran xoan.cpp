/* viet ma tran : N x N ( so columns = rows)
	voi co phan tu mang dc tao ngau nhien      // dung rand: voi cac so [a,b]: rand() % (a-b+1)+a. vd tao ngau nhien tu 10 - 50: rand () % (50 - 10 +1)+10;
	tang dan theo chieu kim dong ho theo chieu xoan oc      // dua ve dang mang 1 chieu
	*/
	
	
/*	**guide: de xuat ma tran vuong: chuyen bai toan thanh mang 1 chieu
			sau do sap xep cac ptu trong mang 1 chieu theo thu tu tang dan
			chuyen mang 1 chieu vao ma tran vuong 
			sap xep theo chieu xoan oc.
			*/ 
#include <iostream>
#include <stdlib.h>
using namespace std;
void Nhapmang (int n, int a[]){  // nhap mang voi cac phan tu dc tao ngau nhien
	for(int i = 0; i<n*n; i++){
		a[i] = rand() % (100-10+1)+10;
	}
}
void Xuatmang(int n, int a[]){   // // xuat mang bth hoy
	int i, j;
	for(i = 0; i<n; i++){
		for( j = 0; j<n;j++)
		
			cout<<"  "<<a[i*n + j];
			cout<<endl;
		
	}
}
void sapxep(int a[], int n){
	int tam;
	for(int i = 0; i<n*n-1; i++){
		for(int j = i+1; j<n*n; j++)
		if(a[i]>a[j]){
			tam = a[i];
			a[i] = a[j];
			a[j] = tam;
		}
	
	}
}
void XuatMT(int a[][50], int n){
	
	cout<<"Ma tran: "<<endl;
	for( int i = 0; i<n; i++){
		for( int j = 0; j<n;j++)
			cout<<"  "<<a[i][j];
		cout<<endl;
}
}
//ham chuyen: chuyen xoan oc tu ngoai vao trong theo thu tu tang dan
//dau vao la mang a, n
//dau ra la ma tran b
void chuyen (int a[], int b[][50], int n){
	int i=0 , k , l=0 , j=0;
	while (i<n*n){                     // i la chi so cua mang 1 chieu a (a[i]), n la tong phtu. i<n*n là xét các ptu trong mang 1 chieu:
		for (int j = l; j<n-l; j++)          // j la chi so cot cua ma tran b: 
			b[l][j] = a[i++];            // vì mang a da dc sap xep nen ko can xét b[0][0]// tai vi tri: 0,1 ; 0,2 ; 0,3 ;... (dòng 0)
		for(int k = l + 1; k <n-l; k++)
			b[k][n-l-1] = a[i++];      //  vi tri : 1,4 ; 2,4; 3,4;...... (cot 4)
		for(int j=n-l-2;j>=l;j--)
			b[n-l-1][j]=a[i++];
		for(int k=n-l-2;k>l;k--)
			b[k][l]=a[i++];
		l++;
	}
}


main(){
	int a[500], b[50][50], n; 
	cout<<"Moi nhap cap cua ma tran vuong ";
	do{
		cin>>n;
		if(n <=1) cout<<"Nhap lai giup tui cai di @@ "<<endl;
	}
	while(n<=1);{
		Nhapmang(n,a);
		Xuatmang(n,a);
		cout<<"Ma tran dc sap xep lai: "<<endl;
		sapxep(a,n);
		chuyen(a,b,n);
		XuatMT(b,n);
	}
}


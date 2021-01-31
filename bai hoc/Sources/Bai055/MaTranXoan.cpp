/*	
Viet chuong trinh nhap 1 mang vuong N*N pt .
Dien cac gia tri theo thu tu xoan tu ngoai vao trong
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//ham nhap mang ngau nhien
void NhapMang(int a[],int n)
{	
	//tao so random tu [10,50]
	//rand() % (b – a + 1) + a
	for(int i=0;i<n*n;i++)
		a[i]=rand() % (100-10+1)+10;
}


//sap xep mang tang dan
//dau vao mang a
//dau ra mang a tang dan
void Sapxep(int a[], int n)
{	
	int i,j,tam;
	for(i=0;i<n*n-1;i++)
		for(j=i+1;j<n*n;j++)
			if (a[i]>a[j])
			{  
				tam = a[i];
				a[i]=a[j];
				a[j]=tam;	
			}
}
//ham xuat mang kieu ma tran
void XuatMang(int a[],int n)
{	int i,j;
	for (i=0;i<n;i++)
	{	
		for (j=0;j<n;j++)
			cout<<"  "<<a[i*n+j];
		cout<<endl;
	}
}

		
	

//ham chuyen xoan tu ngoai vao trong tang dan
//dau vao mang a ,n
//dau ra ma tran b
/*void Chuyen(int a[],int b[][50],int n)
{   int i=0,j=0,k,l=0,tam;
	while (i<n*n)
	{	
		for(j=l;j<n-l;j++)
			b[l][j]=a[i++];
		for(k=l+1;k<n-l;k++)
			b[k][n-l-1]=a[i++];
		for(j=n-l-2;j>=l;j--)
			b[n-l-1][j]=a[i++];
		for(k=n-l-2;k>l;k--)
			b[k][l]=a[i++];
		l++;
	}
}/*/
void Chuyen (int a[], int b[][50], int n){
	int i , k , l , j;
	while (i<n*n){                     // i la chi so cua mang 1 chieu a (a[i]), n la tong phtu. i<n*n là xét các ptu trong mang 1 chieu:
		for (int j = l; j<n-l; j++)          // j la chi so cot cua ma tran b: 
			b[l][j] = a[i++];            // vì mang a da dc sap xep nen ko can xét b[0][0]// tai vi tri: 0,1 ; 0,2 ; 0,3 ;... (dòng 0)
		for(int k = l + 1; k <n-1; k++)
			b[k][n-l-1] = a[i++];      //  vi tri : 1,4 ; 2,4; 3,4;...... (cot 4)
		for(int j=n-l-2;j>=l;j--)
			b[n-l-1][j]=a[i++];
		for(int k=n-l-2;k>l;k--)
			b[k][l]=a[i++];
		l++;
	}
}
//ham xuat ma tran vuong a
void XuatMT(int a[][50], int n)
{	
	cout <<"Ma tran:\n";
	for (int i=0;i<n;i++)
	{	
		for(int j=0; j<n; j++) 
			cout<<"  "<< a[i][j];
		cout << endl;
	}
}
 main()
{       
	int n,a[400],b[50][50];
	cout<<"\nMoi nhap cap cua ma tran vuong ";
	do {   
		cin >>n;
	    if(n<=1) 
			cout<<"\nNhap sai moi nhap lai ! ";
	   }
   	while(n<=1);
	NhapMang(a,n);
	XuatMang(a,n);
	cout<<"\nMa tran duoc sap xep xoan tu ngoai vao trong\n";
	Sapxep(a,n);
	Chuyen(a,b,n);
	XuatMT(b,n);
}




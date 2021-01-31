/*	
Nhap ma tran n*m .Tinh tong cac so duong.Kiem tra xem ma tran
co ton tai hay khong mot hang ma phan tu tang dan (tu trai sang phai)
*/
#include<iostream>

using namespace std;
void NhapMT(int a[][20],int n,int m)
{	
	for (int i=0;i<n;i++)
	{	for(int j=0; j<m; j++)
		{	
			cout << "a["<<i<<"]["<<j<<"]=";  
			cin >>a[i][j];
		}
	}
}
void XuatMT(int a[][20],int n,int m)
{	
	for (int i=0;i<n;i++)
	{	
		for(int j=0; j<m; j++) 
			cout<<"  "<< a[i][j];
		cout << endl;
	}
}
//ham tinh tong cac so duong
int Tongduong(int a[][20],int n,int m)
{	
	int i,j,tong=0 ;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(a[i][j]>0) tong+=a[i][j] ;
	return tong ;
}
//dau vao a,n,m
//dau ra so dong co pt tang dan
int Kiemtra(int a[][20],int n,int m)
{	
	int i,j,k,dem,sodong=0;
	for(i=0;i<n;i++)
	{       
		dem=0 ;//dem a[i][j]<a[i][j+1] co bao nhieu lan
		for(j=0;j<m-1;j++)
			 if(a[i][j]<a[i][j+1]) 
			 	dem++ ;
		if(dem==m-1) 
			sodong++;//dem=m-1 thi day la dong tang dan
	}
	return sodong ;
}
 main ()
{	int a[20][20],n,m ;
	cout << "Nhap kich thuot ma tran:"; 
	cout << "\nNhap so dong: "; 
	cin >> n;
	cout << "\nNhap so cot: "; 
	cin >> m;
	NhapMT(a,n,m);
	XuatMT(a,n,m);
	cout<<"\nTong cac so duong la: "<<Tongduong(a,n,m);
	cout<<"\nSo hang ma co phan tu tang dan tu trai sang phai la: "<<Kiemtra(a,n,m);
}

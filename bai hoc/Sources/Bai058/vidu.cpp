/*
Nhap vao ma tran n*m
		 a)Xay dung mang B[n] voi B[i] bang tong tac ca cac phan tu
		   tren dong i cua MT A
		 b)Cho biet dong co tong lon nhat va dong co tong nho nhat.
*/
#include <iostream.h>
#define MaxD 50
#define MaxC 50
void NhapMT(int a[MaxD][MaxC], int &n, int &m)
{	
	cout << "Nhap so dong: "; 
	cin >> n;
	cout << "Nhap so cot: "; 
	cin >> m;
	for (int i=0;i<n;i++)
	{	for(int j=0; j<m; j++)
		{	
			cout << "a["<<i<<"]["<<j<<"]=";  
			cin >>a[i][j];
		}
	}
}
void XuatMT(int a[MaxD][MaxC], int n, int m)
{	
	cout <<"Ma tran:\n";
	for (int i=0;i<n;i++)
	{	
		for(int j=0; j<m; j++) 
			cout<<"  "<< a[i][j];
		cout << endl;
	}
}
void MangB(int a[MaxD][MaxC],int n,int m,int b[])
//dau vao a,n,m
//dau ra mang B
{	int i,j,tong;
	for(i=0;i<n;i++)
	{       tong=0;
		for(j=0;j<m;j++)
			tong+=a[i][j];
		b[i]=tong ; //moi lan tinh tong tren 1 hang thi gan cho no
		cout <<"\t"<<b[i];//bang B[i]

	}
}
void MaxMin(int b[],int n,int &max,int &min,int &maxi,int &mini)
//dau vao b,n
//dau ra min,max,vi tri min max
{	max=b[0];min=b[0];maxi=1,mini=1;
	for(int i=0;i<n;i++)
	{	if(b[i]>max) {	max=b[i] ;maxi=i+1;	}
		if(b[i]<min) {	min=b[i] ;mini=i+1;	}
	}
}
void main()
{	
	int a[MaxD][MaxC],b[MaxD],n,m,max,min,mini,maxi ;
	cout <<"Moi nhap kich thuoc ma tran \n";
	NhapMT(a,n,m);
	XuatMT(a,n,m);
	cout <<"\nMang B chinh la tong tren cac dong cua ma tran \n";
	MangB(a,n,m,b);
	MaxMin(b,n,max,min,maxi,mini);
	cout <<"\nDong co tong lon nhat la dong "<< maxi << " tong bang "<<max;
	cout <<"\nDong co tong nho nhat la dong "<< mini << " tong bang "<<min;
	cout <<endl;
}


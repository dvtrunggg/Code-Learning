/*	
	Viet chuong trinh nhap MT 2 chieu N*M ,xuat ra man hinh cac
	phan tu A[i][j] sao cho A[i][j] la pt co gia tri lon nhat
	dong i nho nhat cot j
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

//ham tim phan tu max tren 1 dong
int Maxdong(int a[][MaxC],int m,int &i )
{	int j,max=a[i][0];//dong co dinh
	for(j=0;j<m;j++)
		if(a[i][j]>max) max=a[i][j] ;
	return max ;
}
//ham tim phan tu min tren 1 cot
int Mincot(int a[][MaxC],int n,int &j )
{	int i,min=a[0][j];
	for(i=0;i<n;i++)
		if(a[i][j]<min) min=a[i][j];
	return min ;
}

void main()
{	
	int a[MaxD][MaxC], n, m, i, j;
	cout <<"Moi nhap kich thuoc ma tran \n";
	NhapMT(a,n,m);
	XuatMT(a,n,m);
	cout <<"\nCac phan tu co Max dong va Min cot la: ";
	for(i=0;i<n;i++)     //xet toan bo ma tran neu co phan tu a[i][j]nao
		for(j=0;j<m;j++)//bang maxdong va bang mincot thi in ra
			if((a[i][j]==Maxdong(a,m,i))&&(a[i][j]==Mincot(a,n,j)))
			     cout<<"A["<<i<<"]["<<j<<"]= "<<a[i][j];
	cout <<endl;
}

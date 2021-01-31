#include<iostream.h>
#include<math.h>
void NhapMang(int a[ ], int n)
{	
	cout <<"Nhap vao gia tri mang "<<endl;
	for (int i=0;i<n;i++)
	{	
		cout <<"A["<<i<<"]=";
		cin >> a[i];
	}
}
void XuatMang(int a[ ], int n)
{	
	for(int i=0;i<n; i++) 
		cout <<"   "<<a[i];
	cout <<endl;
}
int TimPhanTu(int a[],int n,int x )
{	int i,dem=0;
	for(i=0;i<n;i++)
		if(a[i]==x) dem++;
	return dem ;
}
void ChenPhanTu(int a[],int &n,int x)
{	int i,j,p  ;
	for(i=0;i<n;i++)
		if(a[i]>=x) p=i-1 ;
	for(j=n-1;j>=p;j--)
		a[j+1]=a[j];
	a[p]=x;
	n++;
}

void main()
{
	int dem,i,a[100],n,x;
	cout <<"Nhap so phan tu cua mang: ";
	cin >>n;
	NhapMang(a,n);
	cout <<"Mang vua nhap: ";
	XuatMang(a,n);
	
	cout <<"Nhap gia tri phan tu can tim: ";
	cin >>x;
	dem=TimPhanTu(a,n,x);
	if(dem!=0) 
		cout <<x<<" xuat hien "<<dem<<" lan trong mang\n";
	else 
	{
		cout <<x<<" khong xuat hien trong mang\n";
		cout <<"Chen "<<x<<" vao mang\n";
		ChenPhanTu(a,n,x);
		XuatMang(a,n); 
	}
}

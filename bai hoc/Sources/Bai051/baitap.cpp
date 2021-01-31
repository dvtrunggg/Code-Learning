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

void GanTBC(int a[],int n,float &tbc)
{	int i,tong=0;
	for(i=0;i<n;i++)
		tong+=a[i];
	tbc=float(tong)/n;
	float min=abs(tbc-a[0]);
	for(i=0;i<n;i++)
		if(abs(tbc-a[i])<min)min=abs(tbc-a[i]);
	for(i=0;i<n;i++)
		if(abs(tbc-a[i])==min)cout <<"A["<<i<<"]="<<a[i];
}

void main()
{
	int a[100],n;
	float tbc;
	cout <<"Nhap so phan tu cua mang: ";
	cin >>n;
	NhapMang(a,n);
	cout <<"Mang vua nhap: ";
	XuatMang(a,n);
	cout <<"\nPhan tu co gia tri gan trung binh cong cua mang la: ";
	GanTBC(a,n,tbc);
	cout <<"\nTrung binh cong cua mang la: "<<tbc;
	
}

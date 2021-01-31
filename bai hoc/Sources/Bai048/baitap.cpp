#include<iostream.h>
void NhapMang(int a[ ], int &n)
{	
	cout <<"Nhap so phan tu cua mang: ";
	cin >>n;
	for (int i=0;i<n;i++)
	{	
		cout <<"a["<<i<<"]=";
		cin >> a[i];
	}
}
void XuatMang(int a[ ], int n)
{	
	cout <<"Mang vua nhap:"<<endl;
	for(int i=0;i<n; i++) 
		cout <<"   "<<a[i]<<endl;
}
void TBC(int n,int a[],float &duong,float &am)
{	
	int i,demam = 0,demduong = 0;
	duong = 0;am = 0;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{	
			demduong++;
			duong+=a[i];
		}
		else if(a[i]<0)
		{	
			demam++;
			am+=a[i]; 
		}
	}
	if (demduong > 0)
		duong=duong/demduong;
	if (demam > 0)
		am=am/demam ;
}
void main()
{
	int a[100],n;
	int i,j=0;
	NhapMang(a,n);
	XuatMang(a,n);
	float duong, am ;
	TBC(n,a,duong,am) ;
	if (duong > 0)
		cout <<"\nTrung binh cong cac so duong la " <<duong;
	else
		cout <<"\nMang khong co so duong ";
	if (am < 0)
		cout <<"\nTrung binh cong cac so am la " <<am;
	else
		cout <<"\nMang khong co so am ";
}




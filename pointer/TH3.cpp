#include<iostream>
using namespace std;
void NhapMang(int *p, int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<"a["<<i<<"] = ", cin>>*(p+i);
	}
}
int Ktra(int *p, int n)
{
	for(int i = 0; i<n; i++)
		if(*(p+i) %2 != 0) return 1;
		else return 0;
		
}
// hàm sap xep cac ptu le tang dan
void SapXepLe(int *p, int n)
{
	int min = *p;
	for(int i = 0; i<n; i++)
	{
		if( min > *(p+i))
		{      					//temp = min;
			*(p+i) =*p;
			min = *(p+i);
			
		}
	cout<<" "<<*(p+i);
	}
	
	
		
}
/*void SapXepChan(int *p, int n)
{
	int max = *p
	for(int i = 0; i<n-1; i++)
	{
		if(Ktra(p,n) == 0){
			if(max <*(p+i))            // temp = max;
			{
				*(p+i) = *p;       
				max = *(p+i);
			}
		}
		cout<<"\n Cac phan tu chan dc sap xep giam dan: "<<*(p+i);		
	}
}*/
main()
{
	int *p, n;
	cout<<"Nhap so phan tu cua mang: ", cin>>n;
	p = new int[n];
	NhapMang(p,n);
	SapXepLe(p,n);
//	SapXepChan(p,n);
	delete p;	
}

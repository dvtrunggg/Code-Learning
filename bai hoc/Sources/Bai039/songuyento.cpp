#include <iostream.h> 
int KiemTraSNT (int n)
{
	int kq = 0;
	int dem = 0;
	for (int i=1;i<=n;i++)
    		if (n%i==0) dem+=1;
	if (dem==2) 
		kq = 1;
	return kq;
}
void XuatSNT (int n)
{
	for ( int i = 2 ; i <= n ; i++)
    {
    	if (KiemTraSNT(i)) 
			cout << i <<"   ";
	}
}
int TinhTongSNT(int n)
{
	int kq = 0;
	for ( int i = 2 ; i <= n ; i++)
    {
    	if (KiemTraSNT(i)) 
			kq+=i;
	}
	return kq;
}
void main() 
{  
	int n;
    cout <<"Nhap so nguyen: \n";
    cin >>n;
    cout <<"Cac so nguyen to tu 2 den "<<n<<" la: ";
	XuatSNT(n);
    cout <<"\nTong so nguyen to tu 2 den "<<n<<" la: "<< TinhTongSNT(n) <<endl;
} 

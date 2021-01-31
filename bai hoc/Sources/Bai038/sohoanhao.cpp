#include <iostream.h> 
int KiemTraSoHoanHao (int x);
void Xuat(int n);
void main() 
{  
  int i, n; 
  cout<<"Nhap so nguyen: ";  
  cin >> n;
  cout<<"Cac so hoan hao tu 1 den "<<n<<" la: \n";   
  Xuat(n);
} 
int KiemTraSoHoanHao (int x)
{
	int tong = 0;
  	for (int i=1;i<x;i++)
  		if (x%i==0) tong+=i;
	if (tong == x)  
  		return 1;
	else 
		return 0;
}
void Xuat (int n)
{
	for (int i=1;i<n;i++)
  		if (KiemTraSoHoanHao(i))
	  		cout<<i<<"  ";
}


#include <iostream.h> 
void main() 
{  
  int i, n, tong; 
  cout<<"Nhap so nguyen:";  
  cin >> n; 
  tong = 0;
  for (i=1;i<n;i++)
  	if (n%i==0) tong+=i;
  if (tong == n)  
  	cout<<n<<" la so hoan hao";
  else 
  	cout<<n<<" khong la so hoan hao";
} 


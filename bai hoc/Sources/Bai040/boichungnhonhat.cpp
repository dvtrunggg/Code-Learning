#include <iostream.h> 
int UCLN (int m, int n)
{
	int ucln;
	while (n != 0 && m != 0)
    	if (n>m)
      		n -= m;
   		else
      		m -= n;
  	if (n == 0)
    	ucln = m;
  	else
    	ucln = n;
  	return ucln;
}
int BCNN (int m, int n)
{
	return m*n/UCLN(m,n);
}
void main() 
{  
	int m, n, ucln,bcnn,tich;
    cout <<"Nhap so nguyen: \n";
    cin >>m;
    cout <<"Nhap so nguyen: \n";
    cin >>n;
    cout << BCNN(m,n) <<" la boi chung nho nhat"<<endl;	
} 


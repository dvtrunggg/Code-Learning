#include <iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"nhap so: "<<endl;
	cin>>n;
	for ( int k = 2; k<=n; k++){   //so nguyen to nho nhat la 2... nen xet tu 2 vi so nao cung chia het cho 1
		int dem =0;
		for (int i = 1; i<=n; i++)
			if (k % i == 0) dem++;
				if (dem == 2)
	cout<< k << " la so nguyen to"<<endl;}
	return 0;
}

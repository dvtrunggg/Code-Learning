#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Nhap vao so ban muon: "<<endl;
	cin>> n;
	int tong = 0;
	for (i = 1; i < n;i++){
		if (n%i == 0)
			tong +=i;}
			if (tong == n)
			cout<<n<<" la so hoan hao"<<endl;
		else cout<<n<<" ko phai la so hoan hao"<<endl;
	return 0;
}

#include<iostream>
using namespace std;



/*

		1 	2	3	4	5	6	7	8	9	10
tìm 9: B1 truyen vào mang a da sap xep
		B2: gan left = 0 ( a[0] ), right = n-1 (a[n-1]) và mid = (left + right )/2
		B3: lap toi khi nao mà left == right  ( dùng toán là hieu )
			if a[mid] = x -> true
			if a[mid] <x -> xét nua khoang ben phai ( 9 < a[mid] = 5) => xét tu 5->10, update lai left = mid+1= 6, right van = 10;
			if a[mid] > x -> làm nguoc lai, right = mid -1 = 4
			
			*/
bool BinarySearch(int a[], int n, int x)
{
	int l = 0, r = n-1;
	while(l <= r)
	{
		int mid = (l+r)/2;
		if(x == a[mid]) return true;
		else if(x>a[mid]) l = mid +1;
		else r = mid - 1;
	}
	return false;
}
int Search(int a[], int n, int x)          // tim kiem tuyen tinh
{
	for(int i = 0; i<n; i++)
	{
		if(a[i] == x) return 1;
	}
	return 0;
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int x;
	cout<<"Nhap x: ", cin>>x;
//	if(BinarySearch(a,10,x) ) cout<<"ton tai "<<x;
//	else cout<<"ko ton tai";
	cout<<endl;
	if(Search(a,10,x) == 1) cout<<"ton tai";
	else cout<<"ko ton tai"; 
	
	return 0;
}

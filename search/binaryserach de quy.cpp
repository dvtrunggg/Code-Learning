#include<iostream>
using namespace std;

int BinarySearch(int a[], int left, int right , int x)
{
	if(left > right) return -1;             //left luon > right nha. vd mang co 10 ptu, left = 0, right = 9.( 0 luon < 9)  => mid = (9+0)/2 = 4 ( trong c++ nó the:))
	int mid = (left + right)/2;
	
	if(a[mid] == x) return 1;
	
	// x < a[mid] -> xet khoang ben trai
	else if(x<a[mid]) return BinarySearch(a,left,mid -1,x);

	//x>a[mid] -> xet khoang ben phai
	else if(x > a[mid]) return BinarySearch(a,mid +1, right, x);

}




int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	int left = 0, right = n-1;
	int x;
	cout<<"Nhap x: ", cin>>x;
	if(BinarySearch(a,left, right,x) == 1 ) cout<<"ton tai "<<x;
	else cout<<"ko ton tai";

	
	return 0;
}

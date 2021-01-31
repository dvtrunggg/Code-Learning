#include <iostream>
#include <vector>
using namespace std;


void NhapMang(vector <int> arr)
{
	for(int i = 0; i < 10; i++)
	{
		arr.push_back(i);		// them ptu vao cuoi mang
	}
}
void XuatMang(vector <int> arr)
{
	for(int i = 0; i<arr.size(); i++)	// arr.sixe(); SIZE CUA ARR: giong nhu n
	{
		cout<<arr.at(i);    // <=> cout<<a[i]
	}
}


int main()
{
	vector <int> arr;		// tao kieu vector cho arr, khi chua gan gia tri, khoi tao gia tri mac dinh = 0
//	arr.resize(5,6); // cap phat cho mang vector chua 5 phan tu
//	XuatMang(arr);
//	cout<<endl;
//	arr.resize(3);   // co arr lai thanh 3 ptu ( mat 2 ptu). Mang co 3ptu, tat ca co gia tri = 5
//	cout<<endl;
//	XuatMang(arr);
//	arr.resize(8);		// dan arr thanh 8ptu ( them 3 ptu)
//	cout<<endl;
//	XuatMang(arr);	
	for(int i = 0; i < 10; i++)
	{
		arr.push_back(i);		// them ptu vao cuoi mang
	}
//	cout<<"phan tu dau tien cua mang: "<<arr.front();
//	cout<<"phan tu cuoi cung cua mang: "<<arr.back();
//	NhapMang(arr);
//	XuatMang(arr);
	arr.erase(arr.begin() +1); // xoa phan tu tai vi tri 1 
//	XuatMang(arr); 
	arr.insert(arr.begin() + 3, -9);
	XuatMang(arr);
	return 0; 

}

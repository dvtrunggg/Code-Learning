/* dung con tro
	viet ctrinh nhap vao 1 mang có n ptu:
		tim ptu le Min
		tim ptu chan MAX */

#include<iostream>
using namespace std;

void NhapMang(int *p, int n)
{
	for(int i = 0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>*(p+i);
	}
}
void XuatMang(int *p, int n)
{
	for(int i = 0; i<n; i++)
		cout<<"   "<<*(p+i);
}
//hàm tìm so le nho nhat
int LeMin(int *p, int n)
{
	int min=0;
	for(int i = 0; i<n; i++)
	{
		if(*(p+i) % 2 != 0)
			min = *(p+i);
	}
	for(int i = 0; i<n; i++)
	{
		if(*(p+i) %2 !=0 &&  min>*(p+i))
			min = *(p+i);
	}
	
	return min;
}
// hàm tim so chan lon nhat
int ChanMax(int *p, int n)
{
	int max=0;
	for(int i = 0; i<n; i++)
	{
		if(*(p+i) % 2 == 0)
			max = *(p+i);
	}
	for(int i = 0; i<n; i++)
	{
		if(*(p+i) %2 ==0 &&  max<*(p+i))
			max = *(p+i);
	}
	return max;
	
}
main()
{
	int *p, n;
	cout<<"Nhap so luong ptu mang: ", cin>>n;
	p = new int[n];
	NhapMang(p,n);
	XuatMang(p,n);
	if(LeMin(p,n) == 0) cout<<"\nMang 1 chieu cua ban ko co so le"<<endl;
	else cout<<"\n\nSo le nho nha la: "<<LeMin(p,n);
	if(ChanMax(p,n) == 0) cout<<"\nMang 1 chieu cua ban ko co so chan"<<endl;
	else cout<<"\n So chan lon nhat la: "<<ChanMax(p,n);
	delete p;
}

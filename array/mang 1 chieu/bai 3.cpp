// cho mang gom 5 phan tu bat k�, t�nh:
// 1.xuat cac mang ra m�n h�nh
//2. T�nh t�ng c�c ph�n tu
//3. T�nh tong cac phan tu le
//4. tinh tong cac phan tu chan

#include <iostream>
using namespace std;
main(){
	int a[5]={2,5,6,1,10};
	for(int i = 0; i<=5; i++) 
		cout<<"a["<<i<<"] = "<<a[i]<<"  "<<endl;
	int s0 = 0;
	for(int i = 0; i<5; i++) 
		s0 +=a[i];
		cout<<"Tong mang= "<<s0<<endl;
	int s1 = 0;
	for(int k = 4; k>=0;k--)      // c�i n�y l� lay t� 4 ve 0                // doi kieu cho thu zi � m�:), cha kh�c g� for(int k = 0; k<=4; k++) d�u, 
		if(a[k] % 2 == 1)
			s1+= a[k];
		cout<<"Tong mang le la: "<<s1<<endl;
	int s2=s0-s1;
	cout<<"Tong mang chan la: "<<s2;
}

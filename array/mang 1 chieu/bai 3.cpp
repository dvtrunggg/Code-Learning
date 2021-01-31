// cho mang gom 5 phan tu bat kì, tính:
// 1.xuat cac mang ra màn hình
//2. Tính tông các phàn tu
//3. Tính tong cac phan tu le
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
	for(int k = 4; k>=0;k--)      // cái này là lay tù 4 ve 0                // doi kieu cho thu zi á mà:), cha khác gì for(int k = 0; k<=4; k++) dâu, 
		if(a[k] % 2 == 1)
			s1+= a[k];
		cout<<"Tong mang le la: "<<s1<<endl;
	int s2=s0-s1;
	cout<<"Tong mang chan la: "<<s2;
}

/* tinh cac bieu thuc:
 F1 = 1+2+...+n
F2 = 1+3+5+...+n
F3= 1 +1/2+1/3+...+1/n
F4=1+1/2 - 1/3 +1/4 -.....+n
*/
#include <iostream>
#include<stdio.h>
using namespace std;
int F1 (int n);
int F2 (int n);
int F3 (int n);
int F4 (int n);

int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	F1(n);
	F2(n);
	F3(n);
	F4(n);
}
int F1(int n){
	int sum = 0;
	for(int i = 0; i<=n; i++)
		sum +=i;
	cout<<"F1 = "<<sum<<endl;
}
int F2(int n){
	int sum = 0;
	for(int i =1; i<=n; i=i+2)
		sum+=i;
	cout<<"F2= "<<sum<<endl;
}
int F3(int n){
	float sum = 0;
	for (float i=1; i<=n; i++)
		sum+= 1/i;
	cout<<"F3= "<<sum<<endl;
}
int F4 (int n){
	float sum = 0;
	for(float i = 1; i<=n; i=i+1){
		sum += 1/i;
		for(float k = 3;k<=n;k=k+2)
			sum-=1/k;
	}
	cout<<"F4= "<<sum;	
}

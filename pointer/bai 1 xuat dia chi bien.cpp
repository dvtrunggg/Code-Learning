#include<iostream>
using namespace std;
int main(){
	int a = 7;
	//cout<<" gia tri a = "<<a<<endl;
	//cout<<" dia chi o nho cua a: "<<&a;     // dia chi se xuat ra o dang thap luc phan
	int x = 10;
	int *y;
	y = &a;             // gán con tro y bang dia chi cua a;  
//	cout<<"\n"<<y; 
	*y = x;  
	a = *y;
	cout<<&a<<endl;
	cout<<&x<<endl;
	cout<<y<<endl;   
	return 0; 
} 

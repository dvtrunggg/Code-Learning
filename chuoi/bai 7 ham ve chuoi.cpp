#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	char list[5][20];
	cout<<"Nhap cac chuoi ma ban muon: "<<endl;
	for(int i = 0; i <5;i++){
		cout<<"name"<<i<<": ";
		gets(list[i]);
	}
	for(int j = 0; j <5; j++)
		cout<<"  "<<list[j];
}

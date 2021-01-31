#include<iostream>
using namespace std;
main(){
	int *p = new int;
	if(p == NULL){
		cout<<"Loi cap phat"<<endl;
		exit(0);
	}
	*p = 100;
	cout<<"tai o nho: "<<p<<" ";
	cout<<"la gia tri"<<*p<<"\n";
	//tranh hao ton bo nho
	if(p != NULL){
		delete p;
		p = NULL;
	}
}

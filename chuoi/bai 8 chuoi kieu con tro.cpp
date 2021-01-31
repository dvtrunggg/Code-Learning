#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	char *a[5];
	for(int i = 0; i<5; i++)
		a[i] = new char[20];        // cap phát bo nho cho moi con tro
	for(int j = 0; j<5; j++)
		cout<<"a "<<j<<": ", gets(a[j]);
	
	for(int k = 0; k<5; k++)
		cout<<"   "<<a[k];
}

// tao mang ngau nhien va in ra man hinh:
#include <iostream>
#include <stdlib.h>
using namespace std;
main(){
	int a[10];                                        
	cout<<"Mang in ra ngau nhien cac con so: ";
	for(int i = 0; i< 100; i++)                         // cac gia tri di tu 1--> 100
		a[i] = rand() % 100 + 1;                           // chon random cac con so tu 1-->100
		for (int j = 0; j<10; j++)                        // chi in ra 3 so ma thoi
	cout<<" "<<a[j];
} 

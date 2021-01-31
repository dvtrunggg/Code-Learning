#include <iostream>
using namespace std;
main(){
	int array1[2][3]={1,7,3,64,25,67};                 //khai báo theo kieu mang 1 chieu
	int array2[][3]={{1,2,34},{5,6,8},{7,8,9}};        // khai bao theo kieu mang 2 chieu
	int i,j;
	cout<<"array 1 is: "<<endl;
	for( i = 0; i<2; i++){
		for(int j = 0; j<3; j++)
			cout<<"   "<<array1[i][j];
		cout<<endl;
	}
	cout<<"array 2 is: "<<endl;
	for( i = 0; i< 2; i++){
		for(int j = 0; j<3; j++)
			cout<<"   "<<array2[i][j];
		cout<<endl;
	}
}

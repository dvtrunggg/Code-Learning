//#viet ctrinh nhap xuat mang 2 chieu ( theo kieu khai bao mang 2 chieu)
#include <iostream>
#define MaxColumns 50        //* define la khai bao trc, luc sau ko can khai bao 
#define MaxRows 50          //  khai báo roi thì tai hàm main ko can int array[50][50] mà chi can int array[][] do có goi hàm trc dó roi*/
using namespace std;
void nhapmang(int array[MaxRows][MaxColumns], int &r, int &c){         //r: row; c: colomn
	cout<<"Enter your rows: ";
	cin>>r;
	cout<<"Enter your columns: ";
	cin>>c;
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			cout<<"Array["<<i<<"]["<<j<<"] = ";
			cin>>array[i][j];
		}
	}
}
void xuatmang(int array[MaxColumns][MaxRows], int r, int c){
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++)
			cout<<"  "<<array[i][j];
			cout<<endl;
	}
}
main(){
	int array[MaxRows][MaxColumns
	], r, c;
	nhapmang(array, r, c);
	xuatmang(array, r, c);
}


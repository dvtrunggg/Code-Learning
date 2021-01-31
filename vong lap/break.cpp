#include <iostream>
using namespace std;
int main()
{
	int n,password;
	cout<<"nhap so lan mat khau co the thu"<<endl;
	cin>> n;
	for(int i = 0; i< n; i++){
		cout<<"Nhap mat khau"<<endl;
		cin >> password;
		if (password == 1){                            // neu mat khau nhap dung la =1
		cout<<"mat khau dung"<<endl;                  // 
		break;}                                          
		else cout<<"mat khau sai"<<endl;
	}
	return 0;
}

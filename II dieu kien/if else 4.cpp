#include <iostream>
using namespace std;
int main ()
{
	int gio1, phut1, giay1, gio2, phut2, giay2, gio3, phut3, giay3;
	cout << "nhap thoi gian 1: "<<endl;
	cin >> gio1>> phut1 >> giay1;
	cout << "nhap thoi gian 2: "<<endl;
	cin >> gio2 >> phut2  >> giay2;
	giay3 = giay1+giay2;
	if (giay1 + giay2 >= 60){
		phut3 = 1;
		giay3 %=60;}
	phut3 += phut1 + phut2;
	if (phut3 + phut2 >=60){
		gio3 = gio3++;
		phut3 %=60;}
	gio3 += gio2 + gio1;		
	cout <<"thoi gian tong la:" <<gio3 <<" gio "<< phut3<<" phut "<<  giay3<<" giay" <<endl;
	return 0;	

}


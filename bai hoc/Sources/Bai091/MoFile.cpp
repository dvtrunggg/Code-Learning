#include<iostream>
#include<fstream>
void main()
{
	fstream myFile1;
	myFile1.open("data.dat", ios::in | ios::binary);
	bool flag1 = myFile1.fail();
	if(flag1 == true)
		cout<<"File khong ton tai."<<endl;
	else
		cout<<"Mo file thanh cong"<<endl;
	fstream myFile2;
	myFile2.open("data.txt", ios::in);
	bool flag2 = myFile2.fail();
	if(flag2 == true)
		cout<<"File khong ton tai."<<endl;
	else
		cout<<"Mo file thanh cong"<<endl;
}


/*Tinh gio*/
# include <iostream>
# include <math.h>
void main()
{
	int gio1, phut1, giay1;
	int gio2, phut2, giay2; 
	int gio3, phut3, giay3;
 	cout <<"Nhap vao gia tri gio thu nhat (hh,mm,ss): " << endl;
 	cin >> gio1 >> phut1 >> giay1;
 	cout <<"Nhap vao gia tri gio thu hai (hh,mm,ss): " << endl;
 	cin >> gio2 >> phut2 >> giay2;
 	giay3 = giay1 + giay2;
  	if (giay3 >=60)
  	{
	    giay3 %=60;
	    phut3 = 1;
  	}
  	phut3 += phut1 + phut2;
  	if (phut3 >=60)
  	{
	    phut3 %=60;
	    gio3 = 1;
  	}
  	gio3 += gio1 + gio2;
  	gio3 %= 24;
    cout <<"Tong hai gia tri gio tren = "<<gio3 << ":" <<phut3<< ":" <<giay3;
}

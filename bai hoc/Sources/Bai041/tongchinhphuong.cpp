#include <iostream.h>

int KiemTraSoChinhPhuong(int n)
{
    if ((int)sqrt(n) == sqrt(n)) /* Can cua n khi ep kieu nguyen bang voi can n */
		return 1;
    else
		return 0;
}

void main()
{
	int n = 0, tong = 0;
	cout << "Nhap vao so nguyen n(nhap 0 de thoat): ";
	cin >>n;
	do
	{
		cout <<"Nhap vao so nguyen n(nhap 0 de thoat): ";
		cin >>n;	
		if (KiemTraSoChinhPhuong(n)&& n > 0)
		{
			cout <<n<<" la so chinh phuong.\n";
		   	tong+=n;
  		}
	}
	while (n>0);
	cout <<"\n Tong cac so chinh phuong da nhap la :" << tong << endl;
}

#include <iostream.h>

int KiemTraSoChinhPhuong(int n)
{
	if ((int)sqrt(n) == sqrt(n)) 
		return 1;
  	else
		return 0;
}
int KiemTraSNT (int n)
{
	int kq = 0;
	int dem = 0;
	for (int i=1;i<=n;i++)
		if (n%i==0) dem+=1;
	if (dem==2) 
		kq = 1;
	return kq;
}
int KiemTraSoHoanHao (int x)
{
	int tong = 0;
  	for (int i=1;i<x;i++)
  		if (x%i==0) tong+=i;
	if (tong == x)  
  		return 1;
	else 
		return 0;
}
void XuatMenu()
{
	cout << "-----Danh muc cac chuc nang-----"<<endl;
	cout << "1. So nguyen to"<<endl;
	cout << "2. So hoan hao"<<endl;
	cout << "3. So chinh phuong"<<endl;
	cout << "4. Xem menu"<<endl;
	cout << "0. Thoat chuong trinh"<<endl;
}
void main()
{
	int chon;
	XuatMenu();
	do
	{
		cout << "\n Chon chuc nang: ";
		cin >>chon;
		switch (chon)
		{
			case 1: 
				int snt;
				cout << "\nNhap so nguyen: ";
				cin >>snt;
				if (KiemTraSNT(snt))
					cout <<snt<<" la so nguyen to.";
				else
				 	cout <<snt<<" khong la so nguyen to.";
				break;
			case 2: 
				int shh;
				cout << "\nNhap so nguyen: ";
				cin >>shh;
				if (KiemTraSoHoanHao(shh))
					cout <<shh<<" la so hoan hao.";
				else
				 	cout <<shh<<" khong la so hoan hao.";
				break;
			case 3: 
				int scp;
				cout << "\nNhap so nguyen: ";
				cin >>scp;
				if (KiemTraSoChinhPhuong(scp))
					cout <<scp<<" la so nguyen to.";
				else
				 	cout <<scp<<" khong la so nguyen to.";
				break;
			case 4: 
			 	XuatMenu();
				break;
		}
	}
	while (chon!=0);
	cout <<"\n Cam on ban da su dung chuong trinh!" << endl;
}

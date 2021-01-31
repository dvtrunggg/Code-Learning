#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Nhap diem cua ban: "<<endl;
	cin >> a;
	if (a < 5)
		cout << "Ban la hoc sinh kem"<<endl;
	else if (5<= a && a < 6.5)
		cout << "Ban la hoc sinh trung binh"<<endl;
	else if (6.5<= a && a <8)
		cout <<" Ban la hoc sinh kha"<<endl;
	else if (8 <= a && a < 9)
		cout <<"ban la hoc sinh gioi"<<endl;
		else
			cout << "ban la hoc sinh gioi"<<endl;
			
	return 0;
}

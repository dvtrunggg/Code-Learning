#include <iostream.h> 
int main() 
{ 
	float diemTB; 
	cout << "Nhap diem trung binh: ";  
	cin >> diemTB;
    if(diemTB>=9 && diemTB<=10)
		cout << diemTB << " : xuat sac.";
	else if(diemTB>=8 && diemTB<9)
		cout << diemTB << " : gioi.";
		else if(diemTB>=7 && diemTB<8)
			cout << diemTB << " : kha.";
			else if(diemTB>=5 && diemTB<7)
				cout << diemTB << " : trung binh.";
				else
					cout << diemTB << " : kem.";
	return 0; 
} 


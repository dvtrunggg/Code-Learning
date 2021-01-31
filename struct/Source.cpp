#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct Student {
	string ID;
	string FullName;
	float ktlt, trr, ctdl;
};
typedef struct Student st;

void InputStudent(st& sv)
{
	fflush(stdin);
//	while(getchar() != '\n')             // xóa bộ nhớ đệm
	do
	{
		cout << "Enter full name of student: ", getline(cin, sv.FullName);
		if (sv.FullName.length() > 30)
			cout << "Length of Name isn't invalid";
	} 
	while (sv.FullName.length() > 30);
	do
	{
		cout << "Enter ID of student: ", getline(cin, sv.ID);
		if (sv.ID.length() > 20)
			cout << "Length of ID is not invalid";
	} 
	while (sv.ID.length() > 20);
	do
	{
		cout << "Enter ktlt score: ", cin >> sv.ktlt;
		if (sv.ktlt < 0 || sv.ktlt >10)
			cout << "your score is not invalid";
	} while (sv.ktlt < 0 || sv.ktlt >10);
	do 
	{

		cout << "Enter trr score: ", cin >> sv.trr;
		if (sv.trr < 0 || sv.trr >10)
			cout << "your score is not invalid";
	} while (sv.trr < 0 || sv.trr >10);
	do
	{
			cout << "Enter ctdl score: ", cin >> sv.ctdl;
			if (sv.ctdl < 0 || sv.ctdl >10)
				cout << "your score is not invalid";
	} while (sv.ctdl < 0 || sv.ctdl >10);
}
void Output(st sv)
{
	cout << "\n\tName: " << sv.FullName << ", ID: " << sv.ID << ", have: trr score: " << sv.trr << " ctdl score: " << sv.ctdl << "ktlt score: " << sv.ktlt << endl;
}

//void InputList(st sv[])
//{
//	for (int i = 0; i < 100; i++)
//	{
//		InputStudent(sv[i]);
//	}
//}


typedef struct LIST{                 // struct này để thao tác danh sách ( thay vì dùng mảng)
	st* dssv[100];
	int n;             // n là số lượng sinh viên trong danh sách

}ls;
void PrintList(ls ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		cout << "Student number " << i + 1 << endl;
		Output(*ds.dssv[i]);
	}
}
void Menu(LIST& ds)
{
	int choice;
	while (true)
	{
		cout << "================Bonjour=================" << endl;
		cout << "1.Enter student's information" << endl;
		cout << "2.Print student's information" << endl;
		cout << "Press 0 to exit" << endl;
		cout << "=======================================" << endl;
		cout << "Enter your choice: ", cin >> choice;
		if (choice == 1)
		{
			st* x = new st;  // tạo 1 con trỏ x để lưu trữ thông tin 1 sinh viên.
			cout << "\tEnter student information: " << endl;
			InputStudent(*x);        // nhập thong tin sinh viên = toán tử *
			ds.dssv[ds.n] = x;				// thêm x vào mảng 1 chiều các con trỏ Student (st)
			ds.n++;
		}
		else if (choice == 2)
		{
			PrintList(ds);
		}
		else break;
	}
}
int main()
{
	ls ds;
	ds.n = 0;       // khởi tạo giá trị ban đầu: danh sách ban đầu không có sinh vien = 0
	Menu(ds);
	for (int i = 0; i < ds.n; i++)     // ko thể xóa kiểu delete [] ds.dssv dc 
	{
		delete ds.dssv[i];      // xóa từng ptu trong mảng 1 chiều con trỏ dssv
	}
	return 0;
	
	
}
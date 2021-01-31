/*
Thiết kế chương trình lưu trữ thông tin sinh viên của 1 trường đại học,
biết thông tin sinh viên gồm:
- Mã số
- Họ tên
- Năm sinh
- Điểm trung bình
1. Khai báo cấu trúc sinh viên
2. Nhập danh sách sinh viên
3. Xuất danh sách sinh viên
4. Tìm kiếm thông tin sinh viên dựa vào điểm trung bình
5. Thêm 1 sinh viên vào vị trí bất kỳ
6. Xóa 1 sinh viên có điểm trung bình dưới 5
7. Sắp xếp sinh viên tăng dần theo điểm trung bình
*/

#include"student.h"
int main()
{
	int n;
	st ds[100];
	cout << "Enter the number of students: ", cin >> n;
	cout << "Enter student list " << endl;
	InputList(ds,n);
	cout << " Here is your class" << endl;
	OutputList(ds,n);
	int x;
//	cout << "Enter student's score whose you want to seach: ", cin x
	
	//Search(ds, n, x);
	st sv;
//	cout << "Enter information of student that you wanna insert: ";
//	InputStudent(sv);
	//cout << "Enter location: ", cin >> x;
	//Insert(ds, n, x, sv);
//	Deletee(ds, n, x);
	cout << "---" << endl;
	//DeleteStudent(ds, n);
	Sort(ds, n);
	OutputList(ds, n);
	system("pause");
	return 0;
}

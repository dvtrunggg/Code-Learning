#include "node.h"
int main()
{
	LIST l;
	CreateList(l); // kh?i t?o danh sách liên k?t don


	int n;
	cout << "\nNhap so luong node can them: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cout << "\nNhap gia tri so nguyen: ";
		cin >> x;
		NODE* p = CreateNode(x); // kh?i t?o 1 cái node s? nguyên
	//	AddTail(p, l); // thêm node p vào d?u danh sách liên k?t don 
	}
	cout << "\n\n\t DANH SACH LIEN KET DON\n";
	PrintList(l);

	cout << "\n\n\t GIA TRI LON NHAT: " << MAX(l);
	system("pause");
	return 0;
}
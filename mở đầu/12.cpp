int main()
{

 int x;
 cout << "Nhap cac so nguyen (cho den 0 thi dung): \n";
 cin >> x;
 while (x != 0)
 {
 insert(head, x);
 cin >> x;
 }
 cout << "Danh sach da nhap theo thu tu tang dan la: ";
 print(head);
}

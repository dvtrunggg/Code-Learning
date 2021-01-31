#include"student.h"
void InputStudent(st& sv)
{
	
	//while (getchar() != '\n')             // xóa bộ nhớ đệm
	//cout << "\tEnter your full name";
	fflush(stdin);
	getline(cin, sv.FullName);
	cout << "\tEnter your ID: ", getline(cin, sv.ID);
	//cout << "Enter your year of birth: ", cin >> sv.YearOfBirth;
	cout << "Enter your score: ", cin >> sv.AverageScore;
}
void OutputStudent(st sv)
{
	cout << "\n\tName: " << sv.FullName << ", ID: " << sv.ID << ", score " <<sv.AverageScore<< endl;

}
void InputList(st ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		InputStudent(ds[i]);
	}
}
void OutputList(st ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " Student number " << i + 1 << " :" << endl;
		OutputStudent(ds[i]);
	}
}
void Search(st ds[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (ds[i].AverageScore == x)
			OutputStudent(ds[i]);
	}
}
void Insert(st ds[], int& n, int l, st sv)
{
	for(int i = n-1; i>= l; i--)
	{
		ds[i + 1] = ds[i];
	}
	ds[l] = sv;
	n++;

}
void Deletee(st ds[], int& n, int l)
{
	for (int i = l +1 ; i < n; i++)
	{
		ds[i - 1] = ds[i];
	}
	n--;
}
void DeleteStudent(st ds[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (ds[i].AverageScore < 5) Deletee(ds, n, i);
		i--;        // xoá 2 index kề nhau thỏa dk sẽ xảy ra hiện tượng bỏ sót nên cần phải như thế 
		//vd ds[3] và ds[4] thỏa dk: vòng lặp tới ds[3]: delete, i--; sau đó xét tiếp ds[3 new] ( là ds[4 old]) delete, i--;....
	}
}
void Swap(st& a, st& b)
{
	st temp = a;
	a = b;
	b = temp;
}
void Sort(st ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i+1; j < n; j++)
			if (ds[i].AverageScore > ds[j].AverageScore) Swap(ds[i], ds[j]);
}
